// I:\Burnout 2 Code\gamesource\Race\CAIDriver.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CChampionshipStage CChampionshipProgression::_maChampionshipStages[22];  // 0x0029DDD0
static unsigned int gValueTableGPkrMaxMoreSteerAngleDelta[30];  // 0x002D5540
static unsigned int gValueTableGPkrMaxLessSteerAngleDelta[30];  // 0x002D55C0
static unsigned int gValueTableGPkrDriftSteerSpeedIncFactor[30];  // 0x002D5640
static RwV3d kYAxis;  // 0x002D56B8
static RwV3d kZeroVector;  // 0x002D56C8
float krSteeringFactor;  // 0x003107D8
static float krSpeedSteerAngleCutOff;  // 0x00310E2C
static float krCarAtFrac;  // 0x00310E30
static float krLeavingCornerCarAtFrac;  // 0x00310E34
static float krDriftStartSteerAngle;  // 0x00310E38
static float krFramesToDriftMultiplier;  // 0x00310E3C
static float krDriverOutputDesiredDir;  // 0x00310E40
static float krDriverOutputCarAt;  // 0x00310E44
static float krDriverOutputSteerAngle;  // 0x00310E48
static float krDriverOutputVelocityDir;  // 0x00310E4C
static float krDriverOutputDesPos;  // 0x00310E50
static float krDriverPrintDataSource;  // 0x00310E54
static float krDriverPrintDriftStatus;  // 0x00310E58
static float krDriverPrintSpeedSelection;  // 0x00310E5C
static float krDriverPrintSpeed;  // 0x00310E60
static float krDriverPrintSteerAngle;  // 0x00310E64
float CAIDriver::_mrMaxSpeed;  // 0x00310E68
float CAIDriver::_mrMinSpeed;  // 0x00310E6C
CGame gGame;  // 0x003186E0
CTrack gTrack;  // 0x0031F280
CAIProfile CAICar::_mAIProfile[22];  // 0x00458C80
float karMaxMoreSteerAngleDelta[30];  // 0x00458EF0
float karMaxLessSteerAngleDelta[30];  // 0x00458F70
static float karDriftSteerSpeedIncFactor[30];  // 0x00458FF0
float kaarBoostStart[][7][4];  // 0x00486830

// ---- functions ----

// 0x00224080-0x002246AC (1580 bytes), lines 908-994
// DrawDebugInfo__9CAIDriverFv
void CAIDriver::DrawDebugInfo()
{
    // param CAIDriver *this  (in $s3)
    {   // 0x00224080-0x002246AC
        RwV3d lineEnd;  // $sp+144
        RwMatrixTag Mat;  // $sp+80
    }
}

// 0x002246B0-0x002248AC (508 bytes), lines 736-831
// CalculateDesiredSpeed__9CAIDriverFv
void CAIDriver::CalculateDesiredSpeed()
{
    // param CAIDriver *this  (in $v0)
    {   // 0x002246B0-0x002248AC
        float lrSteerSpeed;  // $sp+0
        float lrSteerAngle;  // $sp+0
        float lrSpeedMult;  // optimised away
    }
}

// 0x002248B0-0x00224C94 (996 bytes), lines 605-709
// CalculateSteerAngle__9CAIDriverFv
void CAIDriver::CalculateSteerAngle()
{
    // param CAIDriver *this  (in $s0)
    {   // 0x002248B0-0x00224C94
        float lrSteerDiff;  // optimised away
        RwV3d *lpCarRight;  // in $v1
    }
}

// 0x00224CA0-0x00224F0C (620 bytes), lines 486-585
// CheckForDrift__9CAIDriverFv
void CAIDriver::CheckForDrift()
{
    // param CAIDriver *this  (in $s0)
    {   // 0x00224CA0-0x00224F0C
        int lbHavePassedApex;  // in $v1
        float lrDp;  // optimised away
        RwV3d *lpCarAt;  // in $v0
    }
}

// 0x00224F10-0x002251E8 (728 bytes), lines 404-446
// Update__9CAIDriverFv
void CAIDriver::Update()
{
    // param CAIDriver *this  (in $s0)
    {   // 0x00224F10-0x002251E8
        CAIArbitrator *lpArb;  // in $v1
    }
}

// 0x002251F0-0x002253D4 (484 bytes), lines 316-388
// Reset__9CAIDriverFv
void CAIDriver::Reset()
{
    // param CAIDriver *this  (in $v0)
    {   // 0x002251F0-0x002253D4
        EStageID leStageID;  // in $t0
    }
}

// 0x002253E0-0x00225534 (340 bytes), lines 101-296
// Init__9CAIDriverFv
int CAIDriver::Init()
{
    // param CAIDriver *this  (in $v0)
    {   // 0x002253E0-0x00225534
        int i;  // in $t7
    }
}

