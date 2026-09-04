#include "types.h"

extern "C" {

int set_grow_flag__15TItemMagGrowEffFPv(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
void clear_flag_64__11TItemMagSubFPv(void* p);
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v);
int set_flags64__8TItemMagFPvUi(void*, int);

int set_grow_flag__15TItemMagGrowEffFPv(void* p) { return set_flags64__8TItemMagFPvUi(p, 64); }
int fn_80115948(void* p) { return (*(u8*)((char*)p + 0x0) >> 7) & 0x1; }
int fn_80115954(void* p) { return (*(u8*)((char*)p + 0x0) >> 6) & 0x1; }

}
