#include "types.h"

extern "C" {

void fn_80039D50(void* p);

void fn_80039D50(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

}
