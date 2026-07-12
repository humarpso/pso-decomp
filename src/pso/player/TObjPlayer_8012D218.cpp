#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_shield__10TObjPlayerFPv(void *arg0);
void trigger_megid_special__10TObjPlayerFPv(void *arg0);
s32 TItemProArmor__sub_80102C3C(void *);
u8 TItemProShield__sub_8010B734();
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(s32, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E2FC(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK create_ex__9TTecMegidFiiii(void *, M2C_UNK *, s32, M2C_UNK);
M2C_UNK ct__13TItemProArmorFPv(s32, u32, s32, M2C_UNK);

void create_shield__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        if (TItemProShield__sub_8010B734() == 0) {
            temp_r3 = alloc__13TItemProArmorFi(0x2C);
            if (temp_r3 != 0) {
                ct__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x96);
            }
        } else {
            temp_r3_2 = alloc__13TItemProArmorFi(0x2C);
            if (temp_r3_2 != 0) {
                ct__13TItemProArmorFPv(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
            }
        }
    }
}

extern s32 tl_05;
extern f32 lbl_805DAF18;

void trigger_megid_special__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    if (TItemProShield__sub_8010B734() == 1) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, 2, 0x101);
        if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
            if (draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8) != 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
                create_ex__9TTecMegidFiiii(temp_r3, &sp8, M2C_FIELD(temp_r3, s32 *, 0x60), 0);
                TObjPlayer__sub_8011E2FC(arg0, lbl_805DAF18);
            }
        } else {
            update_active_game_effect__10TObjPlayerFPv(arg0);
        }
    }
}

}
