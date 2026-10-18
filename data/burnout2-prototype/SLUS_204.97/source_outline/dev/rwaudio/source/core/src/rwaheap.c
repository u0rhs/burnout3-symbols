// C:\dev\rwaudio\source\core\src\rwaheap.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static int _moduleOpen;  // 0x003111FC
static RwLinkList _heapList;  // 0x00311200
static RwaFreeList _heapFreeList;  // 0x00495970

// ---- functions ----

// 0x00275CB0-0x00275D70 (192 bytes), lines 608-683
void *RwaHeapBlockAlloc(RwaHeapBlock *heap, unsigned int size, unsigned int alignment)
{
    // param RwaHeapBlock *heap  (in $v0)
    // param unsigned int size  (in $v0)
    // param unsigned int alignment  (in $v0)
    {   // 0x00275CB0-0x00275D70
        unsigned int totalSize;  // in $t2
        RwaHeapEntry *allocHeapBlock;  // in $v0
        RwaHeapEntry *curHeapBlock;  // in $t1
        void *result;  // in $v0
    }
}

// 0x00275D70-0x00275E90 (288 bytes), lines 349-391
void RwaHeapFree(RwaHeap *heap, void *block)
{
    // param RwaHeap *heap  (in $v0)
    // param void *block  (in $v0)
    {   // 0x00275D70-0x00275E90
        RwLLLink *lastLink;  // in $a2
        RwLLLink *link;  // in $a3
        RwaHeapBlock *heapBlock;  // in $v0
    }
}

// 0x00275E90-0x00275F98 (264 bytes), lines 298-334
void *RwaHeapAlloc(RwaHeap *heap, unsigned int size)
{
    // param RwaHeap *heap  (in $s2)
    // param unsigned int size  (in $s1)
    {   // 0x00275E90-0x00275F98
        RwLLLink *lastLink;  // in $s4
        RwLLLink *link;  // in $s3
        void *block;  // in $s0
    }
}

// 0x00275FA0-0x0027602C (140 bytes), lines 228-254
void RwaHeapDestroy(RwaHeap *heap)
{
    // param RwaHeap *heap  (in $s0)
    {   // 0x00275FA0-0x0027602C
        RwaHeapBlock *heapBlock;  // in $v0
        RwLLLink *lastLink;  // in $v1
        RwLLLink *link;  // in $v0
    }
}

// 0x00276030-0x002761F8 (456 bytes), lines 124-182
RwaHeap *RwaHeapCreate(unsigned int averageEntrySize, unsigned int averageNumEntries, unsigned int alignment, unsigned int noBlocks, RwaHeap *heap)
{
    // param unsigned int averageEntrySize  (in $s4)
    // param unsigned int averageNumEntries  (in $s3)
    // param unsigned int alignment  (in $s2)
    // param unsigned int noBlocks  (in $s1)
    // param RwaHeap *heap  (in $s0)
    {   // 0x00276030-0x002761F8
    }
}

// 0x00276200-0x002762BC (188 bytes), lines 78-100
void _rwaHeapModuleClose()
{
    {   // 0x00276200-0x002762BC
        RwaHeap *heap;  // in $s0
        RwLLLink *lastLink;  // in $v0
        RwLLLink *link;  // in $v0
    }
}

// 0x002762C0-0x00276314 (84 bytes), lines 47-62
int _rwaHeapModuleOpen()
{
    {   // 0x002762C0-0x00276314
    }
}

