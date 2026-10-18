// Every class, struct, union and enum in the debug information of B2ILINK.IRX
// Burnout 2 prototype, 29 July 2002
// Offsets are in /* */ before each member; sizes in bytes. Types appear once per distinct layout:
// a name with more than one layout is marked VARIANT (headers changed between files, or two
// different types share the name). Base classes are listed with their offsets.
// u_long128 is the EE's 128-bit integer. MW CodeWarrior did not record const, typedefs or
// member functions in the types; the functions of each class are listed from the code.

// declared in 1 file(s), e.g. gamesource\IOP\b2ilink\b2ilink\main.c
struct _moduleinfo {  // size 0x008
    /* 0x000 */ char *name;
    /* 0x004 */ unsigned short version;
};

// declared in 1 file(s), e.g. gamesource\IOP\b2ilink\b2ilink\main.c
struct _sif_client_data {  // size 0x028
    /* 0x000 */ _sif_rpc_data rpcd;
    /* 0x010 */ unsigned int command;
    /* 0x014 */ void *buff;
    /* 0x018 */ void *cbuff;
    /* 0x01C */ void (*func)(void *);
    /* 0x020 */ void *para;
    /* 0x024 */ _sif_serve_data *serve;
};

// declared in 1 file(s), e.g. gamesource\IOP\b2ilink\b2ilink\main.c
struct _sif_queue_data {  // size 0x018
    /* 0x000 */ int key;
    /* 0x004 */ int active;
    /* 0x008 */ _sif_serve_data *link;
    /* 0x00C */ _sif_serve_data *start;
    /* 0x010 */ _sif_serve_data *end;
    /* 0x014 */ _sif_queue_data *next;
};

// declared in 1 file(s), e.g. gamesource\IOP\b2ilink\b2ilink\main.c
struct _sif_rpc_data {  // size 0x010
    /* 0x000 */ void *paddr;
    /* 0x004 */ unsigned int pid;
    /* 0x008 */ int tid;
    /* 0x00C */ unsigned int mode;
};

// declared in 1 file(s), e.g. gamesource\IOP\b2ilink\b2ilink\main.c
struct _sif_serve_data {  // size 0x044
    /* 0x000 */ unsigned int command;
    /* 0x004 */ void *(*func)(unsigned int, void *, int);
    /* 0x008 */ void *buff;
    /* 0x00C */ int size;
    /* 0x010 */ void *(*cfunc)(unsigned int, void *, int);
    /* 0x014 */ void *cbuff;
    /* 0x018 */ int csize;
    /* 0x01C */ _sif_client_data *client;
    /* 0x020 */ void *paddr;
    /* 0x024 */ unsigned int fno;
    /* 0x028 */ void *receive;
    /* 0x02C */ int rsize;
    /* 0x030 */ int rmode;
    /* 0x034 */ unsigned int rid;
    /* 0x038 */ _sif_serve_data *link;
    /* 0x03C */ _sif_serve_data *next;
    /* 0x040 */ _sif_queue_data *base;
};

// declared in 1 file(s), e.g. gamesource\IOP\b2ilink\b2ilink\main.c
struct ThreadParam {  // size 0x014
    /* 0x000 */ unsigned int attr;
    /* 0x004 */ unsigned int option;
    /* 0x008 */ void *entry;
    /* 0x00C */ int stackSize;
    /* 0x010 */ int initPriority;
};

