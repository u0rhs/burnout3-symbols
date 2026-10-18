// p2renderstate.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00181A20-0x00181BA8 (392 bytes), lines 57-109
RxRenderStateVector *RxRenderStateVectorSetDefaultRenderStateVector(RxRenderStateVector *rsvp)
{
    // param RxRenderStateVector *rsvp  (in $v0)
    {   // 0x00181A20-0x00181BA8
        RwError _rwErrorCode;  // $sp+32
        RwRGBA OpaqueWhite;  // $sp+44
        RwError _rwErrorCode;  // $sp+24
    }
}

// 0x00181BB0-0x00181CF4 (324 bytes), lines 160-190
RxRenderStateVector *RxRenderStateVectorCreate(int current)
{
    // param int current  (in $s1)
    {   // 0x00181BB0-0x00181CF4
        RwError _rwErrorCode;  // $sp+72
        RwError _rwErrorCode;  // $sp+64
        RxRenderStateVector *NewVector;  // in $s2
    }
}

// 0x00181D00-0x00181D54 (84 bytes), lines 207-218
void RxRenderStateVectorDestroy(RxRenderStateVector *rsvp)
{
    // param RxRenderStateVector *rsvp  (in $v0)
    {   // 0x00181D00-0x00181D54
        RwError _rwErrorCode;  // $sp+24
    }
}

// 0x00181D60-0x00181EF4 (404 bytes), lines 238-297
RxRenderStateVector *RxRenderStateVectorLoadDriverState(RxRenderStateVector *rsvp)
{
    // param RxRenderStateVector *rsvp  (in $s0)
    {   // 0x00181D60-0x00181EF4
        RwError _rwErrorCode;  // $sp+32
        int flag;  // $sp+44
    }
}

