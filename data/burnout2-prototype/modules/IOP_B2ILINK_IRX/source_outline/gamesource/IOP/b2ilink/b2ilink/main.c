// I:\Burnout 2 Code\gamesource\IOP\b2ilink\b2ilink\main.c
// Outline rebuilt from the debug information of B2ILINK.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void *svr_sceILsockInit(unsigned int, void *, int);
unsigned int buf_Reset[4];
void *svr_sceILsockReset(unsigned int, void *, int);
unsigned int buf_Open[4];
void *svr_sceILsockOpen(unsigned int, void *, int);
unsigned int buf_Close[4];
void *svr_sceILsockClose(unsigned int, void *, int);
unsigned int buf_Bind[8];
void *svr_sceILsockBind(unsigned int, void *, int);
unsigned int buf_Connect[8];
void *svr_sceILsockConnect(unsigned int, void *, int);
unsigned int buf_Send[128];
void *svr_sceILsockSend(unsigned int, void *, int);
unsigned int buf_SendTo[128];
void *svr_sceILsockSendTo(unsigned int, void *, int);
unsigned int buf_Recv[128];
void *svr_sceILsockRecv(unsigned int, void *, int);
unsigned int buf_RecvFrom[128];
void *svr_sceILsockRecvFrom(unsigned int, void *, int);
unsigned int buf_Eui64[4];
void *svr_sce1394SbEui64(unsigned int, void *, int);
unsigned int buf_NodeId[4];
void *svr_sce1394SbNodeId(unsigned int, void *, int);
_moduleinfo Module;  // 0x00000530
struct @anon0 th_id[1];  // 0x000005A8
unsigned int buf_Init[4];  // 0x00000688

// ---- functions ----

// 0x00000000-0x00000040 (64 bytes), lines 53-64
void *svr_sceILsockInit(void *data)
{
    // param void *data  (in $s0)
    {   // 0x00000000-0x00000040
    }
}

// 0x00000040-0x000000A4 (100 bytes), lines 67-74
void th_sceILsockInit()
{
    {   // 0x00000040-0x000000A4
        _sif_serve_data sd;  // $sp+68
        _sif_queue_data qd;  // $sp+44
    }
}

// 0x000000A4-0x00000128 (132 bytes), lines 427-445
int create_start_thread(ThreadParam *p, char *name, void *f, int size, int pri)
{
    // param ThreadParam *p  (in $v0)
    // param char *name  (in $s1)
    // param void *f  (in $v0)
    // param int size  (in $v0)
    // param int pri  ($sp+48)
    {   // 0x000000A4-0x00000128
        int th;  // in $s0
    }
}

// 0x00000128-0x00000198 (112 bytes), lines 449-469
int terminate_delete_thread(int id)
{
    // param int id  (in $s0)
    {   // 0x00000128-0x00000198
        int ret;  // in $v0
    }
}

// 0x00000198-0x00000390 (504 bytes), lines 507-569
int start(int argc)
{
    // param int argc  (in $v0)
    {   // 0x00000198-0x00000390
        int EUI64[2];  // $sp+64
        int ret;  // in $v0
        int cnt2;  // in $s1
        int cnt1;  // in $s0
        ThreadParam p;  // $sp+44
    }
}

