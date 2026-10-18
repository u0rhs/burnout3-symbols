// nodeMaterialScatter.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x0018F940-0x0018FA78 (312 bytes), lines 75-106
static int _MaterialScatterNode()
{
    {   // 0x0018F940-0x0018FA78
        RxPipeline *fromPipeline;  // in $s2
        unsigned int exitCode;  // in $v0
        RxPipeline *pipeline;  // in $s0
        RxPacket *packet;  // in $v0
    }
}

// 0x0018FA80-0x0018FA8C (12 bytes), lines 192-193
RxNodeDefinition *RxNodeDefinitionGetMaterialScatter()
{
    {   // 0x0018FA80-0x0018FA8C
        RxNodeDefinition nodeMaterialScatterCSL;  // at 0x002B3A60
    }
}

