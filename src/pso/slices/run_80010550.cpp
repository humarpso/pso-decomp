#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_velocity__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x308));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30C));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x310));
}

s16 clamp_field_32E__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32E);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x32E) = 0;
    } else {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x2BA);
        if (temp_r0 < temp_r4) {
            M2C_FIELD(arg0, s16 *, 0x32E) = temp_r0;
        }
    }
    return M2C_FIELD(arg0, s16 *, 0x32E);
}

s16 clamp_value__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x32C) = 0;
    } else {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x2B8);
        if (temp_r0 < temp_r4) {
            M2C_FIELD(arg0, s16 *, 0x32C) = temp_r0;
        }
    }
    return M2C_FIELD(arg0, s16 *, 0x32C);
}

}
