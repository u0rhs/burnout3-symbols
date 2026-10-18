// C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaObj *_RwaSPU2OutputGetParams(RwaObj *, void *);  // 0x00278820
RwaObj *_RwaSPU2OutputFinishExecute(RwaObj *);  // 0x00278840
RwaObj *_RwaSPU2OutputStartExecute(RwaObj *);  // 0x00278970
void _RwaSPU2OutputDestroy(RwaObj *, void (*)(RwaObj *, void *), void *);  // 0x002789A0
RwaObj *_RwaSPU2OutputCreate(RwaObj *, RwaObj *, void *, void *(*)(RwaObjDef *, void *, void *, unsigned int), void *);  // 0x00278A40
void RwaSPU2OutputCmdHandler(unsigned int, unsigned int, unsigned int, unsigned int, void (*)(unsigned int, unsigned int));  // 0x00278EB0
signed char _rwMsbBit[];  // 0x002A2A90
RwaUUID rwaSPU2OUTPUTID;  // 0x002DA410
unsigned int _rwaSPU2OutputReverbCores;  // 0x003106F8
static int _rwaSPU2_IOPMemFree;  // 0x003106FC
static int _rwaSPU2_IOPMemUsed;  // 0x00310700
RwaObjDef *_rwaGnullObjDef;  // 0x003111AC
static int _rwaSPU2_IOPInitialized;  // 0x00311248
static int _rwaSPU2AutoDMAActive;  // 0x0031124C
static RwaSPU2OutputState *_rwaSPU2OutputState;  // 0x00311280
static int _rwaSPU2IOPCoreIsOpen;  // 0x00311284
static RwaObjDef _spu2outputDef;  // 0x0049BF60
static RwaSPU2PCMRendererAllocData _rwaSPU2PCMOutputAllocData;  // 0x0049BFC0
static RwaSPU2VAGRendererAllocData _rwaSPU2OutputAllocData;  // 0x0049C000
RwaObj *_rwaSPU2Voice[48];  // 0x0049C040

// ---- functions ----

// 0x00278260-0x00278380 (288 bytes), lines 2012-2070
void _rwaSPU2OutputSetMixerCallback(RwaSPU2Output *obj, RwaOutputMixerInfo *data)
{
    // param RwaSPU2Output *obj  (in $v0)
    // param RwaOutputMixerInfo *data  (in $s1)
    {   // 0x00278260-0x00278380
        RwaSPU2OutputState *state;  // in $s0
    }
}

// 0x00278380-0x002783D4 (84 bytes), lines 1983-1994
RwaObj *_RwaSPU2OutputFreeHWVoice(RwaObj *voice)
{
    // param RwaObj *voice  (in $v0)
    {   // 0x00278380-0x002783D4
        int count;  // in $a1
    }
}

// 0x002783E0-0x002784F0 (272 bytes), lines 1881-1940
void _RwaSPU2OutputAllocateHWVoiceNumber(unsigned int mode, unsigned int channels, unsigned int *channelBitMap)
{
    // param unsigned int mode  (in $s4)
    // param unsigned int channels  (in $s3)
    // param unsigned int *channelBitMap  (in $s2)
    {   // 0x002783E0-0x002784F0
        unsigned int end;  // in $s1
        unsigned int start;  // in $s0
        unsigned int count;  // in $v0
    }
}

// 0x002784F0-0x002785D4 (228 bytes), lines 1815-1866
RwaObj *_RwaSPU2OutputAllocateHWVoice(RwaObj *voice)
{
    // param RwaObj *voice  (in $s2)
    {   // 0x002784F0-0x002785D4
        unsigned int mode;  // in $v1
        RwaSPU2VoiceState *voicestate;  // in $a1
        int end;  // in $s1
        int start;  // in $s0
        int count;  // in $v0
    }
}

// 0x002785E0-0x00278820 (576 bytes), lines 1598-1705
void _rwaSPU2OutputSetEnvironment(RwaSPU2Output *obj, RwaEnvironment *data)
{
    // param RwaSPU2Output *obj  (in $v0)
    // param RwaEnvironment *data  (in $s1)
    {   // 0x002785E0-0x00278820
        RwaSPU2OutputState *state;  // in $s0
    }
}

// 0x00278820-0x0027883C (28 bytes), lines 1360-1365
static RwaObj *_RwaSPU2OutputGetParams(RwaObj *obj, void *creationParams)
{
    // param RwaObj *obj  (in $v0)
    // param void *creationParams  (in $v0)
    {   // 0x00278820-0x0027883C
        RwaSPU2OutputCreationParams *params;  // in $v0
    }
}

// 0x00278840-0x0027896C (300 bytes), lines 1249-1330
static RwaObj *_RwaSPU2OutputFinishExecute(RwaObj *obj)
{
    // param RwaObj *obj  (in $s2)
    {   // 0x00278840-0x0027896C
        RwaSPU2VoiceStateDMA *vstateiop;  // in $t1
        RwaSPU2VoiceStateDMA *vstate;  // in $v0
        int *uncachedPID;  // in $v1
        RwaSPU2OutputState *state;  // in $s0
        int count;  // in $t0
        int updatecount;  // at 0x00310704
    }
}

// 0x00278970-0x0027899C (44 bytes), lines 1205-1233
static RwaObj *_RwaSPU2OutputStartExecute(RwaObj *obj)
{
    // param RwaObj *obj  (in $s0)
    {   // 0x00278970-0x0027899C
    }
}

// 0x002789A0-0x00278A38 (152 bytes), lines 1142-1189
static void _RwaSPU2OutputDestroy(RwaObj *obj)
{
    // param RwaObj *obj  (in $v0)
    {   // 0x002789A0-0x00278A38
        RwaOutputMixerInfo info;  // $sp+32
    }
}

// 0x00278A40-0x00278C54 (532 bytes), lines 932-1119
static RwaObj *_RwaSPU2OutputCreate(RwaObj *obj, void *creationParams)
{
    // param RwaObj *obj  (in $s2)
    // param void *creationParams  (in $v0)
    {   // 0x00278A40-0x00278C54
        RwaEnvironment env;  // $sp+64
        int count;  // in $a1
        RwaSPU2OutputCreationParams *params;  // in $v0
        RwaSPU2OutputState *state;  // in $s0
        RwaSPU2Output *spu2output;  // in $v0
    }
}

// 0x00278C60-0x00278C94 (52 bytes), lines 894-906
int RwaSPU2OutputUnregister()
{
    {   // 0x00278C60-0x00278C94
    }
}

// 0x00278CA0-0x00278D94 (244 bytes), lines 751-774
RwaObjDef *RwaSPU2OutputRegister()
{
    {   // 0x00278CA0-0x00278D94
        RwaObjDef *objDef;  // in $s0
    }
}

// 0x00278DA0-0x00278DC0 (32 bytes), lines 637-637
RwaSPU2Output *RwaSPU2OutputCreate(RwaSPU2OutputCreationParams *creationParams, unsigned int creationFlags, void *(*creationCallback)(RwaObjDef *, void *, void *, unsigned int), void *callbackData)
{
    // param RwaSPU2OutputCreationParams *creationParams  (in $a0)
    // param unsigned int creationFlags  (in $a1)
    // param void *(*creationCallback)(RwaObjDef *, void *, void *, unsigned int)  (in $v0)
    // param void *callbackData  (in $v0)
    {   // 0x00278DA0-0x00278DC0
    }
}

// 0x00278DC0-0x00278EA4 (228 bytes), lines 514-592
static void RwaSPU2OutputTickUpdate(RwaSPU2OutputState *state, unsigned int iopdest, unsigned int length)
{
    // param RwaSPU2OutputState *state  (in $a0)
    // param unsigned int iopdest  (in $s2)
    // param unsigned int length  (in $s1)
    {   // 0x00278DC0-0x00278EA4
        short *src;  // in $s0
        short *src;  // in $v0
    }
}

// 0x00278EB0-0x0027924C (924 bytes), lines 241-418
static void RwaSPU2OutputCmdHandler(unsigned int rpcparam, unsigned int cmd, unsigned int param1, unsigned int param2, void (*callback)(unsigned int, unsigned int))
{
    // param unsigned int rpcparam  (in $v0)
    // param unsigned int cmd  (in $v0)
    // param unsigned int param1  (in $s0)
    // param unsigned int param2  (in $v0)
    // param void (*callback)(unsigned int, unsigned int)  (in $v0)
    {   // 0x00278EB0-0x0027924C
        unsigned int iopSideAddr;  // in $s0
        unsigned int iopSideAddr;  // in $s0
        unsigned int iopSideAddr;  // in $s0
        RwaSPU2VAGRendererAllocData *vagfree;  // in $v0
        unsigned int iopSideAddr;  // in $s0
        RwaSPU2OutputState *objectState;  // in $v0
    }
}

// 0x00279250-0x002792C8 (120 bytes), lines 204-221
int _rwaSPU2OutputIOPCoreOpen()
{
    {   // 0x00279250-0x002792C8
    }
}

