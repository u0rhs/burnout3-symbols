// I:\Burnout 2 Code\gamesource\Race\CHotspot.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
float garCabPivotDistance[26];  // 0x002D6B70
float garTrailerPivotDistance[26];  // 0x002D6BE0
/* vtable */ void *CHotspot::__vtable[];  // 0x0030F8A0
static int _gnRandomColour;  // 0x00310EE4
CTrack gTrack;  // 0x0031F280
CTrafficParam *gapNextTrafficParam[16000];  // 0x00475AB0

// ---- functions ----

// 0x0022FDC0-0x0022FE64 (164 bytes), lines 433-464
// GetDistFromParam__8CHotspotFfi
float CHotspot::GetDistFromParam(float lrParamAlong, int lnLaneIndex)
{
    // param CHotspot *this  (in $v0)
    // param float lrParamAlong  ($sp+0)
    // param int lnLaneIndex  (in $v0)
    {   // 0x0022FDC0-0x0022FE64
        int lnNumSegments;  // in $v0
        SegmentDimensions *lpaSegmentDimensions;  // in $a1
        float lrCurrentDistance;  // $sp+0
        int lnCurrentSegmentIndex;  // in $a0
        int lnSegmentIndex;  // in $v1
    }
}

// 0x0022FE70-0x0022FF1C (172 bytes), lines 366-396
// GetParamFromDist__8CHotspotFfi
float CHotspot::GetParamFromDist(float lrDistance, int lnLaneIndex)
{
    // param CHotspot *this  (in $v0)
    // param float lrDistance  ($sp+0)
    // param int lnLaneIndex  (in $v0)
    {   // 0x0022FE70-0x0022FF1C
        SegmentDimensions *lpaSegmentDimensions;  // in $v1
        float lrCurrentDistance;  // optimised away
        float lrParamAlong;  // $sp+0
        int lnSegmentIndex;  // in $a0
    }
}

// 0x0022FF20-0x002301E4 (708 bytes), lines 225-333
// Generate__8CHotspotFii
void CHotspot::Generate(int lnLaneIndex, int lnPatternIndex)
{
    // param CHotspot *this  (in $s4)
    // param int lnLaneIndex  (in $s3)
    // param int lnPatternIndex  (in $s7)
    {   // 0x0022FF20-0x002301E4
        EVehicleColour leColour;  // in $a0
        HotspotVehicleData *lpHotspotVehicleData;  // in $s5
        HotspotLaneData *lpHotspotLaneData;  // in $s6
        float lrTrafficLength;  // optimised away
        EB2VehicleType leTrailerType;  // $sp+156
        EB2VehicleType leVehicleType;  // $sp+152
        EVehicleClass leVehicleClass;  // in $s0
        CTrafficVehicle *lpTrafficVehicle;  // in $v0
    }
}

// 0x002301F0-0x0023036C (380 bytes), lines 130-174
// OnTrigger__8CHotspotFiP8CRaceCariPv
void CHotspot::OnTrigger()
{
    // param CHotspot *this  (in $s4)
    {   // 0x002301F0-0x0023036C
        HotspotLaneData *lpHotspotLaneData;  // in $s2
        CTrafficParam *lpTrafficParam;  // in $s1
        CTrafficVehicle *lpVehicle;  // in $v0
        int lnPatternIndex;  // in $s1
        int lnLaneIndex;  // in $s0
    }
}

// 0x00230370-0x00230440 (208 bytes), lines 82-102
// Init__8CHotspotFv
void CHotspot::Init()
{
    // param CHotspot *this  (in $v0)
    {   // 0x00230370-0x00230440
        HotspotLaneData *lpHotspotLaneData;  // in $a3
        int lnLaneIndex;  // in $a2
    }
}

