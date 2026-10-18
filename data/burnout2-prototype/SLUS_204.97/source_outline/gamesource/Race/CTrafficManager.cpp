// I:\Burnout 2 Code\gamesource\Race\CTrafficManager.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static int _gnRandomColour;  // 0x00310FEC
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CTrafficParam *gapNextTrafficParam[16000];  // 0x00475AB0
unsigned char gauTrafficSegmentLock8[16000];  // 0x00487740

// ---- functions ----

// 0x0024BFB0-0x0024C078 (200 bytes), lines 702-746
// MeasureBackwardTrafficGap__15CTrafficManagerFP5CLanefPf
float CTrafficManager::MeasureBackwardTrafficGap(CLane *lpLane, float lrParamAlong, float *lprTrafficDist)
{
    // param CLane *lpLane  (in $v0)
    // param float lrParamAlong  ($sp+48)
    // param float *lprTrafficDist  (in $s0)
    {   // 0x0024BFB0-0x0024C078
        CTrafficParam *lpPrevTrafficParam;  // in $v0
        CTrafficParam *lpNextTrafficParam;  // in $v0
        float lrPrevParamAlong;  // $sp+48
        float lrTrafficDist;  // optimised away
        float lrDist;  // $sp+48
    }
}

// 0x0024C080-0x0024C138 (184 bytes), lines 662-695
// MeasureForwardTrafficGap__15CTrafficManagerFP5CLanefPf
float CTrafficManager::MeasureForwardTrafficGap(CLane *lpLane, float lrParamAlong, float *lprTrafficDist)
{
    // param CLane *lpLane  (in $v0)
    // param float lrParamAlong  ($sp+48)
    // param float *lprTrafficDist  (in $s0)
    {   // 0x0024C080-0x0024C138
        CTrafficParam *lpNextTrafficParam;  // in $v0
        float lrNextParamAlong;  // $sp+48
        float lrTrafficDist;  // optimised away
        float lrDist;  // $sp+48
    }
}

// 0x0024C140-0x0024C404 (708 bytes), lines 499-655
// Generate__15CTrafficManagerFP5CLanefi
float CTrafficManager::Generate(CLane *lpLane, float lrParamAlong)
{
    // param CLane *lpLane  (in $s3)
    // param float lrParamAlong  (optimised away)
    {   // 0x0024C140-0x0024C404
        EVehicleColour leColour;  // in $a2
        float lrTrafficLength;  // $sp+112
        int lnSegmentIndex;  // in $s1
        unsigned char luCumulative8;  // in $a2
        unsigned char luRandom8;  // in $v0
        EB2VehicleType leTrailerType;  // $sp+108
        EB2VehicleType leVehicleType;  // $sp+104
        EVehicleClass leVehicleClass;  // in $s0
        CTrafficVehicle *lpTrafficVehicle;  // in $v0
        int i;  // in $a1
    }
}

// 0x0024C410-0x0024C594 (388 bytes), lines 410-476
// DestroyTraffic__15CTrafficManagerFP17TrafficFillerDatai
void CTrafficManager::DestroyTraffic(TrafficFillerData *lpTrafficFillerData, int lnRaceCarIndex)
{
    // param TrafficFillerData *lpTrafficFillerData  (in $v0)
    // param int lnRaceCarIndex  (in $v0)
    {   // 0x0024C410-0x0024C594
        int lnSegmentIndex;  // in $a0
        int lnGlobalSegmentIndex;  // in $a1
        unsigned char luMask8;  // in $t2
        CTrafficParam *lpTrafficParam;  // in $s1
        CTrafficVehicle *lpVehicle;  // in $v0
        CLane *lpLane;  // in $s0
        float lrEndParam;  // optimised away
        int lnEndNode;  // in $v1
        int lnStartNode;  // in $v0
    }
}

// 0x0024C5A0-0x0024C874 (724 bytes), lines 278-391
// GenerateTraffic__15CTrafficManagerFP17TrafficFillerDatai
void CTrafficManager::GenerateTraffic(TrafficFillerData *lpTrafficFillerData, int lnRaceCarIndex)
{
    // param CTrafficManager *this  (in $s5)
    // param TrafficFillerData *lpTrafficFillerData  (in $v0)
    // param int lnRaceCarIndex  (in $s4)
    {   // 0x0024C5A0-0x0024C874
        unsigned char luMask8;  // in $a2
        float lrSegmentLength;  // optimised away
        float lrBackGap;  // $sp+144
        float lrForwardGap;  // optimised away
        float lrBackTrafficDist;  // $sp+140
        float lrForwardTrafficDist;  // $sp+136
        float lrBackFactorDist;  // optimised away
        float lrParamAlong;  // $sp+144
        float lrFactor;  // optimised away
        CLane *lpLane;  // in $s2
        float lrStartParam;  // optimised away
        int lnSegmentIndex;  // in $s1
        int lnEndNode;  // in $s0
        int lnStartNode;  // in $v0
    }
}

// 0x0024C880-0x0024CB28 (680 bytes), lines 145-259
// Update__15CTrafficManagerFv
void CTrafficManager::Update()
{
    // param CTrafficManager *this  (in $s4)
    {   // 0x0024C880-0x0024CB28
        TrafficFillerData *lpTrafficFillerData;  // in $v0
        TrafficHullData *lpTrafficHullData;  // in $a0
        int lnCurrentRacingLaneSegment;  // in $t0
        int lnRaceCarIndex;  // in $a3
        int j;  // in $a2
        int i;  // in $s0
    }
}

// 0x0024CB30-0x0024CBE4 (180 bytes), lines 109-128
// Reset__15CTrafficManagerFv
void CTrafficManager::Reset()
{
    // param CTrafficManager *this  (in $v0)
    {   // 0x0024CB30-0x0024CBE4
        int i;  // in $a2
    }
}

// 0x0024CBF0-0x0024CC78 (136 bytes), lines 75-92
// Setup__15CTrafficManagerFv
void CTrafficManager::Setup()
{
    {   // 0x0024CBF0-0x0024CC78
        int i;  // in $s0
    }
}

