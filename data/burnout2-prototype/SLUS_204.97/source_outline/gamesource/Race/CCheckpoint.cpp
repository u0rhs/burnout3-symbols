// I:\Burnout 2 Code\gamesource\Race\CCheckpoint.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CTrack gTrack;  // 0x0031F280

// ---- functions ----

// 0x0022B0D0-0x0022B2C4 (500 bytes), lines 194-258
// TestNoRadius__11CCheckPointFP8CRaceCariPi
int CCheckPoint::TestNoRadius(CRaceCar *lpRaceCar, int lnPrevNode, int *lpnAddTime)
{
    // param CCheckPoint *this  (in $s0)
    // param CRaceCar *lpRaceCar  (in $s1)
    // param int lnPrevNode  (in $s2)
    // param int *lpnAddTime  (in $s5)
    {   // 0x0022B0D0-0x0022B2C4
        RwV3d lNextNodePos;  // $sp+128
        RwV3d lNodePos;  // $sp+112
        int nodeplusone;  // in $s3
        int node;  // in $s2
        int tgtNode;  // in $s1
    }
}

// 0x0022B2D0-0x0022B4D4 (516 bytes), lines 142-185
// LineSphereIntersection__FP5RwV3dP5RwV3dP5RwV3df
static int LineSphereIntersection(RwV3d *line1, RwV3d *line2, RwV3d *pos, float radius)
{
    // param RwV3d *line1  (in $v0)
    // param RwV3d *line2  (in $v0)
    // param RwV3d *pos  (in $v0)
    // param float radius  (optimised away)
    {   // 0x0022B2D0-0x0022B4D4
        RwV3d diff;  // $sp+32
        float r2;  // optimised away
        float u;  // $sp+48
    }
}

// 0x0022B4E0-0x0022B638 (344 bytes), lines 59-111
// Test__11CCheckPointFP8CRaceCarPi
int CCheckPoint::Test(CRaceCar *lpRaceCar, int *lpnAddTime)
{
    // param CCheckPoint *this  (in $s1)
    // param CRaceCar *lpRaceCar  (in $s2)
    // param int *lpnAddTime  (in $s0)
    {   // 0x0022B4E0-0x0022B638
    }
}

