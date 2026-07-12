#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_target_out_of_view__17TObjEneHoldEffectFi(s32 arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(s32);
s32 is_target_valid__17TObjEneHoldEffectFPv();

s32 is_target_out_of_view__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (is_in_view__17TObjEneHoldEffectFPv(arg0 + 8) != 0) {
        return 0;
    }
    return (u32) __cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 0x14)) >> 5;
}

}
