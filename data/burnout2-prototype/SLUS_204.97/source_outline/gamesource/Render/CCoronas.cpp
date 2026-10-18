// I:\Burnout 2 Code\gamesource\Render\CCoronas.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
long coronarender;  // 0x00296BE0
long coronareflectionsrender;  // 0x002986A0
static B2CoronaTypeParamsTag _gaCoronaTypeParams[5];  // 0x002B9B90
static B2CoronaDescriptionTag kCoronaDescRaceCarHeadlight;  // 0x002D2130
static B2CoronaDescriptionTag kCoronaDescRaceCarRearLight;  // 0x002D2170
static B2CoronaDescriptionTag kCoronaDescRaceCarBrakeLight;  // 0x002D21B0
static B2CoronaDescriptionTag kCoronaDescRaceCarReverseLight;  // 0x002D21F0
static B2CoronaDescriptionTag kCoronaDescRaceCarIndicator;  // 0x002D2230
static B2CoronaDescriptionTag kCoronaDescRaceCarRunningLight;  // 0x002D2270
static B2CoronaDescriptionTag kCoronaDescRaceCarBluesAndTwosRed;  // 0x002D22B0
static B2CoronaDescriptionTag kCoronaDescRaceCarBluesAndTwosBlue;  // 0x002D22F0
static B2CoronaDescriptionTag kCoronaDescRaceCarStrobe;  // 0x002D2330
static B2CoronaDescriptionTag kCoronaDescRaceCarKojakLight;  // 0x002D2370
static B2CoronaDescriptionTag kCoronaDescTrafficCarHeadlight;  // 0x002D23B0
static B2CoronaDescriptionTag kCoronaDescTrafficCarHeadlightFullBeam;  // 0x002D23F0
static B2CoronaDescriptionTag kCoronaDescTrafficCarRearLight;  // 0x002D2430
static B2CoronaDescriptionTag kCoronaDescTrafficCarBrakeLight;  // 0x002D2470
static B2CoronaDescriptionTag kCoronaDescTrafficCarIndicator;  // 0x002D24B0
static B2CoronaDescriptionTag kCoronaDescTrafficCarRunningLight;  // 0x002D24F0
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyTest_1;  // 0x00310A08
long skyAlpha_1;  // 0x00310A30
RwRaster *skyTextureRaster;  // 0x00310A88
void *skyUploadedCode;  // 0x00310AC8
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CRenderer gRenderer;  // 0x00434440
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 vu1DataXYZScale;  // 0x0044DC10
u_long128 vu1DataXYZShift;  // 0x0044DC20
u_long128 vu1DataOffset3D;  // 0x0044DC30

// ---- functions ----

// 0x002027B0-0x002028B8 (264 bytes), lines 1926-1983
// AddWorldCoronas__14CCoronaManagerF17EInGameCoronaTypePC11B2CoronaTagi
void CCoronaManager::AddWorldCoronas(EInGameCoronaType leType, B2CoronaTag *lpaCoronas, int lnNumCoronas)
{
    // param CCoronaManager *this  (in $v0)
    // param EInGameCoronaType leType  (in $v0)
    // param B2CoronaTag *lpaCoronas  (in $v0)
    // param int lnNumCoronas  (in $v0)
    {   // 0x002027B0-0x002028B8
        B2CoronaTag *lpLastDestCorona;  // in $a0
        B2CoronaTag *lpDestCorona;  // in $t1
        CCoronas *lpCoronas;  // in $t0
    }
}

// 0x002028C0-0x00202A60 (416 bytes), lines 1836-1902
// AddTrafficLights__14CCoronaManagerFPC13CTrafficLighti
void CCoronaManager::AddTrafficLights(CTrafficLight *lpTrafficLights, int lnNumTrafficLights)
{
    // param CCoronaManager *this  (in $v0)
    // param CTrafficLight *lpTrafficLights  (in $v0)
    // param int lnNumTrafficLights  (in $v0)
    {   // 0x002028C0-0x00202A60
        float *lprSpacing;  // in $t7
        RwV3d *lpDirection;  // in $t6
        RwV3d *lpPosition;  // in $t5
        float lrIntensity;  // $sp+0
        int lnCount;  // in $v0
        RwV3d *lpCamAt;  // in $t4
    }
}

// 0x00202A60-0x00202FCC (1388 bytes), lines 1546-1694
// AddTrafficVehicleCoronas__14CCoronaManagerFP15CTrafficVehicle
void CCoronaManager::AddTrafficVehicleCoronas(CTrafficVehicle *lpTraf)
{
    // param CCoronaManager *this  (in $s6)
    // param CTrafficVehicle *lpTraf  (in $s5)
    {   // 0x00202A60-0x00202FCC
        TrafficPoint *lpPoint;  // in $s2
        int lnType;  // in $s7
        int lnNumTypes;  // in $s1
        B2CoronaDescriptionTag *lapDescriptions[10];  // $sp+336
        TrafficPointOffset *lapOffsets[10];  // $sp+288
        int lbDirectional;  // $sp+224
        int lbUsePreset;  // $sp+208
        int lbReflections;  // in $fp
        float lrRoadHeight;  // optimised away
        float lrReflectionIntensity;  // optimised away
        float lrDot;  // $sp+400
        RwV3d lNormal;  // $sp+384
        int lnCount;  // $sp+192
        TrafficCarStructure *lpStructure;  // in $s0
        RwV3d *lpCamAt;  // $sp+176
        RwMatrixTag *lpCamMat;  // in $v1
    }
}

// 0x00202FD0-0x0020378C (1980 bytes), lines 1316-1529
// AddRaceCarCoronas__14CCoronaManagerFP8CRaceCar
void CCoronaManager::AddRaceCarCoronas(CRaceCar *lpCar)
{
    // param CCoronaManager *this  (in $s6)
    // param CRaceCar *lpCar  (in $s4)
    {   // 0x00202FD0-0x0020378C
        float lrFlashPhase;  // optimised away
        float lrFlashFrequency;  // optimised away
        RaceCarPoint *lpPoint;  // in $s1
        int lnType;  // in $s5
        int lnNumTypes;  // in $s0
        B2CoronaDescriptionTag *lapDescriptions[11];  // $sp+304
        unsigned char lanCounts[11];  // $sp+384
        unsigned char lanOffsets[11];  // $sp+368
        int lbDirectional;  // in $fp
        int lbUsePreset;  // $sp+256
        int lbReflections;  // $sp+240
        int lbWantReflections;  // $sp+224
        float lrRoadHeight;  // optimised away
        float lrReflectionIntensity;  // optimised away
        float lrDot;  // $sp+400
        RwV3d lNormal;  // $sp+352
        int lnCount;  // $sp+208
        RwMatrixTag *lpCarMatrix;  // in $s7
        RwV3d *lpCamAt;  // $sp+192
    }
}

// 0x00203790-0x00203D50 (1472 bytes), lines 1041-1298
// Render__14CCoronaManagerFi
void CCoronaManager::Render(int lbPreWorld)
{
    // param CCoronaManager *this  (in $s4)
    // param int lbPreWorld  (in $s6)
    {   // 0x00203790-0x00203D50
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        _packL lPack;  // $sp+160
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        void *lpVUCode;  // in $a1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $s2
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        RwMatrixTag *lpViewMatrix;  // in $s1
        RwCamera *lpCamera;  // in $s0
        unsigned long long lTmp2;  // in $v0
        unsigned long long lTmp;  // in $a0
    }
}

// 0x00203D50-0x00203DE8 (152 bytes), lines 1020-1025
// EndUpdate__14CCoronaManagerFv
void CCoronaManager::EndUpdate()
{
    // param CCoronaManager *this  (in $v0)
    {   // 0x00203D50-0x00203DE8
        int lnCount;  // in $a2
    }
}

// 0x00203DF0-0x00203E44 (84 bytes), lines 996-1001
// BeginUpdate__14CCoronaManagerFv
void CCoronaManager::BeginUpdate()
{
    // param CCoronaManager *this  (in $v0)
    {   // 0x00203DF0-0x00203E44
        int lnCount;  // in $a2
    }
}

// 0x00203E50-0x00203EA4 (84 bytes), lines 968-977
// Reset__14CCoronaManagerFv
int CCoronaManager::Reset()
{
    // param CCoronaManager *this  (in $s1)
    {   // 0x00203E50-0x00203EA4
        int lnCount;  // in $s0
    }
}

// 0x00203EB0-0x00203F30 (128 bytes), lines 920-935
// Setup__14CCoronaManagerFv
int CCoronaManager::Setup()
{
    // param CCoronaManager *this  (in $s1)
    {   // 0x00203EB0-0x00203F30
        int lnCount;  // in $s0
        RwTexture *lpTexture;  // in $v0
    }
}

// 0x00203F30-0x00203F98 (104 bytes), lines 874-881
// Init__14CCoronaManagerFv
void CCoronaManager::Init()
{
    // param CCoronaManager *this  (in $s1)
    {   // 0x00203F30-0x00203F98
        int lnCount;  // in $s0
    }
}

// 0x00203FA0-0x00204028 (136 bytes), lines 692-712
// Reset__8CCoronasFv
void CCoronas::Reset()
{
    // param CCoronas *this  (in $v0)
    {   // 0x00203FA0-0x00204028
        int lnCount;  // in $a2
    }
}

// 0x00204030-0x002042DC (684 bytes), lines 511-642
// Create__8CCoronasFPC21B2CoronaTypeParamsTag
void CCoronas::Create(B2CoronaTypeParamsTag *lpParams)
{
    // param CCoronas *this  (in $s3)
    // param B2CoronaTypeParamsTag *lpParams  (in $v0)
    {   // 0x00204030-0x002042DC
        int lnBatch;  // in $a3
        int lnBuffer;  // in $t0
        unsigned long long *lpDMAData;  // in $a2
        int lnAllocSize;  // in $v0
        int lnDMADataNumQWAligned;  // in $s5
        int lnDMADataNumQW;  // in $t1
        int lnNumBatchesDynamic;  // in $s4
        int lnNumBatchesStatic;  // in $s0
    }
}

