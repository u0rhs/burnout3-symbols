// C:\dev\rwaudio\source\waves\src\rwasoftwave.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaWave *_RwaSoftWaveDownload(RwaWave *, RwaWaveFormat *, unsigned int, void *);  // 0x002758B0
RwaWave *_RwaSoftWaveUpload(RwaWave *, unsigned int, void *, unsigned int);  // 0x002758F0
void _RwaSoftWaveDestroy(RwaWave *);  // 0x002759A0
RwaWave *_RwaSoftWaveCreate(RwaWave *, RwaObj *);  // 0x002759B0
RwaUUID rwaSOFTOUTPUTID;  // 0x002D9DD0
RwaUUID rwaWAVEFORMAT_VAG;  // 0x002DA0B0
RwaUUID rwaWAVEFORMAT_PCM;  // 0x002DA0C0
RwaUUID rwaSOFTWAVEID;  // 0x002DA130
static RwaWaveDefFormat *_supportedFormats[1];  // 0x003106F4
static RwaWaveDef _waveDef;  // 0x004958D0

// ---- functions ----

// 0x002758B0-0x002758EC (60 bytes), lines 481-497
static RwaWave *_RwaSoftWaveDownload(RwaWave *wave, RwaWaveFormat *downloadFormat, unsigned int offset, void *block)
{
    // param RwaWave *wave  (in $s0)
    // param RwaWaveFormat *downloadFormat  (in $v1)
    // param unsigned int offset  (in $v0)
    // param void *block  (in $v0)
    {   // 0x002758B0-0x002758EC
    }
}

// 0x002758F0-0x00275998 (168 bytes), lines 427-457
static RwaWave *_RwaSoftWaveUpload(RwaWave *wave, unsigned int offset, void *block, unsigned int blockLength)
{
    // param RwaWave *wave  (in $s0)
    // param unsigned int offset  (in $v0)
    // param void *block  (in $v0)
    // param unsigned int blockLength  (in $v0)
    {   // 0x002758F0-0x00275998
        short *ptr;  // in $a0
        short *ptr;  // in $a0
    }
}

// 0x002759A0-0x002759A8 (8 bytes), lines 377-377
static void _RwaSoftWaveDestroy(RwaWave *wave)
{
    // param RwaWave *wave  (in $v0)
    {   // 0x002759A0-0x002759A8
    }
}

// 0x002759B0-0x00275A4C (156 bytes), lines 327-353
static RwaWave *_RwaSoftWaveCreate(RwaWave *wave)
{
    // param RwaWave *wave  (in $s0)
    {   // 0x002759B0-0x00275A4C
    }
}

// 0x00275A50-0x00275AF8 (168 bytes), lines 244-284
RwaWaveDef *RwaSoftWaveRegister()
{
    {   // 0x00275A50-0x00275AF8
        RwaWaveDef *waveDef;  // in $s0
    }
}

