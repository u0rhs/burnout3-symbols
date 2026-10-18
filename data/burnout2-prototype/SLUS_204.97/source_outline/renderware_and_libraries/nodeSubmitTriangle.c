// nodeSubmitTriangle.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00179600-0x001798FC (764 bytes), lines 74-192
static int SubmitTriangleNode(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s1)
    {   // 0x00179600-0x001798FC
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s2
        RxRenderStateVector *rsvp;  // in $s5
        RxMeshStateVector *meshData;  // in $s2
        RxPacket *packet;  // in $v0
    }
}

// 0x00179900-0x0017990C (12 bytes), lines 335-336
RxNodeDefinition *RxNodeDefinitionGetSubmitTriangle()
{
    {   // 0x00179900-0x0017990C
        RxNodeDefinition nodeSubmitTriangleCSL;  // at 0x002B33E0
    }
}

