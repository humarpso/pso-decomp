#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);

extern const f64 TObjEneBm5GibonU__data_8043C0F8;

void calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = sin_table_lookup(arg1);
    temp_f1 = cos_table_lookup(arg1);
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A8)) - (temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A8)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    *arg3 = (s32) (TObjEneBm5GibonU__data_8043C0F8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
}

}
