#include "types.h"

extern "C" {

void fn_80113C98(void* p, u32 v);

void fn_80113C98(void* p, u32 v) { *(u32*)((char*)p + 0x64) |= v; }
int fn_80113CA8(void) { return 0; }
int fn_80113CB8(void) { return 0; }

}
