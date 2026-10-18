// I:\Burnout 2 Code\gamesource\Race\CRaceCar.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gaacCarNames[22];
int _raceCarHeightAboveGroundCallback(SRCCollLine *, SRCCollisionTriangle *, void *);  // 0x0023B360
unsigned char *gpBuffers[4];  // 0x002B9CB0
static RwV3d kXAxis;  // 0x002D5CA8
static RwV3d kZAxis;  // 0x002D5CB8
static RwV3d kZeroVector;  // 0x002D5CC8
/* vtable */ void *CRaceCar::__vtable[];  // 0x0030F8F0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
u_long128 *_rwDMAPktPtr;  // 0x003109BC
int skyCameraExt;  // 0x00310A70
int skyRasterExt;  // 0x00310A74
void *skyUploadedCode;  // 0x00310AC8
static GsPS2Pipeline *lpCarPipeline;  // 0x00310F08
static GsPS2Pipeline *lpCarShadowPipeline;  // 0x00310F0C
static GsPS2Pipeline *lpWheelPipeline;  // 0x00310F10
static GsPS2Pipeline *lpWheelShadowPipeline;  // 0x00310F14
static float krMinPoliceCrashTime;  // 0x00310F18
static float krMaxPoliceCrashTime;  // 0x00310F1C
static float krMinSuspectCrashTime;  // 0x00310F20
static float krMaxSuspectCrashTime;  // 0x00310F24
float kr2PSuspectMinDistAhead;  // 0x00310F28
float kr2PSuspectMaxDistAhead;  // 0x00310F2C
float kr2PPoliceMinDistBehind;  // 0x00310F30
float kr2PPoliceMaxDistBehind;  // 0x00310F34
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
COnePlayerCRASH gOnePlayerCRASH;  // 0x003A7840
CTurnBasedCRASH gTurnBasedCRASH;  // 0x003A9440
CDebugManager gDebugManager;  // 0x003B2D30
CRenderer gRenderer;  // 0x00434440
CAsyncLoadManager gAsyncLoadManager;  // 0x00439330
CInput gInput;  // 0x00439880
unsigned int ourGlobals[4096];  // 0x004486D0
CAIProfile CAICar::_mAIProfile[22];  // 0x00458C80
static unsigned int _gaunMaterialFlags[4];  // 0x004866C0
float kaarTotalChampionshipPointsWanted[22][4];  // 0x004866D0
float kaarBoostStart[22][7][4];  // 0x00486830

// ---- functions ----

// 0x00237750-0x002377B8 (104 bytes), lines 3798-3812
// InterpolateReal__Ffffff
float InterpolateReal(float lrMinInput, float lrMaxInput, float lrMinOutput, float lrMaxOutput, float lrInput)
{
    // param float lrMinInput  ($sp+0)
    // param float lrMaxInput  ($sp+0)
    // param float lrMinOutput  ($sp+0)
    // param float lrMaxOutput  ($sp+0)
    // param float lrInput  ($sp+0)
    {   // 0x00237750-0x002377B8
        float lrFrac;  // $sp+0
    }
}

// 0x002377C0-0x00237990 (464 bytes), lines 3710-3771
// CalcDistFromPlayerCars__8CRaceCarFv
void CRaceCar::CalcDistFromPlayerCars()
{
    // param CRaceCar *this  (in $s6)
    {   // 0x002377C0-0x00237990
        float lrTrackLength;  // $sp+144
        int lnCount;  // in $s2
        int lnPlayerEffectiveLapNo;  // in $s1
        int lnUsEffectiveLapNo;  // in $s0
        float lrLapDist;  // optimised away
        float lrPlayerSegOffset;  // optimised away
        float lrUsSegOffset;  // optimised away
        float lrSegDist;  // $sp+144
    }
}

// 0x00237990-0x002383D8 (2632 bytes), lines 3247-3670
// ResetAfterCrash__8CRaceCarFi
int CRaceCar::ResetAfterCrash(int nodesAhead)
{
    // param CRaceCar *this  (in $s6)
    // param int nodesAhead  (in $v0)
    {   // 0x00237990-0x002383D8
        RwMatrixTag *lpCarMatrix;  // in $v1
        int lnResult;  // in $v0
        int lnLastNode;  // in $s0
        ELaneDirection leDirectionMoved;  // in $s3
        int lbFound;  // in $s7
        RwMatrixTag *lpCarMatrix;  // in $s2
        AISegmentData *lpAISegmentData;  // in $s1
        int lnSegmentIndex;  // in $s0
        CLane *lpOuterAILane;  // in $v0
        int lnCount;  // in $a0
    }
}

// 0x002383E0-0x002383F4 (20 bytes), lines 3226-3227
// GetTransparency__8CRaceCarFv
float CRaceCar::GetTransparency()
{
    // param CRaceCar *this  (in $v0)
    {   // 0x002383E0-0x002383F4
    }
}

// 0x00238400-0x00238418 (24 bytes), lines 3208-3209
// SetTransparency__8CRaceCarFf
void CRaceCar::SetTransparency(float lrAlpha)
{
    // param CRaceCar *this  (in $v0)
    // param float lrAlpha  ($sp+0)
    {   // 0x00238400-0x00238418
    }
}

// 0x00238420-0x00238648 (552 bytes), lines 3146-3186
// GetKojackMatrix__8CRaceCarFP11RwMatrixTag
int CRaceCar::GetKojackMatrix(RwMatrixTag *lpFillInThisMatrix)
{
    // param CRaceCar *this  (in $s2)
    // param RwMatrixTag *lpFillInThisMatrix  (in $s1)
    {   // 0x00238420-0x00238648
        RwMatrixTag lKojackMatrix;  // $sp+64
    }
}

// 0x00238650-0x00238AC0 (1136 bytes), lines 3122-3128
// SetGameOver__8CRaceCarFv
void CRaceCar::SetGameOver()
{
    // param CRaceCar *this  (in $v0)
    {   // 0x00238650-0x00238AC0
    }
}

// 0x00238AC0-0x00238F24 (1124 bytes), lines 3095-3105
// SetFinished__8CRaceCarFv
void CRaceCar::SetFinished()
{
    // param CRaceCar *this  (in $v0)
    {   // 0x00238AC0-0x00238F24
    }
}

// 0x00238F30-0x00239170 (576 bytes), lines 3045-3078
// FatalCollisionEnd__8CRaceCarFv
void CRaceCar::FatalCollisionEnd()
{
    // param CRaceCar *this  (in $s0)
    {   // 0x00238F30-0x00239170
        int i;  // in $v1
    }
}

// 0x00239170-0x00239188 (24 bytes), lines 3025-3025
// FatalCollisionUpdate__8CRaceCarFv
void CRaceCar::FatalCollisionUpdate()
{
    // param CRaceCar *this  (in $v0)
    {   // 0x00239170-0x00239188
    }
}

// 0x00239190-0x002393E4 (596 bytes), lines 2916-3007
// FatalCollisionStart__8CRaceCarFv
void CRaceCar::FatalCollisionStart()
{
    // param CRaceCar *this  (in $s0)
    {   // 0x00239190-0x002393E4
        float lrDistPoliceToSuspect;  // optimised away
    }
}

// 0x002393F0-0x0023A5DC (4588 bytes), lines 2141-2895
// Draw__8CRaceCarFv
int CRaceCar::Draw()
{
    // param CRaceCar *this  (in $s4)
    {   // 0x002393F0-0x0023A5DC
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $v1
        RwMatrixTag lWheelMatrix;  // $sp+640
        int llFix;  // in $s3
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        GsPS2RenderObjectCar *lpObject;  // in $t3
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $t6
        int j;  // in $t5
        int lnNumBits;  // in $s5
        RwMatrixTag lBitMatrix;  // $sp+576
        int lnNumQWRequired;  // $sp+240
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        float lrIntensity;  // optimised away
        float lrSpecularity;  // $sp+736
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        GsPS2RenderObjectCar *lpObject;  // in $t5
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $s5
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // $sp+224
        int lnNumObjectsToDraw;  // in $s3
        int i;  // in $t7
        unsigned int oldTest1;  // $sp+732
        unsigned int oldAlpha1;  // $sp+728
        unsigned int raslsb;  // $sp+724
        unsigned int rasmsb;  // $sp+720
        float *lprPass1Specularity;  // $sp+208
        float *lprPass2Intensity;  // $sp+192
        RwMatrixTag lPreRollMatrix;  // $sp+512
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $v0
        RwMatrixTag *lpMatrix;  // in $v0
        RwFrame *lpCamFrame;  // in $v1
        RwMatrixTag lTempMatrix;  // $sp+448
        float lrGlassEnvMapIntensity;  // optimised away
        float intensityScale;  // optimised away
        int resRes;  // in $s6
        RwCamera *lpCurrentCamera;  // in $s2
        RwFrustumTestResult res;  // in $v0
        SRCLightProperties lCachedLightProperties;  // $sp+432
        CarSetupDataTag lCarSetupData;  // $sp+304
        u_long128 lMainTex0Registers[3];  // $sp+256
    }
}

// 0x0023A5E0-0x0023A8A8 (712 bytes), lines 1865-2037
// DrawShadow__8CRaceCarFv
int CRaceCar::DrawShadow()
{
    // param CRaceCar *this  (in $s1)
    {   // 0x0023A5E0-0x0023A8A8
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        RwMatrixTag lWheelMatrix;  // $sp+128
        int i;  // in $s3
        u_long128 ___ltmp;  // in $v1
        unsigned int oldAlpha1;  // $sp+204
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $v0
        int lbRes;  // in $s2
        float lrCappedIntensity;  // $sp+208
        CarShadowDataTag lCarShadData;  // $sp+96
    }
}

// 0x0023A8B0-0x0023ABE0 (816 bytes), lines 1813-1844
// RestoreAfterReplay__8CRaceCarFiP23CCrashReplayTempStorage
void CRaceCar::RestoreAfterReplay(int index, CCrashReplayTempStorage *pData)
{
    // param CRaceCar *this  (in $v0)
    // param int index  (in $v0)
    // param CCrashReplayTempStorage *pData  (in $v0)
    {   // 0x0023A8B0-0x0023ABE0
        int c;  // in $t0
        RwMatrixTag *pMatrix;  // in $v0
    }
}

// 0x0023ABE0-0x0023AC40 (96 bytes), lines 1778-1788
// DrawCrashReplay__8CRaceCarFP20CInterpolatedRaceCar
void CRaceCar::DrawCrashReplay()
{
    // param CRaceCar *this  (in $s1)
    {   // 0x0023ABE0-0x0023AC40
        int bTemp;  // in $s0
    }
}

// 0x0023AC40-0x0023B358 (1816 bytes), lines 1684-1759
// PrepareForReplay__8CRaceCarFiP20CInterpolatedRaceCarP23CCrashReplayTempStorage
void CRaceCar::PrepareForReplay(int index, CInterpolatedRaceCar *pCurrentIRC, CCrashReplayTempStorage *pData)
{
    // param CRaceCar *this  (in $s6)
    // param int index  (in $s5)
    // param CInterpolatedRaceCar *pCurrentIRC  (in $s4)
    // param CCrashReplayTempStorage *pData  (in $s3)
    {   // 0x0023AC40-0x0023B358
        int c;  // in $s0
        RwMatrixTag *pMatrix;  // in $a0
    }
}

// 0x0023B360-0x0023B398 (56 bytes), lines 1659-1665
// _raceCarHeightAboveGroundCallback__FP11SRCCollLineP20SRCCollisionTrianglePv
static int _raceCarHeightAboveGroundCallback(SRCCollisionTriangle *pCollTriangle, void *pData)
{
    // param SRCCollisionTriangle *pCollTriangle  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x0023B360-0x0023B398
    }
}

// 0x0023B3A0-0x0023B944 (1444 bytes), lines 1420-1648
// Update__8CRaceCarFv
void CRaceCar::Update()
{
    // param CRaceCar *this  (in $s0)
    {   // 0x0023B3A0-0x0023B944
        float lrVelocity;  // optimised away
        RwV3d lNormal;  // $sp+144
        RwV3d lPos;  // $sp+128
        int lnCount;  // in $s3
        RaceCarPoint *lpPoint;  // in $s2
        RaceCarPointOffset *lpOffset;  // in $s1
        SRCCollLine lLine;  // $sp+96
        int lnCount;  // in $v1
        float lrAverageY;  // $sp+160
        int lnWheelCount;  // in $s1
    }
}

// 0x0023B950-0x0023BC7C (812 bytes), lines 1287-1405
// FixupRCXFile__8CRaceCarFv
int CRaceCar::FixupRCXFile()
{
    // param CRaceCar *this  (in $s1)
    {   // 0x0023B950-0x0023BC7C
        int i;  // in $a2
        int lnIndex;  // in $a0
        unsigned int lunCarFixupDifference;  // in $v0
    }
}

// 0x0023BC80-0x0023BD84 (260 bytes), lines 1176-1273
// FixupTexture__FP9RwTextureUi
RwTexture *FixupTexture(RwTexture *lpInputTexture, unsigned int lunFixupAmount)
{
    // param RwTexture *lpInputTexture  (in $v0)
    // param unsigned int lunFixupAmount  (in $v0)
    {   // 0x0023BC80-0x0023BD84
        unsigned int *lpunData1;  // in $v0
        unsigned int lunModified;  // in $v0
        int lnPktCount;  // in $a3
        unsigned long long *lpData1;  // in $a2
        unsigned int lunPktSize;  // in $v1
        int lnIndex;  // in $a3
        _SkyRasterExt *lpRasExt;  // in $a2
        RwRaster *lpRaster;  // in $v1
    }
}

// 0x0023BD90-0x0023BFD0 (576 bytes), lines 1131-1155
// SetAndRebuildColour__8CRaceCarFP6RwRGBA
void CRaceCar::SetAndRebuildColour(RwRGBA *lpColour)
{
    // param CRaceCar *this  (in $v0)
    // param RwRGBA *lpColour  (in $v0)
    {   // 0x0023BD90-0x0023BFD0
        int i;  // in $v1
    }
}

// 0x0023BFD0-0x0023CEE0 (3856 bytes), lines 654-1091
// Reset__8CRaceCarFP5RwV3dP5RwV3d
int CRaceCar::Reset(RwV3d *lpStartPos, RwV3d *lpStartDir)
{
    // param CRaceCar *this  (in $s2)
    // param RwV3d *lpStartPos  (in $s1)
    // param RwV3d *lpStartDir  (in $s0)
    {   // 0x0023BFD0-0x0023CEE0
        ECarID leID;  // in $a3
        int lanPointsWanted[4];  // $sp+112
        ECarID leID;  // in $a3
        int lanPointsWanted[4];  // $sp+96
        EStageID leStageID;  // in $a3
        int lanPointsWanted[4];  // $sp+80
        int lnNumPlayers;  // in $v0
        RwMatrixTag *lpMatrix;  // in $v1
        int i;  // in $v0
    }
}

// 0x0023CEE0-0x0023CF34 (84 bytes), lines 619-634
// Shutdown__8CRaceCarFv
int CRaceCar::Shutdown()
{
    // param CRaceCar *this  (in $s0)
    {   // 0x0023CEE0-0x0023CF34
    }
}

// 0x0023CF40-0x0023D040 (256 bytes), lines 550-601
// Setup__8CRaceCarFii
int CRaceCar::Setup(int lnIndex, int lbIsFrontEnd)
{
    // param CRaceCar *this  (in $s0)
    // param int lnIndex  (in $v0)
    // param int lbIsFrontEnd  (in $v0)
    {   // 0x0023CF40-0x0023D040
        char carFilename[200];  // $sp+272
        char carPath[200];  // $sp+64
        char carName[20];  // $sp+32
    }
}

// 0x0023D040-0x0023D358 (792 bytes), lines 377-474
// GetFileName__8CRaceCarFPcPcPcPc
void CRaceCar::GetFileName(char *lpacCarName, char *lpacCarPath, char *lpacCarFilename, char *lpacExtension)
{
    // param CRaceCar *this  (in $v0)
    // param char *lpacCarName  (in $s3)
    // param char *lpacCarPath  (in $s2)
    // param char *lpacCarFilename  (in $s1)
    // param char *lpacExtension  (in $s0)
    {   // 0x0023D040-0x0023D358
    }
}

// 0x0023D360-0x0023D464 (260 bytes), lines 268-355
// Init__8CRaceCarFv
void CRaceCar::Init()
{
    // param CRaceCar *this  (in $s0)
    {   // 0x0023D360-0x0023D464
    }
}

