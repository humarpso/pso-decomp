#include "types.h"

extern "C" {

void set_flags64__8TItemMagFPvUi(void* p, u32 v);

void set_flags64__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) |= v; }

}
