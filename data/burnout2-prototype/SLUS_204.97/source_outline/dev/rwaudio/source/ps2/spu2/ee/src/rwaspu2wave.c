// C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2wave.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaWave *_RwaSPU2WaveDownload(RwaWave *, RwaWaveFormat *, unsigned int, void *);  // 0x00276FD0
int _RwaSPU2WaveUploadBusy();  // 0x00276FE0
RwaWave *_RwaSPU2WaveUpload(RwaWave *, unsigned int, void *, unsigned int);  // 0x00276FF0
void _RwaSPU2WaveDestroy(RwaWave *);  // 0x002771F0
RwaWave *_RwaSPU2WaveCreate(RwaWave *, RwaObj *);  // 0x002772C0
signed char _rwMsbBit[];  // 0x002A2A90
static RwaWaveDefFormat *_supportedFormats[5];  // 0x002BB960
static RwaSPU2MemoryFunctions _memoryFuncs;  // 0x002BB978
RwaWaveDefFormat _rwavagm;  // 0x002DA030
RwaUUID rwaWAVEFORMAT_VAG;  // 0x002DA0B0
RwaUUID rwaWAVEFORMAT_PCM;  // 0x002DA0C0
RwaUUID rwaSPU2WAVEID;  // 0x002DA3F0
RwaUUID rwaSPU2OUTPUTID;  // 0x002DA410
unsigned int _rwaSPU2OutputReverbCores;  // 0x003106F8
unsigned int _rwaG_rwaSPU2WaveRamLog2BlockSize;  // 0x00310C60
unsigned int _rwaG_rwaSPU2WaveRamLog2NumEntries;  // 0x00310C64
unsigned int _rwaG_rwaSPU2WaveRamAddressMask;  // 0x00310C68
unsigned char _rwaG_rwaSPU2InputAreaMemoryBitmap;  // 0x00311244
static unsigned char _rwaSPU2WaveMemoryBitmap[2048];  // 0x0049B640
static RwaWaveDef _waveDef;  // 0x0049BE40

// ---- functions ----

// 0x00276C30-0x00276C54 (36 bytes), lines 1249-1258
unsigned int _rwaSPU2InputAreaRAMFreeBlocks(unsigned int mask)
{
    // param unsigned int mask  (in $v0)
    {   // 0x00276C30-0x00276C54
        unsigned int conflicts;  // in $v0
    }
}

// 0x00276C60-0x00276C8C (44 bytes), lines 1220-1224
unsigned int _rwaSPU2InputAreaRAMReserveBlocks(unsigned int mask)
{
    // param unsigned int mask  (in $v0)
    {   // 0x00276C60-0x00276C8C
    }
}

// 0x00276C90-0x00276CC4 (52 bytes), lines 1143-1144
unsigned int _rwaSPU2WaveRAMGetAddress(unsigned int handle)
{
    // param unsigned int handle  (in $v0)
    {   // 0x00276C90-0x00276CC4
    }
}

// 0x00276CD0-0x00276D54 (132 bytes), lines 1046-1068
void _rwaSPU2WaveRAMFree(unsigned int handle)
{
    // param unsigned int handle  (in $v0)
    {   // 0x00276CD0-0x00276D54
    }
}

// 0x00276D60-0x00276EC8 (360 bytes), lines 932-1029
unsigned int _rwaSPU2WaveRAMAlloc(unsigned int size)
{
    // param unsigned int size  (in $s3)
    {   // 0x00276D60-0x00276EC8
        unsigned char j;  // in $t0
        unsigned int i;  // in $a3
        unsigned int curBlockSize;  // in $s2
        unsigned int blockStart;  // in $s1
        unsigned int blocksRequired;  // in $s0
    }
}

// 0x00276ED0-0x00276FC8 (248 bytes), lines 824-883
static void _RwaSPU2WaveRAMReserveBlocks(unsigned int address, unsigned int size, int blockBit)
{
    // param unsigned int address  (in $v0)
    // param unsigned int size  (in $v0)
    // param int blockBit  (in $v0)
    {   // 0x00276ED0-0x00276FC8
        unsigned int j;  // in $s0
        unsigned char eBit;  // in $t3
        unsigned char sBit;  // in $t2
        unsigned int endAddress;  // in $a2
        unsigned int startAddress;  // in $v0
        unsigned int endElement;  // in $t0
        unsigned int startElement;  // in $a3
        unsigned int i;  // in $a2
        unsigned char mask;  // in $v1
        unsigned char endBit;  // in $a0
        unsigned char startBit;  // in $a1
    }
}

// 0x00276FD0-0x00276FD8 (8 bytes), lines 763-763
static RwaWave *_RwaSPU2WaveDownload(RwaWave *wave)
{
    // param RwaWave *wave  (in $v0)
    {   // 0x00276FD0-0x00276FD8
    }
}

// 0x00276FE0-0x00276FE8 (8 bytes), lines 726-726
static int _RwaSPU2WaveUploadBusy()
{
    {   // 0x00276FE0-0x00276FE8
    }
}

// 0x00276FF0-0x002771EC (508 bytes), lines 600-711
static RwaWave *_RwaSPU2WaveUpload(RwaWave *wave, unsigned int offset, void *block, unsigned int blockLength)
{
    // param RwaWave *wave  (in $s3)
    // param unsigned int offset  (in $s2)
    // param void *block  (in $v0)
    // param unsigned int blockLength  (in $s1)
    {   // 0x00276FF0-0x002771EC
        unsigned int count;  // in $s0
        unsigned char *dest;  // in $s4
        unsigned char *src;  // in $s2
        int rawVAG;  // in $a1
        unsigned char *vagptr;  // in $s0
        RwaWaveFormat *targetFormat;  // in $a0
    }
}

// 0x002771F0-0x002772B4 (196 bytes), lines 493-511
static void _RwaSPU2WaveDestroy(RwaWave *wave)
{
    // param RwaWave *wave  (in $s0)
    {   // 0x002771F0-0x002772B4
    }
}

// 0x002772C0-0x00277414 (340 bytes), lines 415-476
static RwaWave *_RwaSPU2WaveCreate(RwaWave *wave)
{
    // param RwaWave *wave  (in $s2)
    {   // 0x002772C0-0x00277414
        RwaWaveFormat pcmFormat;  // $sp+64
        RwaWaveFormat *targetFormat;  // in $s1
        RwaWaveFormat *sourceFormat;  // in $s0
    }
}

// 0x00277420-0x00277444 (36 bytes), lines 386-395
int RwaSPU2WaveUnregister()
{
    {   // 0x00277420-0x00277444
    }
}

// 0x00277450-0x002775BC (364 bytes), lines 321-372
RwaWaveDef *RwaSPU2WaveRegister()
{
    {   // 0x00277450-0x002775BC
        RwaWaveDef *waveDef;  // in $s0
    }
}

// 0x002775C0-0x002775EC (44 bytes), lines 197-197
RwaSPU2Wave *RwaSPU2WaveCreate(RwaSPU2Output *obj, RwaWaveFormat *srcFormat, RwaWaveFormat *targetFormat, int is3D, RwaSPU2Wave *wave)
{
    // param RwaSPU2Output *obj  (in $a0)
    // param RwaWaveFormat *srcFormat  (in $v0)
    // param RwaWaveFormat *targetFormat  (in $v1)
    // param int is3D  (in $v0)
    // param RwaSPU2Wave *wave  (in $v0)
    {   // 0x002775C0-0x002775EC
    }
}

