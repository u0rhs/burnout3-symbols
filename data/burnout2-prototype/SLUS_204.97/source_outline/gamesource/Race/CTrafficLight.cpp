// I:\Burnout 2 Code\gamesource\Race\CTrafficLight.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CRace gRace;  // 0x0031D4B0

// ---- functions ----

// 0x0024B7D0-0x0024BA0C (572 bytes), lines 312-390
// StopCars__13CTrafficLightFv
void CTrafficLight::StopCars()
{
    // param CTrafficLight *this  (in $s5)
    {   // 0x0024B7D0-0x0024BA0C
        CLane *lpLane;  // in $s2
        float lrDist2;  // $sp+128
        float lrDist1;  // $sp+128
        CTrafficParam *lpTrafficParam;  // in $s1
        int i;  // in $s0
    }
}

// 0x0024BA10-0x0024BC20 (528 bytes), lines 172-260
// Update__13CTrafficLightFv
void CTrafficLight::Update()
{
    // param CTrafficLight *this  (in $s1)
    {   // 0x0024BA10-0x0024BC20
        int lnTimeDiff;  // in $s0
        int lnTime;  // in $v0
    }
}

// 0x0024BC20-0x0024BCE4 (196 bytes), lines 129-154
// SetTime__13CTrafficLightFi
void CTrafficLight::SetTime(int lnTime)
{
    // param CTrafficLight *this  (in $s0)
    // param int lnTime  (in $s1)
    {   // 0x0024BC20-0x0024BCE4
        int lnStartTime;  // in $a1
    }
}

// 0x0024BCF0-0x0024BE0C (284 bytes), lines 90-110
// Reset__13CTrafficLightFv
void CTrafficLight::Reset()
{
    // param CTrafficLight *this  (in $s0)
    {   // 0x0024BCF0-0x0024BE0C
        int lnLaneIndex;  // in $a0
    }
}

// 0x0024BE10-0x0024BEE0 (208 bytes), lines 61-72
// Setup__13CTrafficLightFv
void CTrafficLight::Setup()
{
    // param CTrafficLight *this  (in $v0)
    {   // 0x0024BE10-0x0024BEE0
    }
}

