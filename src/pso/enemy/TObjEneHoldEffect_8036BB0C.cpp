#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_active_hold_bit__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_hit_target_active__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 fn_800FD7C0(void *);

s32 get_active_hold_bit__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 v;
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    v = M2C_FIELD(arg0, s16 *, 6);
    if (v < 0) {
        return 0;
    }
    return (u32) __cntlzw(fn_800FD7C0(arg0 + 8)) >> 5;
}

s32 is_hit_target_active__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 v;
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    v = M2C_FIELD(arg0, s16 *, 6);
    if (v < 0) {
        return 0;
    }
    return (u32) __cntlzw(fn_800FD7C0(arg0 + 8)) >> 5;
}

}
