// nodeTransform.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00
RwClipInfo _rwClipInfoGlobal;  // 0x0044DD20

// ---- functions ----

// 0x00179910-0x0017A1F4 (2276 bytes), lines 67-367
static int TransformNodeParallel(RxPipelineNode *self, RwCamera *camera)
{
    // param RxPipelineNode *self  (in $fp)
    // param RwCamera *camera  (in $v0)
    {   // 0x00179910-0x0017A1F4
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        float V;  // optimised away
        float V;  // optimised away
        float U;  // $sp+192
        RxMeshStateVector *MeshData;  // in $s1
        int bVertRxUVs;  // in $s0
        int bVertPreLit;  // in $s6
        int bVertColours;  // in $s7
        RwRGBA Col;  // $sp+188
        int DevVertsStride;  // in $t1
        int CamVertsStride;  // in $t0
        int ObjVertsStride;  // in $a3
        RxCluster *MeshState;  // in $v0
        RxCluster *DevVerts;  // in $s5
        RxCluster *CamVerts;  // $sp+172
        int ClipFlagsAnd;  // in $a2
        int ClipFlagsOr;  // in $a1
        float outz;  // optimised away
        float outy;  // optimised away
        float outx;  // $sp+192
        float inz;  // optimised away
        float iny;  // optimised away
        RwV3d objVertex;  // $sp+176
        RwMatrixTag *Matrix;  // in $a0
        unsigned int NumVerts;  // in $v1
        RwRaster *rpRas;  // in $a0
        RxPacket *packet;  // in $v0
    }
}

// 0x0017A200-0x0017AAE4 (2276 bytes), lines 371-674
static int TransformNodePerspective(RxPipelineNode *self, RwCamera *camera)
{
    // param RxPipelineNode *self  (in $fp)
    // param RwCamera *camera  (in $v0)
    {   // 0x0017A200-0x0017AAE4
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        float V;  // optimised away
        float V;  // optimised away
        float U;  // $sp+192
        float nRecipZ;  // optimised away
        RxMeshStateVector *MeshData;  // in $s1
        int bVertRxUVs;  // in $s0
        int bVertPreLit;  // in $s6
        int bVertColours;  // in $s7
        RwRGBA Col;  // $sp+188
        int DevVertsStride;  // in $t1
        int CamVertsStride;  // in $t0
        int ObjVertsStride;  // in $a3
        RxCluster *MeshState;  // in $v0
        RxCluster *DevVerts;  // in $s5
        RxCluster *CamVerts;  // $sp+172
        float outz;  // optimised away
        float outy;  // optimised away
        float outx;  // $sp+192
        float inz;  // optimised away
        float iny;  // optimised away
        RwV3d objVertex;  // $sp+176
        int ClipFlagsAnd;  // in $a2
        int ClipFlagsOr;  // in $a1
        RwMatrixTag *Matrix;  // in $a0
        unsigned int NumVerts;  // in $v1
        RwRaster *rpRas;  // in $a0
        RxPacket *packet;  // in $v0
    }
}

// 0x0017AAF0-0x0017AB38 (72 bytes), lines 688-704
static int TransformNode(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x0017AAF0-0x0017AB38
        RwCamera *camera;  // in $v0
    }
}

// 0x0017AB40-0x0017AB4C (12 bytes), lines 881-882
RxNodeDefinition *RxNodeDefinitionGetTransform()
{
    {   // 0x0017AB40-0x0017AB4C
        RxNodeDefinition nodeTransformCSL;  // at 0x002B34D0
    }
}

