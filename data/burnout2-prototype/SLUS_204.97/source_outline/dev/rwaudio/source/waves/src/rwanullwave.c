// C:\dev\rwaudio\source\waves\src\rwanullwave.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaWave *_RwaNULLWaveDownload(RwaWave *, RwaWaveFormat *, unsigned int, void *);  // 0x00275B00
RwaWave *_RwaNULLWaveUpload(RwaWave *, unsigned int, void *, unsigned int);  // 0x00275B40
void _RwaNULLWaveDestroy(RwaWave *);  // 0x00275B80
RwaWave *_RwaNULLWaveCreate(RwaWave *, RwaObj *);  // 0x00275BB0
RwaUUID rwaNULLWAVEID;  // 0x002DA140
static RwaWaveDef _nullWaveDef;  // 0x00495920

// ---- functions ----

// 0x00275B00-0x00275B3C (60 bytes), lines 231-241
RwaWave *_RwaNULLWaveDownload(RwaWave *wave, RwaWaveFormat *downloadFormat, unsigned int offset, void *block)
{
    // param RwaWave *wave  (in $s0)
    // param RwaWaveFormat *downloadFormat  (in $v1)
    // param unsigned int offset  (in $v0)
    // param void *block  (in $v0)
    {   // 0x00275B00-0x00275B3C
    }
}

// 0x00275B40-0x00275B78 (56 bytes), lines 192-202
static RwaWave *_RwaNULLWaveUpload(RwaWave *wave, unsigned int offset, void *block, unsigned int blockLength)
{
    // param RwaWave *wave  (in $s0)
    // param unsigned int offset  (in $v0)
    // param void *block  (in $v0)
    // param unsigned int blockLength  (in $v0)
    {   // 0x00275B40-0x00275B78
    }
}

// 0x00275B80-0x00275BA8 (40 bytes), lines 154-163
static void _RwaNULLWaveDestroy(RwaWave *wave)
{
    // param RwaWave *wave  (in $v0)
    {   // 0x00275B80-0x00275BA8
    }
}

// 0x00275BB0-0x00275C14 (100 bytes), lines 115-133
static RwaWave *_RwaNULLWaveCreate(RwaWave *wave)
{
    // param RwaWave *wave  (in $s0)
    {   // 0x00275BB0-0x00275C14
    }
}

// 0x00275C20-0x00275CA4 (132 bytes), lines 71-93
RwaWaveDef *_rwaNULLWaveRegister()
{
    {   // 0x00275C20-0x00275CA4
        RwaWaveDef *waveDef;  // in $s0
    }
}

