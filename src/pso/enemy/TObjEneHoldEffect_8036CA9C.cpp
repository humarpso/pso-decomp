#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_index_in_range__17TObjEneHoldEffectFPv(void *arg0);
s32 is_position_visible__17TObjEneHoldEffectFPv(u8 *arg0);
s32 TObjEneHoldEffect__sub_8036CB60(void *arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(void *);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_matching_id__6TLobbyFiUs(void *, u16);

s32 is_index_in_range__17TObjEneHoldEffectFPv(void *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 > 0x12)) {
        return 0;
    }
    return 1;
}

s32 is_position_visible__17TObjEneHoldEffectFPv(u8 *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 > 0x12)) {
        return 0;
    }
    return ((u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 8))) >> 5;
}

s32 TObjEneHoldEffect__sub_8036CB60(void *arg0) {
    s32 temp_r0;

    if (is_matching_id__6TLobbyFiUs(arg0, M2C_FIELD(arg0, u16 *, 2)) != 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 > 0x12)) {
        return 0;
    }
    return 1;
}

}
