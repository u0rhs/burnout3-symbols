// nodeWorldSectorEnumerateLights.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpLight *WorldLightsCB(RpLight *, void *);  // 0x00190060
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00190060-0x001900D4 (116 bytes), lines 65-74
static RpLight *WorldLightsCB(RpLight *light, void *cl)
{
    // param RpLight *light  (in $s0)
    // param void *cl  (in $v0)
    {   // 0x00190060-0x001900D4
    }
}

// 0x001900E0-0x00190210 (304 bytes), lines 103-128
static int WorldSectorEnumerateLightsNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s3)
    // param RxPipelineNodeParam *params  (in $s0)
    {   // 0x001900E0-0x00190210
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        RxCluster *cl;  // in $v0
    }
}

// 0x00190210-0x0019021C (12 bytes), lines 239-240
RxNodeDefinition *RxNodeDefinitionGetWorldSectorEnumerateLights()
{
    {   // 0x00190210-0x0019021C
        RxNodeDefinition NodeDefinition;  // at 0x002B3BA0
    }
}

