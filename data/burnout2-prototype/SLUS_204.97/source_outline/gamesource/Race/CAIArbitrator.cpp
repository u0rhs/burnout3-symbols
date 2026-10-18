// I:\Burnout 2 Code\gamesource\Race\CAIArbitrator.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kZeroVector;  // 0x002D45E8
static float krRiskThreshold;  // 0x00310CD0
static float krTotalRiskThreshold;  // 0x00310CD4
static float krCurrentRiskThreshold;  // 0x00310CD8
static float krCornerRiskThreshold;  // 0x00310CDC
static float krCornerTotalRiskThreshold;  // 0x00310CE0
static float krCornerCurrentRiskThreshold;  // 0x00310CE4
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0

// ---- functions ----

// 0x00216F20-0x0021761C (1788 bytes), lines 173-359
// Update__13CAIArbitratorFi
void CAIArbitrator::Update(int lbForceTarget)
{
    // param CAIArbitrator *this  (in $s1)
    // param int lbForceTarget  (in $v0)
    {   // 0x00216F20-0x0021761C
        float lrSafeAccRiskTime;  // $sp+76
        float lrSafeMaxRiskTime;  // $sp+72
        float lrSafeAvgRiskTime;  // $sp+68
        int lbCorner;  // in $s0
        float lrAccRiskTime;  // $sp+64
        float lrMaxRiskTime;  // $sp+60
        float lrAvgRiskTime;  // $sp+56
    }
}

// 0x00217620-0x00217688 (104 bytes), lines 140-157
// Reset__13CAIArbitratorFv
void CAIArbitrator::Reset()
{
    // param CAIArbitrator *this  (in $v0)
    {   // 0x00217620-0x00217688
    }
}

// 0x00217690-0x00217744 (180 bytes), lines 84-120
// Init__13CAIArbitratorFv
int CAIArbitrator::Init()
{
    // param CAIArbitrator *this  (in $v0)
    {   // 0x00217690-0x00217744
    }
}

