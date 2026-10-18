// I:\Burnout 2 Code\gamesource\IOP\b2stream\streambuffer.c
// Outline rebuilt from the debug information of B2STREAM.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int IVSStreamReadThread(int);  // 0x0000155C
struct @anon0 gaIVSStreams[2];  // 0x00001CCC
int _gnNumChannelsOpened;  // 0x0000ACB4
int _gnNumStreamsOpened;  // 0x0000ACB8
int gReadThreadID;  // 0x0000ACBC
int gnReadSemaphore;  // 0x0000ACC0
char _gacBufferSpace[491520];  // 0x0000ACC4

// ---- functions ----

// 0x000014A4-0x0000155C (184 bytes), lines 64-92
void IVSInit()
{
    {   // 0x000014A4-0x0000155C
        ThreadParam param;  // $sp+44
        SemaParam sem;  // $sp+28
    }
}

// 0x0000155C-0x00001774 (536 bytes), lines 97-205
int IVSStreamReadThread()
{
    {   // 0x0000155C-0x00001774
        struct @anon0 *lpStream;  // in $s1
        int lnBytesToRead;  // in $v0
        int lnBytesRead;  // in $v0
        int lnCount;  // in $s0
    }
}

// 0x00001774-0x0000196C (504 bytes), lines 211-278
struct @anon0 *IVSOpen(char *lpacFilename)
{
    // param char *lpacFilename  (in $s1)
    {   // 0x00001774-0x0000196C
        struct @anon0 *lpStream;  // in $s0
        int lnCount;  // in $a2
    }
}

// 0x0000196C-0x000019D8 (108 bytes), lines 282-293
void IVSClose(struct @anon0 *lpStream)
{
    // param struct @anon0 *lpStream  (in $s0)
    {   // 0x0000196C-0x000019D8
    }
}

// 0x000019D8-0x00001B60 (392 bytes), lines 297-346
int IVSRead(struct @anon0 *lpStream, int lnNumBytes, void *lpBuffer)
{
    // param struct @anon0 *lpStream  (in $v0)
    // param int lnNumBytes  (in $v0)
    // param void *lpBuffer  (in $v0)
    {   // 0x000019D8-0x00001B60
        int *pSource;  // in $t1
        int *pTarget;  // in $v0
        int lnCount;  // in $t0
        int lnBytesToRead;  // in $v0
    }
}

// 0x00001B60-0x00001B68 (8 bytes), lines 352-352
int IVSSetPosition(struct @anon0 *lpStream, int lnPosition)
{
    // param struct @anon0 *lpStream  (in $v0)
    // param int lnPosition  (in $v0)
    {   // 0x00001B60-0x00001B68
    }
}

