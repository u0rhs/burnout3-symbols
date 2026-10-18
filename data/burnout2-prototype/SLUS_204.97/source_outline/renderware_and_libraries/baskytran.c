// baskytran.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x00168BE0-0x00168C54 (116 bytes), lines 74-115
void matrixASMMult(RwMatrixTag *dstMat, RwMatrixTag *matA, RwMatrixTag *matB)
{
    // param RwMatrixTag *dstMat  (in $a0)
    // param RwMatrixTag *matA  (in $a1)
    // param RwMatrixTag *matB  (in $a2)
    {   // 0x00168BE0-0x00168C54
    }
}

// 0x00168C60-0x00168CF0 (144 bytes), lines 141-185
RwV3d *vectorASMMultPoint(RwV3d *pointsOut, RwV3d *pointsIn, int numPoints, RwMatrixTag *matrix)
{
    // param RwV3d *pointsOut  (in $a0)
    // param RwV3d *pointsIn  (in $a1)
    // param int numPoints  (in $a2)
    // param RwMatrixTag *matrix  (in $a3)
    {   // 0x00168C60-0x00168CF0
        RwV3d *cachedOut;  // in $a0
    }
}

// 0x00168CF0-0x00168D78 (136 bytes), lines 212-255
RwV3d *vectorASMMultVector(RwV3d *pointsOut, RwV3d *pointsIn, int numPoints, RwMatrixTag *matrix)
{
    // param RwV3d *pointsOut  (in $a0)
    // param RwV3d *pointsIn  (in $a1)
    // param int numPoints  (in $a2)
    // param RwMatrixTag *matrix  (in $a3)
    {   // 0x00168CF0-0x00168D78
        RwV3d *cachedOut;  // in $a0
    }
}

