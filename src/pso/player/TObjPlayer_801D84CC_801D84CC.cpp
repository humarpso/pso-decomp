#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D84F0(void* p);
void assign_lobby_slot_if_flagged__10TObjPlayerFiPv(s32 arg0, void *arg1);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
void set_animation_from_data__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 advance_item_id_counter(u16);
M2C_UNK equip_saved_item_if_slot_empty__10TObjPlayerFPvPv(s32, void *);
s32 TObjPlayer__sub_801D84A8(void* p);
s32 TObjPlayer__sub_801D8664(s32, s16, s16);
void *get_anim_table_entry__10TObjPlayerFPvi();
int bswap_16__FPUs(void*);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);

int bswap_disp_config_field__10TObjPlayerFPv(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
s32 TObjPlayer__sub_801D84F0(void* p) { return *(s32*)((char*)p + 0x4); }
void set_animation_from_data__10TObjPlayerFii(s32 arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = get_anim_table_entry__10TObjPlayerFPvi();
    TObjPlayer__sub_801D8664(arg0, M2C_FIELD(temp_r3, s16 *, 0), M2C_FIELD(temp_r3, s16 *, 2));
    set_animation_default__10TObjPlayerFPv(arg0, arg1);
}

extern s32 lbl_805D53A0;

void assign_lobby_slot_if_flagged__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) & 8) {
        M2C_FIELD(arg1, s32 *, 0x14) = advance_item_id_counter((u16) lbl_805D53A0);
        equip_saved_item_if_slot_empty__10TObjPlayerFPvPv(arg0, arg1);
    }
}

}
