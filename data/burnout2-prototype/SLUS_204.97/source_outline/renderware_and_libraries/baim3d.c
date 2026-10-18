// baim3d.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
rwImmediGlobals *_rwIm3DGlobals;  // 0x00310AEC
RwModuleInfo _rwIm3DModule;  // 0x00310AF0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00173820-0x001738F8 (216 bytes), lines 219-284
void *RwIm3DTransform(RxObjSpace3DVertex *pVerts, unsigned int numVerts, RwMatrixTag *ltm, unsigned int flags)
{
    // param RxObjSpace3DVertex *pVerts  (in $s0)
    // param unsigned int numVerts  (in $v0)
    // param RwMatrixTag *ltm  (in $v0)
    // param unsigned int flags  (in $v0)
    {   // 0x00173820-0x001738F8
        RwError _rwErrorCode;  // $sp+40
        RxPipeline *result;  // in $v0
    }
}

// 0x00173900-0x00173948 (72 bytes), lines 311-332
int RwIm3DEnd()
{
    {   // 0x00173900-0x00173948
    }
}

// 0x00173950-0x00173ABC (364 bytes), lines 364-492
int RwIm3DRenderIndexedPrimitive(RwPrimitiveType primType, unsigned short *indices, int numIndices)
{
    // param RwPrimitiveType primType  (in $a0)
    // param unsigned short *indices  (in $v0)
    // param int numIndices  (in $v0)
    {   // 0x00173950-0x00173ABC
        RwError _rwErrorCode;  // $sp+40
        RwError _rwErrorCode;  // $sp+32
        _rwIm3DPoolStash *stash;  // in $s0
    }
}

// 0x00173AC0-0x00173C38 (376 bytes), lines 521-651
int RwIm3DRenderPrimitive(RwPrimitiveType primType)
{
    // param RwPrimitiveType primType  (in $s3)
    {   // 0x00173AC0-0x00173C38
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        _rwIm3DPoolStash *stash;  // in $s0
        int im3dactive;  // in $s0
    }
}

// 0x00173C40-0x00173CA4 (100 bytes), lines 1026-1048
RxPipeline *RwIm3DSetTransformPipeline(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $v0)
    {   // 0x00173C40-0x00173CA4
    }
}

// 0x00173CB0-0x00173F84 (724 bytes), lines 1076-1239
RxPipeline *RwIm3DSetRenderPipeline(RxPipeline *pipeline, RwPrimitiveType primType)
{
    // param RxPipeline *pipeline  (in $v0)
    // param RwPrimitiveType primType  (in $v0)
    {   // 0x00173CB0-0x00173F84
        RwError _rwErrorCode;  // $sp+24
        RwError _rwErrorCode;  // $sp+16
    }
}

// 0x00173F90-0x00174070 (224 bytes), lines 1601-1634
static void Im3DDestroyGenericRenderPipelines()
{
    {   // 0x00173F90-0x00174070
    }
}

// 0x00174070-0x00174404 (916 bytes), lines 1651-1699
static int Im3DCreateGenericRenderPipelines()
{
    {   // 0x00174070-0x00174404
        rwIm3DRenderPipelines *pipes;  // in $s4
    }
}

// 0x00174410-0x00174560 (336 bytes), lines 1708-1730
void *_rwIm3DClose(void *instance)
{
    // param void *instance  (in $s2)
    {   // 0x00174410-0x00174560
    }
}

// 0x00174560-0x00174748 (488 bytes), lines 1737-1800
void *_rwIm3DOpen(void *instance, int offset)
{
    // param void *instance  (in $s3)
    // param int offset  (in $v0)
    {   // 0x00174560-0x00174748
        int success;  // in $v0
    }
}

