#include "types.h"

extern "C" {

void fn_802F0918(void* p);

int fn_802F0904(void) { return 0; }
void fn_802F0918(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

}
