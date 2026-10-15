#include "types.h"
#include "pso/misc/TOSwitchItem.h"

extern "C" {

s32 check_flag__10TObjPlayerFl(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
int test_item_flags__10TObjPlayerFUl(void* p, u32 m);
void clear_item_flags__10TObjPlayerFUl(void* p, u32 v);
void add_item_flags__10TObjPlayerFUl(void* p, u32 v);
int has_flag_128__10TObjPlayerFv(void* p);
u16 get_id__13TItemProArmorFv(void* p);
int get_flag_40__8TItemMagFv(void* p);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void set_facing__10TObjPlayerFs(void* p, s16 v);
s16 get_stat_bonus__10TObjPlayerFv(void* p);
s16 get_stat__10TObjPlayerFv(void* p);
int get_equip_field_d04__10TObjPlayerFv(void* p);
f32 get_mag_scale_f__10TObjPlayerFv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);

u8 TOSwitchItem::get_field_ec() { return *(u8*)((char*)this + 0xec); }

void read_be16_field2__10TObjPlayerFv(void* p);
void bswap_32__FPUl(u32* p);

}
