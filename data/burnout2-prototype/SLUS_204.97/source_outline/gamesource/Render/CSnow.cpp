// I:\Burnout 2 Code\gamesource\Render\CSnow.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
long snowrender;  // 0x002974A0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyTest_1;  // 0x00310A08
long skyAlpha_1;  // 0x00310A30
void *skyUploadedCode;  // 0x00310AC8
CRenderer gRenderer;  // 0x00434440
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 vu1DataXYZScale;  // 0x0044DC10
u_long128 vu1DataXYZShift;  // 0x0044DC20
u_long128 vu1DataOffset3D;  // 0x0044DC30

// ---- functions ----

// 0x0020C030-0x0020C090 (96 bytes), lines 711-719
// SetDensity__5CSnowFf
void CSnow::SetDensity(float lrDensity)
{
    // param CSnow *this  (in $v0)
    // param float lrDensity  ($sp+0)
    {   // 0x0020C030-0x0020C090
        float lrNumParticles;  // optimised away
        CSnowGroup *lpGroup;  // in $a2
        int lnCount;  // in $a1
    }
}

// 0x0020C090-0x0020C310 (640 bytes), lines 538-699
// Render__5CSnowFv
void CSnow::Render()
{
    // param CSnow *this  (in $s5)
    {   // 0x0020C090-0x0020C310
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        unsigned long long lTmp;  // in $v1
        float lrMajorAxis;  // $sp+128
        RwV3d *lpCamAt;  // in $v0
        int lnViewSwitch;  // in $s1
        int lnCount;  // in $s0
    }
}

// 0x0020C310-0x0020C3C0 (176 bytes), lines 529-533
// Update__5CSnowFv
void CSnow::Update()
{
    // param CSnow *this  (in $v0)
    {   // 0x0020C310-0x0020C3C0
        int lnCount;  // in $a2
    }
}

// 0x0020C3C0-0x0020C414 (84 bytes), lines 505-521
// Reset__5CSnowFv
int CSnow::Reset()
{
    // param CSnow *this  (in $s0)
    {   // 0x0020C3C0-0x0020C414
        int lnCount;  // in $v1
        RwTexture *lpTexture;  // in $v0
    }
}

// 0x0020C420-0x0020C440 (32 bytes), lines 482-488
// Setup__5CSnowFv
int CSnow::Setup()
{
    {   // 0x0020C420-0x0020C440
        int lnCount;  // in $v1
    }
}

// 0x0020C440-0x0020C4D0 (144 bytes), lines 458-462
// Init__5CSnowFv
void CSnow::Init()
{
    // param CSnow *this  (in $s0)
    {   // 0x0020C440-0x0020C4D0
    }
}

// 0x0020C4D0-0x0020C8F8 (1064 bytes), lines 322-436
// Render__10CSnowGroupFi
void CSnowGroup::Render(int lnViewSwitch)
{
    // param CSnowGroup *this  (in $s2)
    // param int lnViewSwitch  (in $s1)
    {   // 0x0020C4D0-0x0020C8F8
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v1
        void *lpVUCode;  // in $s0
        float lrRecipFarClip;  // optimised away
        unsigned long long lTmp1;  // in $a1
        unsigned long long lTmp;  // in $a3
        RwV3d *lpCamPos;  // in $v0
        RwCamera *lpCamera;  // in $a2
        RwV3d lPos;  // at 0x002B9C30
    }
}

// 0x0020C900-0x0020C964 (100 bytes), lines 170-200
// Init__10CSnowGroupFffffff
void CSnowGroup::Init(float lrRandomSeed, float lrWindEffect, float lrFallSpeed, float lrParticleRatio, float lrSize, float lrFarClip)
{
    // param CSnowGroup *this  (in $v0)
    // param float lrRandomSeed  ($sp+0)
    // param float lrWindEffect  ($sp+0)
    // param float lrFallSpeed  ($sp+0)
    // param float lrParticleRatio  ($sp+0)
    // param float lrSize  ($sp+0)
    // param float lrFarClip  ($sp+0)
    {   // 0x0020C900-0x0020C964
    }
}

