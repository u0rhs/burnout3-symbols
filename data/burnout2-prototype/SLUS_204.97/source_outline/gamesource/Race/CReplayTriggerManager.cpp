// I:\Burnout 2 Code\gamesource\Race\CReplayTriggerManager.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpAtomic *gpAtomic;
RwFrame *gpFrame;
static float _gaarPosMtx[4][4];  // 0x002D5F80
static unsigned int kxCameraTypeMask;  // 0x00310668
static unsigned int kxReplayTriggerTypeMask;  // 0x0031066C
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CRaceReplayCamera CCamera::mRaceReplayCamera;  // 0x0043DCA0

// ---- functions ----

// 0x002400B0-0x00240854 (1956 bytes), lines 765-844
// GetPointOnSpline__21CReplayTriggerManagerFP18CReplayTriggerDatafP5RwV3d
void CReplayTriggerManager::GetPointOnSpline(CReplayTriggerData *lpTrigger, float lrParamAlong, RwV3d *lpResult)
{
    // param CReplayTriggerManager *this  (in $v0)
    // param CReplayTriggerData *lpTrigger  (in $v0)
    // param float lrParamAlong  ($sp+192)
    // param RwV3d *lpResult  (in $v0)
    {   // 0x002400B0-0x00240854
        int i;  // in $a3
        int lnLastNode;  // in $v0
        float laarPosMtx[4][4];  // $sp+128
        RwV4d laTempResults[4];  // $sp+64
        RwMatrixTag *lpResultMatrix;  // in $v1
        RwMatrixTag lMatrix;  // $sp+0
    }
}

// 0x00240860-0x00240F80 (1824 bytes), lines 696-742
// GetParamFromDist__21CReplayTriggerManagerFP18CReplayTriggerDataf
float CReplayTriggerManager::GetParamFromDist(CReplayTriggerData *lpTrigger, float lrDistance)
{
    // param CReplayTriggerManager *this  (in $s5)
    // param CReplayTriggerData *lpTrigger  (in $s4)
    // param float lrDistance  (optimised away)
    {   // 0x00240860-0x00240F80
        float lrSegLength;  // $sp+160
        RwV3d lTemp;  // $sp+144
        int i;  // in $s1
        RwV3d lSeg;  // $sp+128
        float lrTotalDistance;  // optimised away
        float lrCurrentDistance;  // optimised away
        float lrParamAlong;  // optimised away
        int lnSegmentIndex;  // in $s0
    }
}

// 0x00240F80-0x00240FC0 (64 bytes), lines 668-674
// GetPosition__21CReplayTriggerManagerFi
RwV3d *CReplayTriggerManager::GetPosition(int lnIndex)
{
    // param CReplayTriggerManager *this  (in $v0)
    // param int lnIndex  (in $v0)
    {   // 0x00240F80-0x00240FC0
    }
}

// 0x00240FC0-0x00241004 (68 bytes), lines 394-402
// GetTriggerStartPosition__21CReplayTriggerManagerFP18CReplayTriggerData
RwV3d *CReplayTriggerManager::GetTriggerStartPosition(CReplayTriggerData *lpTrigger)
{
    // param CReplayTriggerManager *this  (in $v0)
    // param CReplayTriggerData *lpTrigger  (in $v0)
    {   // 0x00240FC0-0x00241004
        int lnPosIndex;  // in $a1
    }
}

// 0x00241010-0x00241074 (100 bytes), lines 343-352
// GetCollidingTrigger__21CReplayTriggerManagerFv
CReplayTriggerData *CReplayTriggerManager::GetCollidingTrigger()
{
    // param CReplayTriggerManager *this  (in $v0)
    {   // 0x00241010-0x00241074
    }
}

// 0x00241080-0x002412F4 (628 bytes), lines 207-325
// Update__21CReplayTriggerManagerFP8CRaceCar
int CReplayTriggerManager::Update(CRaceCar *lpCar)
{
    // param CReplayTriggerManager *this  (in $s3)
    // param CRaceCar *lpCar  (in $s2)
    {   // 0x00241080-0x002412F4
        EReplayTriggerTypeFlag leType;  // in $v1
        int lbCollision;  // in $t2
        int lnEndIndex;  // in $s1
        int lbFoundEndTrigger;  // in $s0
        int lnIndex;  // in $v0
    }
}

// 0x00241300-0x002415BC (700 bytes), lines 95-187
// Reset__21CReplayTriggerManagerFv
int CReplayTriggerManager::Reset()
{
    // param CReplayTriggerManager *this  (in $s4)
    {   // 0x00241300-0x002415BC
        int lnSector;  // $sp+204
        int lnSegment;  // in $s1
        CGt2dMatrix lMat;  // $sp+112
        int lnTrigger;  // in $s0
        RwV3d lTriggerDir;  // $sp+192
        RwV3d lPosition;  // $sp+176
    }
}

