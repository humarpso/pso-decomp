#include "types.h"

extern "C" {

s32 fn_80110740(void* p);
s32 fn_80110748(void* p);
int fn_80110760(void* p);
void fn_801107B4(void);
int fn_801107B8(void* p);
s32 fn_801107DC(void* p);
s32 fn_801107E4(void* p);
void* fn_801107EC(void* p);
int fn_801107F4(void* p);
int fn_8001BEF8(void*, int);
int fn_803CC4C0(void*);

s32 fn_80110740(void* p) { return *(s32*)((char*)p + 0x3c); }
s32 fn_80110748(void* p) { return *(s32*)((char*)p + 0x28); }
int fn_80110750(void) { return 0; }
int fn_80110760(void* p) { return fn_8001BEF8((char*)p + 0x1c, 2); }
int fn_80110788(void) { return 0; }
void fn_801107B4(void) {  }
int fn_801107B8(void* p) { return fn_803CC4C0(*(void**)((char*)p + 0x4)); }
s32 fn_801107DC(void* p) { return *(s32*)((char*)p + 0xc); }
s32 fn_801107E4(void* p) { return *(s32*)((char*)p + 0x1c); }
void* fn_801107EC(void* p) { return (char*)p + 0x2c; }
int fn_801107F4(void* p) { return *(u32*)((char*)p + 0x20) == 0; }

}
