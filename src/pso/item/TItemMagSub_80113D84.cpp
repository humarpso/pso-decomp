#define TOBJECT_OUT_OF_LINE_HELPERS
#include "pso/item/TItemMagSub.h"

#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemMag.h"

extern "C" {

s16 TObjPlayer__sub_80113D90(void* p);
int get_mag_item_data(void* p);
int get_mag_level(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int get_mag_mind_level__9TItemDataFv(void*);
int get_stat_percent__9TItemDataFv(void*);
int get_level__9TItemDataFv(void*);
int get_percent__9TItemDataFv(void*);

}
int TItemMagSub::test_flags(u32 mask) { return flags & mask; }
extern "C" {
s16 TObjPlayer__sub_80113D90(void* p) { return *(s16*)((char*)p + 0x19a); }
s16 TObjPlayer::get_mag_data() { return *(s16*)((char*)this + 0x198); }
int get_mag_item_data(void* p) { return get_mag_mind_level__9TItemDataFv((char*)p + 0x198); }
int get_mag_level(void* p) { return get_level__9TItemDataFv((char*)p + 0x198); }
int get_mag_item_percent(void* p) { return get_percent__9TItemDataFv((char*)p + 0x198); }
int get_mag_item_stat_percent(void* p) { return get_stat_percent__9TItemDataFv((char*)p + 0x198); }

}
