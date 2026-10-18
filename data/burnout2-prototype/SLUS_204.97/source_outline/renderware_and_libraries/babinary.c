// babinary.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x0014AF50-0x0014B0C4 (372 bytes), lines 155-274
static int ChunkIsComplex(RwChunkHeaderInfo *chunkHeaderInfo)
{
    // param RwChunkHeaderInfo *chunkHeaderInfo  (in $v0)
    {   // 0x0014AF50-0x0014B0C4
        int result;  // in $v0
    }
}

// 0x0014B0D0-0x0014B1EC (284 bytes), lines 291-350
int _rwStreamReadChunkHeader(RwStream *stream, unsigned int *type, unsigned int *length, unsigned int *version, unsigned int *buildNum)
{
    // param RwStream *stream  (in $v0)
    // param unsigned int *type  (in $s3)
    // param unsigned int *length  (in $s2)
    // param unsigned int *version  (in $s1)
    // param unsigned int *buildNum  (in $s0)
    {   // 0x0014B0D0-0x0014B1EC
        RwError _rwErrorCode;  // $sp+104
        __rwMark mark;  // $sp+88
        int status;  // in $v0
    }
}

// 0x0014B1F0-0x0014B264 (116 bytes), lines 356-380
RwStream *_rwStreamWriteVersionedChunkHeader(RwStream *stream, int type, int size, unsigned int version, unsigned int buildNum)
{
    // param RwStream *stream  (in $s0)
    // param int type  (in $v0)
    // param int size  (in $v0)
    // param unsigned int version  (in $v0)
    // param unsigned int buildNum  (in $v0)
    {   // 0x0014B1F0-0x0014B264
        RwStream *streamRet;  // in $v0
        __rwMark mark;  // $sp+32
    }
}

// 0x0014B270-0x0014B3B8 (328 bytes), lines 426-479
int RwStreamFindChunk(RwStream *stream, unsigned int type, unsigned int *lengthOut, unsigned int *versionOut)
{
    // param RwStream *stream  (in $s3)
    // param unsigned int type  (in $s2)
    // param unsigned int *lengthOut  (in $s1)
    // param unsigned int *versionOut  (in $s0)
    {   // 0x0014B270-0x0014B3B8
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        unsigned int readVersion;  // $sp+108
        unsigned int readLength;  // $sp+104
        unsigned int readType;  // $sp+100
    }
}

// 0x0014B3C0-0x0014B3C8 (8 bytes), lines 529-529
void *RwMemLittleEndian32(void *mem)
{
    // param void *mem  (in $v0)
    {   // 0x0014B3C0-0x0014B3C8
    }
}

// 0x0014B3D0-0x0014B3D8 (8 bytes), lines 628-628
void *RwMemNative32(void *mem)
{
    // param void *mem  (in $v0)
    {   // 0x0014B3D0-0x0014B3D8
    }
}

// 0x0014B3E0-0x0014B418 (56 bytes), lines 713-720
void *RwMemRealToFloat32(void *mem, unsigned int size)
{
    // param void *mem  (in $v0)
    // param unsigned int size  (in $v0)
    {   // 0x0014B3E0-0x0014B418
        unsigned int *memInt;  // in $v0
    }
}

// 0x0014B420-0x0014B458 (56 bytes), lines 753-760
void *RwMemFloat32ToReal(void *mem, unsigned int size)
{
    // param void *mem  (in $v0)
    // param unsigned int size  (in $v0)
    {   // 0x0014B420-0x0014B458
        unsigned int *memInt;  // in $v0
    }
}

// 0x0014B460-0x0014B488 (40 bytes), lines 850-878
RwStream *RwStreamWriteInt32(RwStream *stream, int *ints, unsigned int numBytes)
{
    // param RwStream *stream  (in $s0)
    // param int *ints  (in $v0)
    // param unsigned int numBytes  (in $v0)
    {   // 0x0014B460-0x0014B488
    }
}

// 0x0014B490-0x0014B52C (156 bytes), lines 1005-1021
RwStream *RwStreamReadReal(RwStream *stream, float *reals, unsigned int numBytes)
{
    // param RwStream *stream  (in $s2)
    // param float *reals  (in $s1)
    // param unsigned int numBytes  (in $s0)
    {   // 0x0014B490-0x0014B52C
        RwError _rwErrorCode;  // $sp+72
    }
}

// 0x0014B530-0x0014B584 (84 bytes), lines 1049-1064
RwStream *RwStreamReadInt32(RwStream *stream, int *ints, unsigned int numBytes)
{
    // param RwStream *stream  (in $s0)
    // param int *ints  (in $v0)
    // param unsigned int numBytes  (in $v0)
    {   // 0x0014B530-0x0014B584
        RwError _rwErrorCode;  // $sp+40
    }
}

// 0x0014B590-0x0014B610 (128 bytes), lines 1082-1102
RwStream *RwStreamReadChunkHeaderInfo(RwStream *stream, RwChunkHeaderInfo *chunkHeaderInfo)
{
    // param RwStream *stream  (in $s1)
    // param RwChunkHeaderInfo *chunkHeaderInfo  (in $s0)
    {   // 0x0014B590-0x0014B610
        unsigned int readBuildNum;  // $sp+60
        unsigned int readVersion;  // $sp+56
        unsigned int readLength;  // $sp+52
        unsigned int readType;  // $sp+48
    }
}

