#ifndef WriteToRDRAM_H
#define WriteToRDRAM_H


#include "../Types.h"

template <typename T, T testValue>
bool valueTester(T _c)
{
	return _c != testValue;
}

template <typename T>
bool dummyTester(T _c)
{
	return true;
}

template <typename TSrc, typename TDst>
void writeToRdram(TSrc* _src, TDst* _dst,
	TDst(*converter)(TSrc _c, u32 x, u32 y),
	bool(*tester)(TSrc _c),
	u32 _xor,
	u32 _width,
	u32 _height,
	u32 _numPixels,
	u32 _startAddress,
	u32 _bufferAddress,
	u32 _bufferSize)
{
	u32 chunkStart = ((_startAddress - _bufferAddress) >> (_bufferSize - 1)) % _width;
	if (chunkStart % 2 != 0) {
		--chunkStart;
		--_dst;
		++_numPixels;
	}

	u32 numStored = 0;
	u32 y = 0;
	TSrc c;
	if (chunkStart > 0) {
		for (u32 x = chunkStart; x < _width; ++x) {
			c = _src[x];
			if (tester(c))
				_dst[numStored ^ _xor] = converter(c, x, y);
			++numStored;
		}
		++y;
		_dst += numStored;
	}

	u32 dsty = 0;
	for (; y < _height; ++y) {
		for (u32 x = 0; x < _width && numStored < _numPixels; ++x) {
			c = _src[x + y *_width];
			if (tester(c))
				_dst[(x + dsty*_width) ^ _xor] = converter(c, x, y);
			++numStored;
		}
		++dsty;
	}
}

#endif // WriteToRDRAM_H
