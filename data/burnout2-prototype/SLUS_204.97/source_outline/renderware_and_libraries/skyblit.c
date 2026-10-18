// skyblit.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned char _rwDMANumFlipsInQueue;  // 0x00310958
unsigned char _rwDMACurrentHalfOffset;  // 0x0031095C
unsigned char _rwDMAUseHalfOffset;  // 0x00310960
unsigned char _rwDMAFlipPending;  // 0x00310974
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyTest_1;  // 0x00310A08
long skyXyoffset_1;  // 0x00310A10
long skyTex1_1;  // 0x00310A28
long skyAlpha_1;  // 0x00310A30
int skyFrameBit;  // 0x00310A40
int skyRasterExt;  // 0x00310A74
RwRaster *skyTextureRaster;  // 0x00310A88
unsigned long oldSkyTex1_1;  // 0x00310AA8
unsigned int rasterNum;  // 0x00310AB0
RwRaster *blitRaster[2];  // 0x00310AB8
RwRaster *skyCurRas;  // 0x00310AC0
unsigned int ourGlobals[4096];  // 0x004486D0
rwDMA_flipDataTag _rwDMAFlipData;  // 0x0044CED0
RwRect destClipRect;  // 0x0044DAE0

// ---- functions ----

// 0x00168D80-0x00168E0C (140 bytes), lines 92-118
int _rwSkyRasterFinaliseStart()
{
    {   // 0x00168D80-0x00168E0C
    }
}

// 0x00168E10-0x00168E60 (80 bytes), lines 128-144
void _rwSkyRasterInitiateStop()
{
    {   // 0x00168E10-0x00168E60
    }
}

// 0x00168E60-0x00169114 (692 bytes), lines 154-250
static void spriteSetup(RwRasterType type)
{
    // param RwRasterType type  (in $s0)
    {   // 0x00168E60-0x00169114
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
    }
}

// 0x00169120-0x001692A4 (388 bytes), lines 264-308
static void spriteRGBAZ(int tlX, int tlY, int brX, int brY, unsigned int r, unsigned int g, unsigned int b, unsigned int a, unsigned int z, int alphaBlend)
{
    // param int tlX  (in $s4)
    // param int tlY  (in $s3)
    // param int brX  (in $s2)
    // param int brY  (in $s1)
    // param unsigned int r  (in $s0)
    // param unsigned int g  (in $s5)
    // param unsigned int b  (in $s6)
    // param unsigned int a  (in $s7)
    // param unsigned int z  ($sp+144)
    // param int alphaBlend  ($sp+152)
    {   // 0x00169120-0x001692A4
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $t1
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a1
        u_long128 ltmp;  // in $v0
        unsigned long tmp;  // in $v0
    }
}

// 0x001692B0-0x00169474 (452 bytes), lines 322-374
static void spriteUV(int tlX, int tlY, int brX, int brY, int tlU, int tlV, int brU, int brV, int alphaBlend)
{
    // param int tlX  (in $s4)
    // param int tlY  (in $s3)
    // param int brX  (in $s2)
    // param int brY  (in $s1)
    // param int tlU  (in $s0)
    // param int tlV  (in $s5)
    // param int brU  (in $s6)
    // param int brV  (in $s7)
    // param int alphaBlend  ($sp+144)
    {   // 0x001692B0-0x00169474
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $t1
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t1
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $a3
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 ltmp;  // in $v0
        unsigned long tmp;  // in $v0
    }
}

// 0x00169480-0x00169608 (392 bytes), lines 384-434
static void spriteUnsetup()
{
    {   // 0x00169480-0x00169608
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
    }
}

// 0x00169610-0x0016989C (652 bytes), lines 446-553
int _rwSkyRasterClearRect(void *pRect, int nValue)
{
    // param void *pRect  (in $v0)
    // param int nValue  (in $s1)
    {   // 0x00169610-0x0016989C
        unsigned short *mem;  // in $a0
        unsigned int *mem;  // in $a1
        int w;  // in $a0
        int h;  // in $a3
        unsigned int fill;  // in $a0
        RwRect *rect;  // in $s0
    }
}

// 0x001698A0-0x001699F8 (344 bytes), lines 571-611
static int unScaledSpriteClip(RwRect *srcRect, RwRect *dstRect)
{
    // param RwRect *srcRect  (in $v0)
    // param RwRect *dstRect  (in $v0)
    {   // 0x001698A0-0x001699F8
        int adjustTop;  // in $a2
        int adjustLeft;  // in $a3
    }
}

// 0x00169A00-0x00169C00 (512 bytes), lines 629-676
static int scaledSpriteClip(RwRect *srcRect, RwRect *dstRect)
{
    // param RwRect *srcRect  (in $v0)
    // param RwRect *dstRect  (in $v0)
    {   // 0x00169A00-0x00169C00
        int srcAdjustBottom;  // in $a2
        int adjustBottom;  // in $v1
        int srcAdjustTop;  // in $a2
        int adjustTop;  // in $a3
        int srcAdjustRight;  // in $a3
        int adjustRight;  // in $a2
        int srcAdjustLeft;  // in $a3
        int adjustLeft;  // in $a2
    }
}

// 0x00169C00-0x00169C44 (68 bytes), lines 690-710
int _rwSkyRasterClear(int nValue)
{
    // param int nValue  (in $v0)
    {   // 0x00169C00-0x00169C44
        RwRect rect;  // $sp+16
        int success;  // in $v0
    }
}

// 0x00169C50-0x0016A0E4 (1172 bytes), lines 720-870
static void skyRasterSetupForUpload(RwRaster *raster)
{
    // param RwRaster *raster  (in $s0)
    {   // 0x00169C50-0x0016A0E4
        unsigned int i;  // in $s4
        unsigned int bytesPerPixel;  // in $s7
        unsigned int height;  // in $s3
        unsigned int width;  // in $s2
        _SkyRasterExt *rasExt;  // in $s1
    }
}

// 0x0016A0F0-0x0016A680 (1424 bytes), lines 882-1120
int _rwSkyRasterRender(void *pRas, void *pLoc)
{
    // param void *pRas  (in $v0)
    // param void *pLoc  (in $v0)
    {   // 0x0016A0F0-0x0016A680
        unsigned short srcPixel;  // in $v0
        unsigned short *dst;  // in $a2
        unsigned short *src;  // in $a1
        unsigned int srcia;  // in $t1
        unsigned int srca;  // in $v0
        unsigned int dstPixel;  // in $t0
        unsigned int srcPixel;  // in $s0
        unsigned int *dst;  // in $a3
        unsigned int *src;  // in $a2
        int dstBytesPerPixel;  // in $a1
        int srcBytesPerPixel;  // in $v0
        int w;  // in $a1
        int dstfill;  // in $t1
        int srcfill;  // in $t2
        unsigned int heightToUse;  // in $s2
        unsigned int vertLeft;  // in $v1
        unsigned int dstY;  // in $s1
        unsigned int srcEndY;  // in $fp
        unsigned int srcY;  // in $v0
        _SkyRasterExt *rasExt;  // $sp+176
        RwRect srcRect;  // $sp+208
        RwRect dstRect;  // $sp+192
        RwRaster *srcRas;  // in $s0
        RwRect *rect;  // in $v0
    }
}

// 0x0016A680-0x0016ACE8 (1640 bytes), lines 1132-1405
int _rwSkyRasterRenderScaled(void *pRas, void *pRect)
{
    // param void *pRas  (in $v0)
    // param void *pRect  (in $v0)
    {   // 0x0016A680-0x0016ACE8
        unsigned short srcPixel;  // in $v0
        unsigned short *srcLine;  // in $a1
        unsigned short *dstLine;  // in $a0
        unsigned int srcia;  // in $s3
        unsigned int srca;  // in $v0
        unsigned int dstPixel;  // in $s2
        unsigned int srcPixel;  // in $v1
        unsigned int *srcLine;  // in $s1
        unsigned int *dstLine;  // in $t9
        unsigned char *dst;  // in $t8
        unsigned char *src;  // in $t7
        int horzStep;  // in $t6
        int horzError;  // in $t5
        int horzLimit;  // in $t2
        int vertStep;  // in $t1
        int vertError;  // in $t0
        int vertLimit;  // $sp+208
        int dstBytesPerPixel;  // in $v1
        int srcBytesPerPixel;  // in $v0
        int w;  // in $a3
        unsigned int heightToUse;  // in $s2
        unsigned int dstHeight16_16;  // in $s5
        unsigned int oldSrcH;  // in $v0
        unsigned int oldDstH;  // in $fp
        unsigned int vertLeft;  // in $v1
        unsigned int dstY16_16;  // in $s1
        unsigned int srcEndY;  // $sp+192
        unsigned int srcY;  // in $v0
        _SkyRasterExt *rasExt;  // $sp+176
        RwRect srcRect;  // $sp+240
        RwRect dstRect;  // $sp+224
        RwRaster *srcRas;  // in $s0
        RwRect *rect;  // in $v0
    }
}

// 0x0016ACF0-0x0016B0E0 (1008 bytes), lines 1417-1599
int _rwSkyRasterRenderFast(void *pRas, void *pLoc)
{
    // param void *pRas  (in $v0)
    // param void *pLoc  (in $v0)
    {   // 0x0016ACF0-0x0016B0E0
        unsigned int bytesPerPixel;  // in $s4
        unsigned char *dst;  // in $s3
        unsigned char *src;  // in $s5
        int dstBytesPerPixel;  // in $v1
        int srcBytesPerPixel;  // in $v0
        unsigned int heightToUse;  // in $s2
        unsigned int vertLeft;  // in $v1
        unsigned int dstY;  // in $s1
        unsigned int srcEndY;  // in $s7
        unsigned int srcY;  // in $v0
        _SkyRasterExt *rasExt;  // $sp+176
        RwRect srcRect;  // $sp+208
        RwRect dstRect;  // $sp+192
        RwRaster *srcRas;  // in $s0
        RwRect *rect;  // in $v0
    }
}

// 0x0016B0E0-0x0016B11C (60 bytes), lines 1615-1624
int _rwSkyRasterSetContext(void *pRas)
{
    // param void *pRas  (in $v0)
    {   // 0x0016B0E0-0x0016B11C
    }
}

