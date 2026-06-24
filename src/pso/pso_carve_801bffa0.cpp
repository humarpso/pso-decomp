#include "types.h"

extern "C" {

s32 fn_801BFFA0(void* p);
s16 fn_801C0004(void* p);
int fn_801C000C(void);
int fn_801C0014(void);
int fn_801C001C(void);
int fn_801C0024(void* p);
int fn_801C0044(void* p);
int fn_802A7290(void*);
int fn_802A72D4(void*);

s32 fn_801BFFA0(void* p) { return *(s32*)((char*)p + 0x0); }
int fn_801BFFA8(void) { return 0; }
s16 fn_801C0004(void* p) { return *(s16*)((char*)p + 0xb8); }
int fn_801C000C(void) { return 0; }
int fn_801C0014(void) { return 0; }
int fn_801C001C(void) { return 0; }
int fn_801C0024(void* p) { return fn_802A7290(p); }
int fn_801C0044(void* p) { return fn_802A72D4(p); }

}
