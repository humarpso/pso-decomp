#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_angle_to__10TObjPlayerFPvPv(void *arg0, void *arg1);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);

extern const f64 lbl_8043F2C0;

s32 calc_angle_to__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    f32 temp_f3;

    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    return (s32) (lbl_8043F2C0 * get_ad_end_text_start__10TObjPlayerFv(temp_f3 - M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8), temp_f3));
}

}
