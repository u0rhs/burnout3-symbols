// D:\projects\CG1Code\GameSource\Sound\IOP\b3distrouter\main.c
// Outline rebuilt from the debug information of B3ROUTE.IRX (Burnout 3 prototype, June 2004).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
_moduleinfo Module;
struct @anon0 g_DmaData;
int B3DistIntHandler(int, void *);  // 0x00000170
void B3DIST_CmdHandler(int, void *, int);  // 0x000002C0
void B3RouteSetup();  // 0x0000045C
static int (*gp_PreviousHandler)(int, void *);  // 0x00000E70
unsigned int g_EECleanBuffer;  // 0x00000E74
short g_IF[1024];  // 0x00000E80
short g_IC1[768];  // 0x00001680
short g_IC0[768];  // 0x00001C80
int g_rpc_arg[256];  // 0x00002280
int g_ThreadID;  // 0x00002680
void *gp_PreviousHandlerParams;  // 0x00002684

// ---- functions ----

// 0x00000170-0x000002C0 (336 bytes), lines 123-190
static int B3DistIntHandler(int core_bit, void *data)
{
    // param int core_bit  (in $s1)
    // param void *data  (in $s0)
    {   // 0x00000170-0x000002C0
        int lpIRQAddr;  // in $v0
    }
}

// 0x000002C0-0x0000045C (412 bytes), lines 221-334
static void B3DIST_CmdHandler(int func, void *data)
{
    // param int func  (in $v0)
    // param void *data  (in $s2)
    {   // 0x000002C0-0x0000045C
        unsigned int *params;  // in $v0
        unsigned int lnThisCommand;  // in $s1
        int lnNumCommands;  // in $s0
    }
}

// 0x0000045C-0x00000560 (260 bytes), lines 439-492
void B3RouteSetup()
{
    {   // 0x0000045C-0x00000560
        _sif_queue_data qd;  // $sp+112
        _sif_serve_data sd;  // $sp+44
        int lnState;  // $sp+40
    }
}

// 0x00000560-0x00000630 (208 bytes), lines 626-658
int start()
{
    {   // 0x00000560-0x00000630
        ThreadParam param;  // $sp+28
    }
}

