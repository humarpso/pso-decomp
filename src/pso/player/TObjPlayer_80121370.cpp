#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_effect_icon__10TObjPlayerFi(s32 arg0);
void init_pro_armor__10TObjPlayerFPv(void *arg0);
s32 TItemProArmor__sub_80102C3C(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(s32, u32, s32, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK draw_icon__10TObjPlayerFPvii(s32, M2C_UNK, M2C_UNK *);
s32 alloc__13TItemProArmorFi(M2C_UNK);

void draw_effect_icon__10TObjPlayerFi(s32 arg0) {
    M2C_UNK sp8;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8);
        TObjEneDellBiter__sub_80087350(&sp8, 0x1BE);
    }
}

void init_pro_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
    }
}

}
