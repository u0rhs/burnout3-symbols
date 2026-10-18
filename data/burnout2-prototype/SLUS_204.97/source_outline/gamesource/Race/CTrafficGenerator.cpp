// I:\Burnout 2 Code\gamesource\Race\CTrafficGenerator.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
unsigned char gauTrafficSegmentLock8[16000];  // 0x00487740

// ---- functions ----

// 0x0024B140-0x0024B494 (852 bytes), lines 182-283
// Update__17CTrafficGeneratorFi
void CTrafficGenerator::Update(int lnRaceCarIndex)
{
    // param CTrafficGenerator *this  (in $s2)
    // param int lnRaceCarIndex  (in $s1)
    {   // 0x0024B140-0x0024B494
        unsigned char luMask8;  // in $a2
        float lrRand;  // $sp+112
        unsigned int luRand;  // in $v0
        int lnTimeDiff;  // in $a0
        int lnGlobalSegmentIndex;  // in $a3
        float lrBackFactorDist;  // optimised away
        float lrBackTrafficDist;  // $sp+108
        float lrForwardTrafficDist;  // $sp+104
        float lrBackGap;  // $sp+112
        float lrForwardGap;  // optimised away
        unsigned short luVehicleIndex16;  // in $v0
        CTrafficVehicle *lpVehicle;  // in $v0
        CTrafficParam *lpTrafficParam;  // in $a3
    }
}

// 0x0024B4A0-0x0024B524 (132 bytes), lines 144-164
// LockInitialHull__17CTrafficGeneratorFi
void CTrafficGenerator::LockInitialHull(int lnRaceCarIndex)
{
    // param CTrafficGenerator *this  (in $v0)
    // param int lnRaceCarIndex  (in $v0)
    {   // 0x0024B4A0-0x0024B524
        unsigned char luMask8;  // in $a3
        int lnEndNode;  // in $v0
        int lnStartNode;  // in $v0
        int lnSegmentIndex;  // in $v0
    }
}

// 0x0024B530-0x0024B628 (248 bytes), lines 95-113
// Reset__17CTrafficGeneratorFv
void CTrafficGenerator::Reset()
{
    // param CTrafficGenerator *this  (in $s0)
    {   // 0x0024B530-0x0024B628
        float lrRand;  // $sp+32
        unsigned int luRand;  // in $v0
    }
}

// 0x0024B630-0x0024B7C8 (408 bytes), lines 59-78
// Setup__17CTrafficGeneratorFv
void CTrafficGenerator::Setup()
{
    // param CTrafficGenerator *this  (in $v0)
    {   // 0x0024B630-0x0024B7C8
    }
}

