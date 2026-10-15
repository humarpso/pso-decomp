#include "types.h"

extern "C" {

void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
int get_flag_40__8TItemMagFPv(void* p);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void bswap_32__FPUl(u32* p);
s32 check_flag__10TObjPlayerFPvi(s32, s32);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s16 get_stat__10TObjPlayerFPv(void* p);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
int has_flag_128__10TObjPlayerFPv(void* p);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
void read_be16_field2__10TObjPlayerFPv(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);

int get_flag_40__8TItemMagFPv(void* p) { return *(u32*)((char*)p + 0xdc) & 0x40; }

void TObjPlayer__sub_80102C58(void* p) { *(u32*)((char*)p + 0xdc) |= 0x40; }
void TObjPlayer__sub_80102C68(void* p) { *(u32*)((char*)p + 0xdc) &= 0xffffffbf; }

}
