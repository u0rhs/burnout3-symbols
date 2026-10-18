// I:\Burnout 2 Code\gamesource\Race\CTrafficVehicle.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static TrafficBeepPatternData _gaTrafficBeepPatterns[8];  // 0x002B9F60
float gaarTargetParamPosMtx[4][4];  // 0x002D6880
float gaarTargetParamVelMtx[4][4];  // 0x002D6900
float gTrafficSuspensionStrengthPitch[26];  // 0x002D69B0
float gTrafficSuspensionStrengthRoll[26];  // 0x002D6A20
float gTrafficSuspensionTravel[26];  // 0x002D6A90
static float _gTrafficOncomingSwerveSpeed[26];  // 0x002D6B00
float garCabPivotDistance[26];  // 0x002D6B70
float garTrailerPivotDistance[26];  // 0x002D6BE0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280

// ---- functions ----

// 0x002541C0-0x002545F4 (1076 bytes), lines 2436-2556
// StartColliding__15CTrafficVehicleFi
void CTrafficVehicle::StartColliding(int lnCollisionID)
{
    // param CTrafficVehicle *this  (in $s6)
    // param int lnCollisionID  (in $s5)
    {   // 0x002541C0-0x002545F4
        CCollidingTrafficPhysics *lpCollidingCar;  // in $s1
        CCollidingTrafficPhysics *lpCollidingTrailer;  // in $s7
        CCollidingTrafficPhysics *lpCollidingCab;  // in $s2
        CTrafficVehicle *trailer;  // in $v0
        CTrafficVehicle *cab;  // in $s1
        CTrafficVehicle *lpFrontVehicle;  // in $v0
        int lbDestroyVehicle;  // in $s0
    }
}

// 0x00254600-0x00254C34 (1588 bytes), lines 2283-2421
// ApplyNiceOncomingBehaviour__15CTrafficVehicleFP8CRaceCarf
int CTrafficVehicle::ApplyNiceOncomingBehaviour(CRaceCar *lpRaceCar, float lrDist)
{
    // param CTrafficVehicle *this  (in $s4)
    // param CRaceCar *lpRaceCar  (in $s3)
    // param float lrDist  ($sp+176)
    {   // 0x00254600-0x00254C34
        int lnRand;  // in $s2
        int lbSwerving;  // in $s1
        RwMatrixTag lMatrix;  // $sp+96
        float lrParamInFront;  // $sp+176
        int lbInFront;  // in $s0
        float lrRatio;  // optimised away
        float lrDPRight;  // optimised away
        RwV3d lDiff;  // $sp+160
        int lnHornIndex;  // in $s0
    }
}

// 0x00254C40-0x00254FFC (956 bytes), lines 2168-2261
// ApplyNiceSameWayBehaviour__15CTrafficVehicleFP8CRaceCarf
int CTrafficVehicle::ApplyNiceSameWayBehaviour(CRaceCar *lpRaceCar, float lrDist)
{
    // param CTrafficVehicle *this  (in $s4)
    // param CRaceCar *lpRaceCar  (in $s3)
    // param float lrDist  ($sp+112)
    {   // 0x00254C40-0x00254FFC
        int lnRand;  // in $s0
        int lnHornIndex;  // in $a0
        float lrDP;  // optimised away
    }
}

// 0x00255000-0x0025526C (620 bytes), lines 2069-2146
// DoTrafficBehaviour__15CTrafficVehicleFv
void CTrafficVehicle::DoTrafficBehaviour()
{
    // param CTrafficVehicle *this  (in $s3)
    {   // 0x00255000-0x0025526C
        int lbBehaviourApplied;  // in $s0
        float lrTime;  // optimised away
        float lrDist;  // $sp+96
        CRaceCar *lpRaceCar;  // in $v1
        int i;  // in $a1
    }
}

// 0x00255270-0x002553B0 (320 bytes), lines 2017-2051
// ChangeLane__15CTrafficVehicleFP5CLanef
void CTrafficVehicle::ChangeLane(CLane *lpMergeLane, float lrMergeParamAlong)
{
    // param CTrafficVehicle *this  (in $s1)
    // param CLane *lpMergeLane  (in $s0)
    // param float lrMergeParamAlong  (optimised away)
    {   // 0x00255270-0x002553B0
        CTrafficParam *lpPrevTrafficParam;  // in $v1
        float lrParamAcross;  // optimised away
        int lnRandom;  // in $v0
        float lrSpeedModifier;  // optimised away
    }
}

// 0x002553B0-0x00255534 (388 bytes), lines 1926-1996
// CheckForChangeLane__15CTrafficVehicleFv
void CTrafficVehicle::CheckForChangeLane()
{
    // param CTrafficVehicle *this  (in $s2)
    {   // 0x002553B0-0x00255534
        int lbLeft;  // $sp+76
        int lbChangeLaneNow;  // in $s1
        float lrChangeParamAlong;  // $sp+72
        CLane *lpChangeLane;  // $sp+68
        int i;  // in $s0
    }
}

// 0x00255540-0x002555A8 (104 bytes), lines 1891-1905
// RemoveFromLanes__15CTrafficVehicleFv
void CTrafficVehicle::RemoveFromLanes()
{
    // param CTrafficVehicle *this  (in $s0)
    {   // 0x00255540-0x002555A8
    }
}

// 0x002555B0-0x00255EA4 (2292 bytes), lines 1634-1828
// UpdateTrailerPosition__15CTrafficVehicleFv
void CTrafficVehicle::UpdateTrailerPosition()
{
    // param CTrafficVehicle *this  (in $s0)
    {   // 0x002555B0-0x00255EA4
        RwMatrixTag *lpCabMatrix;  // in $v0
        int lnNumActive;  // in $t2
        float lrResult;  // $sp+160
        RwV3d lDiff;  // $sp+144
        float lrDistToMove;  // $sp+160
        RwV3d lDeltaBackPos;  // $sp+128
        int lnRaceCarIndex;  // in $a2
    }
}

// 0x00255EB0-0x002564FC (1612 bytes), lines 1522-1616
// InitaliseTrailerPosition__15CTrafficVehicleFv
void CTrafficVehicle::InitaliseTrailerPosition()
{
    // param CTrafficVehicle *this  (in $s2)
    {   // 0x00255EB0-0x002564FC
        RwMatrixTag *lpCabMatrix;  // in $v0
        float lrResult;  // $sp+128
        RwV3d lDiff;  // $sp+112
        int lnRaceCarIndex;  // in $s0
    }
}

// 0x00256500-0x00256FF4 (2804 bytes), lines 1195-1504
// UpdatePosition__15CTrafficVehicleFv
void CTrafficVehicle::UpdatePosition()
{
    // param CTrafficVehicle *this  (in $s2)
    {   // 0x00256500-0x00256FF4
        float _tmp;  // $sp+128
        float _result;  // $sp+128
        float lrMaxDistanceToMove;  // $sp+128
        float lrAcrossSpeed;  // optimised away
        float lrDP;  // optimised away
        float lrDirectionChange;  // optimised away
        float lrSpeedModifier;  // optimised away
        float lrSteeringDiff;  // optimised away
        float lrCosTheta;  // $sp+128
        float lrSinTheta;  // optimised away
        float lrDistanceToMove;  // optimised away
        float lrDistanceFromInterpolator;  // optimised away
        RwV3d lCrossProduct;  // $sp+112
        RwV3d lDiff;  // $sp+96
    }
}

// 0x00257000-0x00257568 (1384 bytes), lines 1093-1177
// InitalisePosition__15CTrafficVehicleFv
void CTrafficVehicle::InitalisePosition()
{
    // param CTrafficVehicle *this  (in $s0)
    {   // 0x00257000-0x00257568
    }
}

// 0x00257570-0x00258448 (3800 bytes), lines 641-1075
// Update__15CTrafficVehicleFP18TrafficRaceCarInfo
void CTrafficVehicle::Update(TrafficRaceCarInfo *lpTrafficRaceCarInfo)
{
    // param CTrafficVehicle *this  (in $s4)
    // param TrafficRaceCarInfo *lpTrafficRaceCarInfo  (in $s5)
    {   // 0x00257570-0x00258448
        int lbSpecial;  // in $s2
        float lrDist;  // optimised away
        int lbKillTraffic;  // in $s1
        float lbFullUpdate;  // $sp+144
        float lrResult;  // $sp+144
        int lnNumActive;  // in $t2
        RwV3d lDiff;  // $sp+128
        int lnRaceCarIndex;  // in $s0
        int k;  // in $t2
        int j;  // in $t1
        int i;  // in $a1
    }
}

// 0x00258450-0x00258570 (288 bytes), lines 612-622
// Destroy__15CTrafficVehicleFv
void CTrafficVehicle::Destroy()
{
    // param CTrafficVehicle *this  (in $s3)
    {   // 0x00258450-0x00258570
    }
}

// 0x00258570-0x002587BC (588 bytes), lines 484-594
// Create__15CTrafficVehicleF14EB2VehicleTypei
int CTrafficVehicle::Create(EB2VehicleType leNewVehicleType, int lbHotspotGenerated)
{
    // param CTrafficVehicle *this  (in $s0)
    // param EB2VehicleType leNewVehicleType  (in $v0)
    // param int lbHotspotGenerated  (in $v0)
    {   // 0x00258570-0x002587BC
        int i;  // in $v1
    }
}

// 0x002587C0-0x002589AC (492 bytes), lines 369-464
// Reset__15CTrafficVehicleFv
void CTrafficVehicle::Reset()
{
    // param CTrafficVehicle *this  (in $s0)
    {   // 0x002587C0-0x002589AC
        int i;  // in $a1
        RwV3d lZero;  // $sp+32
    }
}

