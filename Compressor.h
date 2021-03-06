#pragma once
#include "stdafx.h"
#include <vector>
#include "include/zlib.h"
#include "include/zlib.h"
#include "LZMA.h"

//	the compresion wrapper

class CCompressor
{
public:
	CCompressor(void);
	~CCompressor(void);
	bool Reset();
	bool DecompressAndCopyToBuffer(byte* inbuff,int inlength,std::vector<byte> *out_vect);

	CLZMA	lzmacoder;

private:
	z_stream _stream;
};

