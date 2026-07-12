#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0);
M2C_UNK TObjEneEpsilon__sub_800B96A4();
f64 TObjPlayer__sub_80019760(f32, f32, f32);

extern const f64 lbl_80479C88;

s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f3;

    TObjEneEpsilon__sub_800B96A4();
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x38);
    return (s32) (lbl_80479C88 * TObjPlayer__sub_80019760((f32) (temp_f3 - M2C_FIELD(arg0, f32 *, 0x394)), (f32) (M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x39C)), (f32) (temp_f3)));
}

}
