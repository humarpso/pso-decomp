#include "types.h"

extern "C" {

void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int is_feed_empty__8TItemMagFPv(void* p);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int fn_80113DA0(void* p);
int get_mag_level(void* p);
int fn_80113DE8(void* p);
int fn_80113E0C(void* p);
int get_status_flag__8TItemMagFPv(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
s16 get_item_type__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int TItemData__sub_8010EE40(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);

int get_status_flag__8TItemMagFPv(void* p) { return *(u32*)((char*)p + 0x18c) & 0x10; }
void TItemMag__sub_80113E3C(void* p) { *(s8*)((char*)p + 0x0) = -32; }

}
