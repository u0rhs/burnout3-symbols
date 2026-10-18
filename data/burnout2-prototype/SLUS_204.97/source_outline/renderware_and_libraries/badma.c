// badma.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
u_long128 *_rwDMA_local_rwDMAAsyncPktPtr;
u_long128 *_rwDMA_local_rwDMAPktPtr;
int rwDMAHandler(int);  // 0x0015B930
int rwDMAVSYNCHandler(int);  // 0x0015BF50
static unsigned short rwDMAPURefSize;  // 0x00310398
static int rwVSYNCHandlerHid;  // 0x0031039C
static int rwDMAHandlerVIF1Hid;  // 0x003103A0
static int rwDMAHandlerGIFHid;  // 0x003103A4
static u_long128 *rwDMAVIFGate;  // 0x00310928
static u_long128 *rwDMAbuf;  // 0x0031092C
static unsigned int rwDMAbufSize;  // 0x00310930
static unsigned char rwDMAOwnVSYNC;  // 0x00310934
static unsigned char rwDMAOwnVIF1;  // 0x00310938
static unsigned char rwDMAOwnGIF;  // 0x0031093C
unsigned int rwDMASavedGP;  // 0x00310940
unsigned short rwDMAPURefEnd;  // 0x00310944
unsigned short rwDMAPURefStart;  // 0x00310948
int **rwDMAPURefList;  // 0x0031094C
unsigned char rwDMASawFlip;  // 0x00310950
unsigned char rwDMAWaited;  // 0x00310954
unsigned char _rwDMANumFlipsInQueue;  // 0x00310958
unsigned char _rwDMACurrentHalfOffset;  // 0x0031095C
unsigned char _rwDMAUseHalfOffset;  // 0x00310960
rwDMA_pktTag *rwDMADispatchEnd;  // 0x00310964
rwDMA_pktTag *rwDMADispatchPtr;  // 0x00310968
void *rwDMAFlipSt;  // 0x0031096C
unsigned char rwDMAFlipId;  // 0x00310970
unsigned char _rwDMAFlipPending;  // 0x00310974
unsigned char rwDMADispatching;  // 0x00310978
unsigned int rwDMAPktType;  // 0x0031097C
u_long128 *_rwDMAGateSlot;  // 0x00310980
u_long128 *rwDMAPktBase;  // 0x00310984
u_long128 *rwDMAAsyncPktRealBase;  // 0x00310988
u_long128 *rwDMAPktRealBase;  // 0x0031098C
rwDMA_pktTag *rwDMABufCtrlPtr;  // 0x00310990
rwDMA_pktTag *rwDMABufCtrlTopPtr;  // 0x00310994
u_long128 *rwDMABufTopPtr;  // 0x00310998
u_long128 *rwDMABufDataPtr;  // 0x0031099C
u_long128 *rwDMABufAsyncTopPtr;  // 0x003109A0
u_long128 *rwDMABufDataTopPtr;  // 0x003109A4
unsigned char rwDMACurrentBuf;  // 0x003109A8
unsigned int rwDMADmaBufSize;  // 0x003109AC
u_long128 *rwDMADmaBufs[2];  // 0x003109B0
u_long128 *_rwDMAAsyncPktPtr;  // 0x003109B8
u_long128 *_rwDMAPktPtr;  // 0x003109BC
rwDMA_pktTag *rwPendingCtrlPtr;  // 0x003109C0
unsigned int rwPendingType;  // 0x003109C4
u_long128 *rwPendingAsyncBase;  // 0x003109C8
u_long128 *rwPendingBase;  // 0x003109CC
u_long128 *rwSPRBaseInMem;  // 0x003109D0
u_long128 *rwSPRBasePtr;  // 0x003109D4
unsigned int ourGlobals[4096];  // 0x004486D0
rwDMA_flipDataTag _rwDMAFlipData;  // 0x0044CED0
u_long128 rwDMAANull;  // 0x0044D230
u_long128 rwDMAFlushAGateFlush;  // 0x0044D240
u_long128 rwDMAAFlush;  // 0x0044D250
u_long128 rwDMAFlushAGate;  // 0x0044D260

// ---- functions ----

// 0x0015B850-0x0015B930 (224 bytes), lines 462-501
static void rwDMAFlushPURef()
{
    {   // 0x0015B850-0x0015B930
        int cnt;  // in $s2
        unsigned short refEnd;  // in $s1
        unsigned short refStart;  // in $s0
    }
}

// 0x0015B930-0x0015BF50 (1568 bytes), lines 507-841
static int rwDMAHandler(int ch)
{
    // param int ch  (in $s1)
    {   // 0x0015B930-0x0015BF50
        u_long128 ___ltmp;  // in $v1
        u_long128 ltmp;  // in $v0
        unsigned int localSavedGP;  // in $v0
    }
}

// 0x0015BF50-0x0015C12C (476 bytes), lines 845-1009
static int rwDMAVSYNCHandler(int ca)
{
    // param int ca  (in $v0)
    {   // 0x0015BF50-0x0015C12C
        unsigned char offset;  // in $s1
        rwDMA_flipDataTag *fd;  // in $s0
        unsigned int localSavedGP;  // in $v0
    }
}

// 0x0015C130-0x0015C434 (772 bytes), lines 1183-1319
void _rwDMAClosePkt()
{
    {   // 0x0015C130-0x0015C434
        unsigned int __size;  // in $v1
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 *__tmp1;  // in $v1
        u_long128 __ltmp;  // in $v0
        unsigned int qwc;  // in $a1
        u_long128 ltmp;  // in $v0
    }
}

// 0x0015C440-0x0015C62C (492 bytes), lines 1323-1414
void _rwDMAForceBufferSwap()
{
    {   // 0x0015C440-0x0015C62C
        unsigned int stat;  // in $v0
        unsigned int stat;  // in $v0
    }
}

// 0x0015C630-0x0015C7F0 (448 bytes), lines 1418-1525
void _rwDMAAddPkt(void *addr, unsigned int type)
{
    // param void *addr  (in $s1)
    // param unsigned int type  (in $s0)
    {   // 0x0015C630-0x0015C7F0
        u_long128 *ptr;  // in $a1
    }
}

// 0x0015C7F0-0x0015C8A4 (180 bytes), lines 1659-1693
void _rwDMAAddPURef(int *ptr)
{
    // param int *ptr  (in $v0)
    {   // 0x0015C7F0-0x0015C8A4
        unsigned int newStart;  // in $s3
        unsigned int realEnd;  // in $s0
    }
}

// 0x0015C8B0-0x0015C9DC (300 bytes), lines 1697-1746
void _rwDMAReqFlip(void *addr, unsigned char id)
{
    // param void *addr  (in $s1)
    // param unsigned char id  (in $s0)
    {   // 0x0015C8B0-0x0015C9DC
        unsigned int stat;  // in $v1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $a1
        unsigned int i;  // in $v1
        u_long128 ltmp;  // in $v0
    }
}

// 0x0015C9E0-0x0015CAD0 (240 bytes), lines 1750-1827
void _rwDMAWaitQueue()
{
    {   // 0x0015C9E0-0x0015CAD0
    }
}

// 0x0015CAD0-0x0015CFDC (1292 bytes), lines 1848-2074
int _rwDMAOpenGIFPkt(unsigned int size)
{
    // param unsigned int size  (in $s0)
    {   // 0x0015CAD0-0x0015CFDC
        u_long128 *ptr;  // in $a0
        u_long128 ___ltmp;  // in $a1
        unsigned int __size;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 *__tmp1;  // in $v0
        u_long128 __ltmp;  // in $v0
        unsigned int qwc;  // in $a1
        u_long128 ltmp;  // in $v0
        unsigned int __size;  // in $v0
    }
}

// 0x0015CFE0-0x0015D4F0 (1296 bytes), lines 2095-2332
int _rwDMAOpenVIFPkt(unsigned int type, unsigned int size)
{
    // param unsigned int type  (in $s1)
    // param unsigned int size  (in $s0)
    {   // 0x0015CFE0-0x0015D4F0
        u_long128 *ptr;  // in $a0
        unsigned int __size;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 *__tmp1;  // in $v0
        u_long128 __ltmp;  // in $v0
        unsigned int qwc;  // in $a1
        unsigned int __size;  // in $v0
    }
}

// 0x0015D4F0-0x0015D754 (612 bytes), lines 2422-2523
u_long128 *_rwDMADMAPktAllocHigh(unsigned int size, int sprFlush)
{
    // param unsigned int size  (in $s3)
    // param int sprFlush  (in $s2)
    {   // 0x0015D4F0-0x0015D754
        int pktReOpenResult;  // in $v0
        int pktReOpenResult;  // in $v0
        unsigned int oldPktType;  // in $s1
        unsigned int oldPktSize;  // in $s0
        unsigned int __size;  // in $v0
        unsigned int alignment;  // in $v0
    }
}

// 0x0015D760-0x0015D99C (572 bytes), lines 2537-2681
int _rwDMAAddImageUpload(int parallel, unsigned int size)
{
    // param int parallel  (in $s1)
    // param unsigned int size  (in $s0)
    {   // 0x0015D760-0x0015D99C
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ltmp;  // in $v0
        u_long128 *highPkt;  // in $v0
    }
}

// 0x0015D9A0-0x0015DAD0 (304 bytes), lines 2685-2807
int _rwDMAHook()
{
    {   // 0x0015D9A0-0x0015DAD0
    }
}

// 0x0015DAD0-0x0015DC84 (436 bytes), lines 2811-2916
void _rwDMAUnhook()
{
    {   // 0x0015DAD0-0x0015DC84
    }
}

// 0x0015DC90-0x0015E008 (888 bytes), lines 2920-3142
int _rwDMADmaOpen()
{
    {   // 0x0015DC90-0x0015E008
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $a3
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $a3
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v0
        int i;  // in $a3
        unsigned int size;  // in $v0
        u_long128 *buf;  // in $s3
    }
}

// 0x0015E010-0x0015E060 (80 bytes), lines 3146-3168
void _rwDMADmaClose()
{
    {   // 0x0015E010-0x0015E060
    }
}

// 0x0015E060-0x0015E0B4 (84 bytes), lines 3179-3211
int _rwDMAPreAlloc(unsigned int size, unsigned short puRefSize, u_long128 *optionalBuf)
{
    // param unsigned int size  (in $v0)
    // param unsigned short puRefSize  (in $v0)
    // param u_long128 *optionalBuf  (in $v0)
    {   // 0x0015E060-0x0015E0B4
    }
}

