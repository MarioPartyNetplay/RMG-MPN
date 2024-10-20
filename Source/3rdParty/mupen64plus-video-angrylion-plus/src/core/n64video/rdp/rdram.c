#ifdef N64VIDEO_C

//
// rdram.c: RDRAM memory interface
//

#define RDRAM_MASK 0x00ffffff

#define HB_CLEAN 4

// macros used to interface with AL's code
#define RREADADDR8(rdst, in) {(rdst) = rdram_read_idx8((in));}
#define RREADIDX16(rdst, in) {(rdst) = rdram_read_idx16((in));}
#define RREADIDX32(rdst, in) {(rdst) = rdram_read_idx32((in));}

#define RWRITEADDR8(in, val) rdram_write_idx8((in), (val))
#define RWRITEIDX16(in, val) rdram_write_idx16((in), (val))
#define RWRITEIDX32(in, val) rdram_write_idx32((in), (val))

#define PAIRREAD16(rdst, hdst, in) rdram_read_pair16(&rdst, &hdst, (in))

// pointer indexing limits for aliasing RDRAM reads and writes
static uint32_t idxlim8;
static uint32_t idxlim16;
static uint32_t idxlim32;

static uint32_t* rdram32;
static uint16_t* rdram16;
static uint8_t* rdram8;
static uint8_t rdram_hidden[RDRAM_MAX_SIZE / 2];
static uint8_t rdram_hidden_old[8];

static void rdram_init(void)
{
    idxlim8 = config.gfx.rdram_size - 1;
    idxlim16 = (idxlim8 >> 1) & 0xffffffu;
    idxlim32 = (idxlim8 >> 2) & 0xffffffu;

    rdram32 = (uint32_t*)config.gfx.rdram;
    rdram16 = (uint16_t*)config.gfx.rdram;
    rdram8 = config.gfx.rdram;

    memset(rdram_hidden, HB_CLEAN, sizeof(rdram_hidden));
    memset(&rdram_hidden_old, 0, sizeof(rdram_hidden_old));
}

static STRICTINLINE bool rdram_valid_idx8(uint32_t in)
{
    return in <= idxlim8;
}

static STRICTINLINE bool rdram_valid_idx16(uint32_t in)
{
    return in <= idxlim16;
}

static STRICTINLINE bool rdram_valid_idx32(uint32_t in)
{
    return in <= idxlim32;
}

static STRICTINLINE uint8_t rdram_read_idx8(uint32_t in)
{
    in &= RDRAM_MASK;
    return rdram_valid_idx8(in) ? rdram8[in ^ BYTE_ADDR_XOR] : 0;
}

static STRICTINLINE uint8_t rdram_read_idx8_fast(uint32_t in)
{
    return rdram8[in ^ BYTE_ADDR_XOR];
}

static STRICTINLINE uint16_t rdram_read_idx16(uint32_t in)
{
    in &= RDRAM_MASK >> 1;
    return rdram_valid_idx16(in) ? rdram16[in ^ WORD_ADDR_XOR] : 0;
}

static STRICTINLINE uint16_t rdram_read_idx16_fast(uint32_t in)
{
    return rdram16[in ^ WORD_ADDR_XOR];
}

static STRICTINLINE uint32_t rdram_read_idx32(uint32_t in)
{
    in &= RDRAM_MASK >> 2;
    return rdram_valid_idx32(in) ? rdram32[in] : 0;
}

static STRICTINLINE uint32_t rdram_read_idx32_fast(uint32_t in)
{
    return rdram32[in];
}

static STRICTINLINE void rdram_write_idx8(uint32_t in, uint8_t val)
{
    in &= RDRAM_MASK;
    if (rdram_valid_idx8(in)) {
        rdram8[in ^ BYTE_ADDR_XOR] = val;
    }
}

static STRICTINLINE void rdram_write_idx16(uint32_t in, uint16_t val)
{
    in &= RDRAM_MASK >> 1;
    if (rdram_valid_idx16(in)) {
        rdram16[in ^ WORD_ADDR_XOR] = val;
    }
}

static STRICTINLINE void rdram_write_idx32(uint32_t in, uint32_t val)
{
    in &= RDRAM_MASK >> 2;
    if (rdram_valid_idx32(in)) {
        rdram32[in] = val;
    }
}

static STRICTINLINE void rdram_read_pair16(uint16_t* rdst, uint8_t* hdst, uint32_t in)
{
    in &= RDRAM_MASK >> 1;
    if (rdram_valid_idx16(in)) {
        *rdst = rdram16[in ^ WORD_ADDR_XOR];
        *hdst = rdram_hidden[in];
        if (*hdst & HB_CLEAN) {
            *hdst = (*rdst & 1) ? 3 : 0;
        }
    } else {
        *rdst = *hdst = 0;
    }
}

static STRICTINLINE void rdram_write_pair8(uint32_t in, uint8_t rval, int flip, int* delayedhbwidx)
{
    in &= RDRAM_MASK;
    if (!flip) {
        if (rdram_valid_idx8(in)) {
            int hdst8 = rdram_hidden[in >> 1];

            if (!(in & 1)) {
                if (hdst8 & HB_CLEAN) {
                    rdram_hidden[in >> 1] = (rdram16[(in >> 1) ^ WORD_ADDR_XOR] & 1) != 0;
                } else {
                    rdram_hidden[in >> 1] &= ~2;
                }

                rdram_hidden[in >> 1] |= rdram_hidden_old[(in >> 1) & 7] & 2;

            } else {
                if (hdst8 & HB_CLEAN) {
                    rdram_hidden[in >> 1] = (rdram16[(in >> 1) ^ WORD_ADDR_XOR] & 1) ? 2 : 0;
                } else {
                    rdram_hidden[in >> 1] &= ~1;
                }

                rdram_hidden[in >> 1] |= rval & 1;
            }
            rdram8[in ^ BYTE_ADDR_XOR] = rval;
        }

        if (in & 1) {
            rdram_hidden_old[(in >> 1) & 7] = (rval & 1) ? 3 : 0;

        }
    } else {
        if (*delayedhbwidx >= 0 && (uint32_t)*delayedhbwidx < in) {
            if (rdram_valid_idx8((uint32_t)*delayedhbwidx)) {

                int oldhbidx = *delayedhbwidx >> 1;

                rdram_hidden[oldhbidx] &= ~2;
                rdram_hidden[oldhbidx] |= rdram_hidden_old[oldhbidx & 7] & 2;
            }

            *delayedhbwidx = -1;
        }

        if (in & 1) {
            if (rdram_valid_idx8(in)) {
                if (*delayedhbwidx >= 0) {
                    rdram_hidden[in >> 1] = (rval & 1) ? 3 : 0;
                } else {
                    int hdst8 = rdram_hidden[in >> 1];
                    if (hdst8 & HB_CLEAN) {
                        rdram_hidden[in >> 1] = (rdram16[(in >> 1) ^ WORD_ADDR_XOR] & 1) ? 2 : 0;
                    } else {
                        rdram_hidden[in >> 1] &= ~1;
                    }

                    rdram_hidden[in >> 1] |= rval & 1;
                }

                rdram8[in ^ BYTE_ADDR_XOR] = rval;
            }

            rdram_hidden_old[(in >> 1) & 7] = (rval & 1) ? 3 : 0;
            *delayedhbwidx = -1;
        } else {
            if (rdram_valid_idx8(in)) {
                int hdst8 = rdram_hidden[in >> 1];
                if (hdst8 & HB_CLEAN) {
                    rdram_hidden[in >> 1] = (rdram16[(in >> 1) ^ WORD_ADDR_XOR] & 1) ? 3 : 0;
                }

                rdram8[in ^ BYTE_ADDR_XOR] = rval;
            }

            *delayedhbwidx = in + 1;
        }
    }
}

static STRICTINLINE void rdram_write_pair16(uint32_t in, uint16_t rval, uint8_t hval, int iscolor)
{
    in &= RDRAM_MASK >> 1;
    if (rdram_valid_idx16(in)) {
        rdram16[in ^ WORD_ADDR_XOR] = rval;
        rdram_hidden[in] = hval;
    }

    if (iscolor) {
        rdram_hidden_old[in & 7] = hval;
    }
}

static STRICTINLINE void rdram_write_pair32(uint32_t in, uint32_t rval, uint8_t hval0, uint8_t hval1)
{
    in &= RDRAM_MASK >> 2;
    if (rdram_valid_idx32(in)) {
        rdram32[in] = rval;
        rdram_hidden[in << 1] = hval0;
        rdram_hidden[(in << 1) + 1] = hval1;
    }

    rdram_hidden_old[(in << 1) & 7] = hval0;
    rdram_hidden_old[((in << 1) + 1) & 7] = hval1;
}

static void rdram_complete_delayed_hbwrites(int delayedhbwidx)
{
    if (rdram_valid_idx8((uint32_t)delayedhbwidx)) {
        int oldhbidx = delayedhbwidx >> 1;

        rdram_hidden[oldhbidx] &= ~2;
        rdram_hidden[oldhbidx] |= rdram_hidden_old[oldhbidx & 7] & 2;
    }
}

#endif // N64VIDEO_C
