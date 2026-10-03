#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void calc_spherical_camera_position(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void calc_spherical_camera_position(u8 *arg0) {
    f32 temp_f31;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((M2C_FIELD(arg0, f32 *, 0x6C) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x70))) + M2C_FIELD(arg0, f32 *, 0x4C));
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x6C) * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x70));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f31 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x74)));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (temp_f31 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x74)));
}
#pragma pop

}
