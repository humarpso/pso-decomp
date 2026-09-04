#include "types.h"

extern "C" {

void clear_flag_64__11TItemMagSubFPv(void* p);
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v);
int set_grow_flag__15TItemMagGrowEffFPv(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
int set_flags64__8TItemMagFPvUi(void*, int);

void clear_flag_64__11TItemMagSubFPv(void* p) { clear_flags64__11TItemMagSubFPvUi(p, 64); }
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) &= ~v; }

}
