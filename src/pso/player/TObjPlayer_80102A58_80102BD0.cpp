#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
int TObjPlayer__sub_80102C30(void);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int has_flag_128__10TObjPlayerFPv(void* p);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void bswap_32__FPUl(u32* p);
s32 check_flag__10TObjPlayerFPvi(s32, s32);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s16 get_stat__10TObjPlayerFPv(void* p);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
void read_be16_field2__10TObjPlayerFPv(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);

int TObjPlayer__sub_80102BD0(void) { return 0; }
int TObjPlayer__sub_80102BD8(void) { return 0; }
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0xdc) & m; }
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xdc) &= ~v; }
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xdc) |= v; }
int has_flag_128__10TObjPlayerFPv(void* p) { return test_item_flags__10TObjPlayerFPvUi((void*)(p), (u32)(128)); }

int TObjPlayer__sub_80102C30(void) { return 0; }

}
