// nodeImmStash.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00179010-0x00179278 (616 bytes), lines 49-107
static int PL2ImmStashNodeBody(RxPipelineNodeParam *params)
{
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x00179010-0x00179278
        RxPacket *pk;  // in $v0
        _rwIm3DPoolStash *stash;  // in $s0
    }
}

// 0x00179280-0x0017928C (12 bytes), lines 203-204
RxNodeDefinition *RxNodeDefinitionGetImmStash()
{
    {   // 0x00179280-0x0017928C
        RxNodeDefinition nodeImmStashCSL;  // at 0x002B3250
    }
}

