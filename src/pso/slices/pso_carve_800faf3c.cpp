#include "types.h"

extern "C" {

s32 fn_800FB12C(void* p);

int fn_800FAF3C(void) { return 0; }
int fn_800FAFE0(void) { return 0; }
int fn_800FB06C(void) { return 0; }
int fn_800FB0F8(void) { return 0; }
s32 fn_800FB12C(void* p) { return *(s32*)((char*)p + 0x1c0); }

}
