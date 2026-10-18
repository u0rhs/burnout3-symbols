// rwstring.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int StrICmp(char *, char *);  // 0x0014F840
char *StrUpr(char *);  // 0x0014F900
char *StrLwr(char *);  // 0x0014F950
char *StrChr(char *, int);  // 0x0014F9A0
char *StrRChr(char *, int);  // 0x0014F9E0
int sprintf(char *, char *);  // 0x001BFE78
int sscanf(char *, char *);  // 0x001BFF10
char *strcat(char *, char *);  // 0x001C0128
int strcmp(char *, char *);  // 0x001C0258
char *strcpy(char *, char *);  // 0x001C03A0
unsigned int strlen(char *);  // 0x001C04B8
char *strncat(char *, char *, unsigned int);  // 0x001C06C8
char *strncpy(char *, char *, unsigned int);  // 0x001C0878
char *strstr(char *, char *);  // 0x001C0A38
char *strtok(char *, char *);  // 0x001C1A28
int vsprintf(char *, char *, char *);  // 0x001C4A60
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014F840-0x0014F8F4 (180 bytes), lines 62-102
static int StrICmp(char *s1, char *s2)
{
    // param char *s1  (in $v0)
    // param char *s2  (in $v0)
    {   // 0x0014F840-0x0014F8F4
        char c2;  // in $a2
        char c1;  // in $v1
    }
}

// 0x0014F900-0x0014F950 (80 bytes), lines 109-127
static char *StrUpr(char *s)
{
    // param char *s  (in $v0)
    {   // 0x0014F900-0x0014F950
        char *p;  // in $v1
    }
}

// 0x0014F950-0x0014F9A0 (80 bytes), lines 134-152
static char *StrLwr(char *s)
{
    // param char *s  (in $v0)
    {   // 0x0014F950-0x0014F9A0
        char *p;  // in $v1
    }
}

// 0x0014F9A0-0x0014F9D8 (56 bytes), lines 158-185
static char *StrChr(char *s, int c)
{
    // param char *s  (in $v0)
    // param int c  (in $v0)
    {   // 0x0014F9A0-0x0014F9D8
        char ch;  // in $v0
        char match;  // in $v1
    }
}

// 0x0014F9E0-0x0014FA20 (64 bytes), lines 191-218
static char *StrRChr(char *s, int c)
{
    // param char *s  (in $v0)
    // param int c  (in $v0)
    {   // 0x0014F9E0-0x0014FA20
        char ch;  // in $a1
        char match;  // in $v1
    }
}

// 0x0014FA20-0x0014FAF0 (208 bytes), lines 260-279
int _rwStringOpen()
{
    {   // 0x0014FA20-0x0014FAF0
    }
}

// 0x0014FAF0-0x0014FAF8 (8 bytes), lines 294-294
void _rwStringClose()
{
    {   // 0x0014FAF0-0x0014FAF8
    }
}

