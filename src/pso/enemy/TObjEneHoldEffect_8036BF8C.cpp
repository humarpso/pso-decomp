#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneHoldEffect__sub_8036BF8C(void *arg0);
s32 is_valid_attack_index__17TObjEneHoldEffectFPv(void *arg0);
s32 is_valid_hold_index__17TObjEneHoldEffectFPv(void *arg0);
s32 can_impose_attack__17TObjEneHoldEffectFPv(void *arg0);
s32 get_move_bit__17TObjEneHoldEffectFi(s32 arg0);
s32 is_walk_target_active__17TObjEneHoldEffectFi(s32 arg0);
s32 can_set_position__17TObjEneHoldEffectFPv(u8 *arg0);
s32 can_hold__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(void *);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_camera_visible__17TObjEneHoldEffectFPv(s32);

s32 TObjEneHoldEffect__sub_8036BF8C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, s16 *, 2) >> 0x1FU) ^ 1;
}

s32 is_valid_attack_index__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return 1;
}

s32 is_valid_hold_index__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return 1;
}

s32 can_impose_attack__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return 1;
}

s32 get_move_bit__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32) __cntlzw(is_camera_visible__17TObjEneHoldEffectFPv(arg0 + 4)) >> 5;
}

s32 is_walk_target_active__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32)__cntlzw(is_camera_visible__17TObjEneHoldEffectFPv(arg0 + 4)) >> 5;
}

s32 can_set_position__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 4);
    if ((temp_r3 < 0) || (temp_r3 >= 2)) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 8) > 0x12) {
        return 0;
    }
    return (u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 0xC)) >> 5;
}

s32 can_hold__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 4);
    if ((temp_r3 < 0) || (temp_r3 >= 2)) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 8) > 0x12) {
        return 0;
    }
    return (u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 0xC)) >> 5;
}

}
