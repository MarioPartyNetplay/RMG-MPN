/*
 * Texture Filtering
 * Version:  1.0
 *
 * Copyright (C) 2007  Hiroshi Morii   All Rights Reserved.
 * Email koolsmoky(at)users.sourceforge.net
 * Web   http://www.3dfxzone.it/koolsmoky
 *
 * this is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * this is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Make; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __TXQUANTIZE_H__
#define __TXQUANTIZE_H__

#include "TxInternal.h"
#include "TxUtil.h"

class TxQuantize
{
private:
  int _numcore;

  /* fast optimized... well, sort of. */
  void ARGB1555_ARGB8888(uint32* src, uint32* dst, int width, int height);
  void ARGB4444_ARGB8888(uint32* src, uint32* dst, int width, int height);
  void RGB565_ARGB8888(uint32* src, uint32* dst, int width, int height);
  void A8_ARGB8888(uint32* src, uint32* dst, int width, int height);
  void AI44_ARGB8888(uint32* src, uint32* dst, int width, int height);
  void AI88_ARGB8888(uint32* src, uint32* dst, int width, int height);

  void ARGB8888_ARGB1555(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_ARGB4444(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_RGB565(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_A8(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_AI44(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_AI88(uint32* src, uint32* dst, int width, int height);

  /* quality */
  void ARGB8888_RGB565_ErrD(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_ARGB1555_ErrD(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_ARGB4444_ErrD(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_AI44_ErrD(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_AI88_Slow(uint32* src, uint32* dst, int width, int height);
  void ARGB8888_I8_Slow(uint32* src, uint32* dst, int width, int height);

public:
  TxQuantize();
  ~TxQuantize();

  /* others */
  void P8_16BPP(uint32* src, uint32* dst, int width, int height, uint32* palette);

  boolean quantize(uint8* src, uint8* dest, int width, int height, ColorFormat srcformat, ColorFormat destformat, boolean fastQuantizer = 1);
};

#endif /* __TXQUANTIZE_H__ */
