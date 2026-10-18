// nodeCullTriangle.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00177360-0x0017761C (700 bytes), lines 104-207
static int ParallelCullProcessPacket(RxPipelineNode *Self, RxPacket *Packet)
{
    // param RxPipelineNode *Self  (in $s0)
    // param RxPacket *Packet  (in $s1)
    {   // 0x00177360-0x0017761C
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s1
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s1
        unsigned short *end;  // in $a3
        unsigned int i;  // in $v1
        RwSplitBits Side;  // $sp+76
        RwV3d *V3;  // in $a3
        RwV3d *V2;  // in $t3
        RwV3d *V1;  // in $t0
        unsigned short *IndexPtr;  // in $v0
        int IndicesStride;  // in $v0
        RxMeshStateVector *MeshData;  // in $v0
        RxCluster *MeshState;  // in $v0
        RxCluster *Indices;  // in $s1
    }
}

// 0x00177620-0x00177B7C (1372 bytes), lines 211-465
static int PerspectiveCullProcessPacket(RxPipelineNode *Self, RxPacket *Packet)
{
    // param RxPipelineNode *Self  (in $s3)
    // param RxPacket *Packet  (in $s0)
    {   // 0x00177620-0x00177B7C
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned short *end;  // in $a1
        unsigned short *end;  // in $a1
        unsigned short *end;  // in $a1
        unsigned short *end;  // in $a3
        unsigned int i;  // in $v0
        RwSplitBits Side;  // $sp+84
        RxCamSpace3DVertex *CamVert3;  // in $t8
        RxCamSpace3DVertex *CamVert2;  // in $a3
        RxCamSpace3DVertex *CamVert1;  // in $t7
        RwSky2DVertex *DevVert3;  // in $a1
        RwSky2DVertex *DevVert2;  // in $t2
        RwSky2DVertex *DevVert1;  // in $a3
        unsigned short *IndexPtr;  // in $v0
        int IndicesStride;  // in $v0
        RxMeshStateVector *MeshData;  // in $a2
        RxCluster *MeshState;  // in $v0
        RxCluster *Indices;  // in $s0
    }
}

// 0x00177B80-0x00177BF8 (120 bytes), lines 497-502
static int _CullTriangleNode(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x00177B80-0x00177BF8
        int (*func)(RxPipelineNode *, RxPacket *);  // in $a2
        int result;  // in $v0
        int (*CullFunc[2])(RxPipelineNode *, RxPacket *);  // at 0x00310400
    }
}

// 0x00177C00-0x00177C0C (12 bytes), lines 661-663
RxNodeDefinition *RxNodeDefinitionGetCullTriangle()
{
    {   // 0x00177C00-0x00177C0C
        RxNodeDefinition nodeCullTriangleCSL;  // at 0x002B2E10
    }
}

