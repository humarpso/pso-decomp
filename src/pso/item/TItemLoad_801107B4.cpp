#include "types.h"

extern "C" {

s32 TItemLoad__sub_80110740(void* p);
s32 TItemLoad__sub_80110748(void* p);
int TItemLoad__sub_80110760(void* p);
void TItemLoad__sub_801107B4(void);
int TItemLoad__sub_801107B8(void* p);
s32 TItemLoad__sub_801107DC(void* p);
s32 TItemLoad__sub_801107E4(void* p);
void* TItemLoad__sub_801107EC(void* p);
int TItemLoad__sub_801107F4(void* p);
int fn_8001BEF8(void*, int);
int fn_803CC4C0(void*);

void TItemLoad__sub_801107B4(void) {  }
int TItemLoad__sub_801107B8(void* p) { return fn_803CC4C0(*(void**)((char*)p + 0x4)); }
s32 TItemLoad__sub_801107DC(void* p) { return *(s32*)((char*)p + 0xc); }
s32 TItemLoad__sub_801107E4(void* p) { return *(s32*)((char*)p + 0x1c); }
void* TItemLoad__sub_801107EC(void* p) { return (char*)p + 0x2c; }
int TItemLoad__sub_801107F4(void* p) { return *(u32*)((char*)p + 0x20) == 0; }

}
