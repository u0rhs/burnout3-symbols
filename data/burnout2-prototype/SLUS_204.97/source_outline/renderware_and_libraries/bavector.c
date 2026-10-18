// bavector.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwV3d *VectorMultPoint(RwV3d *, RwV3d *, int, RwMatrixTag *);  // 0x0014F1B0
RwV3d *VectorMultVector(RwV3d *, RwV3d *, int, RwMatrixTag *);  // 0x0014F270
RwModuleInfo vectorModule;  // 0x003108E8
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014F1B0-0x0014F268 (184 bytes), lines 283-314
static RwV3d *VectorMultPoint(RwV3d *pointsOut, RwV3d *pointsIn, int numPoints, RwMatrixTag *matrix)
{
    // param RwV3d *pointsOut  (in $v0)
    // param RwV3d *pointsIn  (in $v0)
    // param int numPoints  (in $v0)
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014F1B0-0x0014F268
        float imageZ;  // optimised away
        float imageY;  // optimised away
        float imageX;  // optimised away
        float scale;  // optimised away
        RwV3d *cachedOut;  // in $v0
    }
}

// 0x0014F270-0x0014F308 (152 bytes), lines 335-361
static RwV3d *VectorMultVector(RwV3d *pointsOut, RwV3d *pointsIn, int numPoints, RwMatrixTag *matrix)
{
    // param RwV3d *pointsOut  (in $v0)
    // param RwV3d *pointsIn  (in $v0)
    // param int numPoints  (in $v0)
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014F270-0x0014F308
        float imageZ;  // optimised away
        float imageY;  // optimised away
        float imageX;  // optimised away
        float scale;  // optimised away
        RwV3d *cachedOut;  // in $v0
    }
}

// 0x0014F310-0x0014F354 (68 bytes), lines 376-415
int _rwVectorSetMultFn(RwV3d *(*multPoint)(RwV3d *, RwV3d *, int, RwMatrixTag *), RwV3d *(*multVector)(RwV3d *, RwV3d *, int, RwMatrixTag *))
{
    // param RwV3d *(*multPoint)(RwV3d *, RwV3d *, int, RwMatrixTag *)  (in $v0)
    // param RwV3d *(*multVector)(RwV3d *, RwV3d *, int, RwMatrixTag *)  (in $v0)
    {   // 0x0014F310-0x0014F354
    }
}

// 0x0014F360-0x0014F3D4 (116 bytes), lines 428-431
float _rwV3dNormalize(RwV3d *out, RwV3d *in)
{
    // param RwV3d *out  (in $v0)
    // param RwV3d *in  (in $v0)
    {   // 0x0014F360-0x0014F3D4
        float _result;  // $sp+0
        float length2;  // $sp+0
    }
}

// 0x0014F3E0-0x0014F4A0 (192 bytes), lines 459-474
float RwV3dNormalize(RwV3d *out, RwV3d *in)
{
    // param RwV3d *out  (in $v0)
    // param RwV3d *in  (in $v0)
    {   // 0x0014F3E0-0x0014F4A0
        RwError _rwErrorCode;  // $sp+40
        float _result;  // optimised away
        float length2;  // $sp+48
    }
}

// 0x0014F4A0-0x0014F4D0 (48 bytes), lines 503-505
float RwV3dLength(RwV3d *in)
{
    // param RwV3d *in  (in $v0)
    {   // 0x0014F4A0-0x0014F4D0
        float _result;  // $sp+0
        float length;  // $sp+0
    }
}

// 0x0014F4D0-0x0014F4EC (28 bytes), lines 1197-1197
RwV3d *RwV3dTransformPoints(RwV3d *pointsOut, RwV3d *pointsIn, int numPoints, RwMatrixTag *matrix)
{
    // param RwV3d *pointsOut  (in $v0)
    // param RwV3d *pointsIn  (in $v0)
    // param int numPoints  (in $v0)
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014F4D0-0x0014F4EC
    }
}

// 0x0014F4F0-0x0014F50C (28 bytes), lines 1234-1234
RwV3d *RwV3dTransformVectors(RwV3d *vectorsOut, RwV3d *vectorsIn, int numPoints, RwMatrixTag *matrix)
{
    // param RwV3d *vectorsOut  (in $v0)
    // param RwV3d *vectorsIn  (in $v0)
    // param int numPoints  (in $v0)
    // param RwMatrixTag *matrix  (in $v0)
    {   // 0x0014F4F0-0x0014F50C
    }
}

// 0x0014F510-0x0014F524 (20 bytes), lines 1258-1261
void *_rwVectorClose(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x0014F510-0x0014F524
    }
}

// 0x0014F530-0x0014F57C (76 bytes), lines 1276-1302
void *_rwVectorOpen(void *instance, int offset)
{
    // param void *instance  (in $v0)
    // param int offset  (in $v0)
    {   // 0x0014F530-0x0014F57C
    }
}

