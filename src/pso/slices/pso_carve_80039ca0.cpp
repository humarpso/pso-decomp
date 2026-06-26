#include "types.h"

extern "C" {

void fn_80039CB4(void* p);

int fn_80039CA0(void) { return 0; }
void fn_80039CB4(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

}
