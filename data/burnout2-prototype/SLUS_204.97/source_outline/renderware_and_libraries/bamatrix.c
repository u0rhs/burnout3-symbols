// bamatrix.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void MatrixMultiply(RwMatrixTag *, RwMatrixTag *, RwMatrixTag *);  // 0x0014B960
RwModuleInfo matrixModule;  // 0x003108B8
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014B960-0x0014BB8C (556 bytes), lines 211-261
static void MatrixMultiply(RwMatrixTag *dstMat, RwMatrixTag *matA, RwMatrixTag *matB)
{
    // param RwMatrixTag *dstMat  (in $v0)
    // param RwMatrixTag *matA  (in $v0)
    // param RwMatrixTag *matB  (in $v0)
    {   // 0x0014B960-0x0014BB8C
    }
}

// 0x0014BB90-0x0014BDEC (604 bytes), lines 448-539
static RwMatrixTag *MatrixInvertGeneric(RwMatrixTag *dst, RwMatrixTag *src)
{
    // param RwMatrixTag *dst  (in $v0)
    // param RwMatrixTag *src  (in $v0)
    {   // 0x0014BB90-0x0014BDEC
        RwSplitBits determinant;  // $sp+12
    }
}

// 0x0014BDF0-0x0014BE1C (44 bytes), lines 707-726
int _rwMatrixSetMultFn(void (*multMat)(RwMatrixTag *, RwMatrixTag *, RwMatrixTag *))
{
    // param void (*multMat)(RwMatrixTag *, RwMatrixTag *, RwMatrixTag *)  (in $v0)
    {   // 0x0014BDF0-0x0014BE1C
    }
}

// 0x0014BE20-0x0014BE74 (84 bytes), lines 773-774
float _rwMatrixDeterminant(RwMatrixTag *matrix)
{
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014BE20-0x0014BE74
        RwV3d *mz;  // in $v0
        RwV3d *my;  // in $v0
    }
}

// 0x0014BE80-0x0014BEE8 (104 bytes), lines 797-804
float _rwMatrixOrthogonalError(RwMatrixTag *matrix)
{
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014BE80-0x0014BEE8
        RwV3d *mz;  // in $v0
        RwV3d *my;  // in $v0
    }
}

// 0x0014BEF0-0x0014BF6C (124 bytes), lines 827-834
float _rwMatrixNormalError(RwMatrixTag *matrix)
{
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014BEF0-0x0014BF6C
        RwV3d *z;  // in $v0
        RwV3d *y;  // in $v0
    }
}

// 0x0014BF70-0x0014BFE4 (116 bytes), lines 891-903
void *_rwMatrixClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x0014BF70-0x0014BFE4
    }
}

// 0x0014BFF0-0x0014C0A8 (184 bytes), lines 920-958
void *_rwMatrixOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x0014BFF0-0x0014C0A8
        RwMatrixTolerance tolerance;  // $sp+48
    }
}

// 0x0014C0B0-0x0014C0E0 (48 bytes), lines 1014-1017
int RwEngineSetMatrixTolerances(RwMatrixTolerance *tolerance)
{
    // param RwMatrixTolerance *tolerance  (in $v0)
    {   // 0x0014C0B0-0x0014C0E0
    }
}

// 0x0014C0E0-0x0014C308 (552 bytes), lines 1064-1104
RwMatrixTag *RwMatrixOptimize(RwMatrixTag *matrix, RwMatrixTolerance *tolerance)
{
    // param RwMatrixTag *matrix  (in $v0)
    // param RwMatrixTolerance *tolerance  (in $v0)
    {   // 0x0014C0E0-0x0014C308
        int MatrixIsOrthogonal;  // in $a1
        int MatrixIsNormal;  // in $a2
        unsigned int flags;  // in $v1
    }
}

// 0x0014C310-0x0014C32C (28 bytes), lines 1139-1142
RwMatrixTag *RwMatrixUpdate(RwMatrixTag *matrix)
{
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014C310-0x0014C32C
    }
}

// 0x0014C330-0x0014C3AC (124 bytes), lines 1177-1180
RwMatrixTag *RwMatrixMultiply(RwMatrixTag *dst, RwMatrixTag *src1, RwMatrixTag *src2)
{
    // param RwMatrixTag *dst  (in $v0)
    // param RwMatrixTag *src1  (in $v0)
    // param RwMatrixTag *src2  (in $v0)
    {   // 0x0014C330-0x0014C3AC
        int __tmp2;  // in $v1
        int __tmp1;  // in $v0
    }
}

// 0x0014C3B0-0x0014C5EC (572 bytes), lines 1256-1362
RwMatrixTag *RwMatrixRotateOneMinusCosineSine(RwMatrixTag *matrix, RwV3d *unitAxis, float oneMinusCosine, float sine, RwOpCombineType combineOp)
{
    // param RwMatrixTag *matrix  (in $s0)
    // param RwV3d *unitAxis  (in $v0)
    // param float oneMinusCosine  ($sp+176)
    // param float sine  ($sp+176)
    // param RwOpCombineType combineOp  (in $v0)
    {   // 0x0014C3B0-0x0014C5EC
        RwError _rwErrorCode;  // $sp+168
        RwMatrixTag mLocal;  // $sp+96
        RwMatrixTag mRotate;  // $sp+32
    }
}

// 0x0014C5F0-0x0014C6DC (236 bytes), lines 1387-1409
RwMatrixTag *RwMatrixRotate(RwMatrixTag *matrix, RwV3d *axis, float angle, RwOpCombineType combineOp)
{
    // param RwMatrixTag *matrix  (in $s1)
    // param RwV3d *axis  (in $v0)
    // param float angle  ($sp+80)
    // param RwOpCombineType combineOp  (in $s0)
    {   // 0x0014C5F0-0x0014C6DC
        float _result;  // $sp+80
        float length2;  // $sp+80
        float radians;  // optimised away
        float oneMinusCosVal;  // $sp+80
        float sinVal;  // optimised away
        RwV3d unitAxis;  // $sp+64
    }
}

// 0x0014C6E0-0x0014C85C (380 bytes), lines 1425-1436
RwMatrixTag *RwMatrixInvert(RwMatrixTag *dst, RwMatrixTag *src)
{
    // param RwMatrixTag *dst  (in $v0)
    // param RwMatrixTag *src  (in $v0)
    {   // 0x0014C6E0-0x0014C85C
    }
}

// 0x0014C860-0x0014CA8C (556 bytes), lines 1464-1521
RwMatrixTag *RwMatrixScale(RwMatrixTag *matrix, RwV3d *scale, RwOpCombineType combineOp)
{
    // param RwMatrixTag *matrix  (in $v0)
    // param RwV3d *scale  (in $v0)
    // param RwOpCombineType combineOp  (in $v0)
    {   // 0x0014C860-0x0014CA8C
        RwError _rwErrorCode;  // $sp+24
    }
}

// 0x0014CA90-0x0014CC38 (424 bytes), lines 1549-1608
RwMatrixTag *RwMatrixTranslate(RwMatrixTag *matrix, RwV3d *translation, RwOpCombineType combineOp)
{
    // param RwMatrixTag *matrix  (in $v0)
    // param RwV3d *translation  (in $v0)
    // param RwOpCombineType combineOp  (in $v0)
    {   // 0x0014CA90-0x0014CC38
        RwError _rwErrorCode;  // $sp+24
    }
}

// 0x0014CC40-0x0014CDA0 (352 bytes), lines 1636-1686
RwMatrixTag *RwMatrixTransform(RwMatrixTag *matrix, RwMatrixTag *transform, RwOpCombineType combineOp)
{
    // param RwMatrixTag *matrix  (in $s1)
    // param RwMatrixTag *transform  (in $a1)
    // param RwOpCombineType combineOp  (in $v0)
    {   // 0x0014CC40-0x0014CDA0
        RwError _rwErrorCode;  // $sp+120
        RwMatrixTag mTmp;  // $sp+48
    }
}

// 0x0014CDA0-0x0014CDD8 (56 bytes), lines 1751-1760
int RwMatrixDestroy(RwMatrixTag *matrix)
{
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014CDA0-0x0014CDD8
    }
}

// 0x0014CDE0-0x0014CE64 (132 bytes), lines 1777-1793
RwMatrixTag *RwMatrixCreate()
{
    {   // 0x0014CDE0-0x0014CE64
        RwMatrixTag *matrix;  // in $v0
    }
}

