// I:\Burnout 2 Code\gamesource\Race\CBlobbyShadow.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _blobbyShadowCollisionCallback(SRCCollLine *, SRCCollisionTriangle *, void *);  // 0x0022A070
float _gMinLineLength;  // 0x00310ECC
CTrack gTrack;  // 0x0031F280
CRenderer gRenderer;  // 0x00434440
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0022A070-0x0022A414 (932 bytes), lines 486-578
// _blobbyShadowCollisionCallback__FP11SRCCollLineP20SRCCollisionTrianglePv
static int _blobbyShadowCollisionCallback(SRCCollLine *lpLine, SRCCollisionTriangle *lpCollTriangle, void *lpData)
{
    // param SRCCollLine *lpLine  (in $v0)
    // param SRCCollisionTriangle *lpCollTriangle  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x0022A070-0x0022A414
        float col2;  // optimised away
        float col1;  // optimised away
        float distanceTop;  // optimised away
        float distanceCentre;  // optimised away
        RwV3d vector;  // $sp+144
        B2BlobbyShadow *lpBlobbyShadow;  // in $s0
        RwV4d laPosAndIntensity[3];  // $sp+96
    }
}

// 0x0022A420-0x0022AAF8 (1752 bytes), lines 266-471
// Render__20CBlobbyShadowManagerFi
void CBlobbyShadowManager::Render(int lnWorldIndex)
{
    // param CBlobbyShadowManager *this  (in $s4)
    // param int lnWorldIndex  (in $s3)
    {   // 0x0022A420-0x0022AAF8
        RwRGBA *_col;  // in $t4
        RwRGBA *_col;  // in $t3
        RwRGBA *_col;  // in $t2
        RwRGBA *_col;  // in $t1
        int lnIntensity;  // in $t0
        RwV3d lDown;  // $sp+488
        int lnUnit;  // in $v0
        SRCCollLine lLine;  // $sp+432
        unsigned int oldTest1;  // $sp+508
        unsigned int oldAlpha1;  // $sp+504
        RwCamera *lpCam;  // in $t1
        RwPlane laSidePlanes[4];  // $sp+368
        RwPlane lNearPlane;  // $sp+352
        int bZWrite;  // $sp+500
        unsigned short laIndices[6];  // $sp+472
        RxObjSpace3DVertex laShadowVerts[4];  // $sp+208
        int i;  // in $s0
    }
}

// 0x0022AB00-0x0022AC88 (392 bytes), lines 166-196
// AddShadow__20CBlobbyShadowManagerFP5RwV3dP5RwV3dP5RwV3dff
int CBlobbyShadowManager::AddShadow(RwV3d *lpPosition, RwV3d *lpAt, RwV3d *lpRight, float lrAtSize, float lrRightSize)
{
    // param CBlobbyShadowManager *this  (in $v0)
    // param RwV3d *lpPosition  (in $v0)
    // param RwV3d *lpAt  (in $v0)
    // param RwV3d *lpRight  (in $v0)
    // param float lrAtSize  ($sp+16)
    // param float lrRightSize  ($sp+16)
    {   // 0x0022AB00-0x0022AC88
        RwV3d lUp;  // $sp+0
    }
}

// 0x0022AC90-0x0022AC9C (12 bytes), lines 145-149
// Reset__20CBlobbyShadowManagerFv
int CBlobbyShadowManager::Reset()
{
    // param CBlobbyShadowManager *this  (in $v0)
    {   // 0x0022AC90-0x0022AC9C
    }
}

// 0x0022ACA0-0x0022ACA8 (8 bytes), lines 129-129
// Shutdown__20CBlobbyShadowManagerFv
void CBlobbyShadowManager::Shutdown()
{
    {   // 0x0022ACA0-0x0022ACA8
    }
}

// 0x0022ACB0-0x0022ACF8 (72 bytes), lines 100-116
// Setup__20CBlobbyShadowManagerFv
int CBlobbyShadowManager::Setup()
{
    // param CBlobbyShadowManager *this  (in $s0)
    {   // 0x0022ACB0-0x0022ACF8
        RwTexture *lpShadowTexture;  // in $v0
    }
}

// 0x0022AD00-0x0022AD0C (12 bytes), lines 70-72
// Init__20CBlobbyShadowManagerFv
void CBlobbyShadowManager::Init()
{
    // param CBlobbyShadowManager *this  (in $v0)
    {   // 0x0022AD00-0x0022AD0C
    }
}

