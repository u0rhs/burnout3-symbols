// I:\Burnout 2 Code\gamesource\Race\CTrafficParam.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
float gaarTargetParamPosMtx[4][4];  // 0x002D6880
float gaarTargetParamVelMtx[4][4];  // 0x002D6900
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280

// ---- functions ----

// 0x0024CC80-0x0024CF38 (696 bytes), lines 1686-1783
// CheckForProximityChangeLane__13CTrafficParamFfPP5CLanePfPi
int CTrafficParam::CheckForProximityChangeLane(float lrDistance, CLane **lppLane, float *lprParamAlong, int *lpbIsLeft)
{
    // param CTrafficParam *this  (in $s5)
    // param float lrDistance  ($sp+144)
    // param CLane **lppLane  (in $s4)
    // param float *lprParamAlong  (in $s3)
    // param int *lpbIsLeft  (in $s2)
    {   // 0x0024CC80-0x0024CF38
        float lrParameter;  // optimised away
        unsigned char luValue8;  // in $s6
        unsigned char luCumulative8;  // in $a2
        ETrafficChangeLaneTypes leChangeLaneType;  // in $a1
        CLane *lpChangeLane;  // in $v1
        unsigned short luChangeSegmentIndex16;  // in $v0
        unsigned short luChangeLaneIndex16;  // in $v0
        TrafficSegmentData *lpaTrafficSegmentData;  // in $s0
        float lrProxDistanceThreshold;  // optimised away
        int lnSegmentIndex;  // in $v1
        int lnIndex;  // in $a0
    }
}

// 0x0024CF40-0x0024D2AC (876 bytes), lines 1530-1665
// CheckForChangeLane__13CTrafficParamFPP5CLanePfPfPi
int CTrafficParam::CheckForChangeLane(CLane **lppChangeLane, float *lprChangeLaneParamAlong, float *lprParamAlongMergePoint, int *lpbIsLeft)
{
    // param CTrafficParam *this  (in $s5)
    // param CLane **lppChangeLane  (in $s4)
    // param float *lprChangeLaneParamAlong  (in $s3)
    // param float *lprParamAlongMergePoint  (in $s6)
    // param int *lpbIsLeft  (in $s7)
    {   // 0x0024CF40-0x0024D2AC
        unsigned char luValue8;  // $sp+160
        unsigned char luCumulative8;  // in $a2
        int lnLookAheadSegmentIndex;  // in $fp
        ETrafficChangeLaneTypes leChangeLaneType;  // in $a1
        CLane *lpChangeLane;  // in $v1
        unsigned short luChangeSegmentIndex16;  // in $v0
        unsigned short luChangeLaneIndex16;  // in $v0
        TrafficSegmentData *lpaTrafficSegmentData;  // in $s1
        int lnSegmentIndex;  // in $s0
        int lnIndex;  // in $a0
    }
}

// 0x0024D2B0-0x0024D348 (152 bytes), lines 1493-1509
// RemoveFromTrafficLights__13CTrafficParamFv
int CTrafficParam::RemoveFromTrafficLights()
{
    // param CTrafficParam *this  (in $v0)
    {   // 0x0024D2B0-0x0024D348
        int lbResult;  // in $v0
        int j;  // in $t0
        int i;  // in $a3
    }
}

// 0x0024D350-0x0024D4FC (428 bytes), lines 1371-1468
// Remove__13CTrafficParamFv
int CTrafficParam::Remove()
{
    // param CTrafficParam *this  (in $v0)
    {   // 0x0024D350-0x0024D4FC
        int lnLastNode;  // in $a2
        int lnNextNode;  // in $a1
    }
}

// 0x0024D500-0x0024D848 (840 bytes), lines 1129-1345
// Insert__13CTrafficParamFP5CLanefff18ETrafficParamState
int CTrafficParam::Insert(CLane *lpLane, float lrParamAlong, float lrParamAcross, float lrSpeedModifier, ETrafficParamState leInitialState)
{
    // param CTrafficParam *this  (in $s3)
    // param CLane *lpLane  (in $s2)
    // param float lrParamAlong  ($sp+80)
    // param float lrParamAcross  ($sp+80)
    // param float lrSpeedModifier  ($sp+80)
    // param ETrafficParamState leInitialState  (in $v0)
    {   // 0x0024D500-0x0024D848
        CTrafficParam *lpPrevTrafficParam;  // in $v1
        CTrafficParam *lpNextTrafficParam;  // in $a2
        int lnNextNode;  // in $a1
        int lnLastNode;  // in $v0
        int lbEndOfList;  // in $s0
    }
}

// 0x0024D850-0x0024DD08 (1208 bytes), lines 831-1104
// CalculateTargetParamMatrix__13CTrafficParamFfP11RwMatrixTag
void CTrafficParam::CalculateTargetParamMatrix(float lrParamAlong, RwMatrixTag *lpResultMatrix)
{
    // param CTrafficParam *this  (in $v0)
    // param float lrParamAlong  ($sp+256)
    // param RwMatrixTag *lpResultMatrix  (in $v0)
    {   // 0x0024D850-0x0024DD08
        float lrInvParamAcross;  // optimised away
        float lrParamAcross;  // optimised away
        float lrInvParameter;  // $sp+256
        int lnNumSegments;  // in $a3
        int lnLaneNodeIndex;  // in $t1
        int lnNodeIndex;  // in $a2
        int lnLastNode;  // in $v1
        RwV3d lRightPosition;  // $sp+240
        RwV3d lLeftPosition;  // $sp+224
        RwV3d lRight;  // $sp+208
        float larParam[4];  // $sp+192
        RwV4d laSplinePoints[8];  // $sp+64
        RwV4d laTempResults[4];  // $sp+0
    }
}

// 0x0024DD10-0x0024DD1C (12 bytes), lines 791-791
// CalculateTargetParamMatrix__13CTrafficParamFv
void CTrafficParam::CalculateTargetParamMatrix()
{
    // param CTrafficParam *this  (in $v0)
    {   // 0x0024DD10-0x0024DD1C
    }
}

// 0x0024DD20-0x0024DF60 (576 bytes), lines 654-773
// UpdateNodes__13CTrafficParamFv
int CTrafficParam::UpdateNodes()
{
    // param CTrafficParam *this  (in $s1)
    {   // 0x0024DD20-0x0024DF60
        float lrSpeed;  // optimised away
        float lrSpeed;  // optimised away
        int lnNextNode;  // in $v0
        int lbNextTrafficParamAhead;  // in $a0
        CTrafficParam *lpForwardTrafficParam;  // in $v1
        CTrafficParam *lpNextTrafficParam;  // in $s0
    }
}

// 0x0024DF60-0x0024E07C (284 bytes), lines 579-637
// Update__13CTrafficParamFv
int CTrafficParam::Update()
{
    // param CTrafficParam *this  (in $v0)
    {   // 0x0024DF60-0x0024E07C
        float lrOldSectionLength;  // optimised away
        int lnNumSegments;  // in $a3
        int lnCurrentSegment;  // in $a2
        float lrParameter;  // optimised away
    }
}

// 0x0024E080-0x0024EF2C (3756 bytes), lines 171-562
// CalcSpeed__13CTrafficParamFv
int CTrafficParam::CalcSpeed()
{
    // param CTrafficParam *this  (in $s4)
    {   // 0x0024E080-0x0024EF2C
        float lrRaceCarDist;  // $sp+272
        CRaceCar *lpScoreCar;  // in $v0
        int lbSlowing;  // in $s5
        int lbCrash;  // in $s6
        float lrParamAcross;  // optimised away
        RwMatrixTag *lpCollideMatrix;  // in $v1
        CTrafficVehicle *lpTrafficVehicle;  // in $s0
        float lrTargetSpeed2;  // $sp+272
        float lrTargetSpeed;  // $sp+272
        float lrDist;  // $sp+272
        float lrDP;  // optimised away
        RwV3d lDiff;  // $sp+192
        int lnLastNode;  // $sp+176
        int i;  // in $s3
    }
}

// 0x0024EF30-0x0024EFFC (204 bytes), lines 113-153
// Reset__13CTrafficParamFv
int CTrafficParam::Reset()
{
    // param CTrafficParam *this  (in $v0)
    {   // 0x0024EF30-0x0024EFFC
    }
}

