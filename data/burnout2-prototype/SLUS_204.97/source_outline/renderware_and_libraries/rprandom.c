// rprandom.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void *RandomClose(void *, int, int);  // 0x00182290
void *RandomOpen(void *, int, int);  // 0x00182300
static int GlobalOffset;  // 0x00310B04
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00182290-0x001822FC (108 bytes), lines 138-150
static void *RandomClose(void *instance)
{
    // param void *instance  (in $s0)
    {   // 0x00182290-0x001822FC
    }
}

// 0x00182300-0x001823A0 (160 bytes), lines 162-181
static void *RandomOpen(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x00182300-0x001823A0
    }
}

// 0x001823A0-0x0018258C (492 bytes), lines 202-235
void RpRandomSeed(unsigned int seed)
{
    // param unsigned int seed  (in $v0)
    {   // 0x001823A0-0x0018258C
        int i;  // in $v0
    }
}

// 0x00182590-0x00182654 (196 bytes), lines 278-291
unsigned int RpRandom()
{
    {   // 0x00182590-0x00182654
        int i;  // in $v0
    }
}

// 0x00182660-0x001826A4 (68 bytes), lines 314-330
int RpRandomPluginAttach()
{
    {   // 0x00182660-0x001826A4
    }
}

