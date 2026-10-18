// I:\Burnout 2 Code\gamesource\Race\CGhostCar.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CGTFileSystem *gpGTFileSystem;  // 0x003107C0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CTimeAttackLogic gTimeAttackLogic;  // 0x003B0E30
CRenderer gRenderer;  // 0x00434440
char gRaceCarBuffer[];  // 0x01700000

// ---- functions ----

// 0x0022C690-0x0022D650 (4032 bytes), lines 872-1007
// InterpolateCreate__9CGhostCarFP20CInterpolatedRaceCarf
void CGhostCar::InterpolateCreate(CInterpolatedRaceCar *lpInterpData, float lrInterp)
{
    // param CGhostCar *this  (in $s4)
    // param CInterpolatedRaceCar *lpInterpData  (in $s3)
    // param float lrInterp  (optimised away)
    {   // 0x0022C690-0x0022D650
        float lrThisAngle;  // optimised away
        RwMatrixTag lRotationMatrix;  // $sp+224
        int lnBodywork;  // in $s5
        int lnWheel;  // in $s5
        RwV3d lVTemp2;  // $sp+304
        RwV3d lVTemp1;  // $sp+288
        CGhostCarFrame *lpNextFrame;  // in $s7
        CGhostCarFrame *lpThisFrame;  // in $s6
        RwMatrixTag *lpMatrix;  // in $s2
    }
}

// 0x0022D760-0x0022ED6C (5644 bytes), lines 757-854
// InterpolateUpdate__9CGhostCarFv
void CGhostCar::InterpolateUpdate()
{
    // param CGhostCar *this  (in $s4)
    {   // 0x0022D760-0x0022ED6C
        int lnWheel;  // in $s6
        int lnBodywork;  // in $s6
        RwV3d v4;  // $sp+272
        RwV3d v3;  // $sp+256
        RwV3d v2;  // $sp+240
        RwV3d v1;  // $sp+224
        CGhostCarFrame *pFarFrame;  // in $s5
        CGhostCarFrame *pNextFrame;  // in $s2
        CGhostCarFrame *pThisFrame;  // in $s1
        CGhostCarFrame *pPrevFrame;  // in $s0
    }
}

// 0x0022EDC0-0x0022EF54 (404 bytes), lines 692-740
// CreateRotation__9CGhostCarFP11RwMatrixTagf
void CGhostCar::CreateRotation(RwMatrixTag *lpMatrix, float lrWheelAngle)
{
    // param RwMatrixTag *lpMatrix  (in $s3)
    // param float lrWheelAngle  ($sp+96)
    {   // 0x0022EDC0-0x0022EF54
        float _tmp;  // $sp+96
        float _result;  // optimised away
        float z;  // optimised away
        RwV3d *lpPos;  // in $s2
        RwV3d *lpAt;  // in $s1
        RwV3d *lpUp;  // in $s0
        float cost;  // $sp+96
        float sint;  // optimised away
    }
}

// 0x0022EF60-0x0022EF68 (8 bytes), lines 673-673
// Destroy__9CGhostCarFv
void CGhostCar::Destroy()
{
    // param CGhostCar *this  (in $v0)
    {   // 0x0022EF60-0x0022EF68
    }
}

// 0x0022EF70-0x0022F1B0 (576 bytes), lines 446-529
// Render__9CGhostCarFv
void CGhostCar::Render()
{
    // param CGhostCar *this  (in $s4)
    {   // 0x0022EF70-0x0022F1B0
        RwV3d lPlayerCarToGhostCar;  // $sp+4640
        float lrProximityTransparency;  // optimised away
        float lrOldTransparency;  // optimised away
        int lnTempNumGhostFrames;  // in $s1
        CCrashReplayTempStorage lTemp;  // $sp+112
        CGhostCarFrame *lpTempGhostFrames;  // in $s0
        CPlayerCar *lpCar;  // in $v0
    }
}

// 0x0022F1B0-0x0022F230 (128 bytes), lines 414-430
// Reset__9CGhostCarFv
void CGhostCar::Reset()
{
    // param CGhostCar *this  (in $s0)
    {   // 0x0022F1B0-0x0022F230
    }
}

// 0x0022F230-0x0022F2D8 (168 bytes), lines 349-397
// AddCurrentRecordingToPlayBack__9CGhostCarFv
void CGhostCar::AddCurrentRecordingToPlayBack()
{
    // param CGhostCar *this  (in $v0)
    {   // 0x0022F230-0x0022F2D8
        float lrTimeTaken;  // $sp+16
        CScore *lpScore;  // in $v1
        CGhostCarFrame *lpTempCarFrame;  // in $v1
    }
}

// 0x0022F2E0-0x0022F750 (1136 bytes), lines 209-333
// Update__9CGhostCarFv
void CGhostCar::Update()
{
    // param CGhostCar *this  (in $s1)
    {   // 0x0022F2E0-0x0022F750
        int lbCreateFrame;  // in $a1
        int lbCrossedStartLine;  // in $v0
        CRaceCar *lpCar;  // in $s0
    }
}

// 0x0022F750-0x0022F804 (180 bytes), lines 151-193
// Init__9CGhostCarFv
int CGhostCar::Init()
{
    // param CGhostCar *this  (in $v0)
    {   // 0x0022F750-0x0022F804
    }
}

