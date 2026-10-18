// C:\dev\rwaudio\source\ps2\spu2\common\rwarpc.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int RwaRPC_UpdateThread();  // 0x00276670
void RwaRPC_SIFIntHandler(void *, void *);  // 0x00276740
static int RwaRPC_Initialized;  // 0x00311208
static void (*RwaRPC_CmdHandler)(unsigned int, unsigned int, unsigned int, unsigned int, void (*)(unsigned int, unsigned int));  // 0x0031120C
static int RwaRPC_ThreadID;  // 0x00311210
static int RwaRPC_IRQSema;  // 0x00311214
static int RwaRPC_TransferSema;  // 0x00311218
static int RwaRPC_IOPRAMBusy;  // 0x0031121C
static unsigned int RwaRPC_UserData;  // 0x00311220
unsigned int RwaRPC_DMAWorkArea;  // 0x00311224
static unsigned int RwaRPC_Version;  // 0x00311228
static int RwaRPC_ReceivedCurrent;  // 0x0031122C
static int RwaRPC_ReceivedLast;  // 0x00311230
static unsigned int RwaRPC_SentCurrent;  // 0x00311234
static unsigned int RwaRPC_QueueCurrent;  // 0x00311238
static unsigned int RwaRPC_QueueLast;  // 0x0031123C
static unsigned int lastSifCmdId;  // 0x00311240
void *_gp;  // 0x00317CF0
static struct @anon1 RwaRPC_QueueCmd[128];  // 0x00496240
static struct @anon0 RwaRPC_SentCmd[128];  // 0x00498240
static struct @anon0 RwaRPC_ReceivedCmd[128];  // 0x00499A40
static struct @anon3 RwaRPC_CmdBuffer[128];  // 0x0049B240

// ---- functions ----

// 0x00276390-0x00276398 (8 bytes), lines 1096-1096
int RwaRPC_DMABusy()
{
    {   // 0x00276390-0x00276398
        int ret;  // in $v0
    }
}

// 0x002763A0-0x00276668 (712 bytes), lines 787-1089
void RwaRPC_Transfer(unsigned int dest, unsigned int src, unsigned int length, RwaRPCCommandType type, void (*callback)(unsigned int, unsigned int), unsigned int userdata, unsigned int userdata2)
{
    // param unsigned int dest  ($sp+188)
    // param unsigned int src  (in $fp)
    // param unsigned int length  (in $s7)
    // param RwaRPCCommandType type  (in $s4)
    // param void (*callback)(unsigned int, unsigned int)  ($sp+184)
    // param unsigned int userdata  ($sp+180)
    // param unsigned int userdata2  ($sp+176)
    {   // 0x002763A0-0x00276668
        struct @anon0 *sifcmd;  // in $v0
        unsigned int id;  // in $v0
        unsigned int *curr;  // $sp+160
        int sendcommand;  // in $s2
        unsigned int maxlength;  // in $v0
        unsigned int rpclength;  // in $s1
        unsigned int rpcdest;  // in $s0
        unsigned int rpcsrc;  // in $s5
    }
}

// 0x00276670-0x00276734 (196 bytes), lines 735-773
unsigned int RwaRPC_UpdateThread()
{
    {   // 0x00276670-0x00276734
        char *cpu;  // in $v0
        struct @anon0 *cmd;  // in $v0
        int running;  // in $s0
    }
}

// 0x00276740-0x002767BC (124 bytes), lines 665-690
void RwaRPC_SIFIntHandler(void *p)
{
    // param void *p  (in $v0)
    {   // 0x00276740-0x002767BC
        struct @anon0 *dest;  // in $v0
        struct @anon0 *src;  // in $v0
    }
}

// 0x002767C0-0x002769A8 (488 bytes), lines 427-658
int RwaRPC_ProcessSystemCommand(struct @anon0 *cmd)
{
    // param struct @anon0 *cmd  (in $s0)
    {   // 0x002767C0-0x002769A8
    }
}

// 0x002769B0-0x00276C24 (628 bytes), lines 180-358
int RwaRPC_Init(void (*handler)(unsigned int, unsigned int, unsigned int, unsigned int, void (*)(unsigned int, unsigned int)), unsigned int userdata)
{
    // param void (*handler)(unsigned int, unsigned int, unsigned int, unsigned int, void (*)(unsigned int, unsigned int))  (in $s2)
    // param unsigned int userdata  (in $s1)
    {   // 0x002769B0-0x00276C24
        int timeout;  // in $s0
        char stack[2048];  // at 0x00495A40
        ThreadParam param;  // at 0x00495A10
        SemaParam sp2;  // at 0x004959D0
        SemaParam sp;  // at 0x004959F0
    }
}

