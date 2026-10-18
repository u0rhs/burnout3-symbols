// C:\RWStudio\console\Archive\game_framework\source\framework\core\commsserver\psx\commsmodule\Server.c
// Outline rebuilt from the debug information of RWSCOMMS.IRX (Burnout 3 prototype, June 2004).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int ConnectionThreadLoop();  // 0x00000380
void EventHandlerFunc(int, int);  // 0x00000524
int g_nPort;  // 0x00000880
static int ConnectionID;  // 0x00008A4C
static int g_IFEventID;  // 0x00008A50
static int g_IFID;  // 0x00008A54

// ---- functions ----

// 0x00000380-0x000004BC (316 bytes), lines 100-149
static int ConnectionThreadLoop()
{
    {   // 0x00000380-0x000004BC
        sceInetParam InetParams;  // $sp+40
        int Flags;  // $sp+36
        int RetVal;  // in $v0
    }
}

// 0x000004BC-0x00000524 (104 bytes), lines 157-172
static int StartConnectionThread()
{
    {   // 0x000004BC-0x00000524
        ThreadParam ThreadParams;  // $sp+28
        int nThread;  // in $v0
    }
}

// 0x00000524-0x00000570 (76 bytes), lines 180-188
static void EventHandlerFunc(int id, int type)
{
    // param int id  (in $v0)
    // param int type  (in $v0)
    {   // 0x00000524-0x00000570
        int ret;  // in $v0
    }
}

// 0x00000570-0x00000778 (520 bytes), lines 199-289
int ServerInitialise(int nPort, char *szIPAddress)
{
    // param int nPort  (in $v0)
    // param char *szIPAddress  (in $s3)
    {   // 0x00000570-0x00000778
        sceInetAddress Address;  // $sp+80
        EventFlagParam EventFlagParams;  // $sp+68
        sceInetCtlEventHandlers EventHandlers;  // $sp+52
        int anIFIDs[2];  // $sp+44
        int nInterface;  // in $s1
        int nInterfaceNum;  // in $s0
        int nState;  // $sp+40
        int nRetVal;  // in $v0
    }
}

// 0x00000778-0x000007CC (84 bytes), lines 300-314
int ServerListen(void *pData, int nDataSize, int nTimeout)
{
    // param void *pData  (in $v0)
    // param int nDataSize  (in $v0)
    // param int nTimeout  (in $v0)
    {   // 0x00000778-0x000007CC
        int nRetVal;  // in $v0
        int Flags;  // $sp+36
    }
}

// 0x000007CC-0x00000820 (84 bytes), lines 325-337
int ServerMessage(void *pData, int nDataSize, int nTimeout)
{
    // param void *pData  (in $a1)
    // param int nDataSize  (in $v0)
    // param int nTimeout  (in $v0)
    {   // 0x000007CC-0x00000820
        int nRetVal;  // in $v0
        int Flags;  // $sp+36
    }
}

// 0x00000820-0x0000085C (60 bytes), lines 347-356
int ServerStop()
{
    {   // 0x00000820-0x0000085C
    }
}

