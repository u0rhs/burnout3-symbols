// I:\Burnout 2 Code\gamesource\Render\CSparks.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
long sparkrender;  // 0x00298EE0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyTest_1;  // 0x00310A08
long skyClamp_1;  // 0x00310A20
long skyAlpha_1;  // 0x00310A30
RwRaster *skyTextureRaster;  // 0x00310A88
void *skyUploadedCode;  // 0x00310AC8
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 vu1DataXYZScale;  // 0x0044DC10
u_long128 vu1DataXYZShift;  // 0x0044DC20
u_long128 vu1DataOffset3D;  // 0x0044DC30

// ---- functions ----

// 0x00269640-0x00269AA8 (1128 bytes), lines 772-851
// DoPropSparks__7CSparksFP12CPropPhysicsPC5RwV3dPC5RwV3dff
void CSparks::DoPropSparks(CPropPhysics *lpProp, RwV3d *lpPos, RwV3d *lpNormal, float lrHeight, float lrScalar)
{
    // param CSparks *this  (in $s3)
    // param CPropPhysics *lpProp  (in $v0)
    // param RwV3d *lpPos  (in $s2)
    // param RwV3d *lpNormal  (in $s1)
    // param float lrHeight  (optimised away)
    // param float lrScalar  ($sp+128)
    {   // 0x00269640-0x00269AA8
        float lrNumSparks;  // optimised away
        float _result;  // optimised away
        float lrLinearVel;  // optimised away
        float lrDot;  // optimised away
        float lrVelScale;  // optimised away
        int lnRand;  // in $v0
        float lrSpawnTime;  // optimised away
        int lnNumSparks;  // in $s0
        float krPropVelScalar;  // at 0x003110C4
        float krPropMinVel;  // at 0x003110BC
        signed char init;  // at 0x003110C8
        signed char init;  // at 0x003110C0
    }
}

// 0x00269AB0-0x00269D10 (608 bytes), lines 728-752
// DoTrafficCarSparks__7CSparksFP15CTrafficVehiclePC5RwV3dPC5RwV3dff
void CSparks::DoTrafficCarSparks(RwV3d *lpPos, float lrHeight, float lrScalar)
{
    // param CSparks *this  (in $s2)
    // param RwV3d *lpPos  (in $s1)
    // param float lrHeight  (optimised away)
    // param float lrScalar  ($sp+80)
    {   // 0x00269AB0-0x00269D10
        int lnRand;  // in $v0
        float lrSpawnTime;  // optimised away
        int lnNumSparks;  // in $s0
    }
}

// 0x00269D10-0x0026A190 (1152 bytes), lines 628-708
// DoRaceCarSparks__7CSparksFP8CRaceCarPC5RwV3dPC5RwV3dff
void CSparks::DoRaceCarSparks(CRaceCar *lpCar, RwV3d *lpPos, RwV3d *lpNormal, float lrHeight, float lrScalar)
{
    // param CSparks *this  (in $s3)
    // param CRaceCar *lpCar  (in $v0)
    // param RwV3d *lpPos  (in $s2)
    // param RwV3d *lpNormal  (in $s1)
    // param float lrHeight  (optimised away)
    // param float lrScalar  ($sp+112)
    {   // 0x00269D10-0x0026A190
        float lrNumSparks;  // optimised away
        float _result;  // optimised away
        float lrTimestep;  // $sp+112
        float lrLinearVel;  // optimised away
        float lrDot;  // optimised away
        float lrVelScale;  // optimised away
        int lnRand;  // in $v0
        float lrSpawnTime;  // optimised away
        int lnNumSparks;  // in $v0
        float krCarVelScalar;  // at 0x003110B4
        float krCarMinVel;  // at 0x003110AC
        signed char init;  // at 0x003110B8
        signed char init;  // at 0x003110B0
    }
}

// 0x0026A190-0x0026A5F4 (1124 bytes), lines 300-608
// Render__7CSparksFv
void CSparks::Render()
{
    // param CSparks *this  (in $s4)
    {   // 0x0026A190-0x0026A5F4
        u_long128 ___ltmp;  // in $v1
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
        float lrRecipD;  // optimised away
        float lrFarClip;  // optimised away
        float lrNearClip;  // optimised away
        _packL lPack;  // $sp+112
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        void *lpVUCode;  // in $a2
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        RwMatrixTag *lpViewMatrix;  // in $s1
        RwCamera *lpCamera;  // in $s0
        unsigned long long lTmp1;  // in $t2
        unsigned long long lTmp;  // in $v1
    }
}

// 0x0026A600-0x0026A608 (8 bytes), lines 284-284
// EndUpdate__7CSparksFv
void CSparks::EndUpdate()
{
    {   // 0x0026A600-0x0026A608
    }
}

// 0x0026A610-0x0026A640 (48 bytes), lines 256-263
// BeginUpdate__7CSparksFv
void CSparks::BeginUpdate()
{
    // param CSparks *this  (in $s0)
    {   // 0x0026A610-0x0026A640
    }
}

// 0x0026A640-0x0026A6C0 (128 bytes), lines 225-239
// Reset__7CSparksFv
int CSparks::Reset()
{
    // param CSparks *this  (in $v0)
    {   // 0x0026A640-0x0026A6C0
        int lnCount;  // in $a1
    }
}

// 0x0026A6C0-0x0026A6C8 (8 bytes), lines 192-192
// Setup__7CSparksFv
int CSparks::Setup()
{
    {   // 0x0026A6C0-0x0026A6C8
    }
}

// 0x0026A6D0-0x0026A838 (360 bytes), lines 135-150
// Init__7CSparksFv
void CSparks::Init()
{
    // param CSparks *this  (in $s0)
    {   // 0x0026A6D0-0x0026A838
        RwTexture *lpTexture;  // in $v0
    }
}

