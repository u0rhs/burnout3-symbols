// I:\Burnout 2 Code\gamesource\IOP\b2stream\b2stream.c
// Outline rebuilt from the debug information of B2STRE~1.OLD (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ganB2StreamVolumes16[7];
int ganStreamFirstChannel[2];
char ganStreamChannelUsed8[7];
enum @enum EB2StreamState;
int _B2StreamVSYNCHandler(void *);  // 0x00000828
int _B2StreamPlay(int);  // 0x00000D40
void *dispatch(unsigned int, void *, int);  // 0x00000EB8
int sce_adpcm_loop();  // 0x00001074
_moduleinfo Module;  // 0x000019F4
int gB2StreamCore;  // 0x000019FC
int gnSPU2RAMAddress;  // 0x00001A00
int gThid;  // 0x00002BC0
int gSem;  // 0x00002BC4
int ret;  // 0x00002BC8
int rpc_arg[16];  // 0x00002BCC
int gnVoice;  // 0x00002C0C
char gacVoiceBuffer[21504];  // 0x00002C40
char gacInterleavedData[10752];  // 0x00008040
int gnNumStreamsOpen;  // 0x0000AA40
int gnBuffer;  // 0x0000AA44
int gnTrigAddress;  // 0x0000AA48
int gbFilled;  // 0x0000AA4C
int gbTransferring;  // 0x0000AA50
int ganStreamPositions[2];  // 0x0000AA54
int ganStreamNumChannels[2];  // 0x0000AA5C
int ganStreamChannelVoices[7];  // 0x0000AA64
int ganStreamSPUBuffers[7];  // 0x0000AA80
int ganStreamLengths[2];  // 0x0000AA9C
int gabStreamPlaying[2];  // 0x0000AAA4
struct @anon0 *gapStreams[2];  // 0x0000AAAC
int gnReadSemaphore;  // 0x0000AAC0

// ---- functions ----

// 0x00000000-0x0000002C (44 bytes), lines 124-134
void B2StreamSdInit()
{
    {   // 0x00000000-0x0000002C
    }
}

// 0x0000002C-0x00000410 (996 bytes), lines 139-249
int B2StreamInit(struct @anon2 *lpInitParams)
{
    // param struct @anon2 *lpInitParams  (in $s0)
    {   // 0x0000002C-0x00000410
        ThreadParam param;  // $sp+60
        SemaParam sem;  // $sp+44
        int lnCount;  // in $t0
    }
}

// 0x00000410-0x00000440 (48 bytes), lines 254-265
void B2StreamQuit()
{
    {   // 0x00000410-0x00000440
    }
}

// 0x00000440-0x0000057C (316 bytes), lines 271-316
int B2StreamOpen(char *lpacFilename)
{
    // param char *lpacFilename  (in $s1)
    {   // 0x00000440-0x0000057C
        int lnFileID;  // in $s0
    }
}

// 0x0000057C-0x000005F0 (116 bytes), lines 321-328
void B2StreamClose(int lnFileID)
{
    // param int lnFileID  (in $s0)
    {   // 0x0000057C-0x000005F0
    }
}

// 0x000005F0-0x00000664 (116 bytes), lines 338-348
void B2StreamResume()
{
    {   // 0x000005F0-0x00000664
        int lnCount;  // in $s0
    }
}

// 0x00000664-0x000006D4 (112 bytes), lines 353-361
void B2StreamPause()
{
    {   // 0x00000664-0x000006D4
        int lnCount;  // in $s0
    }
}

// 0x000006D4-0x00000768 (148 bytes), lines 365-376
void B2StreamStart(int lnFileID)
{
    // param int lnFileID  (in $s1)
    {   // 0x000006D4-0x00000768
        int lnCount;  // in $s0
    }
}

// 0x00000768-0x00000804 (156 bytes), lines 381-393
void B2StreamStop(int lnFileID)
{
    // param int lnFileID  (in $v0)
    {   // 0x00000768-0x00000804
        int lnCount;  // in $s0
    }
}

// 0x00000804-0x0000080C (8 bytes), lines 410-410
void B2StreamSetVoice()
{
    {   // 0x00000804-0x0000080C
    }
}

// 0x0000080C-0x00000828 (28 bytes), lines 418-419
unsigned int B2StreamGetStatus(int lnFileID)
{
    // param int lnFileID  (in $v0)
    {   // 0x0000080C-0x00000828
    }
}

// 0x00000828-0x0000084C (36 bytes), lines 448-451
static int _B2StreamVSYNCHandler(void *common)
{
    // param void *common  (in $v0)
    {   // 0x00000828-0x0000084C
    }
}

// 0x0000084C-0x00000AB8 (620 bytes), lines 460-480
void B2StreamSetVolumes(short *lpVolumes)
{
    // param short *lpVolumes  (in $s0)
    {   // 0x0000084C-0x00000AB8
    }
}

// 0x00000AB8-0x00000B20 (104 bytes), lines 488-494
void B2StreamSetMasterVolume(unsigned int vol)
{
    // param unsigned int vol  (in $s1)
    {   // 0x00000AB8-0x00000B20
    }
}

// 0x00000B20-0x00000D40 (544 bytes), lines 501-566
void B2StreamFillBuffers()
{
    {   // 0x00000B20-0x00000D40
        int *lpDest;  // in $a2
        int *lpDest;  // in $t1
        int *lpSource;  // in $a1
        int lnByte;  // in $a0
        int lnFirstChannel;  // in $v1
        int lnChannel;  // in $s1
        int lnStream;  // in $s0
    }
}

// 0x00000D40-0x00000EB8 (376 bytes), lines 573-630
int _B2StreamPlay()
{
    {   // 0x00000D40-0x00000EB8
        int currentAddr;  // in $v0
    }
}

// 0x00000EB8-0x00001074 (444 bytes), lines 649-691
static void *dispatch(unsigned int command, void *data_)
{
    // param unsigned int command  (in $v0)
    // param void *data_  (in $v0)
    {   // 0x00000EB8-0x00001074
        int data;  // in $a3
        int ch;  // in $a2
    }
}

// 0x00001074-0x000010E0 (108 bytes), lines 700-714
int sce_adpcm_loop()
{
    {   // 0x00001074-0x000010E0
        _sif_serve_data sd;  // $sp+68
        _sif_queue_data qd;  // $sp+44
    }
}

// 0x000010E0-0x00001168 (136 bytes), lines 735-759
int start()
{
    {   // 0x000010E0-0x00001168
        int th;  // in $s0
        ThreadParam param;  // $sp+28
    }
}

