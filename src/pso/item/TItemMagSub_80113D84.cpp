#include "types.h"

extern "C" {

int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int fn_80113DA0(void* p);
int fn_80113DC4(void* p);
int fn_80113DE8(void* p);
int fn_80113E0C(void* p);
void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int is_feed_empty__8TItemMagFPv(void* p);
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

int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0x64) & m; }
s16 TObjPlayer__sub_80113D90(void* p) { return *(s16*)((char*)p + 0x19a); }
s16 get_mag_data__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x198); }
int fn_80113DA0(void* p) { return TItemData__sub_8010EE40((char*)p + 0x198); }
int fn_80113DC4(void* p) { return get_level__9TItemDataFPv((char*)p + 0x198); }
int fn_80113DE8(void* p) { return get_percent__9TItemDataFPv((char*)p + 0x198); }
int fn_80113E0C(void* p) { return get_stat_percent__9TItemDataFPv((char*)p + 0x198); }

}
