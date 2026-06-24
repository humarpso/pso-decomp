#include "types.h"

extern "C" {

void fn_800FD5F4(void* p, s32 v);
s32 fn_800FD5FC(void* p);

void fn_800FD5F4(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 fn_800FD5FC(void* p) { return *(s32*)((char*)p + 0x4); }
int fn_800FD604(void) { return 0; }

}
