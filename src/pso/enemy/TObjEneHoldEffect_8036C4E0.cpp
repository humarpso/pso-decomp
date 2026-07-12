#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_valid_hold_params__17TObjEneHoldEffectFPv(void *arg0);
s32 TObjEneHoldEffect__sub_8036C5C8(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
u16 TObjRoomId__sub_801A1DB8(u16);
u32 TPhotonMylla__sub_80154CB4(u16);

s32 is_valid_hold_params__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 4) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 6) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 8) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0xA) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0xC) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0xE) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x10) < 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x12);
    if ((temp_r3 < 0) || (temp_r3 >= 2)) {
        return 0;
    }
    return 1;
}

s32 TObjEneHoldEffect__sub_8036C5C8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 >= 3)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 8) < 0) {
        return 0;
    }
    if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xA)) == 0U) {
        return 0;
    }
    return (u32) __cntlzw((u32) TObjRoomId__sub_801A1DB8(M2C_FIELD(arg0, u16 *, 0xA))) >> 5;
}

}
