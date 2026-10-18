// C:\dev\b2dist\iop\msgloop.c
// Outline rebuilt from the debug information of B2DIST.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int g_DataComing;
int g_DistortionBusy;
int TimerFunc(void *);  // 0x000002BC
void *msg_handler(unsigned int, void *, int);  // 0x0000036C
int distort_service_loop();  // 0x00000928
int spu_irq(int, void *);  // 0x00000A7C
int BASE_priority;  // 0x00001470
int g_Thid;  // 0x000014D0
int poo_channel;  // 0x000014D4
int t_sleep;  // 0x000014D8
int t_irq;  // 0x000014DC
DistortFXIntState g_Distort;  // 0x000014E0
int (*g_StoredTransIntrHandler)(int, void *);  // 0x000015E8
int (*g_RwaInterruptHandler)(int, void *);  // 0x000015EC
int g_Enabled;  // 0x000015F0
int g_NextIrq;  // 0x000015F4
int g_HalfDownloading;  // 0x000015F8
int g_HScanCount;  // 0x000015FC
int g_TimerCount;  // 0x00001600
short *g_Fuzzy;  // 0x00001604
short *g_Clean;  // 0x00001608
short g_FuzzyBuf[1600];  // 0x0000160C
short g_CleanBuf[1600];  // 0x0000228C
int rpc_arg[256];  // 0x00002F0C

// ---- functions ----

// 0x000002BC-0x000002E0 (36 bytes), lines 89-92
int TimerFunc()
{
    {   // 0x000002BC-0x000002E0
    }
}

// 0x000002E0-0x0000036C (140 bytes), lines 97-112
int distort_rpc_thread()
{
    {   // 0x000002E0-0x0000036C
        _sif_serve_data sd;  // $sp+68
        _sif_queue_data qd;  // $sp+44
    }
}

// 0x0000036C-0x00000434 (200 bytes), lines 116-139
static void *msg_handler(void *data)
{
    // param void *data  (in $v0)
    {   // 0x0000036C-0x00000434
        int num_commands;  // in $v0
        int *params;  // in $s0
    }
}

// 0x00000434-0x000006C4 (656 bytes), lines 144-221
static int RPC_Init()
{
    {   // 0x00000434-0x000006C4
        int timer_id;  // in $s0
        SysClock clock;  // $sp+64
        unsigned short mix_param;  // in $v0
        int band;  // in $s0
        ThreadParam param;  // $sp+44
    }
}

// 0x000006C4-0x00000768 (164 bytes), lines 227-244
static int RPC_SetChannels(int *params)
{
    // param int *params  (in $v0)
    {   // 0x000006C4-0x00000768
        int channel_mask;  // in $v0
        int i;  // in $a0
    }
}

// 0x00000768-0x000008AC (324 bytes), lines 248-275
static int RPC_Update(int *params)
{
    // param int *params  (in $v0)
    {   // 0x00000768-0x000008AC
        int volume_r;  // in $s6
        int volume_l;  // in $s5
        int wet;  // in $s4
        int dry;  // in $s7
        int gain;  // in $s3
        int waveshape;  // in $s2
        int peakgain;  // in $s1
        int frequency;  // in $v0
        DistortFXIntState *fx;  // in $s0
    }
}

// 0x000008AC-0x00000928 (124 bytes), lines 279-291
static int RPC_Enable(int *params)
{
    // param int *params  (in $v0)
    {   // 0x000008AC-0x00000928
    }
}

// 0x00000928-0x00000A7C (340 bytes), lines 299-342
static int distort_service_loop()
{
    {   // 0x00000928-0x00000A7C
        int half_processing;  // in $a0
        int l_offset;  // in $s0
    }
}

// 0x00000A7C-0x00000C38 (444 bytes), lines 349-430
int spu_irq(int core_bit, void *data)
{
    // param int core_bit  (in $s4)
    // param void *data  (in $s3)
    {   // 0x00000A7C-0x00000C38
        int upload_irq_point;  // in $s2
        int download_iop_addr;  // in $s1
        int download_spu_addr;  // in $s0
        int irq_addr;  // in $v0
        int upload_spu_addr;  // in $s1
        int upload_iop_addr;  // in $s0
    }
}

