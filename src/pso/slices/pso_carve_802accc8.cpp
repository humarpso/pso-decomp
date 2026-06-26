#include "types.h"

extern "C" {

int fn_801E4570(void*);
s32 fn_802ACCC8(void* p);
s32 fn_802ACCD0(void* p);
int fn_802ACD0C(void* p);
void fn_802ACD2C(void* p);
int fn_802ACD40(void* p);
void fn_802ACD94(void* p);
void fn_802ACDA8(void* p, s32 v);
int fn_8001960C(void*);

s32 fn_802ACCC8(void* p) { return *(s32*)((char*)p + 0x374); }
s32 fn_802ACCD0(void* p) { return *(s32*)((char*)p + 0x374); }
void fn_802ACCD8(void* p) { fn_802ACD0C(p); fn_801E4570(p); }
int fn_802ACD0C(void* p) { return fn_8001960C(p); }
void fn_802ACD2C(void* p) { *(u8*)((char*)p + 0x0) = 165; *(u8*)((char*)p + 0x1) = 5; }
int fn_802ACD40(void* p) { return fn_8001960C(p); }
void fn_802ACD60(void* p) { fn_802ACD40(p); fn_801E4570(p); }
void fn_802ACD94(void* p) { *(u8*)((char*)p + 0x0) = 163; *(u8*)((char*)p + 0x1) = 5; }
void fn_802ACDA8(void* p, s32 v) { *(s32*)((char*)p + 0x60) = v; }

}
