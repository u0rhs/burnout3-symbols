// C:\dev\rwaudio\source\core\src\rwawaveconv.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaWaveDefFormat _rwaxadpcmm;
RwaWaveDefFormat _rwaxadpcms;
RwaWaveDefFormat _rwagadpcmm;
RwaWaveDefFormat _rwagadpcms;
static float _rwaVAGEncodeCoeff[5][2];  // 0x002BB5C0
static int _rwaVAGDecodeCoeff[5][2];  // 0x002BB5F0
static RwaWaveConversion _supportedFormats[34];  // 0x002BB620
RwaWaveDefFormat _rwapcm8um;  // 0x002D9F10
RwaWaveDefFormat _rwapcm8sm;  // 0x002D9F30
RwaWaveDefFormat _rwapcm8us;  // 0x002D9F50
RwaWaveDefFormat _rwapcm8ss;  // 0x002D9F70
RwaWaveDefFormat _rwapcm16um;  // 0x002D9F90
RwaWaveDefFormat _rwapcm16sm;  // 0x002D9FB0
RwaWaveDefFormat _rwapcm16us;  // 0x002D9FD0
RwaWaveDefFormat _rwapcm16ss;  // 0x002D9FF0
RwaWaveDefFormat _rwapcmfm;  // 0x002DA010
RwaWaveDefFormat _rwavagm;  // 0x002DA030
RwaWaveDefFormat _rwavags;  // 0x002DA050
RwaWaveDefFormat _rwaac3;  // 0x002DA070
RwaUUID rwaWAVEFORMAT_VAG;  // 0x002DA0B0
RwaUUID rwaWAVEFORMAT_PCM;  // 0x002DA0C0

// ---- functions ----

// 0x002717A0-0x00271878 (216 bytes), lines 2215-2292
void _RwaWaveConvVAGDecode(unsigned char *source, short *dest, short numframes)
{
    // param unsigned char *source  (in $v0)
    // param short *dest  (in $v0)
    // param short numframes  (in $v0)
    {   // 0x002717A0-0x00271878
        int coef2;  // in $t3
        int coef1;  // in $t2
        int coefindex;  // in $t2
        int out;  // in $v0
        int in;  // in $t4
        int shift;  // in $t1
        int count;  // in $t0
        int sample2;  // in $v0
        int sample1;  // in $v0
        int s1;  // in $v0
        int s2;  // in $v0
    }
}

// 0x00271880-0x002719E4 (356 bytes), lines 2155-2194
static int _RwaWaveConvVAGEncode(short *in, int inlen, unsigned char *out, signed char numchannels, signed char channel, int lastByte)
{
    // param short *in  (in $s5)
    // param int inlen  (in $v0)
    // param unsigned char *out  (in $s4)
    // param signed char numchannels  (in $s3)
    // param signed char channel  (in $s2)
    // param int lastByte  (in $s6)
    {   // 0x00271880-0x002719E4
        int i;  // in $v0
        int insize;  // in $a3
        short src[28];  // $sp+160
        float diff2;  // $sp+236
        float diff1;  // $sp+232
        int outlenbytes;  // in $s1
        int sample2;  // $sp+228
        int sample1;  // $sp+224
        int lastsample;  // in $s7
        int sample;  // in $s0
        unsigned char vagblock[16];  // $sp+144
    }
}

// 0x002719F0-0x00271D90 (928 bytes), lines 2009-2126
static void _RwaWaveConvVAGEncodeBlock(short *psrc, unsigned char *pdst, int *s1, int *s2, float *d1, float *d2)
{
    // param short *psrc  (in $v0)
    // param unsigned char *pdst  (in $s0)
    // param int *s1  (in $fp)
    // param int *s2  ($sp+188)
    // param float *d1  (in $s6)
    // param float *d2  ($sp+184)
    {   // 0x002719F0-0x00271D90
        short src[28];  // $sp+784
        int tempint;  // in $a0
        int dstq;  // in $a2
        int j;  // in $s3
        int i;  // in $t2
        int shift;  // in $s1
        int filter;  // in $s2
        int smp2;  // in $v1
        int smp1;  // in $s1
        float dstarr[5][28];  // $sp+224
        float maxerror[5];  // $sp+192
        float minerror;  // optimised away
        float sample;  // $sp+848
        float tempfloat;  // $sp+848
        float output;  // optimised away
    }
}

// 0x00271D90-0x002720A8 (792 bytes), lines 1825-1983
static unsigned int _RwaWaveConvVAG(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, RwaWaveFormat *targetFormat, void *targetBuf, unsigned int *targetOffset)
{
    // param RwaWaveFormat *sourceFormat  (in $s5)
    // param void *sourceBuf  (in $fp)
    // param unsigned int sourceOffset  (in $s7)
    // param RwaWaveFormat *targetFormat  ($sp+184)
    // param void *targetBuf  (in $s4)
    // param unsigned int *targetOffset  (in $s3)
    {   // 0x00271D90-0x002720A8
        unsigned int dataLeft;  // in $s7
        unsigned int dataLeft;  // in $a2
        unsigned char *destBuf;  // in $a1
        unsigned char *srcBuf;  // in $a0
        unsigned int channel;  // in $v1
        void *source;  // in $s1
        unsigned int vagChannelLen;  // in $a0
        unsigned int channelLen;  // in $s0
        unsigned int localTargetOffset;  // $sp+188
        unsigned int targetLength;  // in $s6
    }
}

// 0x002720B0-0x002723EC (828 bytes), lines 1717-1791
static unsigned int _RwaWaveConvPCM(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, RwaWaveFormat *targetFormat, void *targetBuf, unsigned int *targetOffset)
{
    // param RwaWaveFormat *sourceFormat  (in $a0)
    // param void *sourceBuf  (in $s5)
    // param unsigned int sourceOffset  (in $s6)
    // param RwaWaveFormat *targetFormat  (in $s4)
    // param void *targetBuf  (in $s3)
    // param unsigned int *targetOffset  (in $s2)
    {   // 0x002720B0-0x002723EC
        RwaWaveFormat tempFormat;  // $sp+192
        void *finalTargetBuf;  // in $fp
        void *tempBuf;  // in $s1
        unsigned int localTargetOffset;  // $sp+220
        unsigned int targetLength;  // in $s0
        RwaWaveFormat srcFormat;  // $sp+160
    }
}

// 0x002723F0-0x00272544 (340 bytes), lines 1628-1689
static unsigned int _RwaWaveConvPCMFloat(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, void *targetBuf, unsigned int *targetOffset)
{
    // param RwaWaveFormat *sourceFormat  (in $s4)
    // param void *sourceBuf  (in $s3)
    // param unsigned int sourceOffset  (in $s2)
    // param void *targetBuf  (in $s1)
    // param unsigned int *targetOffset  (in $s0)
    {   // 0x002723F0-0x00272544
        float *floatBuf;  // in $a2
        short *pcmBuf;  // in $a1
        float *floatBuf;  // in $t0
        short *pcmBuf;  // in $a3
        unsigned int i;  // in $a2
        unsigned int sampleLength;  // in $a1
        unsigned int targetLength;  // in $v0
        unsigned int localTargetOffset;  // $sp+108
    }
}

// 0x00272550-0x00272F30 (2528 bytes), lines 1462-1601
static unsigned int _RwaWaveConvBitDepthPCM(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, RwaWaveFormat *targetFormat, void *targetBuf, unsigned int *targetOffset)
{
    // param RwaWaveFormat *sourceFormat  (in $s4)
    // param void *sourceBuf  (in $s3)
    // param unsigned int sourceOffset  (in $s6)
    // param RwaWaveFormat *targetFormat  (in $s2)
    // param void *targetBuf  (in $s1)
    // param unsigned int *targetOffset  (in $s0)
    {   // 0x00272550-0x00272F30
        short *targetData;  // in $v0
        unsigned int i;  // in $a1
        unsigned short *sourceData;  // in $v0
        signed char *targetData;  // in $v0
        unsigned int i;  // in $a1
        unsigned char *sourceData;  // in $v0
        unsigned short *targetData;  // in $v0
        unsigned int i;  // in $s0
        short *sourceData;  // in $v0
        unsigned char *targetData;  // in $v0
        unsigned int i;  // in $s0
        signed char *sourceData;  // in $v0
        signed char *targetData;  // in $v0
        unsigned int i;  // in $a0
        short *sourceData;  // in $v0
        unsigned char *targetData;  // in $v0
        unsigned int i;  // in $s0
        short *sourceData;  // in $v0
        signed char *targetData;  // in $v0
        unsigned int i;  // in $a0
        unsigned short *sourceData;  // in $v0
        unsigned char *targetData;  // in $v0
        unsigned int i;  // in $s0
        unsigned short *sourceData;  // in $v0
        short *targetData;  // in $v0
        unsigned int i;  // in $a0
        signed char *sourceData;  // in $v0
        unsigned short *targetData;  // in $v0
        unsigned int i;  // in $s2
        signed char *sourceData;  // in $v0
        short *targetData;  // in $v0
        unsigned int i;  // in $a0
        unsigned char *sourceData;  // in $v0
        unsigned short *targetData;  // in $v0
        unsigned int i;  // in $s2
        unsigned char *sourceData;  // in $v0
        unsigned int localTargetOffset;  // $sp+172
        unsigned int targetLength;  // in $s4
        unsigned int sampleLength;  // in $s0
    }
}

// 0x00272F30-0x0027381C (2284 bytes), lines 1262-1435
static unsigned int _RwaWaveConvResamplePCM(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, RwaWaveFormat *targetFormat, void *targetBuf, unsigned int *targetOffset)
{
    // param RwaWaveFormat *sourceFormat  (in $s5)
    // param void *sourceBuf  (in $s4)
    // param unsigned int sourceOffset  (in $s1)
    // param RwaWaveFormat *targetFormat  (in $s3)
    // param void *targetBuf  (in $s2)
    // param unsigned int *targetOffset  (in $s7)
    {   // 0x00272F30-0x0027381C
        unsigned int targetLengthSamples;  // $sp+176
        float delayBuf[2][6];  // $sp+224
        float sampleOffset;  // optimised away
        float scale;  // optimised away
        float k;  // optimised away
        float destSample;  // $sp+288
        float srcSample;  // $sp+288
        unsigned int l;  // in $s7
        unsigned int ch;  // in $t0
        unsigned int j;  // in $v1
        unsigned int i;  // in $s0
        RwaPCMType pcmType;  // in $s3
        unsigned int localTargetOffset;  // $sp+284
    }
}

// 0x00273820-0x00273F28 (1800 bytes), lines 1149-1234
static unsigned int _RwaWaveConvChannelPCM(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, RwaWaveFormat *targetFormat, void *targetBuf, unsigned int *targetOffset)
{
    // param RwaWaveFormat *sourceFormat  (in $s5)
    // param void *sourceBuf  (in $s4)
    // param unsigned int sourceOffset  (in $s0)
    // param RwaWaveFormat *targetFormat  (in $s3)
    // param void *targetBuf  (in $s2)
    // param unsigned int *targetOffset  (in $s7)
    {   // 0x00273820-0x00273F28
        unsigned int j;  // in $a2
        unsigned int i;  // in $a1
        int tempSamp;  // in $v1
        short *destBuf;  // in $v0
        short *srcBuf;  // in $v0
        unsigned int j;  // in $a3
        unsigned int i;  // in $a2
        unsigned int tempSamp;  // in $a0
        unsigned short *destBuf;  // in $v0
        unsigned short *srcBuf;  // in $v0
        unsigned int j;  // in $a2
        unsigned int i;  // in $a1
        short tempSamp;  // in $v1
        signed char *destBuf;  // in $v0
        signed char *srcBuf;  // in $v0
        unsigned int j;  // in $a3
        unsigned int i;  // in $a2
        unsigned short tempSamp;  // in $a0
        unsigned char *destBuf;  // in $v0
        unsigned char *srcBuf;  // in $v0
        unsigned int j;  // in $a3
        unsigned int i;  // in $a2
        short *tarBuf;  // in $v0
        short *srcBuf;  // in $v0
        unsigned int j;  // in $a1
        unsigned int i;  // in $a0
        signed char *tarBuf;  // in $v0
        signed char *srcBuf;  // in $v0
        unsigned int localTargetOffset;  // $sp+188
        unsigned int sourceLength;  // $sp+160
        unsigned int srcSampleLength;  // in $v0
    }
}

// 0x00273F30-0x00274260 (816 bytes), lines 774-912
unsigned int _rwaWaveConv(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, RwaWaveFormat *targetFormat, void *targetBuf)
{
    // param RwaWaveFormat *sourceFormat  (in $s0)
    // param void *sourceBuf  (in $s5)
    // param unsigned int sourceOffset  ($sp+192)
    // param RwaWaveFormat *targetFormat  (in $s4)
    // param void *targetBuf  ($sp+188)
    {   // 0x00273F30-0x00274260
        unsigned int targetLength;  // in $s6
        unsigned int targetOffset;  // $sp+1068
        RwaWaveFormat target;  // $sp+1040
        RwaWaveFormat source;  // $sp+1008
        unsigned int swapSize;  // in $v1
        void *swapBuf;  // in $v0
        unsigned int tempDestBufSize;  // in $s3
        void *tempDestBuf;  // in $s2
        unsigned int tempSrcBufSize;  // in $fp
        void *tempSrcBuf;  // in $s1
        RwaWaveConversion *tempPath[100];  // $sp+608
        unsigned int targetLength;  // in $s0
        unsigned int i;  // in $s0
        unsigned int pathDepth;  // $sp+184
        RwaWaveConversion *path[100];  // $sp+208
    }
}

// 0x00274260-0x0027426C (12 bytes), lines 748-748
unsigned int _rwaWaveConvGetTargetSize(RwaWaveFormat *sourceFormat, void *sourceBuf, RwaWaveFormat *targetFormat)
{
    // param RwaWaveFormat *sourceFormat  (in $v0)
    // param void *sourceBuf  (in $v0)
    // param RwaWaveFormat *targetFormat  (in $v0)
    {   // 0x00274260-0x0027426C
    }
}

// 0x00274270-0x0027429C (44 bytes), lines 711-721
unsigned int _rwaWaveConvGetTargetOffset(RwaWaveFormat *sourceFormat, void *sourceBuf, unsigned int sourceOffset, RwaWaveFormat *targetFormat)
{
    // param RwaWaveFormat *sourceFormat  (in $v0)
    // param void *sourceBuf  (in $v0)
    // param unsigned int sourceOffset  (in $v0)
    // param RwaWaveFormat *targetFormat  (in $v0)
    {   // 0x00274270-0x0027429C
        unsigned int targetOffset;  // $sp+28
    }
}

// 0x002742A0-0x0027449C (508 bytes), lines 614-689
static unsigned int _RwaWaveConvGetOffsetLength(RwaWaveFormat *sourceFormat, void *sourceBuf, RwaWaveFormat *targetFormat, unsigned int sourceOffset, unsigned int *targetOffset)
{
    // param RwaWaveFormat *sourceFormat  (in $s5)
    // param void *sourceBuf  (in $fp)
    // param RwaWaveFormat *targetFormat  (in $s4)
    // param unsigned int sourceOffset  (in $s3)
    // param unsigned int *targetOffset  (in $s2)
    {   // 0x002742A0-0x0027449C
        RwaWaveFormat target;  // $sp+1008
        RwaWaveFormat source;  // $sp+976
        RwaWaveConversion *tempPath[100];  // $sp+576
        unsigned int targetLength;  // in $v0
        unsigned int i;  // in $s1
        unsigned int pathDepth;  // in $s0
        unsigned int curTargetOffset;  // $sp+1036
        RwaWaveConversion *path[100];  // $sp+176
    }
}

// 0x002744A0-0x0027466C (460 bytes), lines 416-549
static unsigned int _RwaWaveConvFindPath(RwaWaveDefFormat *source, unsigned int sourceRate, RwaWaveDefFormat *target, unsigned int targetRate, RwaWaveConversion **path, RwaWaveConversion **tempPath, unsigned int arraySize, unsigned int pathDepth, unsigned int minDepth)
{
    // param RwaWaveDefFormat *source  (in $fp)
    // param unsigned int sourceRate  (in $s5)
    // param RwaWaveDefFormat *target  (in $s6)
    // param unsigned int targetRate  (in $s4)
    // param RwaWaveConversion **path  (in $s7)
    // param RwaWaveConversion **tempPath  (in $s3)
    // param unsigned int arraySize  ($sp+188)
    // param unsigned int pathDepth  (in $s2)
    // param unsigned int minDepth  (in $s1)
    {   // 0x002744A0-0x0027466C
        unsigned int tempSrcRate;  // in $v0
        unsigned int tempDepth;  // in $v0
        unsigned int j;  // in $a1
        int notChecked;  // in $a0
        unsigned int i;  // in $s0
    }
}

