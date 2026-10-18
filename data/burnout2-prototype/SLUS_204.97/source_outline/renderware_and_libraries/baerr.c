// baerr.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwModuleInfo errorModule;  // 0x003108B0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014B650-0x0014B690 (64 bytes), lines 90-101
void *_rwErrorOpen(void *object, int offset)
{
    // param void *object  (in $v0)
    // param int offset  (in $v0)
    {   // 0x0014B650-0x0014B690
    }
}

// 0x0014B690-0x0014B6A4 (20 bytes), lines 118-121
void *_rwErrorClose(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0014B690-0x0014B6A4
    }
}

// 0x0014B6B0-0x0014B71C (108 bytes), lines 151-168
RwError *RwErrorSet(RwError *code)
{
    // param RwError *code  (in $v0)
    {   // 0x0014B6B0-0x0014B71C
    }
}

// 0x0014B720-0x0014B758 (56 bytes), lines 206-216
int _rwerror(int code)
{
    // param int code  ($sp+8)
    {   // 0x0014B720-0x0014B758
    }
}

