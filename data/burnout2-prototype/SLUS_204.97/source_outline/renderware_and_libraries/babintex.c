// babintex.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwTexture *addNativeTextureSize(RwTexture *, void *);
RwTexture *writeNativeTexture(RwTexture *, void *);
RwTexture *countTexturesInDictionary(RwTexture *, void *);
RwTexture *destroyTexture(RwTexture *, void *);  // 0x00150A60
RwPluginRegistry textureTKList;  // 0x002A2C10
RwPluginRegistry texDictTKList;  // 0x002A2C30
static char nullString[1];  // 0x002C3B18
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00150240-0x00150280 (64 bytes), lines 116-129
unsigned int _rwStringStreamGetSize(char *string)
{
    // param char *string  (in $v0)
    {   // 0x00150240-0x00150280
    }
}

// 0x00150280-0x00150334 (180 bytes), lines 139-173
char *_rwStringStreamWrite(char *string, RwStream *stream)
{
    // param char *string  (in $s1)
    // param RwStream *stream  (in $s0)
    {   // 0x00150280-0x00150334
    }
}

// 0x00150340-0x001504CC (396 bytes), lines 188-245
static char *StringStreamRead(char *nativeString, RwStream *stream, unsigned int length)
{
    // param char *nativeString  (in $s4)
    // param RwStream *stream  (in $s3)
    // param unsigned int length  (in $s2)
    {   // 0x00150340-0x001504CC
        unsigned int i;  // in $a1
        RwError _rwErrorCode;  // $sp+216
        char *baseString;  // in $s0
        char multiByteString[64];  // $sp+96
    }
}

// 0x001504D0-0x00150698 (456 bytes), lines 260-321
static char *UnicodeStringStreamRead(char *nativeString, RwStream *stream, unsigned int length)
{
    // param char *nativeString  (in $s4)
    // param RwStream *stream  (in $s3)
    // param unsigned int length  (in $s2)
    {   // 0x001504D0-0x00150698
        unsigned int CharCount;  // in $a2
        unsigned int i;  // in $a1
        RwError _rwErrorCode;  // $sp+296
        int mallocced;  // in $s1
        char *baseString;  // in $s0
        unsigned short uniCodeString[64];  // $sp+112
    }
}

// 0x001506A0-0x001507C0 (288 bytes), lines 332-367
char *_rwStringStreamFindAndRead(char *string, RwStream *stream)
{
    // param char *string  (in $s1)
    // param RwStream *stream  (in $s0)
    {   // 0x001506A0-0x001507C0
        RwError _rwErrorCode;  // $sp+56
        unsigned int version;  // $sp+76
        unsigned int length;  // $sp+72
        unsigned int type;  // $sp+68
    }
}

// 0x001507C0-0x001507E4 (36 bytes), lines 407-407
int RwTextureRegisterPluginStream(unsigned int pluginID, RwStream *(*readCB)(RwStream *, int, void *, int, int), RwStream *(*writeCB)(RwStream *, int, void *, int, int), int (*getSizeCB)(void *, int, int))
{
    // param unsigned int pluginID  (in $a0)
    // param RwStream *(*readCB)(RwStream *, int, void *, int, int)  (in $v1)
    // param RwStream *(*writeCB)(RwStream *, int, void *, int, int)  (in $v0)
    // param int (*getSizeCB)(void *, int, int)  (in $v0)
    {   // 0x001507C0-0x001507E4
        int plug;  // in $v0
    }
}

// 0x001507F0-0x00150A5C (620 bytes), lines 608-749
RwTexture *RwTextureStreamRead(RwStream *stream)
{
    // param RwStream *stream  (in $s4)
    {   // 0x001507F0-0x00150A5C
        RwError _rwErrorCode;  // $sp+360
        RwTextureStreamFlags flags;  // in $s3
        int autoMipmapState;  // in $s2
        int mipmapState;  // in $s1
        _rwStreamTexture texFiltAddr;  // $sp+380
        RwTextureAddressMode addressingV;  // in $v0
        RwTextureAddressMode addressingU;  // in $v0
        RwTextureFilterMode filtering;  // in $s0
        char textureMask[128];  // $sp+224
        char textureName[128];  // $sp+96
        RwTexture *texture;  // in $s0
        unsigned int version;  // $sp+376
        unsigned int size;  // $sp+372
    }
}

// 0x00150A60-0x00150A88 (40 bytes), lines 1091-1098
static RwTexture *destroyTexture(RwTexture *texture)
{
    // param RwTexture *texture  (in $s0)
    {   // 0x00150A60-0x00150A88
    }
}

// 0x00150A90-0x00150D3C (684 bytes), lines 1142-1248
RwTexDictionary *RwTexDictionaryStreamRead(RwStream *stream)
{
    // param RwStream *stream  (in $s1)
    {   // 0x00150A90-0x00150D3C
        RwError _rwErrorCode;  // $sp+56
        RwError _rwErrorCode;  // $sp+48
        RwTexture *newTex;  // $sp+76
        _rwStreamTexDictionary binTexDict;  // $sp+72
        RwTexDictionary *texDict;  // in $s0
        unsigned int version;  // $sp+68
        unsigned int size;  // $sp+64
    }
}

