// I:\GameShared\GameClasses\Mpeg\ps2\vibuf.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x0027D5E0-0x0027D62C (76 bytes), lines 493-503
// viBufCount__FP5ViBuf
int viBufCount(ViBuf *f)
{
    // param ViBuf *f  (in $s0)
    {   // 0x0027D5E0-0x0027D62C
        int ret;  // in $s0
    }
}

// 0x0027D630-0x0027D6C0 (144 bytes), lines 461-469
// viBufDelete__FP5ViBuf
int viBufDelete(ViBuf *f)
{
    // param ViBuf *f  (in $s0)
    {   // 0x0027D630-0x0027D6C0
    }
}

// 0x0027D6C0-0x0027DA94 (980 bytes), lines 374-454
// viBufRestartDMA__FP5ViBuf
int viBufRestartDMA(ViBuf *f)
{
    // param ViBuf *f  (in $s1)
    {   // 0x0027D6C0-0x0027DA94
        int index_next;  // in $v0
        int index;  // in $v0
        unsigned int d4chcr_next;  // in $s5
        unsigned int d4tadr_next;  // in $v0
        unsigned int d4qwc_next;  // in $s4
        unsigned int d4madr_next;  // in $s3
        int bp;  // in $s2
    }
}

// 0x0027DAA0-0x0027DBF4 (340 bytes), lines 339-367
// viBufStopDMA__FP5ViBuf
int viBufStopDMA(ViBuf *f)
{
    // param ViBuf *f  (in $s0)
    {   // 0x0027DAA0-0x0027DBF4
    }
}

// 0x0027DC00-0x0027DF1C (796 bytes), lines 241-332
// viBufAddDMA__FP5ViBuf
int viBufAddDMA(ViBuf *f)
{
    // param ViBuf *f  (in $s2)
    {   // 0x0027DC00-0x0027DF1C
        int read_n;  // in $a0
        int read_start;  // in $v1
        int consume;  // in $a0
        int isNewData;  // in $s1
        unsigned int d4chcr;  // in $s0
        int last;  // in $t1
        int index;  // in $v0
        int i;  // in $v0
    }
}

// 0x0027DF20-0x0027DF7C (92 bytes), lines 227-234
// viBufEndPut__FP5ViBufi
void viBufEndPut(ViBuf *f, int size)
{
    // param ViBuf *f  (in $s1)
    // param int size  (in $s0)
    {   // 0x0027DF20-0x0027DF7C
    }
}

// 0x0027DF80-0x0027E084 (260 bytes), lines 188-220
// viBufBeginPut__FP5ViBufPPUcPiPPUcPi
void viBufBeginPut(ViBuf *f, unsigned char **ptr0, int *len0, unsigned char **ptr1, int *len1)
{
    // param ViBuf *f  (in $s4)
    // param unsigned char **ptr0  (in $s3)
    // param int *len0  (in $s2)
    // param unsigned char **ptr1  (in $s1)
    // param int *len1  (in $s0)
    {   // 0x0027DF80-0x0027E084
        int en;  // in $a0
        int es;  // in $v1
    }
}

// 0x0027E090-0x0027E21C (396 bytes), lines 147-181
// viBufReset__FP5ViBuf
int viBufReset(ViBuf *f)
{
    // param ViBuf *f  (in $v0)
    {   // 0x0027E090-0x0027E21C
        int i;  // in $a2
    }
}

// 0x0027E220-0x0027E29C (124 bytes), lines 112-140
// viBufCreate__FP5ViBufP1P1iP9TimeStampi
int viBufCreate(ViBuf *f, u_long128 *data, u_long128 *tag, int size, TimeStamp *ts, int n_ts)
{
    // param ViBuf *f  (in $s0)
    // param u_long128 *data  (in $v0)
    // param u_long128 *tag  (in $v0)
    // param int size  (in $v0)
    // param TimeStamp *ts  (in $v0)
    // param int n_ts  (in $v0)
    {   // 0x0027E220-0x0027E29C
        SemaParam param;  // $sp+32
    }
}

