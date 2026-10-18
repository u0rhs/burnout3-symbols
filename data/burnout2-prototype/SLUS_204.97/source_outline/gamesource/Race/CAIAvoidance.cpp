// I:\Burnout 2 Code\gamesource\Race\CAIAvoidance.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kYAxis;  // 0x002D45F8
static RwV3d kZeroVector;  // 0x002D4608
static float kSplinePosMatrix[4][4];  // 0x002D4680
static float kSplineDirMatrix[4][4];  // 0x002D4700
float gaarTargetParamPosMtx[4][4];  // 0x002D6880
float gaarTargetParamVelMtx[4][4];  // 0x002D6900
float CTimer::mrGameTimestepSeconds;  // 0x00310898
static float krOutOfRangeTrafficVehiclesBehind;  // 0x00310CE8
static float krOutOfRangeTrafficVehiclesInFront;  // 0x00310CEC
static float krAvoidRaceCarLookAheadDist;  // 0x00310CF0
static float krMaxAIAvoidTargetDistFwd;  // 0x00310CF4
static float krSoftNoGoTime;  // 0x00310CF8
static float krSoftNoGoDistance;  // 0x00310CFC
static float krHardNoGoTime;  // 0x00310D00
static float krHardNoGoDistance;  // 0x00310D04
static float krDistToDiscardFatallyCollidingRacecar;  // 0x00310D08
static float krVertDistDiscard;  // 0x00310D0C
static float krMaxAvoidTime;  // 0x00310D10
static float krAvoidTimeGap;  // 0x00310D14
static float kAvoid10mDesiredSpeed;  // 0x00310D18
static float kAvoid20mDesiredSpeed;  // 0x00310D1C
static float kAvoid30mDesiredSpeed;  // 0x00310D20
static float kAvoidVBigRiskDesiredSpeed;  // 0x00310D24
static float kAvoidBigRiskDesiredSpeed;  // 0x00310D28
static float krAvoidSteeringFactor;  // 0x00310D2C
static float krVelocityScaleFactor;  // 0x00310D30
static float krSoftNoGoDistMultiplier;  // 0x00310D34
static float krSoftNoGoTimeMultiplier;  // 0x00310D38
static float krHardNoGoDistMultiplier;  // 0x00310D3C
static float krHardNoGoTimeMultiplier;  // 0x00310D40
static float krAggressionTimeFactor;  // 0x00310D44
static float krAggressionDistFactor;  // 0x00310D48
static float krAggressionTimeOffset;  // 0x00310D4C
static float krAggressionDistOffset;  // 0x00310D50
static float krAvoidOutputOORTraffic;  // 0x00310D54
static float krAvoidOutputSplinePositions;  // 0x00310D58
static float krAvoidOutputEffectivePos;  // 0x00310D5C
static float krAvoidOutputDesPos;  // 0x00310D60
static float krAvoidOutputSplineFwd;  // 0x00310D64
static float krAvoidOutputSplineLeft;  // 0x00310D68
static float krAvoidOutputApexSplineFwd2;  // 0x00310D6C
static float krAvoidOutputApexSplineLeft2;  // 0x00310D70
static float krAvoidOutputAvgForwards;  // 0x00310D74
static float krAvoidOutputAvgLeftwards;  // 0x00310D78
static float krAvoidOutputAvgRightwards;  // 0x00310D7C
static float krAvoidOutputTrafficNos;  // 0x00310D80
static float krAvoidOutputDesDir;  // 0x00310D84
static float krAvoidPrintTrafDensity;  // 0x00310D88
float CAIDriver::_mrMinSpeed;  // 0x00310E6C
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280

// ---- functions ----

// 0x00217750-0x002182EC (2972 bytes), lines 4841-5013
// DrawDebugInfo__12CAIAvoidanceFv
void CAIAvoidance::DrawDebugInfo()
{
    // param CAIAvoidance *this  (in $s0)
    {   // 0x00217750-0x002182EC
        RwV3d lPosition;  // $sp+128
        int j;  // in $s2
        int k;  // in $v0
        CTrafficSystem *pTrafficSystem;  // in $s1
        RwV3d LinePoints[2];  // $sp+80
        int i;  // in $s1
        RwV3d lDirVec;  // $sp+112
    }
}

// 0x002182F0-0x00218958 (1640 bytes), lines 4644-4826
// CalculateSpline__12CAIAvoidanceFPiP5CLanePfP5RwV3dP5RwV3dP5RwV3dP5RwV3d
void CAIAvoidance::CalculateSpline(int *lanIndices, CLane *lpLane, float *larFrac, RwV3d *lpFwd0, RwV3d *lpFwd1, RwV3d *lpFwd2, RwV3d *lpPos)
{
    // param CAIAvoidance *this  (in $s5)
    // param int *lanIndices  (in $s6)
    // param CLane *lpLane  (in $s7)
    // param float *larFrac  (in $fp)
    // param RwV3d *lpFwd0  (in $s4)
    // param RwV3d *lpFwd1  (in $s3)
    // param RwV3d *lpFwd2  (in $s2)
    // param RwV3d *lpPos  (in $s1)
    {   // 0x002182F0-0x00218958
        int i;  // in $s0
        float laPositions[6][4];  // $sp+160
    }
}

// 0x00218960-0x00219A5C (4348 bytes), lines 4205-4621
// CalculateSplineVectors__12CAIAvoidanceFv
void CAIAvoidance::CalculateSplineVectors()
{
    // param CAIAvoidance *this  (in $s4)
    {   // 0x00218960-0x00219A5C
        CLane *lpApexLane;  // in $s5
        ESegmentLinkTypes leDirection;  // in $v0
        unsigned short lnLaneIndex;  // in $s5
        unsigned short lnSegIndex;  // $sp+208
        ELaneDirection leTargetLaneDir;  // $sp+192
        unsigned short lunTargetSegIndex16;  // $sp+176
        unsigned short lunTargetLaneIndex16;  // in $v0
        float lrFracMult;  // optimised away
        float lrDistFromApex;  // $sp+336
        float lrTotalDistApexToEnd;  // optimised away
        float lrStartFrac;  // optimised away
        float lrFracMult;  // optimised away
        float lrDistFromStart;  // $sp+336
        float lrTotalDistStartToApex;  // optimised away
        float lrStartFrac;  // optimised away
        float lrFrac;  // $sp+336
        LaneData *lpTargLaneData;  // in $s5
        int lnIndex[6];  // $sp+304
        int i;  // in $a0
        float larFrac[6];  // $sp+272
    }
}

// 0x00219A60-0x00219CB4 (596 bytes), lines 4059-4155
// GetLaneRisk__12CAIAvoidanceCFiPfPfPf
void CAIAvoidance::GetLaneRisk(int lnLane, float *lprResultAvgRiskTime, float *lprResultAccRiskTime, float *lprResultMaxRiskTime) const
{
    // param CAIAvoidance *this  (in $v0)
    // param int lnLane  (in $v0)
    // param float *lprResultAvgRiskTime  (in $v0)
    // param float *lprResultAccRiskTime  (in $v0)
    // param float *lprResultMaxRiskTime  (in $v0)
    {   // 0x00219A60-0x00219CB4
        float lrThisTime;  // optimised away
        float lrThisTime;  // optimised away
        int i;  // in $t2
    }
}

// 0x00219CC0-0x00219EE8 (552 bytes), lines 3978-4031
// CalcRiskOfPosition__12CAIAvoidanceCFPC5CLaneiPC5RwV3dPfPfPf
eAIAvoidanceRiskType CAIAvoidance::CalcRiskOfPosition(CLane *lpTargetLane, int lnTargetSegIndex, RwV3d *lpTargetPosition, float *lprResultAvgRiskTime, float *lprResultAccRiskTime, float *lprResultMaxRiskTime) const
{
    // param CAIAvoidance *this  (in $s5)
    // param CLane *lpTargetLane  (in $s4)
    // param int lnTargetSegIndex  (in $s3)
    // param RwV3d *lpTargetPosition  (in $s2)
    // param float *lprResultAvgRiskTime  (in $s1)
    // param float *lprResultAccRiskTime  (in $s0)
    // param float *lprResultMaxRiskTime  (in $s6)
    {   // 0x00219CC0-0x00219EE8
        int lnLane;  // in $v0
        float lrCarFrac;  // optimised away
        RwV3d lRightwards;  // $sp+160
        float lrDist;  // optimised away
        float lrLeftFrac;  // optimised away
        RwV3d lLeftTargPos;  // $sp+144
    }
}

// 0x00219EF0-0x0021A288 (920 bytes), lines 3778-3952
// ClampToWithinDesiredLanes__12CAIAvoidanceCFPC5RwV3dPC5CLaneUsP5RwV3d
void CAIAvoidance::ClampToWithinDesiredLanes(RwV3d *lpInputVector, CLane *lpLane, unsigned short lunSegIndex16, RwV3d *lpResultVector) const
{
    // param CAIAvoidance *this  ($sp+188)
    // param RwV3d *lpInputVector  (in $s5)
    // param CLane *lpLane  (in $s4)
    // param unsigned short lunSegIndex16  (in $v0)
    // param RwV3d *lpResultVector  (in $s3)
    {   // 0x00219EF0-0x0021A288
        unsigned short lunRHSIndex16;  // in $v1
        unsigned short lunLHSIndex16;  // in $v1
        unsigned short lunNewLaneIndex16;  // in $v0
        int lbUsingPrevSeggy;  // $sp+160
        int lxLaneDes;  // in $v0
        ESegmentLinkTypes leLinkSideWanted;  // in $s7
        unsigned short lunTmpSegIndex16;  // in $v0
        unsigned short lunNewSegIndex16;  // in $s1
        CLane *lpTmpLane;  // in $v0
        CLane *lpNewLane;  // in $s0
        int rc;  // in $v0
    }
}

// 0x0021A290-0x0021A404 (372 bytes), lines 3717-3753
// CalculateInterpolatedPosition__12CAIAvoidanceCFPC5CLaneifP5RwV3d
void CAIAvoidance::CalculateInterpolatedPosition(CLane *lpLane, int lnSegmentIndex, float lrOffset, RwV3d *lpResultVector) const
{
    // param CAIAvoidance *this  (in $s3)
    // param CLane *lpLane  (in $s2)
    // param int lnSegmentIndex  (in $s1)
    // param float lrOffset  (optimised away)
    // param RwV3d *lpResultVector  (in $s0)
    {   // 0x0021A290-0x0021A404
        LaneData *lpLaneData;  // in $s4
        int lnRHSIndex;  // in $v0
        int lnLHSIndex;  // in $v0
        float lrTrackWidth;  // $sp+112
    }
}

// 0x0021A410-0x0021A590 (384 bytes), lines 3650-3693
// GetSidePosition__12CAIAvoidanceCFPC5CLanei14ELaneDirectionP5RwV3d
void CAIAvoidance::GetSidePosition(CLane *lpLane, int lnSegmentIndex, ELaneDirection leSideWanted, RwV3d *lpResultVector) const
{
    // param CLane *lpLane  (in $v0)
    // param int lnSegmentIndex  (in $v0)
    // param ELaneDirection leSideWanted  (in $s6)
    // param RwV3d *lpResultVector  (in $s5)
    {   // 0x0021A410-0x0021A590
        ESegmentLinkTypes leLinkSideWanted;  // in $a3
        int lnSideIndex;  // in $s2
        unsigned short lunNewSegIndex16;  // in $a2
        unsigned short lunNewLaneIndex16;  // in $s1
        CLane *lpNewLane;  // in $s0
    }
}

// 0x0021A590-0x0021AE5C (2252 bytes), lines 3270-3630
// Update__12CAIAvoidanceFi
void CAIAvoidance::Update(int lbForceUpdate)
{
    // param CAIAvoidance *this  (in $s4)
    // param int lbForceUpdate  (in $s0)
    {   // 0x0021A590-0x0021AE5C
        float lrLeftFrac;  // optimised away
        int rc;  // in $v0
        unsigned short lunLHSIndex16;  // in $v0
        unsigned short lunSegIndex16;  // in $s2
        RwV3d lNewPos;  // $sp+192
        float lrFwdFrac;  // $sp+208
        int lnLHSIndex;  // in $v0
        int lnRHSFwdIndex;  // in $s1
        int lnRHSIndex;  // in $s0
        unsigned short lunNewSegmentIndex16;  // in $s3
        unsigned short lunNewLaneIndex16;  // in $s1
        int lnSegmentIndex;  // in $s0
        CLane *lpLane;  // in $s2
        RwV3d lTmpVec;  // $sp+176
        int c;  // in $a0
        RwV3d lLeftVec;  // $sp+160
    }
}

// 0x0021AE60-0x0021B3BC (1372 bytes), lines 2988-3253
// CheckNoGoZones__12CAIAvoidanceFv
void CAIAvoidance::CheckNoGoZones()
{
    // param CAIAvoidance *this  (in $s1)
    {   // 0x0021AE60-0x0021B3BC
        CLane *lpLane;  // in $v0
        int lnLookAheadNumLanes;  // $sp+268
        unsigned short launLookAheadLaneSegs16[16];  // $sp+224
        unsigned short launLookAheadLaneIndices16[16];  // $sp+192
        unsigned short lunLookAheadRightmostSegIndex16;  // $sp+286
        unsigned short lunLookAheadRightmostLaneIndex16;  // $sp+284
        unsigned short lunLookAheadLeftmostSegIndex16;  // $sp+282
        unsigned short lunLookAheadLeftmostLaneIndex16;  // $sp+280
        int lnSegIndex;  // in $s4
        int lnNumLanes;  // $sp+264
        unsigned short launLaneSegs16[16];  // $sp+160
        unsigned short launLaneIndices16[16];  // $sp+128
        unsigned short lunRightmostSegIndex16;  // $sp+278
        unsigned short lunRightmostLaneIndex16;  // $sp+276
        unsigned short lunLeftmostSegIndex16;  // $sp+274
        unsigned short lunLeftmostLaneIndex16;  // $sp+272
        int lnTmp;  // $sp+260
        int j;  // in $s4
        int i;  // in $s3
        unsigned short lunNewSegmentIndex16;  // in $s2
        unsigned short lunNewLaneIndex16;  // in $s0
        int lnNewSegIndex;  // in $v0
        LaneData *lpLaneData;  // in $s2
        CLane *lpNewLane;  // in $s0
        float distance;  // optimised away
        int leftLane;  // in $v1
        int rightLane;  // in $v1
        float time;  // optimised away
    }
}

// 0x0021B3C0-0x0021B684 (708 bytes), lines 2878-2969
// FillInNoGoData__12CAIAvoidanceFPC5CLanei20eAIAvoidanceRiskTypeff
void CAIAvoidance::FillInNoGoData(CLane *lpLane, int lnSegIndex, eAIAvoidanceRiskType leLaneRiskType, float lrTime, float lrDistance)
{
    // param CAIAvoidance *this  (in $s6)
    // param CLane *lpLane  (in $s5)
    // param int lnSegIndex  (in $v0)
    // param eAIAvoidanceRiskType leLaneRiskType  (in $s4)
    // param float lrTime  (optimised away)
    // param float lrDistance  (optimised away)
    {   // 0x0021B3C0-0x0021B684
        float lrFwdFrac;  // $sp+144
        int leftLane;  // in $a1
        int rightLane;  // in $a0
        float NoGoLeft;  // optimised away
        float lrDistFromRHS;  // optimised away
        int lnRHSFwdIndex;  // in $s3
        int lnLHSFwdIndex;  // in $s2
        int lnRHSIndex;  // in $s1
        int lnLHSIndex;  // in $s0
    }
}

// 0x0021B690-0x0021B7EC (348 bytes), lines 2787-2857
// GetSafestArea__12CAIAvoidanceFv
int CAIAvoidance::GetSafestArea()
{
    // param CAIAvoidance *this  (in $v0)
    {   // 0x0021B690-0x0021B7EC
        float scale;  // $sp+0
        float inverse;  // optimised away
        float *pLaneRiskTime;  // in $t0
        float currentRisk;  // optimised away
        int leftLane;  // in $a1
        int rightLane;  // in $a3
        int BestLane;  // in $v0
        float BestMax;  // optimised away
        int i;  // in $a2
    }
}

// 0x0021B7F0-0x0021C85C (4204 bytes), lines 2141-2751
// GenerateTarget__12CAIAvoidanceFv
void CAIAvoidance::GenerateTarget()
{
    // param CAIAvoidance *this  (in $s1)
    {   // 0x0021B7F0-0x0021C85C
        float lrTrafDensitySpeed;  // $sp+96
        float lrTrafDensityFac;  // $sp+96
        int lnMaxLane;  // in $a1
        int lnLaneDiff;  // in $a0
        int lnMaxLane;  // in $a1
        int lnLaneDiff;  // in $a0
        float risk;  // $sp+96
        float ScoreRight;  // optimised away
        float ScoreLeft;  // optimised away
        float RightMinAvoidTime;  // optimised away
        float RightAvoidTime;  // optimised away
        int lnNewRightAvoidLane;  // in $a1
        int lnNewLeftAvoidLane;  // in $a1
        float LeftMinAvoidTime;  // optimised away
        float LeftAvoidTime;  // optimised away
        int safeLane;  // in $v0
        int lbDecisionIsLeft;  // in $v1
        RwV3d carRight;  // $sp+80
        RwV3d carAt;  // $sp+64
        float carRadius;  // optimised away
        float DotAt;  // $sp+96
        float DotLeft;  // optimised away
        int i;  // in $a0
        int c;  // in $v0
        float CarAvoidDist;  // $sp+96
        float CarAvoidTime;  // $sp+96
        RwMatrixTag *pCarMatrix;  // in $a0
        CAITarget *pTarget;  // in $s0
    }
}

// 0x0021C860-0x0021C9F0 (400 bytes), lines 1714-1847
// CheckTrafficOutOfRange__12CAIAvoidanceFv
void CAIAvoidance::CheckTrafficOutOfRange()
{
    // param CAIAvoidance *this  (in $v0)
    {   // 0x0021C860-0x0021C9F0
        float lrIncTrafficDensity;  // optimised away
        CLane *lpTrafficLane;  // in $t0
        CTrafficGenerator *lpTrafficGenerator;  // in $a3
        int lnTrafGenIndex;  // in $a2
        TrafficHullData *lpTrafficHullData;  // in $a1
        int lnNumLanesUsed;  // in $v1
    }
}

// 0x0021C9F0-0x0021DB38 (4424 bytes), lines 1068-1689
// AddCarToLanes__12CAIAvoidanceF20eAIAvoidanceRiskTypefffPC5RwV3dPC5RwV3dPC5RwV3dPC5RwV3dPC7SRCBBox
void CAIAvoidance::AddCarToLanes(eAIAvoidanceRiskType leRiskType, float lrDistAhead, float lrRelDist, float lrTimeAhead, RwV3d *lpStartPos, RwV3d *lpEndPos, RwV3d *lpStartCarAt, RwV3d *lpEndCarAt, SRCBBox *lpBBox)
{
    // param CAIAvoidance *this  (in $s4)
    // param eAIAvoidanceRiskType leRiskType  ($sp+460)
    // param float lrDistAhead  (optimised away)
    // param float lrRelDist  (optimised away)
    // param float lrTimeAhead  (optimised away)
    // param RwV3d *lpStartPos  (in $s6)
    // param RwV3d *lpEndPos  ($sp+456)
    // param RwV3d *lpStartCarAt  (in $fp)
    // param RwV3d *lpEndCarAt  ($sp+452)
    // param SRCBBox *lpBBox  (in $s5)
    {   // 0x0021C9F0-0x0021DB38
        int LaneNo;  // in $a1
        int LeftLane;  // in $a0
        int LaneNo;  // in $a1
        int LeftLane;  // in $a0
        RwV3d lNodeRight;  // $sp+576
        float lrInterpolatedDistFromLHS;  // optimised away
        RwV3d lLeftHaloPos;  // $sp+560
        RwV3d lRightVec;  // $sp+544
        float lrInterpolatedDistFromRHS;  // optimised away
        RwV3d lFwdVec;  // $sp+528
        float lrInterpolatedDistFromRHS;  // optimised away
        RwV3d lRightVec;  // $sp+512
        RwV3d lFwdVec;  // $sp+496
        int lbLaneOK;  // in $s2
        unsigned short lunNewSeg16;  // $sp+272
        unsigned short lunNewLane16;  // $sp+256
        int lnArrayIndex;  // $sp+240
        unsigned short lunNewSegIndex16;  // in $s7
        unsigned short lunNewLaneIndex16;  // $sp+224
        ELaneDirection leLastDir;  // in $s7
        int rc;  // in $v0
        float endTrafficRadius;  // optimised away
        float startTrafficRadius;  // optimised away
        float DotLeft;  // optimised away
        float DotAt;  // $sp+592
        float lrDistOnLeftOfCarEnd;  // optimised away
        float lrDistOnLeftOfCarStart;  // optimised away
        float lrLaneDistFromRHS;  // optimised away
        float dp2;  // optimised away
        float dp1;  // optimised away
        int lnTmpSegIndex;  // in $v1
        CLane *lpTmpLane;  // in $v0
        int lbSuccess;  // $sp+208
        int lnPOILaneCurrentSegmentIndex;  // $sp+204
        int lnPOISegIndex;  // in $s3
        CLane *lpPOILane;  // in $s2
        int lnSegIndex;  // in $s1
        CLane *lpLane;  // in $s0
        RwV3d lNodeLeft;  // $sp+480
        int j;  // in $s3
        RwV3d rightHaloPos;  // $sp+464
    }
}

// 0x0021DB40-0x0021E3C0 (2176 bytes), lines 847-1055
// CheckTraffic__12CAIAvoidanceFv
void CAIAvoidance::CheckTraffic()
{
    // param CAIAvoidance *this  (in $s3)
    {   // 0x0021DB40-0x0021E3C0
        RwV3d diff;  // $sp+288
        float carDistance;  // $sp+304
        float time;  // optimised away
        float endParam;  // optimised away
        RwV3d endPos;  // $sp+272
        float startParam;  // $sp+304
        RwV3d startPos;  // $sp+256
        float endTime;  // $sp+304
        float startTime;  // optimised away
        float diffDirSpeed;  // optimised away
        float relDist;  // $sp+304
        RwV3d relDiff;  // $sp+240
        float relSpeed;  // $sp+304
        RwV3d relVel;  // $sp+224
        CAITarget *pTarget;  // in $v0
        CTrafficSystem *pTrafficSystem;  // in $s2
        CTrafficVehicle *pTraffic;  // in $s1
        int k;  // in $a0
        int i;  // in $s0
        RwMatrixTag endMatrix;  // $sp+160
        RwMatrixTag startMatrix;  // $sp+96
    }
}

// 0x0021E3C0-0x0021EAB0 (1776 bytes), lines 611-828
// CheckRaceCar__12CAIAvoidanceFv
void CAIAvoidance::CheckRaceCar()
{
    // param CAIAvoidance *this  (in $s4)
    {   // 0x0021E3C0-0x0021EAB0
        float lrAgg;  // optimised away
        int c;  // in $s1
        CRaceCar *pCollCar;  // in $s0
        float carDistance;  // $sp+352
        float time;  // optimised away
        RwV3d endPos;  // $sp+336
        RwV3d startPos;  // $sp+320
        float endTime;  // optimised away
        float startTime;  // $sp+352
        float diffDirSpeed;  // optimised away
        float relSpeed;  // $sp+352
        RwMatrixTag endMatrix;  // $sp+256
        RwMatrixTag startMatrix;  // $sp+192
        float distance;  // optimised away
    }
}

// 0x0021EAB0-0x0021EF04 (1108 bytes), lines 489-592
// Reset__12CAIAvoidanceFv
void CAIAvoidance::Reset()
{
    // param CAIAvoidance *this  (in $v0)
    {   // 0x0021EAB0-0x0021EF04
        CAICar *pAICar;  // in $t0
        int c;  // in $t2
    }
}

// 0x0021EF10-0x0021F190 (640 bytes), lines 220-469
// Init__12CAIAvoidanceFv
int CAIAvoidance::Init()
{
    // param CAIAvoidance *this  (in $v0)
    {   // 0x0021EF10-0x0021F190
    }
}

// 0x0021F190-0x0021F2B8 (296 bytes), lines 149-205
// FindSideLane__FP5CLaneUs17ESegmentLinkTypesPUsPUsPUsPUsPi
void FindSideLane(CLane *lpLane, unsigned short lunSegIndex16, ESegmentLinkTypes leSideWanted, unsigned short *lpunResultLaneIndex16, unsigned short *lpunResultSegIndex16, unsigned short *launResultLaneArray16, unsigned short *launResultSegArray16, int *lnResultNumArrayEntries)
{
    // param CLane *lpLane  (in $v0)
    // param unsigned short lunSegIndex16  (in $v0)
    // param ESegmentLinkTypes leSideWanted  (in $v0)
    // param unsigned short *lpunResultLaneIndex16  (in $s6)
    // param unsigned short *lpunResultSegIndex16  (in $s5)
    // param unsigned short *launResultLaneArray16  (in $s4)
    // param unsigned short *launResultSegArray16  (in $s7)
    // param int *lnResultNumArrayEntries  (in $s3)
    {   // 0x0021F190-0x0021F2B8
        unsigned short lunNewSegmentIndex16;  // in $s1
        unsigned short lunNewLaneIndex16;  // in $s0
        int lnNewSegIndex;  // in $a0
        CLane *lpNewLane;  // in $v1
    }
}

