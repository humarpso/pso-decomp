#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Matrix34 { f32 elements[3][4]; };
struct ReflectionPlane { f32 origin[3]; f32 normal[3]; };

extern "C" {
M2C_UNK fn_803D9650(int, f32, f32, f32);
extern u32 lbl_805D7774;
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
M2C_UNK PSMTXCopy(int, int);
extern u32 lbl_805D7774;
void TObjPlayer__sub_803D9324(u32 arg0, u32 arg1);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void TBoss8Dragon__sub_803D9394(u8 *arg0, u8 *arg1);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void TBoss8Dragon__sub_803D94DC(u8 *arg0, u8 *arg1);
void PSMTXRotRad(Matrix34*, char, f32);
f32 PSMTXConcat(int, int, int);
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

void reflect_matrix_in_plane(u32 arg0, const ReflectionPlane *arg1)
{
  volatile f32 spC;
  volatile f32 sp8;
  f32 temp_f0;
  f32 temp_f0_2;
  f32 var_f31;
  f32 var_f30;
  f32 temp_f0_6;
  f64 temp_f0_3;
  f64 temp_f0_4;
  f64 temp_f0_5;
  const ReflectionPlane *new_var;
  s32 var_r31;
  f64 temp_f0_7;
  f64 temp_f0_8;
  f64 temp_f0_9;
  s32 var_r30;
  temp_f0 = arg1->normal[0];
  temp_f0_2 = arg1->normal[2];
  var_f31 = (temp_f0 * temp_f0) + (temp_f0_2 * temp_f0_2);
  if (var_f31 > lbl_805E0F00)
  {
    temp_f0_3 = __frsqrte(var_f31);
    temp_f0_4 = (lbl_805E0F08 * temp_f0_3) * (lbl_805E0F10 - (((f64) var_f31) * (temp_f0_3 * temp_f0_3)));
    temp_f0_5 = (lbl_805E0F08 * temp_f0_4) * (lbl_805E0F10 - (((f64) var_f31) * (temp_f0_4 * temp_f0_4)));
    spC = (f32) (((f64) var_f31) * ((lbl_805E0F08 * temp_f0_5) * (lbl_805E0F10 - (((f64) var_f31) * (temp_f0_5 * temp_f0_5)))));
    var_f31 = spC;
  }
  temp_f0_6 = arg1->normal[1];
  var_f30 = (temp_f0_6 * temp_f0_6) + (var_f31 * var_f31);
  if (var_f30 > lbl_805E0F00)
  {
    temp_f0_7 = __frsqrte(var_f30);
    temp_f0_8 = (lbl_805E0F08 * temp_f0_7) * (lbl_805E0F10 - (((f64) var_f30) * (temp_f0_7 * temp_f0_7)));
    temp_f0_9 = (lbl_805E0F08 * temp_f0_8) * (lbl_805E0F10 - (((f64) var_f30) * (temp_f0_8 * temp_f0_8)));
    sp8 = (f32) (((f64) var_f30) * ((lbl_805E0F08 * temp_f0_9) * (lbl_805E0F10 - (((f64) var_f30) * (temp_f0_9 * temp_f0_9)))));
    var_f30 = sp8;
  }
  if (arg1->normal[1] >= lbl_805E0F00)
  {
    var_r31 = -((s32) (lbl_805E0F18 * ((f64) ((f32) acos(var_f31 / var_f30)))));
  }
  if (arg1->normal[1] < lbl_805E0F00)
  {
    temp_f0_3 = var_f31 / var_f30;
    var_r31 = (s32) (lbl_805E0F18 * ((f64) ((f32) acos(temp_f0_3))));
  }
  new_var = arg1;
  if (arg1->normal[0] >= lbl_805E0F00)
  {
    var_r30 = (s32) (lbl_805E0F18 * ((f64) ((f32) acos(new_var->normal[2] / var_f31))));
  }
  if (arg1->normal[0] < lbl_805E0F00)
  {
    var_r30 = -((s32) (lbl_805E0F18 * ((f64) ((f32) acos(arg1->normal[2] / var_f31)))));
  }
  translate_matrix(arg0, arg1->origin[0], arg1->origin[1], arg1->origin[2]);
  rotate_matrix_y((Matrix34*)arg0, var_r30);
  rotate_matrix_x(arg0, var_r31);
  scale_matrix(arg0, lbl_805E0F20, lbl_805E0F20, lbl_805E0F24);
  rotate_matrix_x(arg0, -var_r31);
  rotate_matrix_y((Matrix34*)arg0, -var_r30);
  translate_matrix(arg0, -arg1->origin[0], -arg1->origin[1], -arg1->origin[2]);
}

__declspec(section ".sdata2") extern const f64 lbl_805E0F28;
void rotate_matrix_y(Matrix34* matrix, s32 angle) {
    Matrix34 rotation;
    Matrix34* selected;
    if (angle != 0) {
        if (matrix == NULL) selected = (Matrix34*)lbl_805D7774;
        else selected = matrix;
        PSMTXRotRad(&rotation, 'y', (f32)(lbl_805E0F28 * (f64)angle));
        PSMTXConcat((int)selected, (int)&rotation, (int)selected);
    }
}

__declspec(section ".sdata2") extern const f64 lbl_805E0F38;
void rotate_matrix_z(Matrix34* matrix, s32 angle) {
    Matrix34 rotation;
    Matrix34* selected;
    if (angle != 0) {
        if (matrix == NULL) selected = (Matrix34*)lbl_805D7774;
        else selected = matrix;
        PSMTXRotRad(&rotation, 'z', (f32)(lbl_805E0F38 * (f64)angle));
        PSMTXConcat((int)selected, (int)&rotation, (int)selected);
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
    PSMTXCopy((int) (var_r3), (int) (var_r0));
}
#pragma pop

void TBoss8Dragon__sub_803D9394(u8 *arg0, u8 *arg1) {
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

void TBoss8Dragon__sub_803D94DC(u8 *arg0, u8 *arg1) {
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
    fn_803D9650((int) (phi_r3), x, y, z);
}
#pragma pop

}
