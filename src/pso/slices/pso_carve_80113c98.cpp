#include "types.h"

extern "C" {

void TItemMag__sub_80113C98(void* p, u32 v);

void TItemMag__sub_80113C98(void* p, u32 v) { *(u32*)((char*)p + 0x64) |= v; }
int TItemMag__sub_80113CA8(void) { return 0; }
int TItemMag__sub_80113CB8(void) { return 0; }

}
