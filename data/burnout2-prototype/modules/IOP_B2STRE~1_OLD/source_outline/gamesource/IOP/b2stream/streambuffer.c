// I:\Burnout 2 Code\gamesource\IOP\b2stream\streambuffer.c
// Outline rebuilt from the debug information of B2STRE~1.OLD (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int IVSStreamReadThread(int);  // 0x000013B4
struct @anon0 gaIVSStreams[2];  // 0x00001AD0
int _gnNumChannelsOpened;  // 0x0000AAB4
int _gnNumStreamsOpened;  // 0x0000AAB8
int gReadThreadID;  // 0x0000AABC
int gnReadSemaphore;  // 0x0000AAC0
char _gacBufferSpace[430080];  // 0x0000AAC4

// ---- functions ----

// 0x000012FC-0x000013B4 (184 bytes), lines 64-92
void IVSInit()
{
    {   // 0x000012FC-0x000013B4
        ThreadParam param;  // $sp+44
        SemaParam sem;  // $sp+28
    }
}

// 0x000013B4-0x000015CC (536 bytes), lines 97-205
int IVSStreamReadThread()
{
    {   // 0x000013B4-0x000015CC
        struct @anon0 *lpStream;  // in $s1
        int lnBytesToRead;  // in $v0
        int lnBytesRead;  // in $v0
        int lnCount;  // in $s0
    }
}

// 0x000015CC-0x000017BC (496 bytes), lines 211-278
struct @anon0 *IVSOpen(char *lpacFilename)
{
    // param char *lpacFilename  (in $s1)
    {   // 0x000015CC-0x000017BC
        struct @anon0 *lpStream;  // in $s0
        int lnCount;  // in $a2
    }
}

// 0x000017BC-0x00001828 (108 bytes), lines 282-293
void IVSClose(struct @anon0 *lpStream)
{
    // param struct @anon0 *lpStream  (in $s0)
    {   // 0x000017BC-0x00001828
    }
}

// 0x00001828-0x000019D0 (424 bytes), lines 297-345
int IVSRead(struct @anon0 *lpStream, int lnNumBytes, void *lpBuffer)
{
    // param struct @anon0 *lpStream  (in $s2)
    // param int lnNumBytes  (in $v0)
    // param void *lpBuffer  (in $s1)
    {   // 0x00001828-0x000019D0
        int *pSource;  // in $a2
        int *pTarget;  // in $v0
        int lnCount;  // in $a0
        int lnBytesToRead;  // in $s0
    }
}

// 0x000019D0-0x000019D8 (8 bytes), lines 351-351
int IVSSetPosition(struct @anon0 *lpStream)
{
    // param struct @anon0 *lpStream  (in $v0)
    {   // 0x000019D0-0x000019D8
    }
}

