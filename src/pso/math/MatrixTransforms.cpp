#include "types.h"
#include "dolphin/mtx.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Matrix34 { f32 elements[3][4]; };
struct ReflectionPlane { f32 origin[3]; f32 normal[3]; };

extern "C" {
M2C_UNK matrix_apply_translation(int, f32, f32, f32);
extern u32 lbl_805D7774;
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
extern u32 lbl_805D7774;
void TObjPlayer__sub_803D9324(u32 arg0, u32 arg1);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void euler_zyx_to_quaternion(u8 *arg0, u8 *arg1);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void euler_yxz_to_quaternion(u8 *arg0, u8 *arg1);
extern u32 lbl_805D7774;
void rotate_matrix_y(Matrix34* matrix, s32 angle);

f64 acos(f32);
void scale_matrix(u32, f32, f32, f32);

void rotate_matrix_x(u32, s32);
extern const f32 lbl_805E0F00;
__declspec(section ".sdata2") extern const f64 lbl_805E0F08;
__declspec(section ".sdata2") extern const f64 lbl_805E0F10;
__declspec(section ".sdata2") extern const f64 lbl_805E0F18;
extern const f32 lbl_805E0F20;
extern const f32 lbl_805E0F24;

}

extern "C" {

__declspec(section ".sdata2") extern const f64 lbl_805E0F38;
void rotate_matrix_z(Matrix34* matrix, s32 angle) {
    Matrix34 rotation;
    Matrix34* selected;
    if (angle != 0) {
        if (matrix == NULL) selected = (Matrix34*)lbl_805D7774;
        else selected = matrix;
        PSMTXRotRad(rotation.elements, 'z', (f32)(lbl_805E0F38 * (f64)angle));
        PSMTXConcat(selected->elements, rotation.elements, selected->elements);
    }
}

#pragma push
#pragma peephole off
void TObjPlayer__sub_803D9324(u32 arg0, u32 arg1) {
    u32 var_r0;
    u32 var_r3;
    if (arg0 == 0U) {
        var_r0 = lbl_805D7774;
    } else {
        var_r0 = arg0;
    }
    if (arg1 == 0U) {
        var_r3 = lbl_805D7774;
    } else {
        var_r3 = arg1;
    }
    PSMTXCopy((MtxP)var_r3, (MtxP)var_r0);
}
#pragma pop

void euler_zyx_to_quaternion(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    temp_f27 = sin_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f28 = cos_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f29 = sin_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f30 = cos_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f31 = sin_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    temp_f1 = cos_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f1 * (temp_f28 * temp_f30)) + (temp_f31 * (temp_f27 * temp_f29)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) ((temp_f31 * (-temp_f28 * temp_f29)) + (temp_f1 * (temp_f27 * temp_f30)));
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f27 * (temp_f30 * temp_f31)) + (temp_f28 * (temp_f29 * temp_f1)));
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) ((temp_f29 * (-temp_f1 * temp_f27)) + (temp_f30 * (temp_f31 * temp_f28)));
}

void euler_yxz_to_quaternion(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    temp_f27 = sin_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f28 = cos_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f29 = sin_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f30 = cos_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f31 = sin_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    temp_f1 = cos_table_lookup((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f1 * (temp_f28 * temp_f30)) + (temp_f31 * (temp_f27 * temp_f29)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) ((temp_f31 * (temp_f28 * temp_f29)) + (temp_f1 * (temp_f27 * temp_f30)));
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f27 * (-temp_f30 * temp_f31)) + (temp_f28 * (temp_f29 * temp_f1)));
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) ((temp_f29 * (-temp_f1 * temp_f27)) + (temp_f30 * (temp_f31 * temp_f28)));
}

#pragma push
#pragma scheduling off
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z) {
    u32 var_r3;
    u32 var_r3_2;
    u32 phi_r3;
    var_r3 = arg0;
    phi_r3 = var_r3;
    if (var_r3 == 0U) {
        var_r3_2 = lbl_805D7774;
        phi_r3 = var_r3_2;
    }
    matrix_apply_translation((int) (phi_r3), x, y, z);
}
#pragma pop

}
