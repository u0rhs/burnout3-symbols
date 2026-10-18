// I:\Burnout 2 Code\gamesource\Render\CSun.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
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
unsigned int ourGlobals[4096];  // 0x004486D0
rwDMA_flipDataTag _rwDMAFlipData;  // 0x0044CED0

// ---- functions ----

// 0x001F3AE0-0x001F4428 (2376 bytes), lines 218-813
// RenderAsSun__4CSunFv
void CSun::RenderAsSun()
{
    // param CSun *this  (in $s4)
    {   // 0x001F3AE0-0x001F4428
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $s1
        u_long128 ___ltmp;  // in $v1
        int lnCount;  // in $t7
        int lnSampleSize;  // in $t6
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a2
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        _SkyRasterExt *lpRasExt;  // $sp+256
        int lnRadiusY;  // $sp+240
        int lnRadiusX;  // $sp+224
        int lnGSOffY;  // in $s3
        int lnGSOffX;  // in $s2
        int lnXYOffsetY;  // $sp+208
        int lnXYOffsetX;  // $sp+192
        unsigned long long lTmp1;  // in $a1
        unsigned long long lTmp0;  // in $a0
        float lrFade;  // optimised away
        int lnSampleBottom;  // in $s1
        int lnSampleTop;  // in $s0
        int lnSampleRight;  // in $s5
        int lnSampleLeft;  // in $s6
        int lnY;  // in $s7
        int lnX;  // in $fp
        RwV3d lScreenPos;  // $sp+272
        float lnScreenMaxY;  // optimised away
        int lnScreenMaxX;  // in $s3
        RwRaster *lpFrameBuffer;  // in $s2
        RwMatrixTag *lpViewMatrix;  // in $v0
        RwCamera *lpCamera;  // $sp+176
    }
}

// 0x001F4430-0x001F4458 (40 bytes), lines 193-202
// Render__4CSunFv
void CSun::Render()
{
    // param CSun *this  (in $v0)
    {   // 0x001F4430-0x001F4458
    }
}

// 0x001F4460-0x001F4468 (8 bytes), lines 159-159
// Shutdown__4CSunFv
void CSun::Shutdown()
{
    // param CSun *this  (in $v0)
    {   // 0x001F4460-0x001F4468
    }
}

// 0x001F4470-0x001F44FC (140 bytes), lines 120-141
// Setup__4CSunFP9RwTextureP5RwV3dfP10RwRGBAReali
void CSun::Setup(RwTexture *lpTexture, RwV3d *lpDirection, float lrSize, RwRGBAReal *lpColour, int lbIsMoon)
{
    // param CSun *this  (in $v0)
    // param RwTexture *lpTexture  (in $v0)
    // param RwV3d *lpDirection  (in $v0)
    // param float lrSize  ($sp+0)
    // param RwRGBAReal *lpColour  (in $v0)
    // param int lbIsMoon  (in $v0)
    {   // 0x001F4470-0x001F44FC
    }
}

// 0x001F4500-0x001F4508 (8 bytes), lines 80-80
// Init__4CSunFv
void CSun::Init()
{
    // param CSun *this  (in $v0)
    {   // 0x001F4500-0x001F4508
    }
}

