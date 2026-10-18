// nodeImmRenderSetup.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00178BF0-0x00178FF4 (1028 bytes), lines 64-256
static int _ImmRenderSetupNode(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s3)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x00178BF0-0x00178FF4
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        int flag;  // in $s4
        int NumElements;  // in $v1
        RxCluster *clIndices;  // in $v0
        RxCluster *clRenderState;  // in $v0
        RxCluster *clMeshState;  // in $v0
        RxCluster *clDevVerts;  // in $v0
        RxCluster *clCamVerts;  // in $v0
        RxCluster *clObjVerts;  // in $v0
        RxPacket *packet;  // in $s2
        RxRenderStateVector *rsvp;  // in $s1
        _rwIm3DPoolStash *stash;  // in $s0
    }
}

// 0x00179000-0x0017900C (12 bytes), lines 427-428
RxNodeDefinition *RxNodeDefinitionGetImmRenderSetup()
{
    {   // 0x00179000-0x0017900C
        RxNodeDefinition nodeImmRenderSetupCSL;  // at 0x002B31A0
    }
}

