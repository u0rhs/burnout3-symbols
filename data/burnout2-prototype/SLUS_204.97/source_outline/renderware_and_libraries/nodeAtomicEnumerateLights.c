// nodeAtomicEnumerateLights.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpLight *AtomicGlobalLightsCB(RpLight *, void *);  // 0x0018CEB0
RpLight *AtomicLocalLightsCB(RpLight *, void *);  // 0x0018CF30
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x0018CEB0-0x0018CF24 (116 bytes), lines 58-67
static RpLight *AtomicGlobalLightsCB(RpLight *light, void *cl)
{
    // param RpLight *light  (in $s0)
    // param void *cl  (in $v0)
    {   // 0x0018CEB0-0x0018CF24
    }
}

// 0x0018CF30-0x0018CFD0 (160 bytes), lines 75-91
static RpLight *AtomicLocalLightsCB(RpLight *light, void *cl)
{
    // param RpLight *light  (in $s1)
    // param void *cl  (in $v0)
    {   // 0x0018CF30-0x0018CFD0
    }
}

// 0x0018CFD0-0x0018D138 (360 bytes), lines 100-153
static int AtomicEnumerateLightsNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s3)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x0018CFD0-0x0018D138
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $s4
        RpAtomic *atomic;  // in $s0
        RxCluster *cl;  // in $v0
    }
}

// 0x0018D140-0x0018D14C (12 bytes), lines 260-261
RxNodeDefinition *RxNodeDefinitionGetAtomicEnumerateLights()
{
    {   // 0x0018D140-0x0018D14C
        RxNodeDefinition nodeAtomicEnumerateLightsCSL;  // at 0x002B37E0
    }
}

