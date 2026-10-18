// C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaObj *_RwaSPU2StreamFinishExecute(RwaObj *);  // 0x002792D0
void _RwaSPU2StreamDestroy(RwaObj *, void (*)(RwaObj *, void *), void *);  // 0x002793D0
RwaObj *_RwaSPU2StreamCreate(RwaObj *, RwaObj *, void *, void *(*)(RwaObjDef *, void *, void *, unsigned int), void *);  // 0x00279420
signed char _rwMsbBit[];  // 0x002A2A90
RwaUUID rwaSPU2OUTPUTID;  // 0x002DA410
RwaUUID rwaSPU2STREAMID;  // 0x002DA420
static RwaObjDef _spu2streamDef;  // 0x0049C100

// ---- functions ----

// 0x002792D0-0x002793D0 (256 bytes), lines 619-675
static RwaObj *_RwaSPU2StreamFinishExecute(RwaObj *obj)
{
    // param RwaObj *obj  (in $s1)
    {   // 0x002792D0-0x002793D0
        RwaSPU2StreamDMACurrentState *currStateRx;  // in $a0
        RwaSPU2StreamState *state;  // in $s0
    }
}

// 0x002793D0-0x00279420 (80 bytes), lines 556-575
static void _RwaSPU2StreamDestroy(RwaObj *obj)
{
    // param RwaObj *obj  (in $v0)
    {   // 0x002793D0-0x00279420
        RwaSPU2StreamState *state;  // in $s0
    }
}

// 0x00279420-0x00279560 (320 bytes), lines 461-533
static RwaObj *_RwaSPU2StreamCreate(RwaObj *obj)
{
    // param RwaObj *obj  (in $s1)
    {   // 0x00279420-0x00279560
        RwaSPU2StreamState *state;  // in $s0
    }
}

// 0x00279560-0x00279648 (232 bytes), lines 289-307
RwaObjDef *RwaSPU2StreamRegister()
{
    {   // 0x00279560-0x00279648
        RwaObjDef *objDef;  // in $s0
    }
}

