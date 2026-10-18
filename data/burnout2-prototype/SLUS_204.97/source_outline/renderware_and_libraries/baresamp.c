// baresamp.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x00155D60-0x00156334 (1492 bytes), lines 82-130
static void ImageResampleGetSpan(RwImage *_image, int _nStartX, int _nEndX, int _nY, RwRGBAReal *_rrpCol)
{
    // param RwImage *_image  (in $v0)
    // param int _nStartX  (in $v0)
    // param int _nEndX  (in $v0)
    // param int _nY  (in $v0)
    // param RwRGBAReal *_rrpCol  (in $v0)
    {   // 0x00155D60-0x00156334
        int nPos;  // in $a0
        RwRGBA *rpSpan;  // in $v1
        float nScale;  // $sp+0
        float nArea;  // $sp+0
    }
}

// 0x00156340-0x00156594 (596 bytes), lines 151-201
static void ImageResampleGetAvgPixel(RwImage *_image, int _nXStart, int _nXEnd, int _nYStart, int __nYEnd, RwRGBAReal *_rrpCol)
{
    // param RwImage *_image  (in $t8)
    // param int _nXStart  (in $t7)
    // param int _nXEnd  (in $v0)
    // param int _nYStart  (in $s0)
    // param int __nYEnd  (in $t6)
    // param RwRGBAReal *_rrpCol  (in $t5)
    {   // 0x00156340-0x00156594
        int nPos;  // in $t9
        RwRGBAReal rrAdd;  // $sp+32
        float nScale;  // $sp+48
        float nArea;  // $sp+48
    }
}

// 0x001565A0-0x00156778 (472 bytes), lines 228-286
RwImage *RwImageResample(RwImage *dstImage, RwImage *srcImage)
{
    // param RwImage *dstImage  (in $v0)
    // param RwImage *srcImage  ($sp+188)
    {   // 0x001565A0-0x00156778
        int quantize;  // in $a0
        RwRGBAReal rrCol;  // $sp+192
        RwRGBA *rpDstSpan;  // in $fp
        int srcHeight;  // in $v0
        int srcWidth;  // in $v0
        int dstHeight;  // $sp+160
        int dstWidth;  // in $s4
        int nYDelta;  // in $s6
        int nYPos;  // in $s3
        int nXDelta;  // in $s7
        int nXPos;  // in $s2
        int nY;  // in $s1
        int nX;  // in $s0
    }
}

// 0x00156780-0x001568EC (364 bytes), lines 315-387
RwImage *RwImageCreateResample(RwImage *srcImage, int width, int height)
{
    // param RwImage *srcImage  (in $s2)
    // param int width  (in $v0)
    // param int height  (in $v0)
    {   // 0x00156780-0x001568EC
        RwImage *ipUse;  // in $s1
        RwImage *dstImage;  // in $s0
    }
}

