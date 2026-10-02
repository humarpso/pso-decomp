#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjMapWarp__sub_80141CB0(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *, s32, s32, M2C_UNK *, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern const f32 lbl_805DE4F8;

void draw_line_strip__10TObjPlayerFPviif(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_UNK sp14[3];
    M2C_UNK sp8[3];
    f32 var_f31;
    s32 temp_r30;

    var_f31 = lbl_805DE4F8;
    do {
        clamp_value_to_max__10TObjPlayerFPviPvif(arg0, arg1, arg2, sp14, var_f31);
        var_f31 += farg0;
        temp_r30 = clamp_value_to_max__10TObjPlayerFPviPvif(arg0, arg1, arg2, sp8, var_f31);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjMapWarp__sub_80141CB0(sp14, sp8, 0xF0F0F0FF, 0xF0F0F0FF);
        pop_matrix();
    } while (temp_r30 != 0);
}

}
