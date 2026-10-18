// I:\Burnout 2 Code\gamesource\Toolkits\linearmalloc.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void *LinearCalloc(unsigned int, unsigned int);  // 0x001C4F80
void *LinearRealloc(void *, unsigned int);  // 0x001C5010
void LinearFree(void *);  // 0x001C5130
void *LinearMalloc(unsigned int);  // 0x001C51C0
static char *_gpMemory;  // 0x00310BC0
static char *_gpFreeMemory;  // 0x00310BC4
static int _gLastAllocSize;  // 0x00310BC8
static void *_gpLastAllocatedBlock;  // 0x00310BCC
static int _gArenaSize;  // 0x00310BD0
static int _gTotalAllocated;  // 0x00310BD4
static int _gTotalAllocations;  // 0x00310BD8
static int _gTotalFrees;  // 0x00310BDC
static int bOldMemSaved;  // 0x00310BE0
static RwMemoryFunctions _gOldMemFuncs;  // 0x004515D0

// ---- functions ----

// 0x001C4F30-0x001C4F74 (68 bytes), lines 220-225
// LinearMallocDisable__Fv
void LinearMallocDisable()
{
    {   // 0x001C4F30-0x001C4F74
        RwMemoryFunctions *pMemFuncs;  // in $v0
    }
}

// 0x001C4F80-0x001C5004 (132 bytes), lines 198-200
// LinearCalloc__FUiUi
void *LinearCalloc(unsigned int num, unsigned int size)
{
    // param unsigned int num  (in $v0)
    // param unsigned int size  (in $v0)
    {   // 0x001C4F80-0x001C5004
    }
}

// 0x001C5010-0x001C512C (284 bytes), lines 158-189
// LinearRealloc__FPvUi
void *LinearRealloc(void *ptr, unsigned int size)
{
    // param void *ptr  (in $s2)
    // param unsigned int size  (in $s1)
    {   // 0x001C5010-0x001C512C
        unsigned int extraSize;  // in $v0
    }
}

// 0x001C5130-0x001C51BC (140 bytes), lines 115-149
// LinearFree__FPv
void LinearFree(void *ptr)
{
    // param void *ptr  (in $v0)
    {   // 0x001C5130-0x001C51BC
    }
}

// 0x001C51C0-0x001C523C (124 bytes), lines 85-105
// LinearMalloc__FUi
void *LinearMalloc(unsigned int size)
{
    // param unsigned int size  (in $v0)
    {   // 0x001C51C0-0x001C523C
        void *pMem;  // in $v0
    }
}

// 0x001C5240-0x001C52F4 (180 bytes), lines 54-78
// LinearMallocInit__FPvi
void LinearMallocInit(void *pArena, int size)
{
    // param void *pArena  (in $s1)
    // param int size  (in $s0)
    {   // 0x001C5240-0x001C52F4
        RwMemoryFunctions *pRWMemFuncs;  // in $v0
    }
}

