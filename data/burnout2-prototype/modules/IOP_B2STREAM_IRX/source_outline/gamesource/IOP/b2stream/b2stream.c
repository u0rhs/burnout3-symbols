// I:\Burnout 2 Code\gamesource\IOP\b2stream\b2stream.c
// Outline rebuilt from the debug information of B2STREAM.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ganB2StreamVolumes16[7];
int ganStreamFirstChannel[2];
char ganStreamChannelUsed8[7];
enum @enum EB2StreamState;
int _B2StreamVSYNCHandler(void *);  // 0x000009AC
int _B2StreamPlay(int);  // 0x00000EC4
void *dispatch(unsigned int, void *, int);  // 0x0000103C
int sce_adpcm_loop();  // 0x0000121C
_moduleinfo Module;  // 0x00001B84
int gB2StreamCore;  // 0x00001B8C
int gnSPU2RAMAddress;  // 0x00001B90
int gThid;  // 0x00002DC0
int gSem;  // 0x00002DC4
int ret;  // 0x00002DC8
int rpc_arg[16];  // 0x00002DCC
int gnVoice;  // 0x00002E0C
char gacVoiceBuffer[21504];  // 0x00002E40
char gacInterleavedData[10752];  // 0x00008240
int gnNumStreamsOpen;  // 0x0000AC40
int gnBuffer;  // 0x0000AC44
int gnTrigAddress;  // 0x0000AC48
int gbFilled;  // 0x0000AC4C
int gbTransferring;  // 0x0000AC50
int ganStreamPositions[2];  // 0x0000AC54
int ganStreamNumChannels[2];  // 0x0000AC5C
int ganStreamChannelVoices[7];  // 0x0000AC64
int ganStreamSPUBuffers[7];  // 0x0000AC80
int ganStreamLengths[2];  // 0x0000AC9C
int gabStreamPlaying[2];  // 0x0000ACA4
struct @anon2 *gapStreams[2];  // 0x0000ACAC
int gnReadSemaphore;  // 0x0000ACC0

// ---- functions ----

// 0x00000000-0x0000002C (44 bytes), lines 124-134
void B2StreamSdInit()
{
    {   // 0x00000000-0x0000002C
    }
}

// 0x0000002C-0x00000410 (996 bytes), lines 139-254
int B2StreamInit(struct @anon1 *lpInitParams)
{
    // param struct @anon1 *lpInitParams  (in $s0)
    {   // 0x0000002C-0x00000410
        ThreadParam param;  // $sp+60
        SemaParam sem;  // $sp+44
        int lnCount;  // in $t0
    }
}

// 0x00000410-0x00000440 (48 bytes), lines 259-270
void B2StreamQuit()
{
    {   // 0x00000410-0x00000440
    }
}

// 0x00000440-0x0000057C (316 bytes), lines 276-321
int B2StreamOpen(char *lpacFilename)
{
    // param char *lpacFilename  (in $s1)
    {   // 0x00000440-0x0000057C
        int lnFileID;  // in $s0
    }
}

// 0x0000057C-0x000005F0 (116 bytes), lines 326-333
void B2StreamClose(int lnFileID)
{
    // param int lnFileID  (in $s0)
    {   // 0x0000057C-0x000005F0
    }
}

// 0x000005F0-0x00000664 (116 bytes), lines 343-353
void B2StreamResume()
{
    {   // 0x000005F0-0x00000664
        int lnCount;  // in $s0
    }
}

// 0x00000664-0x000006D4 (112 bytes), lines 358-366
void B2StreamPause()
{
    {   // 0x00000664-0x000006D4
        int lnCount;  // in $s0
    }
}

// 0x000006D4-0x00000768 (148 bytes), lines 370-381
void B2StreamStart(int lnFileID)
{
    // param int lnFileID  (in $s1)
    {   // 0x000006D4-0x00000768
        int lnCount;  // in $s0
    }
}

// 0x00000768-0x00000804 (156 bytes), lines 386-398
void B2StreamStop(int lnFileID)
{
    // param int lnFileID  (in $v0)
    {   // 0x00000768-0x00000804
        int lnCount;  // in $s0
    }
}

// 0x00000804-0x00000988 (388 bytes), lines 402-433
void B2StreamSeek(int lnFileID, int lnSecondsFromEnd)
{
    // param int lnFileID  (in $a0)
    // param int lnSecondsFromEnd  (in $v0)
    {   // 0x00000804-0x00000988
        int lnRound;  // in $s2
        int lnSeekPos;  // in $s1
        int lnSeekFromEnd;  // in $v0
        int lnCount;  // in $s0
    }
}

// 0x00000988-0x00000990 (8 bytes), lines 450-450
void B2StreamSetVoice()
{
    {   // 0x00000988-0x00000990
    }
}

// 0x00000990-0x000009AC (28 bytes), lines 458-459
unsigned int B2StreamGetStatus(int lnFileID)
{
    // param int lnFileID  (in $v0)
    {   // 0x00000990-0x000009AC
    }
}

// 0x000009AC-0x000009D0 (36 bytes), lines 488-491
static int _B2StreamVSYNCHandler(void *common)
{
    // param void *common  (in $v0)
    {   // 0x000009AC-0x000009D0
    }
}

// 0x000009D0-0x00000C3C (620 bytes), lines 500-520
void B2StreamSetVolumes(short *lpVolumes)
{
    // param short *lpVolumes  (in $s0)
    {   // 0x000009D0-0x00000C3C
    }
}

// 0x00000C3C-0x00000CA4 (104 bytes), lines 528-534
void B2StreamSetMasterVolume(unsigned int vol)
{
    // param unsigned int vol  (in $s1)
    {   // 0x00000C3C-0x00000CA4
    }
}

// 0x00000CA4-0x00000EC4 (544 bytes), lines 541-606
void B2StreamFillBuffers()
{
    {   // 0x00000CA4-0x00000EC4
        int *lpDest;  // in $a2
        int *lpDest;  // in $t1
        int *lpSource;  // in $a1
        int lnByte;  // in $a0
        int lnFirstChannel;  // in $v1
        int lnChannel;  // in $s1
        int lnStream;  // in $s0
    }
}

// 0x00000EC4-0x0000103C (376 bytes), lines 613-670
int _B2StreamPlay()
{
    {   // 0x00000EC4-0x0000103C
        int currentAddr;  // in $v0
    }
}

// 0x0000103C-0x0000121C (480 bytes), lines 689-732
static void *dispatch(unsigned int command, void *data_)
{
    // param unsigned int command  (in $v0)
    // param void *data_  (in $v0)
    {   // 0x0000103C-0x0000121C
        int data2;  // in $t0
        int data;  // in $a3
        int ch;  // in $a2
    }
}

// 0x0000121C-0x00001288 (108 bytes), lines 741-755
int sce_adpcm_loop()
{
    {   // 0x0000121C-0x00001288
        _sif_serve_data sd;  // $sp+68
        _sif_queue_data qd;  // $sp+44
    }
}

// 0x00001288-0x00001310 (136 bytes), lines 776-800
int start()
{
    {   // 0x00001288-0x00001310
        int th;  // in $s0
        ThreadParam param;  // $sp+28
    }
}

