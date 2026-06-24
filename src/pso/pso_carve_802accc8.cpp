#include "types.h"

extern "C" {

s32 fn_802ACCC8(void* p);
s32 fn_802ACCD0(void* p);
int fn_802ACD0C(void* p);
int fn_802ACD40(void* p);
void fn_802ACDA8(void* p, s32 v);
int fn_8001960C(void*);

s32 fn_802ACCC8(void* p) { return *(s32*)((char*)p + 0x374); }
s32 fn_802ACCD0(void* p) { return *(s32*)((char*)p + 0x374); }
int fn_802ACCD8(void) { return 0; }
int fn_802ACD0C(void* p) { return fn_8001960C(p); }
int fn_802ACD2C(void) { return 0; }
int fn_802ACD40(void* p) { return fn_8001960C(p); }
int fn_802ACD60(void) { return 0; }
int fn_802ACD94(void) { return 0; }
void fn_802ACDA8(void* p, s32 v) { *(s32*)((char*)p + 0x60) = v; }

}
