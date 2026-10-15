#include "types.h"
#include "pso/item/TItemMag.h"

extern "C" {

void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
void add_item_flags__10TObjPlayerFUl(void* p, u32 v);
void bswap_32__FPUl(u32* p);
s32 check_flag__10TObjPlayerFl(s32, s32);
void clear_item_flags__10TObjPlayerFUl(void* p, u32 v);
int get_equip_field_d04__10TObjPlayerFv(void* p);
u8 get_field_ec__12TOSwitchItemFv(void* p);
u16 get_id__13TItemProArmorFv(void* p);
f32 get_mag_scale_f__10TObjPlayerFv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s16 get_stat__10TObjPlayerFv(void* p);
s16 get_stat_bonus__10TObjPlayerFv(void* p);
int has_flag_128__10TObjPlayerFv(void* p);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
void read_be16_field2__10TObjPlayerFv(void* p);
void set_facing__10TObjPlayerFs(void* p, s16 v);
int test_item_flags__10TObjPlayerFUl(void* p, u32 m);

int TItemMag::get_flag_40() { return *(u32*)((char*)this + 0xdc) & 0x40; }

void TObjPlayer__sub_80102C58(void* p) { *(u32*)((char*)p + 0xdc) |= 0x40; }
void TObjPlayer__sub_80102C68(void* p) { *(u32*)((char*)p + 0xdc) &= 0xffffffbf; }

}
