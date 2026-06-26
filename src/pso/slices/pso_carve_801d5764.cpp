#include "types.h"

extern "C" {

void fn_801D57A8(void* p, s32 v);

int fn_801D5764(void) { return 0; }
void fn_801D57A8(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }

}
