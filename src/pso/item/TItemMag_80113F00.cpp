#include "types.h"

extern "C" {

f32 get_stat_f32__8TItemMagFPv(void* p);
s32 get_mag_id__8TItemMagFPv(void* p);
int check_state_flag_1__8TItemMagFPv(void* p);
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v);
void set_flags__8TItemMagFPvUi(void* p, u32 v);
int test_flags__8TItemMagFPvUi(void* p, u32 m);
int TObjPlayer__sub_8001BEF8(void*, int);

s32 get_mag_id__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x0); }
f32 get_stat_f32__8TItemMagFPv(void* p) { return *(f32*)((char*)p + 0x8); }
int check_state_flag_1__8TItemMagFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x4, 1); }
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) &= ~v; }
void set_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) |= v; }
int test_flags__8TItemMagFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0x4) & m; }

}
