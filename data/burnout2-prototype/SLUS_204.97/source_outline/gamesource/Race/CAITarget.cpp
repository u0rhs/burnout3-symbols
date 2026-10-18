// I:\Burnout 2 Code\gamesource\Race\CAITarget.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kZeroVector;  // 0x002D57B8
static unsigned int gValueTableGPkrRadiusToSpeedFactor[30];  // 0x002D57D0
static unsigned int gValueTableGPkrDriftRadiusToSpeedFactor[30];  // 0x002D5850
float krMinDriftRadius;  // 0x00310D94
float krMaxDriftRadius;  // 0x00310D98
static float krDistToBrakeSpeedFactor;  // 0x00310E70
static float krMinDistToTargetPos;  // 0x00310E74
static float krMinDpToTargetPos;  // 0x00310E78
static float krMinDriftSpeed;  // 0x00310E7C
static float krMaxCornerRacingLineRadius;  // 0x00310E80
static float krSquareCornerThresholdFrac;  // 0x00310E84
static float krDistToCarToStopAfterPursuit;  // 0x00310E88
static float krSpeedToPullAlongsideSuspect;  // 0x00310E8C
static float krSpeedToApproachSuspect;  // 0x00310E90
static float krTargetOutputCurSeg;  // 0x00310E94
static float krTargetOutputCurAISeg;  // 0x00310E98
static float krTargetOutputTargetPosition;  // 0x00310E9C
static float krTargetOutputCornerSegs;  // 0x00310EA0
static float krTargetOutputTargetPositions;  // 0x00310EA4
static float krTargetPrintCurrentSegment;  // 0x00310EA8
static float krTargetOutputPosition;  // 0x00310EAC
static float krTargetPrintDriftStatus;  // 0x00310EB0
static float krTargetPrintSpeed;  // 0x00310EB4
static float krTargetDrawXAxis;  // 0x00310EB8
static float krTargetDrawZAxis;  // 0x00310EBC
static float krTargetPrintCornerDir;  // 0x00310EC0
static float krTargetPrintDriftRadius;  // 0x00310EC4
static float krPrintSquareCornerStatus;  // 0x00310EC8
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CRenderer gRenderer;  // 0x00434440
static float karRadiusToSpeedFactor[30];  // 0x00459070
static float karDriftRadiusToSpeedFactor[30];  // 0x004590F0

// ---- functions ----

// 0x00225540-0x00225C10 (1744 bytes), lines 3602-3748
// DrawDebugInfo__9CAITargetFv
void CAITarget::DrawDebugInfo()
{
    // param CAITarget *this  (in $s0)
    {   // 0x00225540-0x00225C10
        RwV3d lineEnd;  // $sp+80
    }
}

// 0x00225C10-0x00225CB0 (160 bytes), lines 3368-3417
// TestForDrift__9CAITargetFv
void CAITarget::TestForDrift()
{
    // param CAITarget *this  (in $v0)
    {   // 0x00225C10-0x00225CB0
    }
}

// 0x00225CB0-0x00225E58 (424 bytes), lines 3254-3349
// LanesAreSideBySide__9CAITargetCFPC5CLanePC5CLaneii
int CAITarget::LanesAreSideBySide(CLane *lpLaneA, CLane *lpLaneB, int lnStartIndexA, int lnNumSegsToCheck) const
{
    // param CLane *lpLaneA  (in $s6)
    // param CLane *lpLaneB  (in $s5)
    // param int lnStartIndexA  (in $s4)
    // param int lnNumSegsToCheck  (in $s3)
    {   // 0x00225CB0-0x00225E58
        unsigned short lunSegIndex16;  // in $s2
        unsigned short lunLaneIndex16;  // in $s1
        int lbConnected;  // in $s0
        int lnTmpSegIndexA;  // in $a0
        CLane *lpTmpLaneA;  // in $v0
    }
}

// 0x00225E60-0x002261A4 (836 bytes), lines 3119-3230
// GetWidthOfDesirableLanes__9CAITargetCFPC5CLaneii
float CAITarget::GetWidthOfDesirableLanes(CLane *lpLane, int lnCurrentSegmentIndex, int lnSegmentIndex) const
{
    // param CAITarget *this  (in $s5)
    // param CLane *lpLane  (in $s4)
    // param int lnCurrentSegmentIndex  (in $s3)
    // param int lnSegmentIndex  (in $s0)
    {   // 0x00225E60-0x002261A4
        int lnSegsToCheck;  // in $s0
        int leLaneDesirability;  // in $v0
        unsigned short lunNewSegmentIndex16;  // in $v0
        unsigned short lunNewLaneIndex16;  // in $s6
        float lrCrossableWidth;  // $sp+160
        float lrWidth;  // optimised away
        int lnNewSegIndex;  // in $s6
        CLane *lpNewLane;  // in $s1
    }
}

// 0x002261B0-0x00226264 (180 bytes), lines 3077-3098
// LaneIsUndesirable__9CAITargetCFUsii
int CAITarget::LaneIsUndesirable(unsigned short lunLaneIndex16, int lnStartSegmentIndex, int lnEndSegmentIndex) const
{
    // param CAITarget *this  (in $s3)
    // param unsigned short lunLaneIndex16  (in $s2)
    // param int lnStartSegmentIndex  (in $s1)
    // param int lnEndSegmentIndex  (in $s0)
    {   // 0x002261B0-0x00226264
        int lnSegsToCheck;  // in $a0
    }
}

// 0x00226270-0x002264B0 (576 bytes), lines 2919-3056
// LaneIsUndesirable__9CAITargetCFPC5CLaneii
int CAITarget::LaneIsUndesirable(CLane *lpLane, int lnStartSegmentIndex, int lnEndSegmentIndex) const
{
    // param CAITarget *this  (in $v0)
    // param CLane *lpLane  (in $v0)
    // param int lnStartSegmentIndex  (in $v0)
    // param int lnEndSegmentIndex  (in $v0)
    {   // 0x00226270-0x002264B0
        int leLaneDesirability;  // in $v0
    }
}

// 0x002264B0-0x00226608 (344 bytes), lines 2872-2889
// GetFwdFrac__9CAITargetCFPC5CLaneiPC5RwV3d
float CAITarget::GetFwdFrac(CLane *lpLane, int lnCurrentSegmentIndex, RwV3d *lpPosition) const
{
    // param CLane *lpLane  (in $s2)
    // param int lnCurrentSegmentIndex  (in $s1)
    // param RwV3d *lpPosition  (in $s0)
    {   // 0x002264B0-0x00226608
        float lrResult;  // $sp+96
        int lnLHSIndex;  // in $v0
        float lrLength;  // optimised away
        RwV3d lForwardsVec;  // $sp+80
    }
}

// 0x00226610-0x00226710 (256 bytes), lines 2850-2852
// GetCurrentFwdFrac__9CAITargetCFv
float CAITarget::GetCurrentFwdFrac() const
{
    // param CAITarget *this  (in $v0)
    {   // 0x00226610-0x00226710
    }
}

// 0x00226710-0x00226848 (312 bytes), lines 2804-2831
// GetLeftFrac__9CAITargetCFPC5CLaneiPC5RwV3df
float CAITarget::GetLeftFrac(CLane *lpLane, int lnCurrentSegmentIndex, RwV3d *lpPosition, float lrOffset) const
{
    // param CLane *lpLane  (in $s2)
    // param int lnCurrentSegmentIndex  (in $s1)
    // param RwV3d *lpPosition  (in $s0)
    // param float lrOffset  (optimised away)
    {   // 0x00226710-0x00226848
        unsigned short lunRHSIndex16;  // in $v0
        float lrWidth;  // $sp+80
    }
}

// 0x00226850-0x002269AC (348 bytes), lines 2780-2782
// GetCurrentLeftFrac__9CAITargetCFv
float CAITarget::GetCurrentLeftFrac() const
{
    // param CAITarget *this  (in $v0)
    {   // 0x00226850-0x002269AC
    }
}

// 0x002269B0-0x00226AF8 (328 bytes), lines 2728-2762
// CalculateFractionTargetPosition__9CAITargetCFifP5RwV3d
void CAITarget::CalculateFractionTargetPosition(int lnSegmentIndex, float lrOffset, RwV3d *lpResultVector) const
{
    // param CAITarget *this  (in $s1)
    // param int lnSegmentIndex  (in $s2)
    // param float lrOffset  (optimised away)
    // param RwV3d *lpResultVector  (in $s0)
    {   // 0x002269B0-0x00226AF8
        unsigned short lunRHSIndex16;  // in $v0
        float lrTrackWidth;  // $sp+80
    }
}

// 0x00226B00-0x00227170 (1648 bytes), lines 2366-2596
// CalculateEdgePosition__9CAITargetFii14ELaneDirectionP5RwV3dPsPs
void CAITarget::CalculateEdgePosition(int lnSegmentIndex, int lnCurrentSegmentIndex, ELaneDirection leSideWanted, RwV3d *lpResultVector, short *lpnResultLaneIndex16, short *lpnResultSegIndex16)
{
    // param CAITarget *this  (in $s5)
    // param int lnSegmentIndex  (in $s4)
    // param int lnCurrentSegmentIndex  ($sp+268)
    // param ELaneDirection leSideWanted  ($sp+264)
    // param RwV3d *lpResultVector  (in $s3)
    // param short *lpnResultLaneIndex16  ($sp+260)
    // param short *lpnResultSegIndex16  ($sp+256)
    {   // 0x00226B00-0x00227170
        unsigned short lunNewLaneIndex16;  // $sp+160
        unsigned short lunNewSegIndex16;  // in $s0
        unsigned short lunNewLaneIndex16;  // in $s2
        int lnSegsToCheck;  // in $s6
        float lrMoveInwardsOffset;  // optimised away
        int lnTmpSegIndex;  // in $fp
        CLane *lpTmpLane;  // in $s0
        int lnNewSegIndex;  // in $v0
        CLane *lpNewLane;  // in $v0
        int leLaneDes;  // in $v0
        ESegmentLinkTypes leSegmentSideNotWanted;  // in $fp
        ESegmentLinkTypes leSegmentSideWanted;  // in $s7
        int lunRHSIndex16;  // in $v0
    }
}

// 0x00227170-0x00227724 (1460 bytes), lines 2148-2342
// CalculateNearEdgePosition__9CAITargetFii14ELaneDirectionP5RwV3dPsPs
void CAITarget::CalculateNearEdgePosition(int lnSegmentIndex, int lnCurrentSegmentIndex, ELaneDirection leSideWanted, RwV3d *lpResultVector, short *lpnResultLaneIndex16, short *lpnResultSegIndex16)
{
    // param CAITarget *this  (in $s4)
    // param int lnSegmentIndex  (in $s3)
    // param int lnCurrentSegmentIndex  (in $s7)
    // param ELaneDirection leSideWanted  ($sp+316)
    // param RwV3d *lpResultVector  ($sp+312)
    // param short *lpnResultLaneIndex16  ($sp+308)
    // param short *lpnResultSegIndex16  ($sp+304)
    {   // 0x00227170-0x00227724
        unsigned short lunNewLaneIndex16;  // in $s6
        float lrMoveInwardsOffset;  // optimised away
        unsigned short lunRHSIndex16;  // in $v0
        int lnSegsToCheck;  // in $s0
        int leLaneDes;  // in $v0
        ESegmentLinkTypes leLinkSideWanted;  // in $s6
        int lnSideIndex;  // $sp+192
        int lnTmpSegIndex;  // in $v0
        CLane *lpTmpLane;  // in $v0
        int lnNewSegIndex;  // $sp+188
        CLane *lpNewLane;  // in $s5
        float lrOffset;  // $sp+320
        float lrWidth;  // $sp+320
    }
}

// 0x00227730-0x00227E98 (1896 bytes), lines 1843-2124
// FindNextCorner__9CAITargetFPC5CLaneiPiPiPiPfPfPfP17EAITargetTurnTypeP20EAITargetCornerStatePiPi
int CAITarget::FindNextCorner(CLane *lpLane, int lnCurrentSegmentIndex, int *lpnTurnStartSegmentIndex, int *lpnTurnApexSegmentIndex, int *lpnTurnEndSegmentIndex, float *lprCornerRacingLineRadius, float *lprCornerRadius, float *lprCornerAngle, EAITargetTurnType *lpeCornerDirection, EAITargetCornerState *lpeCornerState, int *lpbWillWantToDrift, int *lpbSquareCorner)
{
    // param CAITarget *this  (in $s1)
    // param CLane *lpLane  (in $s0)
    // param int lnCurrentSegmentIndex  (in $v0)
    // param int *lpnTurnStartSegmentIndex  (in $v0)
    // param int *lpnTurnApexSegmentIndex  (in $v0)
    // param int *lpnTurnEndSegmentIndex  (in $v0)
    // param float *lprCornerRacingLineRadius  (in $v0)
    // param float *lprCornerRadius  (in $v0)
    // param float *lprCornerAngle  (in $s7)
    // param EAITargetTurnType *lpeCornerDirection  (in $t4)
    // param EAITargetCornerState *lpeCornerState  (in $a1)
    // param int *lpbWillWantToDrift  (in $a0)
    // param int *lpbSquareCorner  (in $v1)
    {   // 0x00227730-0x00227E98
        int lnSegsFromHereToEnd;  // in $s2
        int lnSegsFromHereToApex;  // in $s2
        int lnBestSegsFromHereToApex;  // in $t9
        int j;  // in $t6
        RwV3d lEndFwdVec;  // $sp+176
        int lnLaneIndex;  // in $t8
        RwV3d lStartFwdVec;  // $sp+160
    }
}

// 0x00227EA0-0x002288A0 (2560 bytes), lines 1327-1754
// CalculateNextTargetPosition__9CAITargetFv
void CAITarget::CalculateNextTargetPosition()
{
    // param CAITarget *this  (in $s0)
    {   // 0x00227EA0-0x002288A0
        unsigned short lunNewSegIndex16;  // in $v0
        unsigned short lunNewLaneIndex16;  // in $s1
        int lbSuccess;  // in $s1
        int lbFoundCorner;  // in $v0
        int lnFarNextCornerIndex;  // in $s1
        int lbSquareCorner;  // $sp+156
        int lbWillWantToDrift;  // $sp+152
        EAITargetCornerState leCornerState;  // $sp+148
        EAITargetTurnType leCornerDirection;  // $sp+144
        float lrCornerAngle;  // $sp+140
        float lrCornerRadius;  // $sp+136
        float lrCornerRacingLineRadius;  // $sp+132
        int lnTurnEndSegmentIndex;  // $sp+128
        int lnTurnApexSegmentIndex;  // $sp+124
        int lnTurnStartSegmentIndex;  // $sp+120
    }
}

// 0x002288A0-0x00228B4C (684 bytes), lines 1243-1304
// FillInTargetPosition__9CAITargetFv
void CAITarget::FillInTargetPosition()
{
    // param CAITarget *this  (in $s0)
    {   // 0x002288A0-0x00228B4C
    }
}

// 0x00228B50-0x002291F8 (1704 bytes), lines 869-1127
// UpdateCurrentSegment__9CAITargetFv
int CAITarget::UpdateCurrentSegment()
{
    // param CAITarget *this  (in $s0)
    {   // 0x00228B50-0x002291F8
        int lbLaneOK;  // in $s4
        int lnNewSeg;  // in $s3
        int lnNewLane;  // in $s2
        int lbLaneOK;  // in $s1
        unsigned short lunNewSeg16;  // in $s3
        unsigned short lunNewLane16;  // in $s2
        int leLaneDesirability;  // in $v0
        int rc;  // in $v0
    }
}

// 0x00229200-0x00229D58 (2904 bytes), lines 399-786
// Update__9CAITargetFv
void CAITarget::Update()
{
    // param CAITarget *this  (in $s4)
    {   // 0x00229200-0x00229D58
        unsigned short lunSegIndex;  // in $s1
        unsigned short lunLaneIndex;  // in $s0
        float lrDistRightFromSuspect;  // optimised away
        RwV3d lLeftVec;  // $sp+176
        float lrDistFwdToSuspect;  // optimised away
        RwV3d lFwdVec;  // $sp+160
        unsigned short lunTmpSegIndex16;  // in $s3
        unsigned short lunSegIndex16;  // in $s3
        unsigned short lunLaneIndex;  // in $s5
        CLane *lpLane;  // in $v0
        int lbConnected;  // in $s1
        int lbUpdateTargetPosition;  // in $s0
        RwV3d lFwdVec;  // $sp+144
        float lrDistToTargPos;  // $sp+192
        RwV3d lHereToTargPos;  // $sp+128
    }
}

// 0x00229D60-0x00229E14 (180 bytes), lines 356-381
// ResetCornerStatus__9CAITargetFv
void CAITarget::ResetCornerStatus()
{
    // param CAITarget *this  (in $v0)
    {   // 0x00229D60-0x00229E14
    }
}

// 0x00229E20-0x00229EF4 (212 bytes), lines 296-338
// Reset__9CAITargetFv
void CAITarget::Reset()
{
    // param CAITarget *this  (in $s0)
    {   // 0x00229E20-0x00229EF4
    }
}

// 0x00229F00-0x0022A068 (360 bytes), lines 117-280
// Init__9CAITargetFv
int CAITarget::Init()
{
    // param CAITarget *this  (in $v0)
    {   // 0x00229F00-0x0022A068
        int i;  // in $t3
    }
}

