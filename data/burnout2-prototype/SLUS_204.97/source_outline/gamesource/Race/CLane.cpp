// I:\Burnout 2 Code\gamesource\Race\CLane.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kYAxis;  // 0x002D5B38
static int kbUseSectorData;  // 0x00310644
CTrack gTrack;  // 0x0031F280
CTrafficParam *gapNextTrafficParam[16000];  // 0x00475AB0

// ---- functions ----

// 0x00230440-0x002304CC (140 bytes), lines 2430-2459
// LaneIsDriveable__5CLaneFPC8LaneDataUss
int CLane::LaneIsDriveable(LaneData *lpLaneData, unsigned short lunStartSegIndex16, short lnSegsToCheck16)
{
    // param LaneData *lpLaneData  (in $v0)
    // param unsigned short lunStartSegIndex16  (in $v0)
    // param short lnSegsToCheck16  (in $v0)
    {   // 0x00230440-0x002304CC
        unsigned short lunSegIndex16;  // in $a3
    }
}

// 0x002304D0-0x00230568 (152 bytes), lines 2399-2400
// LaneIsDriveable__5CLaneFPC5CLaneUss
int CLane::LaneIsDriveable(CLane *lpLane, unsigned short lunStartSegIndex16, short lnSegsToCheck16)
{
    // param CLane *lpLane  (in $v0)
    // param unsigned short lunStartSegIndex16  (in $v0)
    // param short lnSegsToCheck16  (in $v0)
    {   // 0x002304D0-0x00230568
    }
}

// 0x00230570-0x002305B0 (64 bytes), lines 2368-2375
// LaneIsDriveable__5CLaneFUsUss
int CLane::LaneIsDriveable(unsigned short lunLaneIndex16, unsigned short lunStartSegIndex16, short lnSegsToCheck16)
{
    // param unsigned short lunLaneIndex16  (in $v0)
    // param unsigned short lunStartSegIndex16  (in $v0)
    // param short lnSegsToCheck16  (in $v0)
    {   // 0x00230570-0x002305B0
    }
}

// 0x002305B0-0x00230888 (728 bytes), lines 2018-2079
// IntersectLineSegment__5CLaneFiP5RwV3dP5RwV3dPfP5RwV3d
int CLane::IntersectLineSegment(int lnSegmentIndex, RwV3d *lpPosition, RwV3d *lpDirection, float *lprHeight, RwV3d *lpPolyUp)
{
    // param CLane *this  (in $v0)
    // param int lnSegmentIndex  (in $v0)
    // param RwV3d *lpPosition  (in $s5)
    // param RwV3d *lpDirection  (in $s7)
    // param float *lprHeight  (in $fp)
    // param RwV3d *lpPolyUp  (in $s4)
    {   // 0x002305B0-0x00230888
        float lrDistance;  // optimised away
        int lbResult;  // in $s6
    }
}

// 0x00230890-0x00230B9C (780 bytes), lines 1959-1996
// GetRacingDistance__5CLaneFffiP5RwV3d
float CLane::GetRacingDistance(float lrStartNode, float lrLaneNode, int lnLap, RwV3d *lpTrackPosition)
{
    // param CLane *this  (in $s1)
    // param float lrStartNode  ($sp+144)
    // param float lrLaneNode  ($sp+144)
    // param int lnLap  (in $s0)
    // param RwV3d *lpTrackPosition  (in $v0)
    {   // 0x00230890-0x00230B9C
        float lrParamEnd;  // optimised away
        float lrDistance;  // optimised away
    }
}

// 0x00230BA0-0x00230CC4 (292 bytes), lines 1925-1938
// GetSignedBackwardDistBetweenParams__5CLaneFff
float CLane::GetSignedBackwardDistBetweenParams(float lrParamAlong1, float lrParamAlong2)
{
    // param CLane *this  (in $v0)
    // param float lrParamAlong1  ($sp+0)
    // param float lrParamAlong2  ($sp+0)
    {   // 0x00230BA0-0x00230CC4
        float lrParamEnd;  // optimised away
        float lrResult;  // $sp+0
    }
}

// 0x00230CD0-0x00230DF4 (292 bytes), lines 1886-1899
// GetSignedForwardDistBetweenParams__5CLaneFff
float CLane::GetSignedForwardDistBetweenParams(float lrParamAlong1, float lrParamAlong2)
{
    // param CLane *this  (in $v0)
    // param float lrParamAlong1  ($sp+0)
    // param float lrParamAlong2  ($sp+0)
    {   // 0x00230CD0-0x00230DF4
        float lrParamEnd;  // optimised away
        float lrResult;  // $sp+0
    }
}

// 0x00230E00-0x00230E5C (92 bytes), lines 1842-1859
// GetDistFromParam__5CLaneFf
float CLane::GetDistFromParam(float lrParamAlong)
{
    // param CLane *this  (in $v0)
    // param float lrParamAlong  ($sp+0)
    {   // 0x00230E00-0x00230E5C
        SegmentDimensions *lpaSegmentDimensions;  // in $a1
        float lrCurrentDistance;  // $sp+0
        int lnCurrentSegmentIndex;  // in $a0
        int lnSegmentIndex;  // in $v1
    }
}

// 0x00230E60-0x00230EF0 (144 bytes), lines 1730-1767
// SegmentAIsInfrontOfSegmentB__5CLaneCFii
int CLane::SegmentAIsInfrontOfSegmentB(int lnSegmentAIndex, int lnSegmentBIndex) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentAIndex  (in $v0)
    // param int lnSegmentBIndex  (in $v0)
    {   // 0x00230E60-0x00230EF0
        int lnHalfTrack;  // in $a0
        int lnDiff;  // in $v1
    }
}

// 0x00230EF0-0x00230F9C (172 bytes), lines 1677-1709
// GetDistanceBetweenSegments__5CLaneCFii
float CLane::GetDistanceBetweenSegments(int lnStartSegmentIndex, int lnEndSegmentIndex) const
{
    // param CLane *this  (in $v0)
    // param int lnStartSegmentIndex  (in $v0)
    // param int lnEndSegmentIndex  (in $v0)
    {   // 0x00230EF0-0x00230F9C
        int i;  // in $v0
        float lrDist;  // $sp+0
    }
}

// 0x00230FA0-0x002310D0 (304 bytes), lines 1648-1656
// GetDistFromStartOfSegment__5CLaneCFPC5RwV3di
float CLane::GetDistFromStartOfSegment(RwV3d *lpPosition, int lnSegmentIndex) const
{
    // param CLane *this  (in $v0)
    // param RwV3d *lpPosition  (in $v0)
    // param int lnSegmentIndex  (in $v0)
    {   // 0x00230FA0-0x002310D0
        float lrDist;  // $sp+0
        int lnLHSIndex;  // in $v0
    }
}

// 0x002310D0-0x002313F4 (804 bytes), lines 1528-1586
// GetTotalWidth__5CLaneCFii
float CLane::GetTotalWidth(int lnSegmentIndex, int lnSegmentNodeIndex) const
{
    // param CLane *this  (in $s2)
    // param int lnSegmentIndex  (in $s1)
    // param int lnSegmentNodeIndex  (in $v0)
    {   // 0x002310D0-0x002313F4
        int lnDelta;  // in $s0
        unsigned short lunNewSegmentIndex16;  // in $s4
        unsigned short lunNewLaneIndex16;  // in $s3
        float lrWidth;  // optimised away
        int lnNewSegIndex;  // in $s4
        CLane *lpNewLane;  // in $s3
    }
}

// 0x00231400-0x002314A8 (168 bytes), lines 1493-1508
// GetWidth__5CLaneCFi
float CLane::GetWidth(int lnSegmentNodeIndex) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNodeIndex  (in $v0)
    {   // 0x00231400-0x002314A8
        int lnLHSIndex;  // in $v0
        RwV3d lDelta;  // $sp+16
    }
}

// 0x002314B0-0x0023153C (140 bytes), lines 1465-1472
// GetSegmentMidPoint__5CLaneCFiP5RwV3d
void CLane::GetSegmentMidPoint(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $v0)
    {   // 0x002314B0-0x0023153C
        int lnLHSIndex;  // in $v0
    }
}

// 0x00231540-0x002315CC (140 bytes), lines 1422-1433
// GetAvgRightwardsVector__5CLaneCFiP5RwV3d
void CLane::GetAvgRightwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $s0)
    {   // 0x00231540-0x002315CC
        RwV3d lFwdVec;  // $sp+32
    }
}

// 0x002315D0-0x00231680 (176 bytes), lines 1395-1402
// GetRightwardsVector__5CLaneCFiP5RwV3d
void CLane::GetRightwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $v0)
    {   // 0x002315D0-0x00231680
        int lnRHSIndex;  // in $v0
    }
}

// 0x00231680-0x0023170C (140 bytes), lines 1355-1366
// GetAvgLeftwardsVector__5CLaneCFiP5RwV3d
void CLane::GetAvgLeftwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $s0)
    {   // 0x00231680-0x0023170C
        RwV3d lFwdVec;  // $sp+32
    }
}

// 0x00231710-0x002317C0 (176 bytes), lines 1327-1334
// GetLeftwardsVector__5CLaneCFiP5RwV3d
void CLane::GetLeftwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $v0)
    {   // 0x00231710-0x002317C0
        int lnLHSIndex;  // in $v0
    }
}

// 0x002317C0-0x00231870 (176 bytes), lines 1289-1296
// GetBackwardsVector__5CLaneCFiP5RwV3d
void CLane::GetBackwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $v0)
    {   // 0x002317C0-0x00231870
        int lnLHSIndex;  // in $v0
    }
}

// 0x00231870-0x00231AA0 (560 bytes), lines 1139-1218
// GetAvgForwardsVector__5CLaneCFiP5RwV3d
void CLane::GetAvgForwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $v0)
    {   // 0x00231870-0x00231AA0
        int lnRHSFwd3Index;  // in $v0
        int lnLHSFwd3Index;  // in $v0
        int lnRHSFwd2Index;  // in $a3
        int lnLHSFwd2Index;  // in $a0
        int lnLHSIndex;  // in $v0
    }
}

// 0x00231AA0-0x00231B50 (176 bytes), lines 1096-1103
// GetForwardsVector__5CLaneCFiP5RwV3d
void CLane::GetForwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const
{
    // param CLane *this  (in $v0)
    // param int lnSegmentNumber  (in $v0)
    // param RwV3d *lpResultVector  (in $v0)
    {   // 0x00231AA0-0x00231B50
        int lnLHSIndex;  // in $v0
    }
}

// 0x00231B50-0x00231DF8 (680 bytes), lines 1003-1067
// IsInSegment__5CLaneCFPC5RwV3di
int CLane::IsInSegment(RwV3d *lpPosition, int lnSegmentIndex) const
{
    // param CLane *this  (in $v0)
    // param RwV3d *lpPosition  (in $v0)
    // param int lnSegmentIndex  (in $v0)
    {   // 0x00231B50-0x00231DF8
        int lxnRetValue;  // in $v0
        unsigned short lnLHSFwdIndex;  // in $v0
        unsigned short lnRHSIndex;  // in $v0
    }
}

// 0x00231E00-0x002322B8 (1208 bytes), lines 827-958
// IsInSegment__5CLaneCFPC5RwV3dif
int CLane::IsInSegment(RwV3d *lpPosition, int lnSegmentIndex, float lrClearanceWanted) const
{
    // param CLane *this  (in $v0)
    // param RwV3d *lpPosition  (in $v0)
    // param int lnSegmentIndex  (in $v0)
    // param float lrClearanceWanted  ($sp+0)
    {   // 0x00231E00-0x002322B8
        int lxnRetValue;  // in $v0
        int lnRHSFwdIndex;  // in $v0
        int lnLHSFwdIndex;  // in $v0
        int lnRHSIndex;  // in $v0
        int lnLHSIndex;  // in $v0
    }
}

// 0x002322C0-0x00232484 (452 bytes), lines 695-790
// UpdateCurrentRacingLaneSegment__5CLaneFPiPiPC5RwV3d
int CLane::UpdateCurrentRacingLaneSegment(int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition)
{
    // param int *lpnResultSegmentIndex  (in $s4)
    // param int *lpnResultSector  (in $s3)
    // param RwV3d *lpPosition  (in $s2)
    {   // 0x002322C0-0x00232484
        int lnCurrentSegmentIndex;  // in $v0
        int rc;  // in $v0
    }
}

// 0x00232490-0x00232864 (980 bytes), lines 449-672
// UpdateCurrentAILaneSegment__5CLaneFPP5CLanePiPiPC5RwV3d
int CLane::UpdateCurrentAILaneSegment(CLane **lppResultLane, int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition)
{
    // param CLane **lppResultLane  (in $s5)
    // param int *lpnResultSegmentIndex  (in $s4)
    // param int *lpnResultSector  (in $s3)
    // param RwV3d *lpPosition  (in $s2)
    {   // 0x00232490-0x00232864
        int rc;  // in $v0
        unsigned short lunNewLaneIndex16;  // in $v0
        int lnNewSegmentIndex;  // in $v0
        int lnCurrentSegmentIndex;  // in $v0
        CLane *lpCurrentLane;  // in $s0
        int rc;  // in $v0
    }
}

// 0x00232870-0x00232A38 (456 bytes), lines 350-424
// FindClosestRacingLaneSegment__5CLaneFPiPiPC5RwV3di
void CLane::FindClosestRacingLaneSegment(int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition, int lnCurrentSector)
{
    // param int *lpnResultSegmentIndex  (in $v0)
    // param int *lpnResultSector  (in $v0)
    // param RwV3d *lpPosition  (in $v0)
    // param int lnCurrentSector  (in $v0)
    {   // 0x00232870-0x00232A38
        int lnSectorDiff;  // in $t4
        RwV3d *RHSFwd;  // in $t4
        RwV3d *LHSFwd;  // in $t7
        RwV3d *RHS;  // in $t8
        RwV3d *LHS;  // in $t9
        int i;  // in $t2
        CLane *lpLane;  // in $v0
        float lrBestDist;  // optimised away
        float lrDist;  // $sp+0
    }
}

// 0x00232A40-0x00232C88 (584 bytes), lines 209-309
// FindClosestDriveableAILaneSegment__5CLaneFPP5CLanePiPiPC5RwV3di
void CLane::FindClosestDriveableAILaneSegment(CLane **lppResultLane, int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition, int lnCurrentSector)
{
    // param CLane **lppResultLane  (in $v0)
    // param int *lpnResultSegmentIndex  (in $v0)
    // param int *lpnResultSector  (in $v0)
    // param RwV3d *lpPosition  (in $v0)
    // param int lnCurrentSector  (in $v0)
    {   // 0x00232A40-0x00232C88
        int lnSectorDiff;  // in $s0
        RwV3d *RHSFwd;  // in $t8
        RwV3d *LHSFwd;  // in $s0
        RwV3d *RHS;  // in $s1
        RwV3d *LHS;  // in $s2
        int j;  // in $t6
        int i;  // in $t5
        CLane *lpLane;  // in $t4
        float lrBestDist;  // optimised away
        float lrDist;  // $sp+48
    }
}

// 0x00232C90-0x00232EB8 (552 bytes), lines 90-183
// FindClosestAILaneSegment__5CLaneFPP5CLanePiPiPC5RwV3di
void CLane::FindClosestAILaneSegment(CLane **lppResultLane, int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition, int lnCurrentSector)
{
    // param CLane **lppResultLane  (in $v0)
    // param int *lpnResultSegmentIndex  (in $v0)
    // param int *lpnResultSector  (in $v0)
    // param RwV3d *lpPosition  (in $v0)
    // param int lnCurrentSector  (in $v0)
    {   // 0x00232C90-0x00232EB8
        int lnSectorDiff;  // in $s0
        RwV3d *RHSFwd;  // in $t7
        RwV3d *LHSFwd;  // in $t9
        RwV3d *RHS;  // in $s0
        RwV3d *LHS;  // in $s1
        int j;  // in $t5
        int i;  // in $t4
        CLane *lpLane;  // in $t3
        float lrBestDist;  // optimised away
        float lrDist;  // $sp+32
    }
}

// 0x00232EC0-0x00232EC8 (8 bytes), lines 63-63
// Reset__5CLaneFv
void CLane::Reset()
{
    // param CLane *this  (in $v0)
    {   // 0x00232EC0-0x00232EC8
    }
}

