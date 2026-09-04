#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80102CE0(void* p);
void TObjPlayer__sub_80102D14(void* p);
int TLobby__send_and_handle_60(void* a0 = 0);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int bswap_32__FPUl(void* a0 = 0);
s32 check_flag__10TObjPlayerFPvi(s32, s32);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s16 get_stat__10TObjPlayerFPv(void* p);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
int has_flag_128__10TObjPlayerFPv(void* p);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
void read_be16_field2__10TObjPlayerFPv(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
int swap_6x61_fields__10TObjPlayerFPv(void* a0 = 0);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);

void TObjPlayer__sub_80102CE0(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }
void TObjPlayer__sub_80102D14(void* p) { swap_6x61_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
