// C:\dev\rwaudio\source\core\src\rwallist.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static int _linkListOpen;  // 0x003111D0
RwaFreeList _rwaGfreeListLLNodes;  // 0x00495810

// ---- functions ----

// 0x00271590-0x002715EC (92 bytes), lines 465-480
void RwaLListEmpty(RwaLLNode *head)
{
    // param RwaLLNode *head  (in $s0)
    {   // 0x00271590-0x002715EC
        RwaLLNode *lastNode;  // in $v0
        RwaLLNode *curNode;  // in $v0
    }
}

// 0x002715F0-0x0027162C (60 bytes), lines 272-285
unsigned int RwaLListFindDataIndex(RwaLLNode *head, void *data)
{
    // param RwaLLNode *head  (in $v0)
    // param void *data  (in $v0)
    {   // 0x002715F0-0x0027162C
        RwaLLNode *node;  // in $a2
        unsigned int index;  // in $v0
    }
}

// 0x00271630-0x002716A8 (120 bytes), lines 159-182
RwaLLNode *RwaLListRemoveData(RwaLLNode *head, void *data)
{
    // param RwaLLNode *head  (in $s0)
    // param void *data  (in $v0)
    {   // 0x00271630-0x002716A8
        RwaLLNode *node;  // in $a2
    }
}

// 0x002716B0-0x00271720 (112 bytes), lines 117-141
RwaLLNode *RwaLListAddData(RwaLLNode *head, void *data)
{
    // param RwaLLNode *head  (in $s1)
    // param void *data  (in $s0)
    {   // 0x002716B0-0x00271720
        RwaLLNode *newNode;  // in $v0
    }
}

// 0x00271720-0x00271744 (36 bytes), lines 57-63
void _rwaLListModuleClose()
{
    {   // 0x00271720-0x00271744
    }
}

// 0x00271750-0x00271798 (72 bytes), lines 32-43
int _rwaLListModuleOpen()
{
    {   // 0x00271750-0x00271798
    }
}

