// basky.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwStream *skyReadTexCB(RwStream *, int, void *, int, int);  // 0x0015F760
RwStream *skyWriteTexCB(RwStream *, int, void *, int, int);  // 0x0015F7E0
int skyGetSizeTexCB(void *, int, int);  // 0x0015F840
int SkyNoStandard(void *, void *, int);  // 0x00166D50
void matrixASMMult(RwMatrixTag *, RwMatrixTag *, RwMatrixTag *);  // 0x00168BE0
RwV3d *vectorASMMultPoint(RwV3d *, RwV3d *, int, RwMatrixTag *);  // 0x00168C60
RwV3d *vectorASMMultVector(RwV3d *, RwV3d *, int, RwMatrixTag *);  // 0x00168CF0
static RwVideoMode videoModes[89];  // 0x002A2C50
static int skyBlendStates[6][6];  // 0x002A31E0
static RwStandard saGStandards[28];  // 0x002A3270
long gs_set_up;  // 0x002BBD00
int needCache;  // 0x003103A8
long skyPrim_State;  // 0x003103B0
static int skySrcBlend;  // 0x003103B8
static int skyDestBlend;  // 0x003103BC
int skyMaxMipLevels;  // 0x003103C0
static unsigned int skyDefaultMipmapKL;  // 0x003103C4
static unsigned int zBufferDepth;  // 0x003103C8
int skyTLClipperMode;  // 0x003103D8
unsigned char _rwDMANumFlipsInQueue;  // 0x00310958
unsigned char _rwDMACurrentHalfOffset;  // 0x0031095C
unsigned char _rwDMAUseHalfOffset;  // 0x00310960
unsigned char _rwDMAFlipPending;  // 0x00310974
u_long128 *_rwDMAPktPtr;  // 0x003109BC
RwVideoMode *skyVideoMode;  // 0x003109D8
int cacheOpened;  // 0x003109DC
static int skyNoNewStyleRasters;  // 0x003109E0
static long skyRenderTime;  // 0x003109E8
static int skyRenderTimeInProgress;  // 0x003109F0
int skySuspended;  // 0x003109F4
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyTest_1;  // 0x00310A08
long skyXyoffset_1;  // 0x00310A10
long skyFogcol;  // 0x00310A18
long skyClamp_1;  // 0x00310A20
long skyTex1_1;  // 0x00310A28
long skyAlpha_1;  // 0x00310A30
RwRaster *skyDisplayRaster;  // 0x00310A38
RwRaster *skyDrawRaster;  // 0x00310A3C
int skyFrameBit;  // 0x00310A40
static int skyBufferAlphaPolys;  // 0x00310A44
long skyXOff;  // 0x00310A48
long skyYOff;  // 0x00310A50
unsigned int skyFSAA0VisibleWidth;  // 0x00310A58
unsigned int skyFSAA0RenderWidth;  // 0x00310A5C
unsigned int skyFSAA0RenderHeight;  // 0x00310A60
static int skyTexCacheRestoreRequired;  // 0x00310A64
unsigned int textureBankStart;  // 0x00310A68
int skyTextureExt;  // 0x00310A6C
int skyCameraExt;  // 0x00310A70
int skyRasterExt;  // 0x00310A74
RwCullMode gSkyCullState;  // 0x00310A78
unsigned int skyDitherState;  // 0x00310A7C
int skyVertexAlpha;  // 0x00310A80
int skyAlphaTex;  // 0x00310A84
RwRaster *skyTextureRaster;  // 0x00310A88
RwRwDeviceGlobals dgGGlobals;  // 0x00310A90
int engineStarted;  // 0x00310A98
int currentCameraFormat;  // 0x00310A9C
int currentMode;  // 0x00310AA0
u_long128 *fogTable;  // 0x00310AA4
unsigned char skyTransType;  // 0x00310AC4
int skyTSClipperMode;  // 0x00310AD4
float farFogPlane;  // 0x00310AE0
int useFarClip;  // 0x00310AE4
unsigned int ourGlobals[4096];  // 0x004486D0
rwDMA_flipDataTag _rwDMAFlipData;  // 0x0044CED0
struct @anon14 skySis;  // 0x0044D500
unsigned char skyUserFog[256];  // 0x0044D570
u_long128 skyMungedUserFog[14];  // 0x0044D670
u_long128 skyExp2Fog[14];  // 0x0044D750
u_long128 skyExpFog[14];  // 0x0044D830
u_long128 skyLinearFog[14];  // 0x0044D910
_SkyMemBlock skyFakeCacheFrameBuffer1;  // 0x0044D9F0
_SkyMemBlock skyFakeCacheFrameBuffer0;  // 0x0044DA00
_clearPkt skyInitialClear;  // 0x0044DA10

// ---- functions ----

// 0x0015E120-0x0015E150 (48 bytes), lines 582-589
int _rwSkyFindMSB(unsigned int nInt)
{
    // param unsigned int nInt  (in $v0)
    {   // 0x0015E120-0x0015E150
        int nPos;  // in $v0
    }
}

// 0x0015E150-0x0015EDA0 (3152 bytes), lines 623-1387
int _rwSkySetRenderState(RwRenderState nState, void *pParam)
{
    // param RwRenderState nState  (in $v0)
    // param void *pParam  (in $s2)
    {   // 0x0015E150-0x0015EDA0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        int result;  // in $s0
    }
}

// 0x0015EDA0-0x0015F27C (1244 bytes), lines 1402-1737
static int SkyGetRenderState(RwRenderState nState, void *pParam)
{
    // param RwRenderState nState  (in $v0)
    // param void *pParam  (in $v0)
    {   // 0x0015EDA0-0x0015F27C
    }
}

// 0x0015F280-0x0015F550 (720 bytes), lines 1783-1951
int RpSkyRenderStateSet(RpSkyRenderState nState, void *pParam)
{
    // param RpSkyRenderState nState  (in $v0)
    // param void *pParam  (in $s0)
    {   // 0x0015F280-0x0015F550
        int maxMipLevels;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        unsigned long tmp;  // in $v0
    }
}

// 0x0015F550-0x0015F64C (252 bytes), lines 1990-2038
int RpSkyRenderStateGet(RpSkyRenderState nState, void *pParam)
{
    // param RpSkyRenderState nState  (in $v0)
    // param void *pParam  (in $v0)
    {   // 0x0015F550-0x0015F64C
    }
}

// 0x0015F650-0x0015F65C (12 bytes), lines 2115-2118
int RpSkySelectTrueTSClipper(int val)
{
    // param int val  (in $v0)
    {   // 0x0015F650-0x0015F65C
    }
}

// 0x0015F660-0x0015F6FC (156 bytes), lines 2410-2426
RwTexture *RpSkyTextureSetMipmapK(RwTexture *tex, float val)
{
    // param RwTexture *tex  (in $v0)
    // param float val  ($sp+0)
    {   // 0x0015F660-0x0015F6FC
        int i;  // in $v0
    }
}

// 0x0015F700-0x0015F75C (92 bytes), lines 2505-2517
float RpSkyTextureGetMipmapK(RwTexture *tex)
{
    // param RwTexture *tex  (in $v0)
    {   // 0x0015F700-0x0015F75C
        int i;  // in $v1
    }
}

// 0x0015F760-0x0015F7E0 (128 bytes), lines 2570-2585
static RwStream *skyReadTexCB(RwStream *stream, int len, void *obj)
{
    // param RwStream *stream  (in $s1)
    // param int len  (in $v0)
    // param void *obj  (in $v0)
    {   // 0x0015F760-0x0015F7E0
        int val;  // $sp+60
        RwTexture *tex;  // in $s0
    }
}

// 0x0015F7E0-0x0015F83C (92 bytes), lines 2596-2611
static RwStream *skyWriteTexCB(RwStream *stream, void *obj)
{
    // param RwStream *stream  (in $s0)
    // param void *obj  (in $v0)
    {   // 0x0015F7E0-0x0015F83C
        int val;  // $sp+44
        RwTexture *tex;  // in $v0
    }
}

// 0x0015F840-0x0015F848 (8 bytes), lines 2625-2625
static int skyGetSizeTexCB()
{
    {   // 0x0015F840-0x0015F848
    }
}

// 0x0015F850-0x00160418 (3016 bytes), lines 2644-3002
static int SkyCameraBeginUpdate(void *pCam)
{
    // param void *pCam  (in $v0)
    {   // 0x0015F850-0x00160418
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        unsigned int stat;  // in $v0
        u_long128 ___ltmp;  // in $v0
        _SkyRasterExt *reExt;  // in $v1
        float scaleRight;  // optimised away
        float scaleUp;  // $sp+160
        RwFrustumPlane *frustPlanes;  // in $s2
        RwV3d *frustVerts;  // in $s1
        RwV3d vTmp2;  // $sp+144
        RwV3d vTmp;  // $sp+128
        RwV3d upLeft;  // $sp+112
        RwV3d upRight;  // $sp+96
        RwV3d right;  // $sp+80
        RwV3d up;  // $sp+64
        _SkyCameraExt *camExt;  // in $v0
        RwCamera *cam;  // in $s0
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
    }
}

// 0x00160420-0x001604C0 (160 bytes), lines 3016-3063
static int SkyCameraEndUpdate(void *pCam)
{
    // param void *pCam  (in $v0)
    {   // 0x00160420-0x001604C0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v1
    }
}

// 0x001604C0-0x00160A38 (1400 bytes), lines 3076-3343
static int SkyCameraClear(void *pCam, void *pCol, int nClearWhich)
{
    // param void *pCam  (in $v0)
    // param void *pCol  (in $v0)
    // param int nClearWhich  (in $s2)
    {   // 0x001604C0-0x00160A38
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        _SkyRasterExt *reExt;  // in $v1
        RwCamera *cam;  // in $s1
        RwRGBA *col;  // in $s0
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
        int stripX;  // in $v1
        int numStrips;  // in $s3
    }
}

// 0x00160A40-0x00160AB4 (116 bytes), lines 3445-3595
static int SkyRasterShowRaster()
{
    {   // 0x00160A40-0x00160AB4
    }
}

// 0x00160AC0-0x00160ACC (12 bytes), lines 3620-3624
static int SkyTextureSetRaster(void *pTex, void *pRas)
{
    // param void *pTex  (in $v0)
    // param void *pRas  (in $v0)
    {   // 0x00160AC0-0x00160ACC
    }
}

// 0x00160AD0-0x00161094 (1476 bytes), lines 3642-3875
static int SkyGetRasterFormat(void *pRaster, int flags)
{
    // param void *pRaster  (in $v0)
    // param int flags  (in $v0)
    {   // 0x00160AD0-0x00161094
        RwError _rwErrorCode;  // $sp+136
        RwError _rwErrorCode;  // $sp+128
        RwError _rwErrorCode;  // $sp+120
        RwError _rwErrorCode;  // $sp+112
        RwError _rwErrorCode;  // $sp+104
        RwError _rwErrorCode;  // $sp+96
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        RwError _rwErrorCode;  // $sp+72
        RwError _rwErrorCode;  // $sp+64
        RwError _rwErrorCode;  // $sp+56
        RwError _rwErrorCode;  // $sp+48
        RwError _rwErrorCode;  // $sp+40
        RwError _rwErrorCode;  // $sp+32
        RwError _rwErrorCode;  // $sp+24
        RwError _rwErrorCode;  // $sp+16
        int palette;  // in $v1
        int mipmapFlag;  // in $t0
        int nFormat;  // in $v0
        RwRaster *rpRas;  // in $v0
    }
}

// 0x001610A0-0x00162600 (5472 bytes), lines 4124-4519
static void calcOffsets(unsigned int width, unsigned int height, int format, unsigned long *offsets, unsigned long *bufwidth, unsigned int *xyoff, unsigned int *texMemSize, unsigned int *paletteOffset)
{
    // param unsigned int width  (in $s4)
    // param unsigned int height  (in $s3)
    // param int format  (in $s6)
    // param unsigned long *offsets  (in $s5)
    // param unsigned long *bufwidth  ($sp+444)
    // param unsigned int *xyoff  ($sp+440)
    // param unsigned int *texMemSize  ($sp+436)
    // param unsigned int *paletteOffset  ($sp+432)
    {   // 0x001610A0-0x00162600
        unsigned int bs;  // $sp+272
        unsigned int bw;  // in $fp
        int result;  // in $v0
        int i;  // in $a0
        int stackp;  // in $fp
        unsigned int stacko[8];  // $sp+576
        unsigned int stackw[8];  // $sp+544
        unsigned int stackh[8];  // $sp+512
        int piviot;  // $sp+256
        int interioroffsety;  // $sp+240
        int interioroffsetx;  // $sp+224
        int maxlevel;  // $sp+208
        int bufstart[7];  // $sp+480
        int bufheight[7];  // $sp+448
        int palette;  // in $v0
        unsigned int pageHeight;  // $sp+192
        unsigned int pageWidth;  // in $s2
        unsigned int blockHeight;  // in $s1
        unsigned int blockWidth;  // in $s0
    }
}

// 0x00162600-0x00162728 (296 bytes), lines 4540-4646
static void skyTransferMinSize(long format, unsigned char flags, int *minTW, int *minTH)
{
    // param long format  (in $v0)
    // param unsigned char flags  (in $v0)
    // param int *minTW  (in $v0)
    // param int *minTH  (in $v0)
    {   // 0x00162600-0x00162728
        int minth;  // in $t2
        int mintw;  // in $t1
    }
}

// 0x00162730-0x0016421C (6892 bytes), lines 4660-6017
static int SkyRasterCreate(void *pInOut, void *pRaster, int flags)
{
    // param void *pInOut  (in $v0)
    // param void *pRaster  (in $v0)
    // param int flags  (in $v0)
    {   // 0x00162730-0x0016421C
        RwError _rwErrorCode;  // $sp+504
        RwError _rwErrorCode;  // $sp+496
        RwError _rwErrorCode;  // $sp+488
        unsigned int pageHeight;  // in $a2
        unsigned int pageWidth;  // in $a1
        RwError _rwErrorCode;  // $sp+480
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t6
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a0
        RwError _rwErrorCode;  // $sp+472
        unsigned int y;  // in $t0
        unsigned int x;  // in $a3
        unsigned int bs;  // in $a2
        unsigned int y;  // in $t1
        unsigned int x;  // in $a3
        unsigned int bs;  // in $a2
        int prefixDataSize;  // in $s3
        unsigned long palxyoffset;  // in $v0
        int pktSize;  // in $v0
        int i;  // in $t0
        int h;  // in $a3
        int w;  // in $a2
        u_long128 *data1;  // in $v1
        u_long128 *data;  // in $v0
        unsigned long tmp;  // in $v0
        int minTH;  // $sp+524
        int minTW;  // $sp+520
        unsigned int size;  // in $v0
        unsigned int widthByPage;  // in $a3
        unsigned int lastMapPageHeight;  // in $a2
        unsigned int mipMax;  // in $a2
        unsigned int size;  // in $v1
        unsigned int stride;  // in $v0
        unsigned int blockOffsetBy4;  // in $a1
        unsigned int sizeBeforePrevMip;  // in $v0
        unsigned long word64;  // in $v0
        unsigned long prevWidthBy64;  // $sp+224
        unsigned int paletteOffset;  // $sp+516
        unsigned int height;  // in $s6
        unsigned int width;  // in $s2
        unsigned int sysMemSize;  // $sp+208
        unsigned int texMemSize;  // $sp+512
        unsigned int levels;  // in $s7
        RwError _rwErrorCode;  // $sp+464
        RwError _rwErrorCode;  // $sp+456
        RwError _rwErrorCode;  // $sp+448
        RwError _rwErrorCode;  // $sp+440
        unsigned int palPageHeight;  // in $a0
        unsigned int palPageWidth;  // in $v1
        unsigned int pageHeight;  // in $fp
        unsigned int pageWidth;  // in $s5
        int overH;  // in $v0
        int overW;  // in $v0
        int palWidth;  // $sp+192
        int palHeight;  // $sp+176
        int bytesPerPalPixel;  // $sp+160
        unsigned int xyoffset[7];  // $sp+384
        unsigned long widthBy64[7];  // $sp+320
        unsigned long offsetBy64[7];  // $sp+256
        RwError _rwErrorCode;  // $sp+432
        RwError _rwErrorCode;  // $sp+424
        RwError _rwErrorCode;  // $sp+416
        _SkyRasterExt *ext;  // in $s1
        RwRaster *rpRas;  // in $s0
        unsigned int rasterPageHeights[32];  // at 0x002C3D60
        unsigned int rasterPageWidths[32];  // at 0x002C3CE0
        unsigned int PSMT4BlockOffsets[8];  // at 0x002C3E60
        unsigned int PSMT8BlockOffsets[8];  // at 0x002C3E40
        unsigned int PSCMT16SBlockOffsets[8];  // at 0x002C3E20
        unsigned int PSCMT16BlockOffsets[8];  // at 0x002C3E00
        unsigned int PSCMT3224BlockOffsets[8];  // at 0x002C3DE0
    }
}

// 0x00164220-0x0016461C (1020 bytes), lines 6246-6395
static int SkyRasterSubRaster(void *pRas, void *pIn)
{
    // param void *pRas  (in $v0)
    // param void *pIn  (in $v0)
    {   // 0x00164220-0x0016461C
        _SkyRasterExt *rpRasExt;  // in $v0
        int nAdjust;  // in $a3
        _SkyRasterExt *rasExt;  // in $v0
        _SkyRasterExt *rasExtIn;  // in $t1
        RwRaster *pixelOwner;  // in $v1
        RwRaster *rpIn;  // in $v0
        RwRaster *rpRas;  // in $v0
    }
}

// 0x00164620-0x001647A0 (384 bytes), lines 6409-6525
static int SkyRasterDestroy(void *pRaster)
{
    // param void *pRaster  (in $v0)
    {   // 0x00164620-0x001647A0
        _SkyRasterExt *rpRasExt;  // in $s1
        int level;  // in $s0
        RwRaster *rpRas;  // in $s0
    }
}

// 0x001647A0-0x001649C8 (552 bytes), lines 6603-6658
static void SkyRasterLock_32to8(RwRaster *rpRas)
{
    // param RwRaster *rpRas  (in $v0)
    {   // 0x001647A0-0x001649C8
        unsigned char *src;  // in $t2
        u_long128 column[4];  // $sp+4096
        int y;  // in $t1
        int x;  // in $t0
        int l;  // in $t9
        int k;  // in $a3
        int j;  // in $a2
        int i;  // in $t3
        unsigned char buf[4096];  // $sp+0
    }
}

// 0x001649D0-0x00164D64 (916 bytes), lines 6662-6738
static void SkyRasterLock_16to4(RwRaster *rpRas)
{
    // param RwRaster *rpRas  (in $v0)
    {   // 0x001649D0-0x00164D64
        unsigned char *src;  // in $t6
        u_long128 column[4];  // $sp+2096
        int y;  // in $t5
        int x;  // in $t4
        int l;  // in $a2
        int k;  // in $a1
        int j;  // in $t3
        int i;  // in $t1
        unsigned char buf[2048];  // $sp+48
    }
}

// 0x00164D70-0x00164FA0 (560 bytes), lines 6742-6801
static void SkyRasterUnlock_8to32(RwRaster *rpRas)
{
    // param RwRaster *rpRas  (in $v0)
    {   // 0x00164D70-0x00164FA0
        unsigned char *dst;  // in $t1
        u_long128 column[4];  // $sp+4096
        int y;  // in $t0
        int x;  // in $t4
        int l;  // in $t3
        int k;  // in $a3
        int j;  // in $a2
        int i;  // in $t3
        unsigned char buf[4096];  // $sp+0
    }
}

// 0x00164FA0-0x001652B0 (784 bytes), lines 6805-6886
static void SkyRasterUnlock_4to16(RwRaster *rpRas)
{
    // param RwRaster *rpRas  (in $v0)
    {   // 0x00164FA0-0x001652B0
        unsigned char *dst;  // in $t1
        u_long128 column[4];  // $sp+2048
        int y;  // in $t0
        int x;  // in $t4
        int l;  // in $t5
        int k;  // in $a3
        int j;  // in $a2
        int i;  // in $t3
        unsigned char buf[2048];  // $sp+0
    }
}

// 0x001652B0-0x00165E5C (2988 bytes), lines 6903-7313
static int SkyRasterLock(void *pPixels, void *pRaster, int flags)
{
    // param void *pPixels  (in $v0)
    // param void *pRaster  (in $v0)
    // param int flags  (in $s1)
    {   // 0x001652B0-0x00165E5C
        int h;  // in $v1
        int w;  // in $v0
        int minTH;  // $sp+204
        int minTW;  // $sp+200
        RwError _rwErrorCode;  // $sp+192
        RwError _rwErrorCode;  // $sp+184
        RwError _rwErrorCode;  // $sp+176
        RwError _rwErrorCode;  // $sp+168
        RwError _rwErrorCode;  // $sp+160
        unsigned char *dst;  // in $s3
        int transOffsetY;  // in $s2
        int transMaxHeight;  // in $s1
        int transHeight;  // in $v0
        _SkyRasterExt *reExt;  // in $s7
        RwError _rwErrorCode;  // $sp+152
        RwError _rwErrorCode;  // $sp+144
        unsigned char *dst;  // in $s3
        int transOffsetY;  // in $s2
        int transMaxHeight;  // in $s1
        int transHeight;  // in $v0
        unsigned char currentLevel;  // in $v0
        _SkyRasterExt *ext;  // in $s3
        unsigned char mipLevel;  // in $s2
        RwRaster *rpRas;  // in $s0
        unsigned char **cppPixels;  // in $s6
    }
}

// 0x00165E60-0x00166080 (544 bytes), lines 7326-7416
static int SkyRasterUnlock(void *pRaster)
{
    // param void *pRaster  (in $v0)
    {   // 0x00165E60-0x00166080
        _SkyRasterExt *rasExt;  // in $s1
        RwRaster *rpRas;  // in $s0
    }
}

// 0x00166080-0x0016611C (156 bytes), lines 7428-7461
static int SkyRasterLockPalette(void *pPalette, void *pRaster, int flags)
{
    // param void *pPalette  (in $v0)
    // param void *pRaster  (in $v0)
    // param int flags  (in $s1)
    {   // 0x00166080-0x0016611C
        unsigned char **cppPalette;  // in $s2
        RwRaster *rpRas;  // in $s0
    }
}

// 0x00166120-0x001661EC (204 bytes), lines 7475-7529
static int SkyRasterUnlockPalette(void *pRaster)
{
    // param void *pRaster  (in $v0)
    {   // 0x00166120-0x001661EC
        RwError _rwErrorCode;  // $sp+40
        int numPalEntries;  // in $a2
        int nPaletteSize;  // in $v0
        RwRasterFormat format;  // in $v1
        RwRaster *rpRas;  // in $s0
    }
}

// 0x001661F0-0x00166248 (88 bytes), lines 7538-7561
static int SkyRasterGetMipLevels(void *pOut, void *pInOut)
{
    // param void *pOut  (in $v0)
    // param void *pInOut  (in $v0)
    {   // 0x001661F0-0x00166248
        _SkyRasterExt *rasExt;  // in $v1
        int *numMipLevels;  // in $v0
        RwRaster *raster;  // in $v0
    }
}

// 0x00166250-0x001664A4 (596 bytes), lines 7603-7720
static RwRaster *writeTEXToStream(RwStream *stream, RwRaster *raster)
{
    // param RwStream *stream  (in $s4)
    // param RwRaster *raster  (in $s3)
    {   // 0x00166250-0x001664A4
        unsigned int pixelDataSize;  // in $s1
        _SkyRasterExt *rasExt;  // in $s0
        __rwSkyNativeRaster nativeRaster;  // $sp+96
    }
}

// 0x001664B0-0x00166864 (948 bytes), lines 7731-7941
static RwRaster *readTEXFromStream(RwStream *stream)
{
    // param RwStream *stream  (in $s2)
    {   // 0x001664B0-0x00166864
        RwError _rwErrorCode;  // $sp+176
        RwError _rwErrorCode;  // $sp+168
        int tmp;  // in $s3
        unsigned int version;  // $sp+188
        unsigned int length;  // $sp+184
        _SkyRasterExt *rasExt;  // in $s4
        RwRaster *raster;  // in $s3
        __rwSkyNativeRaster nativeRaster;  // $sp+96
    }
}

// 0x00166870-0x00166914 (164 bytes), lines 7954-7979
static int SkyNativeTextureGetSize(void *pSize, void *pTex)
{
    // param void *pSize  (in $v0)
    // param void *pTex  (in $v0)
    {   // 0x00166870-0x00166914
        RwTexture *texture;  // in $s1
        unsigned int *size;  // in $s0
    }
}

// 0x00166920-0x00166A78 (344 bytes), lines 7991-8053
static int SkyNativeTextureWrite(void *pStream, void *pTex)
{
    // param void *pStream  (in $v0)
    // param void *pTex  (in $v0)
    {   // 0x00166920-0x00166A78
        RwTextureAddressMode addressingV;  // in $a3
        RwTextureAddressMode addressingU;  // in $v1
        RwTextureFilterMode filtering;  // in $a2
        __rwSkyNativeTexture nativeTexture;  // $sp+72
        RwRaster *raster;  // in $s2
        RwTexture *texture;  // in $s1
        RwStream *stream;  // in $s0
    }
}

// 0x00166A80-0x00166D34 (692 bytes), lines 8065-8211
static int SkyNativeTextureRead(void *pStream, void *ppTex)
{
    // param void *pStream  (in $v0)
    // param void *ppTex  (in $v0)
    {   // 0x00166A80-0x00166D34
        RwError _rwErrorCode;  // $sp+352
        RwError _rwErrorCode;  // $sp+344
        RwTextureFilterMode textureFilterMode;  // in $v0
        RwRaster *raster;  // in $s0
        unsigned int version;  // $sp+364
        unsigned int structLength;  // $sp+360
        char textureMask[128];  // $sp+208
        char textureName[128];  // $sp+80
        __rwSkyNativeTexture nativeTexture;  // $sp+336
        RwTextureAddressMode addressingV;  // in $v0
        RwTextureAddressMode addressingU;  // in $v1
        RwTexture **texture;  // in $s1
        RwStream *stream;  // in $s0
    }
}

// 0x00166D40-0x00166D48 (8 bytes), lines 8227-8227
static int SkyHintRenderFront2Back()
{
    {   // 0x00166D40-0x00166D48
    }
}

// 0x00166D50-0x00166D58 (8 bytes), lines 8311-8311
static int SkyNoStandard()
{
    {   // 0x00166D50-0x00166D58
    }
}

// 0x00166D60-0x00166E40 (224 bytes), lines 8331-8351
static void SkySetStandards(int (**fppFuncs)(void *, void *, int), int nNumFuncs, RwStandard *spStandards, int nNumStandards)
{
    // param int (**fppFuncs)(void *, void *, int)  (in $v0)
    // param int nNumFuncs  (in $v0)
    // param RwStandard *spStandards  (in $v0)
    // param int nNumStandards  (in $v0)
    {   // 0x00166D60-0x00166E40
        int nI;  // in $t1
    }
}

// 0x00166E40-0x00166FF4 (436 bytes), lines 8361-8441
static void setInitialRenderState()
{
    {   // 0x00166E40-0x00166FF4
        u_long128 ___ltmp;  // in $s5
        u_long128 ___ltmp;  // in $s4
        u_long128 ___ltmp;  // in $s3
        u_long128 ___ltmp;  // in $s2
        u_long128 ___ltmp;  // in $s1
        u_long128 ___ltmp;  // in $s0
        u_long128 ___ltmp;  // in $s6
    }
}

// 0x00167000-0x00167118 (280 bytes), lines 8554-8612
static int SkyRegister(void *pOut, void *pInOut)
{
    // param void *pOut  (in $s1)
    // param void *pInOut  (in $s0)
    {   // 0x00167000-0x00167118
        RwDevice *lpdGSkyDevice;  // in $v0
        int result;  // in $v0
    }
}

// 0x00167120-0x00167498 (888 bytes), lines 8624-8762
static int SkyOpen()
{
    {   // 0x00167120-0x00167498
        int quantize;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        int i;  // in $s0
    }
}

// 0x001674A0-0x00167778 (728 bytes), lines 8917-9070
static void setUpFSAA0(rwDMA_flipDataTag *fd)
{
    // param rwDMA_flipDataTag *fd  (in $s0)
    {   // 0x001674A0-0x00167778
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        unsigned int i;  // in $s2
        unsigned int offset;  // in $v0
        unsigned long tmp;  // in $v0
        u_long128 *dmaData;  // in $s1
        u_long128 dmaData4[20];  // at 0x0044D280
        u_long128 dmaData3[20];  // at 0x0044D3C0
    }
}

// 0x00167780-0x001684E8 (3432 bytes), lines 9076-9854
static int SkyStart()
{
    {   // 0x00167780-0x001684E8
        unsigned int fbHeight;  // in $a2
        unsigned int fbWidth;  // in $a1
        int size;  // in $a0
        unsigned int skyFSAA0VisibleHeight;  // in $a3
        int result;  // in $s0
    }
}

// 0x001684F0-0x00168760 (624 bytes), lines 9867-9956
static int SkySystem(int nRequest, void *pOut, void *pInOut, int nIn)
{
    // param int nRequest  (in $v0)
    // param void *pOut  (in $v0)
    // param void *pInOut  (in $v0)
    // param int nIn  (in $v0)
    {   // 0x001684F0-0x00168760
        int result;  // in $v0
    }
}

// 0x00168760-0x0016876C (12 bytes), lines 9999-10000
RwDevice *_rwDeviceGetHandle()
{
    {   // 0x00168760-0x0016876C
        RwDevice dGSkyDevice;  // at 0x002A3350
    }
}

// 0x00168770-0x001688B0 (320 bytes), lines 10219-10271
void _rpSkyFrameBufferRastersUpdate()
{
    {   // 0x00168770-0x001688B0
        _SkyRasterExt *rasExt;  // in $a3
        unsigned int destAddr;  // in $a2
        _SkyRasterExt *rasExt;  // in $t0
        unsigned int destAddr;  // in $a3
        _SkyMemBlock *pDrawBuffer;  // in $v1
        _SkyMemBlock *pDisplayBuffer;  // in $a3
    }
}

// 0x001688B0-0x0016892C (124 bytes), lines 10301-10329
int _rpSkyDestroyFrameBufferRasters()
{
    {   // 0x001688B0-0x0016892C
        int result;  // in $v0
    }
}

// 0x00168930-0x00168B4C (540 bytes), lines 10339-10395
static RwRaster *SkyCreateFBRaster()
{
    {   // 0x00168930-0x00168B4C
        _SkyRasterExt *rasExt;  // in $v1
        int nAdjust;  // in $v1
        RwRaster *rpRaster;  // in $v0
    }
}

// 0x00168B50-0x00168BBC (108 bytes), lines 10405-10429
int _rpSkyCreateFrameBufferRasters()
{
    {   // 0x00168B50-0x00168BBC
    }
}

// 0x00168BC0-0x00168BC8 (8 bytes), lines 10442-10442
RwRaster *RpSkyGetDisplayBufferRaster()
{
    {   // 0x00168BC0-0x00168BC8
    }
}

// 0x00168BD0-0x00168BD8 (8 bytes), lines 10456-10456
RwRaster *RpSkyGetDrawBufferRaster()
{
    {   // 0x00168BD0-0x00168BD8
    }
}

