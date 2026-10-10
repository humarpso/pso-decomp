#define TOBJECT_OUT_OF_LINE_HELPERS
#include "pso/item/TItemMagSub.h"

#include "types.h"

extern "C" {

int test_flags__11TItemMagSubFUl(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_level(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
void scale_owner_height__11TItemMagSubFf(void* p, f32 v);
int is_growth_inactive__11TItemMagSubFv(void* p);
int get_status_flag__8TItemMagFPv(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
s16 get_item_type__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int get_mag_mind_level__9TItemDataFPv(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);

}
int TItemMagSub::test_flags(u32 mask) { return flags & mask; }
extern "C" {
s16 TObjPlayer__sub_80113D90(void* p) { return *(s16*)((char*)p + 0x19a); }
s16 get_mag_data__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x198); }
int get_mag_item_data(void* p) { return get_mag_mind_level__9TItemDataFPv((char*)p + 0x198); }
int get_mag_level(void* p) { return get_level__9TItemDataFPv((char*)p + 0x198); }
int get_mag_item_percent(void* p) { return get_percent__9TItemDataFPv((char*)p + 0x198); }
int get_mag_item_stat_percent(void* p) { return get_stat_percent__9TItemDataFPv((char*)p + 0x198); }

}
