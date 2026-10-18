// C:\dev\rwaudio\source\core\src\rwafreelist.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static int _freeListModuleOpen;  // 0x003111C0
static RwaFreeList *_masterFreeListPtr;  // 0x003111C4
static RwLinkList _freeListList;  // 0x003111C8
static RwaFreeList _masterFreeList;  // 0x004957E0

// ---- functions ----

// 0x00270DD0-0x00270F24 (340 bytes), lines 487-577
void RwaFreeListFree(RwaFreeList *freeList, void *entry)
{
    // param RwaFreeList *freeList  (in $v0)
    // param void *entry  (in $v0)
    {   // 0x00270DD0-0x00270F24
        unsigned int sum;  // in $t1
        unsigned int i;  // in $t0
        unsigned int heapElement;  // in $t1
        unsigned int entryIndex;  // in $t3
        unsigned char *heap;  // in $a1
        RwLLLink *lastLink;  // in $t1
        RwLLLink *link;  // in $a2
        void *dataBlock;  // in $t0
        unsigned int heapEntries;  // in $v1
    }
}

// 0x00270F30-0x002710DC (428 bytes), lines 347-463
void *RwaFreeListAlloc(RwaFreeList *freeList)
{
    // param RwaFreeList *freeList  (in $s0)
    {   // 0x00270F30-0x002710DC
        unsigned char *aligned;  // in $v1
        RwLLLink *link;  // in $s2
        void *dataBlock;  // in $v0
        unsigned char *aligned;  // in $t1
        unsigned int checkEntries;  // in $a2
        RwLLLink *lastLink;  // in $a1
        RwLLLink *link;  // in $a0
        unsigned char *heap;  // in $v1
        unsigned int heapEntries;  // in $s1
        unsigned int j;  // in $t1
        unsigned int i;  // in $t5
        void *freeEntry;  // in $v0
        unsigned char heapElement;  // in $v0
    }
}

// 0x002710E0-0x0027118C (172 bytes), lines 311-323
void RwaFreeListDestroy(RwaFreeList *freeList)
{
    // param RwaFreeList *freeList  (in $s0)
    {   // 0x002710E0-0x0027118C
    }
}

// 0x00271190-0x00271224 (148 bytes), lines 258-287
static void _RwaFreeListFree(RwaFreeList *freeList)
{
    // param RwaFreeList *freeList  (in $s0)
    {   // 0x00271190-0x00271224
        RwLLLink *lastLink;  // in $v1
        RwLLLink *link;  // in $v0
    }
}

// 0x00271230-0x00271418 (488 bytes), lines 152-241
RwaFreeList *RwaFreeListCreate(unsigned int entrySize, unsigned int entriesPerBlock, unsigned int alignment, unsigned int blocks, RwaFreeList *freeList)
{
    // param unsigned int entrySize  (in $s0)
    // param unsigned int entriesPerBlock  (in $s5)
    // param unsigned int alignment  (in $s4)
    // param unsigned int blocks  (in $s3)
    // param RwaFreeList *freeList  (in $s2)
    {   // 0x00271230-0x00271418
        RwLLLink *link;  // in $v0
        void *block;  // in $v0
        unsigned int alignedBlockSize;  // in $s0
    }
}

// 0x00271420-0x002714A4 (132 bytes), lines 80-107
void _rwaFreeListModuleClose()
{
    {   // 0x00271420-0x002714A4
        RwLLLink *lastLink;  // in $v0
        RwLLLink *link;  // in $a1
        RwaFreeList *freeList;  // in $v0
    }
}

// 0x002714B0-0x00271540 (144 bytes), lines 36-57
int _rwaFreeListModuleOpen()
{
    {   // 0x002714B0-0x00271540
    }
}

