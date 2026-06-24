#include "types.h"

extern "C" {

void fn_802F09B4(void* p);

void fn_802F09B4(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

}
