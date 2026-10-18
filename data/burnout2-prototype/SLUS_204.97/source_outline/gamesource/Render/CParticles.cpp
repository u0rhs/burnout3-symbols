// I:\Burnout 2 Code\gamesource\Render\CParticles.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static B2ParticleBatchParamsTag _gaBatchParams[14];  // 0x002CFBA0
static B2ParticleTypeParamsTag _gaTypeParams[12];  // 0x002D0380
float CTimer::mrGameTimestepSeconds;  // 0x00310898
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyTest_1;  // 0x00310A08
long skyAlpha_1;  // 0x00310A30
RwRaster *skyTextureRaster;  // 0x00310A88
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001F7D70-0x001F8110 (928 bytes), lines 2093-2161
// DoGlass__16CParticleManagerFP15CTrafficVehicle
void CParticleManager::DoGlass(CTrafficVehicle *lpTraf)
{
    // param CParticleManager *this  (in $s5)
    // param CTrafficVehicle *lpTraf  (in $s4)
    {   // 0x001F7D70-0x001F8110
        float lrTemp;  // optimised away
        float lrIntensity;  // optimised away
        float lrRotVel;  // optimised away
        float lrOutwardsVelocity;  // optimised away
        float lrVelocityInheritance;  // optimised away
        int lnRand;  // in $v0
        float lrSpawnTime;  // $sp+208
        CParticles *lpParticles;  // in $s3
        RwV3d lBaseNormal;  // $sp+192
        RwV3d lBasePos;  // $sp+176
        int lnCount;  // in $s2
        int lnPoint;  // in $s1
        TrafficPoint *lpPoint;  // in $s0
        TrafficPointOffset *lpOffset;  // in $s6
    }
}

// 0x001F8110-0x001F8530 (1056 bytes), lines 2020-2088
// DoGlass__16CParticleManagerFP8CRaceCar
void CParticleManager::DoGlass(CRaceCar *lpCar)
{
    // param CParticleManager *this  (in $s5)
    // param CRaceCar *lpCar  (in $s4)
    {   // 0x001F8110-0x001F8530
        float lrTemp;  // optimised away
        float lrIntensity;  // optimised away
        float lrRotVel;  // optimised away
        float lrOutwardsVelocity;  // optimised away
        float lrVelocityInheritance;  // optimised away
        int lnRand;  // in $v0
        float lrSpawnTime;  // $sp+240
        CParticles *lpParticles;  // in $s3
        RwV3d lBaseNormal;  // $sp+224
        RwV3d lBasePos;  // $sp+208
        int lnCount;  // in $s2
        int lnPoint;  // in $s1
        RwMatrixTag *lpCarMatrix;  // in $s6
        RaceCarPoint *lpPoint;  // in $s0
        RaceCarPointOffset *lpOffset;  // in $s7
    }
}

// 0x001F8530-0x001F8774 (580 bytes), lines 1966-2004
// DoEnginePop__16CParticleManagerFP8CRaceCar
void CParticleManager::DoEnginePop(CRaceCar *lpCar)
{
    // param CParticleManager *this  (in $s2)
    // param CRaceCar *lpCar  (in $s5)
    {   // 0x001F8530-0x001F8774
        float lrSpawnTime;  // $sp+192
        CParticles *lpParticles;  // in $s4
        RwV3d lNormal;  // $sp+176
        RwV3d lPos;  // $sp+160
        int lnCount;  // in $s3
        RwMatrixTag *lpCarMatrix;  // in $s2
        RaceCarPoint *lpPoint;  // in $s1
        RaceCarPointOffset *lpOffset;  // in $s0
    }
}

// 0x001F8780-0x001F8D78 (1528 bytes), lines 1832-1950
// SpawnDebris__16CParticleManagerFPC5RwV3dPC5RwV3dffff
void CParticleManager::SpawnDebris(RwV3d *lpPos, RwV3d *lpDirection, float lrForce, float lrRed, float lrGreen, float lrBlue)
{
    // param CParticleManager *this  (in $s3)
    // param RwV3d *lpPos  (in $s2)
    // param RwV3d *lpDirection  (in $v0)
    // param float lrForce  ($sp+128)
    // param float lrRed  (optimised away)
    // param float lrGreen  (optimised away)
    // param float lrBlue  (optimised away)
    {   // 0x001F8780-0x001F8D78
        float lrVelocitySpread;  // optimised away
        float lrSpawnCount;  // optimised away
        float lrScale;  // optimised away
        float lrAngVel;  // optimised away
        float lrLighting;  // $sp+128
        unsigned int lnRandom;  // in $v0
        float lrSpawnTime;  // optimised away
        float lrNumParticles;  // optimised away
        CParticles *lpParticles;  // in $s1
        int lnCount;  // in $s0
    }
}

// 0x001F8D80-0x001F91A0 (1056 bytes), lines 1679-1811
// SpawnParticlesAlongLine__16CParticleManagerFQ216CParticleManager13EParticleTypePC5RwV3dPC5RwV3dffff
void CParticleManager::SpawnParticlesAlongLine(EParticleType leType, RwV3d *lpPos, RwV3d *lpDirection, float lrLength, float lrRed, float lrGreen, float lrBlue)
{
    // param CParticleManager *this  (in $s0)
    // param EParticleType leType  (in $s2)
    // param RwV3d *lpPos  (in $s5)
    // param RwV3d *lpDirection  (in $s4)
    // param float lrLength  (optimised away)
    // param float lrRed  (optimised away)
    // param float lrGreen  (optimised away)
    // param float lrBlue  (optimised away)
    {   // 0x001F8D80-0x001F91A0
        float _result;  // optimised away
        float lrTemp;  // optimised away
        float lrTimeStep;  // $sp+168
        float lrSpawnTime;  // optimised away
        float lrAngVel;  // optimised away
        float lrScale;  // optimised away
        int lnRandom;  // in $v0
        float lrLighting;  // optimised away
        float lrStep;  // optimised away
        float lrBaseVel;  // optimised away
        int lnNumParticles;  // in $s3
        float lrFirstOffset;  // optimised away
        CParticles *lpParticles;  // in $s2
        EParticleBatch leBatch;  // in $v1
        B2ParticleTypeParamsTag *lpParams;  // in $s1
    }
}

// 0x001F91A0-0x001F9354 (436 bytes), lines 1531-1657
// Render__16CParticleManagerFv
void CParticleManager::Render()
{
    // param CParticleManager *this  (in $s2)
    {   // 0x001F91A0-0x001F9354
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        unsigned long long lTmp2;  // in $a0
        unsigned long long lTmp;  // in $v1
        float lrCurrentTime;  // optimised away
        CParticles *lpParticles;  // in $s4
        int lnCount;  // in $s3
    }
}

// 0x001F9360-0x001F93B4 (84 bytes), lines 1505-1515
// EndUpdate__16CParticleManagerFv
void CParticleManager::EndUpdate()
{
    // param CParticleManager *this  (in $s0)
    {   // 0x001F9360-0x001F93B4
        float lrCurrentTime;  // $sp+32
        int lnCount;  // in $a0
    }
}

// 0x001F93C0-0x001F9464 (164 bytes), lines 1473-1489
// BeginUpdate__16CParticleManagerFv
void CParticleManager::BeginUpdate()
{
    // param CParticleManager *this  (in $s1)
    {   // 0x001F93C0-0x001F9464
        float lrTimestep;  // optimised away
        int lnCount;  // in $s0
    }
}

// 0x001F9470-0x001F956C (252 bytes), lines 1436-1457
// Reset__16CParticleManagerFv
int CParticleManager::Reset()
{
    // param CParticleManager *this  (in $s2)
    {   // 0x001F9470-0x001F956C
        int lnCount;  // in $v1
    }
}

// 0x001F9570-0x001F95F0 (128 bytes), lines 1388-1397
// Setup__16CParticleManagerFv
int CParticleManager::Setup()
{
    // param CParticleManager *this  (in $s1)
    {   // 0x001F9570-0x001F95F0
        int lnCount;  // in $s0
    }
}

// 0x001F95F0-0x001F9668 (120 bytes), lines 1339-1349
// Init__16CParticleManagerFv
void CParticleManager::Init()
{
    // param CParticleManager *this  (in $s1)
    {   // 0x001F95F0-0x001F9668
        int lnCount;  // in $s0
    }
}

// 0x001F9670-0x001F988C (540 bytes), lines 1127-1269
// Render__10CParticlesFP13GsPS2Pipeline
void CParticles::Render(GsPS2Pipeline *lpPipeline)
{
    // param CParticles *this  (in $s1)
    // param GsPS2Pipeline *lpPipeline  (in $s0)
    {   // 0x001F9670-0x001F988C
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        _packL pack;  // $sp+80
        unsigned long long tmp1;  // in $a0
        unsigned long long tmp;  // in $a3
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        unsigned long long lTmp;  // in $v1
        RwCamera *lpCamera;  // in $s2
    }
}

// 0x001F9890-0x001F9A78 (488 bytes), lines 1046-1111
// Update__10CParticlesFf
void CParticles::Update(float lrTimestep)
{
    // param CParticles *this  (in $v0)
    // param float lrTimestep  ($sp+0)
    {   // 0x001F9890-0x001F9A78
        float lrTargetLifeTime;  // optimised away
        int lnLookAheadParticle;  // in $a3
    }
}

// 0x001F9A80-0x001F9C80 (512 bytes), lines 810-932
// Init__10CParticlesFP13GsPS2PipelinePC24B2ParticleBatchParamsTag
void CParticles::Init(GsPS2Pipeline *lpPipeline, B2ParticleBatchParamsTag *lpParams)
{
    // param CParticles *this  (in $s2)
    // param GsPS2Pipeline *lpPipeline  (in $a1)
    // param B2ParticleBatchParamsTag *lpParams  (in $s1)
    {   // 0x001F9A80-0x001F9C80
        u_long128 ___ltmp;  // in $v1
        unsigned long long lTmp;  // in $s0
    }
}

