// I:\Burnout 2 Code\gamesource\Render\CRain.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
long rainrender;  // 0x00297DE0
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

// 0x0025D630-0x0025D68C (92 bytes), lines 761-768
// SetDensity__5CRainFf
void CRain::SetDensity(float lrDensity)
{
    // param CRain *this  (in $v0)
    // param float lrDensity  ($sp+0)
    {   // 0x0025D630-0x0025D68C
        int lnNumParticles;  // in $a2
        int lnCount;  // in $a1
    }
}

// 0x0025D690-0x0025D984 (756 bytes), lines 580-749
// Render__5CRainFv
void CRain::Render()
{
    // param CRain *this  (in $s4)
    {   // 0x0025D690-0x0025D984
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
        RwV3d lDiff;  // $sp+128
        unsigned long long lTmp;  // in $v1
        float lrMajorAxis;  // $sp+144
        RwV3d *lpCamAt;  // in $v0
        RwMatrixTag *lpCamLTM;  // in $v0
        int lnViewSwitch;  // in $s1
        int lnCount;  // in $s0
    }
}

// 0x0025D990-0x0025DA6C (220 bytes), lines 569-575
// Update__5CRainFv
void CRain::Update()
{
    // param CRain *this  (in $v0)
    {   // 0x0025D990-0x0025DA6C
        int lnCount;  // in $a3
        int mbUpdate;  // at 0x00311010
        signed char init;  // at 0x00311014
    }
}

// 0x0025DA70-0x0025DB1C (172 bytes), lines 543-561
// Reset__5CRainFv
int CRain::Reset()
{
    // param CRain *this  (in $s0)
    {   // 0x0025DA70-0x0025DB1C
        int lnCount;  // in $a1
        RwTexture *lpTexture;  // in $v0
    }
}

// 0x0025DB20-0x0025DB40 (32 bytes), lines 520-526
// Setup__5CRainFv
int CRain::Setup()
{
    {   // 0x0025DB20-0x0025DB40
        int lnCount;  // in $v1
    }
}

// 0x0025DB40-0x0025DBBC (124 bytes), lines 491-500
// Init__5CRainFv
void CRain::Init()
{
    // param CRain *this  (in $s0)
    {   // 0x0025DB40-0x0025DBBC
    }
}

// 0x0025DBC0-0x0025E11C (1372 bytes), lines 343-469
// Render__10CRainGroupFiPC5RwV3d
void CRainGroup::Render(int lnViewSwitch, RwV3d *lpStreak)
{
    // param CRainGroup *this  (in $s1)
    // param int lnViewSwitch  (in $v0)
    // param RwV3d *lpStreak  (in $v0)
    {   // 0x0025DBC0-0x0025E11C
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
        RwCamera *lpCamera;  // in $v1
        float lrDiffScale;  // at 0x00311020
        float lrOffScale;  // at 0x00311018
        signed char init;  // at 0x00311024
        signed char init;  // at 0x0031101C
        RwV3d lPos;  // at 0x002BA070
    }
}

// 0x0025E120-0x0025E1B4 (148 bytes), lines 165-210
// Init__10CRainGroupFfff
void CRainGroup::Init(float lrRandomSeed, float lrWindEffect, float lrFallSpeed)
{
    // param CRainGroup *this  (in $v0)
    // param float lrRandomSeed  ($sp+0)
    // param float lrWindEffect  ($sp+0)
    // param float lrFallSpeed  ($sp+0)
    {   // 0x0025E120-0x0025E1B4
    }
}

