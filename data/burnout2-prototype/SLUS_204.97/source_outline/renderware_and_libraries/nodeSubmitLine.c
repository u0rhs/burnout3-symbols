// nodeSubmitLine.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00179290-0x001795E4 (852 bytes), lines 74-190
static int SubmitLineNode(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s3)
    {   // 0x00179290-0x001795E4
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        RxRenderStateVector *rsvp;  // in $s5
        RxMeshStateVector *meshData;  // in $s4
        RxPacket *packet;  // in $v0
    }
}

// 0x001795F0-0x001795FC (12 bytes), lines 318-319
RxNodeDefinition *RxNodeDefinitionGetSubmitLine()
{
    {   // 0x001795F0-0x001795FC
        RxNodeDefinition nodeSubmitLineCSL;  // at 0x002B3310
    }
}

