// C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2voice.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaObj *_RwaSPU2VoiceGetParams(RwaObj *, void *);  // 0x00277B00
RwaObj *_RwaSPU2VoiceFinishExecute(RwaObj *);  // 0x00277B10
RwaObj *_RwaSPU2VoiceStartExecute(RwaObj *);  // 0x00277EF0
void _RwaSPU2VoiceDestroy(RwaObj *, void (*)(RwaObj *, void *), void *);  // 0x00277F60
RwaObj *_RwaSPU2VoiceCreate(RwaObj *, RwaObj *, void *, void *(*)(RwaObjDef *, void *, void *, unsigned int), void *);  // 0x00277F70
signed char _rwMsbBit[];  // 0x002A2A90
short _rwaFastSqrtTable[];  // 0x002BAFC0
float _rwaFastCosTable[];  // 0x002BB1C0
RwaUUID rwaSPU2VOICEID;  // 0x002DA400
RwaUUID rwaSPU2OUTPUTID;  // 0x002DA410
static RwaObjDef _spu2voiceDef;  // 0x0049BED0

// ---- functions ----

// 0x00277680-0x00277760 (224 bytes), lines 1879-1946
static int _RwaSPU2VoiceDuplicate(RwaObj *src, RwaObj *dest)
{
    // param RwaObj *src  (in $v0)
    // param RwaObj *dest  (in $v0)
    {   // 0x00277680-0x00277760
        RwaSPU2VoiceStateDMA *deststatedma;  // in $a3
        RwaSPU2VoiceStateDMA *srcstatedma;  // in $a2
        RwaSPU2VoiceState *deststate;  // in $a1
        RwaSPU2VoiceState *srcstate;  // in $a0
    }
}

// 0x00277760-0x002779E4 (644 bytes), lines 1775-1861
static void _RwaSPU2VoiceSetLRVol(RwaObj *object)
{
    // param RwaObj *object  (in $v0)
    {   // 0x00277760-0x002779E4
        short _e;  // in $v0
        unsigned int *_num;  // in $a3
        short _e;  // in $v0
        unsigned int *_num;  // in $a3
        float r;  // $sp+12
        float l;  // $sp+8
        float pan;  // optimised away
        float vol;  // optimised away
        RwaSPU2VoiceStateDMA *statedma;  // in $v1
        RwaSPU2VoiceState *state;  // in $a1
    }
}

// 0x002779F0-0x00277A34 (68 bytes), lines 1685-1703
void _rwaSPU2VoiceSetWave(RwaSPU2Voice *obj, RwaSPU2Wave *data)
{
    // param RwaSPU2Voice *obj  (in $v0)
    // param RwaSPU2Wave *data  (in $v0)
    {   // 0x002779F0-0x00277A34
    }
}

// 0x00277A40-0x00277A78 (56 bytes), lines 1636-1647
void _rwaSPU2VoiceSetPan(RwaSPU2Voice *obj, float value)
{
    // param RwaSPU2Voice *obj  (in $v0)
    // param float value  ($sp+0)
    {   // 0x00277A40-0x00277A78
    }
}

// 0x00277A80-0x00277AA0 (32 bytes), lines 1536-1542
void _rwaSPU2VoiceSetLoop(RwaSPU2Voice *obj, int value)
{
    // param RwaSPU2Voice *obj  (in $v0)
    // param int value  (in $v0)
    {   // 0x00277A80-0x00277AA0
    }
}

// 0x00277AA0-0x00277ACC (44 bytes), lines 1468-1475
void _rwaSPU2VoiceSetWavePos(RwaSPU2Voice *obj, unsigned int value)
{
    // param RwaSPU2Voice *obj  (in $v0)
    // param unsigned int value  (in $v0)
    {   // 0x00277AA0-0x00277ACC
    }
}

// 0x00277AD0-0x00277AF8 (40 bytes), lines 1334-1341
void _rwaSPU2VoiceSetGain(RwaSPU2Voice *obj, float value)
{
    // param RwaSPU2Voice *obj  (in $v0)
    // param float value  ($sp+0)
    {   // 0x00277AD0-0x00277AF8
    }
}

// 0x00277B00-0x00277B10 (16 bytes), lines 898-901
static RwaObj *_RwaSPU2VoiceGetParams(RwaObj *obj, void *creationParams)
{
    // param RwaObj *obj  (in $v0)
    // param void *creationParams  (in $v0)
    {   // 0x00277B00-0x00277B10
    }
}

// 0x00277B10-0x00277EF0 (992 bytes), lines 678-868
static RwaObj *_RwaSPU2VoiceFinishExecute(RwaObj *obj)
{
    // param RwaObj *obj  (in $s4)
    {   // 0x00277B10-0x00277EF0
        int xk;  // in $a2
        int yi;  // in $v0
        int xi;  // in $v0
        RwaSPU2VoiceState *partnerState;  // in $a1
        RwaListenerVoiceAttributes attrib;  // $sp+112
        float ypan;  // optimised away
        float xpan;  // optimised away
        RwaWaveFormat *waveFormat;  // in $s1
        RwaWave *wave;  // in $v0
        unsigned int updateFlags;  // in $v0
        RwaSPU2VoiceStateDMA *dmaState;  // in $s5
        RwaSPU2VoiceState *state;  // in $s0
        RwaSPU2OutputState *outputState;  // in $a0
        int process3d;  // in $v1
    }
}

// 0x00277EF0-0x00277F5C (108 bytes), lines 635-662
static RwaObj *_RwaSPU2VoiceStartExecute(RwaObj *obj)
{
    // param RwaObj *obj  (in $v0)
    {   // 0x00277EF0-0x00277F5C
        RwaSPU2VoiceState *vstate2;  // in $a1
        RwaSPU2VoiceState *state;  // in $a1
    }
}

// 0x00277F60-0x00277F68 (8 bytes), lines 604-604
static void _RwaSPU2VoiceDestroy(RwaObj *obj)
{
    // param RwaObj *obj  (in $v0)
    {   // 0x00277F60-0x00277F68
    }
}

// 0x00277F70-0x002780C8 (344 bytes), lines 498-567
static RwaObj *_RwaSPU2VoiceCreate(RwaObj *obj, RwaObj *createObj, void *creationParams)
{
    // param RwaObj *obj  (in $s2)
    // param RwaObj *createObj  (in $v0)
    // param void *creationParams  (in $v0)
    {   // 0x00277F70-0x002780C8
        RwV3d nullV3d;  // $sp+64
        RwaSPU2VoiceStateDMA *statedma;  // in $t4
        RwaSPU2VoiceState *state;  // in $s1
        RwaSPU2VoiceCreationParams *params;  // in $s0
    }
}

// 0x002780D0-0x00278104 (52 bytes), lines 460-472
int RwaSPU2VoiceUnregister()
{
    {   // 0x002780D0-0x00278104
    }
}

// 0x00278110-0x00278218 (264 bytes), lines 319-342
RwaObjDef *RwaSPU2VoiceRegister()
{
    {   // 0x00278110-0x00278218
        RwaObjDef *objDef;  // in $s0
    }
}

// 0x00278220-0x00278244 (36 bytes), lines 206-206
RwaSPU2Voice *RwaSPU2VoiceCreate(RwaSPU2Output *createObj, RwaSPU2VoiceCreationParams *creationParams, unsigned int creationFlags, void *(*creationCallback)(RwaObjDef *, void *, void *, unsigned int), void *callbackData)
{
    // param RwaSPU2Output *createObj  (in $a0)
    // param RwaSPU2VoiceCreationParams *creationParams  (in $v1)
    // param unsigned int creationFlags  (in $v0)
    // param void *(*creationCallback)(RwaObjDef *, void *, void *, unsigned int)  (in $v0)
    // param void *callbackData  (in $v0)
    {   // 0x00278220-0x00278244
    }
}

