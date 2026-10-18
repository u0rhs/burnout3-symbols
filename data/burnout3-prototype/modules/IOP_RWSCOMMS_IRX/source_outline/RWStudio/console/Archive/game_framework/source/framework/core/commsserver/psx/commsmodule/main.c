// C:\RWStudio\console\Archive\game_framework\source\framework\core\commsserver\psx\commsmodule\main.c
// Outline rebuilt from the debug information of RWSCOMMS.IRX (Burnout 3 prototype, June 2004).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
_moduleinfo Module;
void *RPCCommsHandler(unsigned int, void *, int);
int RPCThreadLoop();  // 0x000000C4
unsigned char Buffer[32768];  // 0x000009F0
_sif_serve_data ServerData;  // 0x000089F0
_sif_queue_data QueueData;  // 0x00008A34

// ---- functions ----

// 0x00000000-0x000000C4 (196 bytes), lines 25-67
void *RPCCommsHandler(unsigned int nFunction, void *pData, int nSize)
{
    // param unsigned int nFunction  (in $v0)
    // param void *pData  (in $s0)
    // param int nSize  (in $v0)
    {   // 0x00000000-0x000000C4
        int nBytes;  // in $v0
        int nBytes;  // in $v0
    }
}

// 0x000000C4-0x0000013C (120 bytes), lines 75-86
static int RPCThreadLoop()
{
    {   // 0x000000C4-0x0000013C
    }
}

// 0x0000013C-0x000001B4 (120 bytes), lines 102-124
int start()
{
    {   // 0x0000013C-0x000001B4
        int Thread;  // in $v0
        ThreadParam ThreadParams;  // $sp+28
    }
}

