#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_801CE218(void *);
M2C_UNK update_by_state__10TObjPlayerFPv(void *);
M2C_UNK apply_movement_if_ready__10TObjPlayerFPv(void *);
M2C_UNK update_anim_action__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D2620(void *);
M2C_UNK TObjPlayer__sub_801D2630(void *);
M2C_UNK TObjPlayer__sub_801D2DA4(void *, s32);
s32 TObjPlayer__sub_801D2DAC(void *);
s32 TObjPlayer__sub_80142384(s32, s32);
s32 is_anim_finished__10TObjPlayerFPv(void *);

void update_action_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r31;

    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_80142384(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3F0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        TObjPlayer__sub_801CE218(arg0);
    case 1:
        if (is_anim_finished__10TObjPlayerFPv(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            TObjPlayer__sub_801D2620(arg0);
        }
    case 4:
        return;
    case 2:
        temp_r31 = TObjPlayer__sub_801D2DAC(arg0 + 0x7CC) - 1;
        if (temp_r31 < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            TObjPlayer__sub_801D2630(arg0);
        }
        TObjPlayer__sub_801D2DA4(arg0 + 0x7CC, temp_r31);
        return;
    case 3:
        update_anim_action__10TObjPlayerFPv(arg0);
        apply_movement_if_ready__10TObjPlayerFPv(arg0);
        update_by_state__10TObjPlayerFPv(arg0);
        break;
    }
}

}
