// bafsys.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int rwfexist(char *);  // 0x0014B770
int fclose(__sFILE *);  // 0x001BAB40
int feof(__sFILE *);  // 0x001BAC40
int fflush(__sFILE *);  // 0x001BAC50
char *fgets(char *, int, __sFILE *);  // 0x001BAD68
__sFILE *fopen(char *, char *);  // 0x001BB2D8
int fputs(char *, __sFILE *);  // 0x001BB300
unsigned int fread(void *, unsigned int, unsigned int, __sFILE *);  // 0x001BB350
int fseek(__sFILE *, long, int);  // 0x001BB8D8
long ftell(__sFILE *);  // 0x001BBDE8
unsigned int fwrite(void *, unsigned int, unsigned int, __sFILE *);  // 0x001BC368
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014B760-0x0014B770 (16 bytes), lines 100-101
RwFileFunctions *RwOsGetFileInterface()
{
    {   // 0x0014B760-0x0014B770
    }
}

// 0x0014B770-0x0014B7C4 (84 bytes), lines 105-120
static int rwfexist(char *name)
{
    // param char *name  (in $v0)
    {   // 0x0014B770-0x0014B7C4
        int fileExists;  // in $s0
        void *handle;  // in $v0
    }
}

// 0x0014B7D0-0x0014B864 (148 bytes), lines 344-384
int _rwFileSystemOpen()
{
    {   // 0x0014B7D0-0x0014B864
    }
}

// 0x0014B870-0x0014B878 (8 bytes), lines 399-399
void _rwFileSystemClose()
{
    {   // 0x0014B870-0x0014B878
    }
}

