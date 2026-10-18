// baresour.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwModuleInfo resourcesModule;  // 0x003108C8
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014D460-0x0014D560 (256 bytes), lines 72-113
static rwResources *ResourcesInit(rwResources *res, unsigned int size)
{
    // param rwResources *res  (in $s2)
    // param unsigned int size  (in $s1)
    {   // 0x0014D460-0x0014D560
        RwError _rwErrorCode;  // $sp+72
        RwError _rwErrorCode;  // $sp+64
    }
}

// 0x0014D560-0x0014D5C8 (104 bytes), lines 125-149
void *_rwResourcesOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x0014D560-0x0014D5C8
    }
}

// 0x0014D5D0-0x0014D650 (128 bytes), lines 162-182
void *_rwResourcesClose(void *instance)
{
    // param void *instance  (in $s2)
    {   // 0x0014D5D0-0x0014D650
    }
}

// 0x0014D650-0x0014D6F4 (164 bytes), lines 202-250
int RwResourcesFreeResEntry(RwResEntry *entry)
{
    // param RwResEntry *entry  (in $s0)
    {   // 0x0014D650-0x0014D6F4
    }
}

// 0x0014D700-0x0014D7A0 (160 bytes), lines 273-321
void _rwResourcesPurge()
{
    {   // 0x0014D700-0x0014D7A0
        RwLLLink *last;  // in $v1
        RwLinkList *freeEntries;  // in $a1
        RwLinkList *usedEntries;  // in $a0
    }
}

// 0x0014D7A0-0x0014DA34 (660 bytes), lines 351-480
RwResEntry *RwResourcesAllocateResEntry(void *owner, RwResEntry **ownerRef, int size, void (*destroyNotify)(RwResEntry *))
{
    // param void *owner  (in $s6)
    // param RwResEntry **ownerRef  (in $s5)
    // param int size  (in $s0)
    // param void (*destroyNotify)(RwResEntry *)  (in $s7)
    {   // 0x0014D7A0-0x0014DA34
        RwError _rwErrorCode;  // $sp+152
        RwLLLink *cur;  // in $v0
        int exhaustedOptions;  // in $s1
        RwResEntry *entry;  // in $v0
    }
}

// 0x0014DA40-0x0014DB5C (284 bytes), lines 554-643
int RwResourcesSetArenaSize(unsigned int size)
{
    // param unsigned int size  (in $s0)
    {   // 0x0014DA40-0x0014DB5C
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        rwResources *res;  // in $s1
    }
}

// 0x0014DB60-0x0014DCB0 (336 bytes), lines 730-767
int RwResourcesEmptyArena()
{
    {   // 0x0014DB60-0x0014DCB0
        RwResEntry *entry;  // in $s2
        RwLLLink *end;  // in $s1
        RwLLLink *cur;  // in $s0
    }
}

