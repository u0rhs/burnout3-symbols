// resmem.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x0014F580-0x0014F608 (136 bytes), lines 333-369
static void splitBlock(rwResHeapBlockHeader *block, unsigned int size)
{
    // param rwResHeapBlockHeader *block  (in $v0)
    // param unsigned int size  (in $v0)
    {   // 0x0014F580-0x0014F608
        rwResHeapBlockHeader *newBlock;  // in $a3
    }
}

// 0x0014F610-0x0014F668 (88 bytes), lines 395-425
int _rwResHeapInit(void *resHeap, unsigned int size)
{
    // param void *resHeap  (in $v0)
    // param unsigned int size  (in $v0)
    {   // 0x0014F610-0x0014F668
        int blockSize;  // in $a1
        unsigned int start;  // in $v1
        rwResHeapBlockHeader *firstBlock;  // in $v0
        rwResHeapHeader *heapInfo;  // in $v0
    }
}

// 0x0014F670-0x0014F678 (8 bytes), lines 443-443
int _rwResHeapClose()
{
    {   // 0x0014F670-0x0014F678
    }
}

// 0x0014F680-0x0014F740 (192 bytes), lines 455-529
void _rwResHeapFree(void *memory)
{
    // param void *memory  (in $v0)
    {   // 0x0014F680-0x0014F740
        rwResHeapBlockHeader *nextBlock;  // in $a3
        rwResHeapBlockHeader *prevBlock;  // in $a2
        rwResHeapBlockHeader *block;  // in $a1
    }
}

// 0x0014F740-0x0014F840 (256 bytes), lines 545-625
void *_rwResHeapAlloc(void *resHeap, unsigned int size)
{
    // param void *resHeap  (in $v0)
    // param unsigned int size  (in $v0)
    {   // 0x0014F740-0x0014F840
        rwResHeapBlockHeader *curBlock;  // in $a2
        rwResHeapBlockHeader *targetBlock;  // in $v0
        rwResHeapHeader *heapInfo;  // in $t0
    }
}

