// basync.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwObject *SyncObject(RwObject *, void *);  // 0x001568F0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001568F0-0x0015691C (44 bytes), lines 84-91
static RwObject *SyncObject(RwObject *object)
{
    // param RwObject *object  (in $s0)
    {   // 0x001568F0-0x0015691C
    }
}

// 0x00156920-0x00156A5C (316 bytes), lines 104-144
static void FrameSyncHierarchyRecurse(RwFrame *frame, int flags)
{
    // param RwFrame *frame  (in $s5)
    // param int flags  (in $s4)
    {   // 0x00156920-0x00156A5C
        int accumflags;  // in $s0
    }
}

// 0x00156A60-0x00156B2C (204 bytes), lines 157-187
static void FrameSyncHierarchyRecurseNoLTM(RwFrame *frame)
{
    // param RwFrame *frame  (in $s0)
    {   // 0x00156A60-0x00156B2C
    }
}

// 0x00156B30-0x00156C64 (308 bytes), lines 263-288
int _rwFrameSyncDirty()
{
    {   // 0x00156B30-0x00156C64
        RwFrame *rootFrame;  // in $s1
        RwLLLink *lpFrameEnd;  // in $v0
        RwLLLink *lpFrameCur;  // in $s0
    }
}

// 0x00156C70-0x00156D6C (252 bytes), lines 302-334
static void FrameSyncHierarchyLTMRecurse(RwFrame *frame, int flags)
{
    // param RwFrame *frame  (in $s5)
    // param int flags  (in $s4)
    {   // 0x00156C70-0x00156D6C
        int accumflags;  // in $s0
    }
}

// 0x00156D70-0x00156E54 (228 bytes), lines 349-375
void _rwFrameSyncHierarchyLTM(RwFrame *frame)
{
    // param RwFrame *frame  (in $v0)
    {   // 0x00156D70-0x00156E54
        int oldFlags;  // in $s0
    }
}

