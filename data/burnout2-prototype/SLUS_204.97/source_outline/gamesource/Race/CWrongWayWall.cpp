// I:\Burnout 2 Code\gamesource\Race\CWrongWayWall.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CTrack gTrack;  // 0x0031F280

// ---- functions ----

// 0x002594F0-0x002594F8 (8 bytes), lines 641-641
// Destroy__13CWrongWayWallFv
void CWrongWayWall::Destroy()
{
    {   // 0x002594F0-0x002594F8
    }
}

// 0x00259500-0x00259568 (104 bytes), lines 615-635
// Shutdown__13CWrongWayWallFv
void CWrongWayWall::Shutdown()
{
    // param CWrongWayWall *this  (in $s0)
    {   // 0x00259500-0x00259568
    }
}

// 0x00259570-0x002597E8 (632 bytes), lines 393-495
// Draw__13CWrongWayWallFP8CRaceCar
int CWrongWayWall::Draw(CRaceCar *lpCar)
{
    // param CWrongWayWall *this  (in $s0)
    // param CRaceCar *lpCar  (in $v0)
    {   // 0x00259570-0x002597E8
        int bAlpha;  // $sp+92
        int bZWrite;  // $sp+88
        int bZTest;  // $sp+84
        RwMatrixTag *pMatrix;  // in $v0
        RwRGBA red;  // $sp+80
        RwV3d up;  // $sp+32
    }
}

// 0x002597F0-0x00259CA0 (1200 bytes), lines 237-369
// Test__13CWrongWayWallFP8CRaceCar
int CWrongWayWall::Test(CRaceCar *lpCar)
{
    // param CWrongWayWall *this  (in $s4)
    // param CRaceCar *lpCar  (in $s3)
    {   // 0x002597F0-0x00259CA0
        RwV3d CarVec;  // $sp+112
        RwV3d lNormal;  // $sp+96
        RwMatrixTag *lpCarMatrix;  // in $s1
        int lnCarNode;  // in $s0
    }
}

// 0x00259CA0-0x00259FBC (796 bytes), lines 198-214
// Reset__13CWrongWayWallFv
void CWrongWayWall::Reset()
{
    // param CWrongWayWall *this  (in $s1)
    {   // 0x00259CA0-0x00259FBC
        RwV3d zero;  // $sp+80
    }
}

// 0x00259FC0-0x0025A1E0 (544 bytes), lines 77-175
// Setup__13CWrongWayWallFv
void CWrongWayWall::Setup()
{
    // param CWrongWayWall *this  (in $s3)
    {   // 0x00259FC0-0x0025A1E0
        RwSphere bsphere;  // $sp+80
        RwRGBA red;  // $sp+108
        RpTriangle *pTriangles;  // in $s2
        RwRGBA *pColors;  // in $a0
        RwV3d *pVertices;  // in $t0
        RpMorphTarget *pMorphTarget;  // in $s1
        RpGeometry *pGeom;  // in $s0
    }
}

// 0x0025A1E0-0x0025A1E8 (8 bytes), lines 68-68
// Init__13CWrongWayWallFv
void CWrongWayWall::Init()
{
    {   // 0x0025A1E0-0x0025A1E8
    }
}

