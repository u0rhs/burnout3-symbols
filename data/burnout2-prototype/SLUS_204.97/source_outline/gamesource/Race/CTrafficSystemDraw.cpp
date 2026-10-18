// I:\Burnout 2 Code\gamesource\Race\CTrafficSystemDraw.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _trafficShadowCollisionCallback(SRCCollLine *, SRCCollisionTriangle *, void *);  // 0x002517F0
static RwRGBA _trafficColours[16];  // 0x002B9F00
static int _gnNumTrafficVehicles[3];  // 0x002B9F40
u_long128 *_rwDMAPktPtr;  // 0x003109BC
int skyCameraExt;  // 0x00310A70
RwRaster *skyTextureRaster;  // 0x00310A88
void *skyUploadedCode;  // 0x00310AC8
static GsPS2Pipeline *_gpCarPipeline;  // 0x00310FF0
static GsPS2Pipeline *_gpWheelPipeline;  // 0x00310FF4
CGame gGame;  // 0x003186E0
CTrack gTrack;  // 0x0031F280
CRenderer gRenderer;  // 0x00434440
CAsyncLoadManager gAsyncLoadManager;  // 0x00439330
unsigned int ourGlobals[4096];  // 0x004486D0
static PerCarStruct _gaCarStruct[64];  // 0x0048B5C0
static unsigned int _gaunMaterialFlags[4];  // 0x0048C1C0
static ShadowStructure _gShadStruct;  // 0x0048C200
static RwMatrixTag _gWheelMatrices[8][64];  // 0x0048C280
static u_long128 _gWheelTextures[8];  // 0x00494280
static int _gWheelCounters[8];  // 0x00494300
unsigned char gTrafficBuffer[];  // 0x01900000

// ---- functions ----

// 0x002517F0-0x00251880 (144 bytes), lines 1940-1976
// _trafficShadowCollisionCallback__FP11SRCCollLineP20SRCCollisionTrianglePv
static int _trafficShadowCollisionCallback(SRCCollisionTriangle *lpCollTriangle, void *lpData)
{
    // param SRCCollisionTriangle *lpCollTriangle  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x002517F0-0x00251880
        ShadowStructure *lpShadow;  // in $v0
    }
}

// 0x00251880-0x00252D00 (5248 bytes), lines 1263-1920
// RenderTrafficModel__14CTrafficSystemFP15CTrafficVehicleif
void CTrafficSystem::RenderTrafficModel(CTrafficVehicle *lpSourceVehicle, int lnLOD, float lrOpacity)
{
    // param CTrafficSystem *this  (in $v0)
    // param CTrafficVehicle *lpSourceVehicle  (in $s4)
    // param int lnLOD  (in $s6)
    // param float lrOpacity  (optimised away)
    {   // 0x00251880-0x00252D00
        RwV3d lZero;  // $sp+824
        RwMatrixTag lWheelMatrix;  // $sp+752
        float lrRotateVal;  // optimised away
        RwMatrixTag lWheelMatrix;  // $sp+688
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        GsPS2RenderObjectCar *lpObject;  // in $t6
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $t5
        int j;  // in $t4
        RwMatrixTag lBitMatrix;  // $sp+624
        u_long128 ___ltmp;  // in $t1
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t2
        GsPS2RenderObjectCar *lpObject;  // in $t1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $t6
        u_long128 ___ltmp;  // $sp+208
        u_long128 ___ltmp;  // in $v1
        unsigned int raslsb;  // $sp+844
        unsigned int rasmsb;  // $sp+840
        float *lprPass1Specularity;  // $sp+192
        float *lprPass2Intensity;  // $sp+176
        unsigned long long tmp1;  // in $t3
        unsigned long long tmp;  // in $t2
        RwFrame *lpCamFrame;  // in $v1
        RwMatrixTag lTempMatrix;  // $sp+560
        int i;  // in $v0
        RwMatrixTag lMainMatrix;  // $sp+496
        int lbCulled;  // in $v0
        TrafficCarStructure *lpTrafficCarStructure;  // in $s0
        SRCLightProperties lCachedLightProperties;  // $sp+480
        RwMatrixTag bodyRollMatrix;  // $sp+416
        CarSetupDataTag lCarSetupData;  // $sp+288
        u_long128 lMainTex0Registers[3];  // $sp+240
        float lrPass2IntensityN;  // at 0x00311000
        float lrPass2IntensityG;  // at 0x00311008
        signed char init;  // at 0x0031100C
        signed char init;  // at 0x00311004
        float specularPower;  // at 0x00310FF8
        signed char init;  // at 0x00310FFC
    }
}

// 0x00252D00-0x00253DBC (4284 bytes), lines 512-1243
// Draw__14CTrafficSystemFi
int CTrafficSystem::Draw(int PlayerIndex)
{
    // param CTrafficSystem *this  (in $s4)
    // param int PlayerIndex  (in $s3)
    {   // 0x00252D00-0x00253DBC
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        int lnRetVal;  // in $v0
        int lbDone;  // in $s1
        int lnWheelCounter;  // in $s0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $a2
        unsigned long long lTBP;  // in $a2
        unsigned int rasmsb;  // $sp+460
        unsigned int raslsb;  // $sp+456
        unsigned long long cacheTEX0;  // in $a3
        unsigned long long tmp1;  // in $t0
        unsigned long long tmp;  // in $a2
        int lnLOD;  // in $v0
        float lrDist;  // $sp+464
        int lbLightsOn;  // in $v0
        RwV3d cameraPos;  // $sp+432
        RwRGBA *_col;  // in $t4
        RwRGBA *_col;  // in $t3
        RwRGBA *_col;  // in $t2
        RwRGBA *_col;  // in $t1
        float col2;  // optimised away
        float col1;  // optimised away
        RwV3d vector;  // $sp+416
        float distanceTop;  // optimised away
        float distanceCentre;  // optimised away
        SRCCollLine line;  // $sp+352
        unsigned int oldTest1;  // $sp+452
        unsigned int oldAlpha1;  // $sp+448
        int lbIsVisible;  // in $v0
        float lrShadowOffset;  // optimised away
        float lrOpacity;  // $sp+464
        unsigned short laIndices[6];  // $sp+400
        RxObjSpace3DVertex laShadowVerts[4];  // $sp+208
        CTrafficVehicle *lpVehicle;  // in $s0
        int bZWrite;  // $sp+444
        RwSphere lLocalSphere;  // $sp+192
        int lnNumPositions;  // in $s6
        RwV3d lDist;  // $sp+384
        int j;  // in $s7
        int i;  // in $a1
    }
}

// 0x00253DC0-0x00253E14 (84 bytes), lines 377-388
// Shutdown__14CTrafficSystemFv
void CTrafficSystem::Shutdown()
{
    // param CTrafficSystem *this  (in $v0)
    {   // 0x00253DC0-0x00253E14
        int i;  // in $a1
    }
}

// 0x00253E20-0x00253FF0 (464 bytes), lines 308-351
// FixUpTRA__14CTrafficSystemFv
void CTrafficSystem::FixUpTRA()
{
    // param CTrafficSystem *this  (in $v0)
    {   // 0x00253E20-0x00253FF0
        TrafficCarStructure *lpVehicle;  // in $a1
        int i;  // in $t0
    }
}

// 0x00253FF0-0x0025414C (348 bytes), lines 249-296
// Setup__14CTrafficSystemFPc19ETrafficSystemTypes
void CTrafficSystem::Setup(ETrafficSystemTypes leTrafficSystemType)
{
    // param CTrafficSystem *this  (in $s0)
    // param ETrafficSystemTypes leTrafficSystemType  (in $s1)
    {   // 0x00253FF0-0x0025414C
        RwTexture *lpShadowTexture;  // in $v0
    }
}

// 0x00254150-0x002541BC (108 bytes), lines 209-226
// Init__14CTrafficSystemFv
void CTrafficSystem::Init()
{
    // param CTrafficSystem *this  (in $v0)
    {   // 0x00254150-0x002541BC
    }
}

