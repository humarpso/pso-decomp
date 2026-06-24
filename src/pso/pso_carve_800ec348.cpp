#include "types.h"

extern "C" {

s32 fn_800EC394(void* p);

int fn_800EC348(void) { return 0; }
s32 fn_800EC394(void* p) { return *(s32*)((char*)p + 0x3f4); }
int fn_800EC39C(void) { return 0; }

}
