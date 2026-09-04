#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_80355B48(void *arg0, s16 arg1);
void apply_mag_effect_if_active__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 TObjPlayer__sub_800196EC();
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK TObjPlayer__sub_8011EAB8(void *, s32, s32, f32);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_field_3e4__10TObjPlayerFPv(u32);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80355B48(void *arg0, s16 arg1);
s32 reset_key_machine_state__10TObjPlayerFv();

void apply_mag_effect_if_active__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
        temp_r31 = get_field_3e4__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0));
        {
        s32 t = TObjPlayer__sub_800196EC();
        if ((t == temp_r31) && (TObjPlayer__sub_80102C30(arg0) == 2)) {
            TObjPlayer__sub_8011EAB8(arg0, M2C_FIELD(arg0, u32 *, 0xF0) + 0x2FC, arg1, M2C_FIELD(arg0, f32 *, 0x1F8));
        }
        }
    }
}

extern M2C_UNK lbl_804F1320[];

void *item_equip_variant_deleting_dtor_80355B48(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1320;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
