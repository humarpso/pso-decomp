#include "types.h"

struct Matrix34 { f32 elements[3][4]; };
struct ReflectionPlane { f32 origin[3]; f32 normal[3]; };

extern "C" {
s32 matrix_apply_translation(int, f32, f32, f32);
extern u32 current_matrix;
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
s32 PSMTXCopy(int, int);
extern u32 current_matrix;
void copy_matrix__10TObjPlayerFUiUi(u32 arg0, u32 arg1);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void euler_zyx_to_quaternion(u8 *arg0, u8 *arg1);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void euler_yxz_to_quaternion(u8 *arg0, u8 *arg1);
void PSMTXRotRad(Matrix34*, char, f32);
f32 PSMTXConcat(int, int, int);
extern u32 current_matrix;
void rotate_matrix_y(Matrix34* matrix, s32 angle);

f64 acos(f32);
void scale_matrix(u32, f32, f32, f32);

void rotate_matrix_x(u32, s32);

}

extern "C" {

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline f32 sqrtf_803D8F74(f32 x) {
    if (x > (0.0f)) {
        f64 guess = __frsqrte((f64)x);
        guess = (0.5) * guess * ((3.0) - guess * guess * x);
        guess = (0.5) * guess * ((3.0) - guess * guess * x);
        guess = (0.5) * guess * ((3.0) - guess * guess * x);
        volatile f32 y = (f32)(x * guess);
        return y;
    }
    return x;
}

static inline f32 acosf_803D8F74(f32 v) {
    return (f32)acos(v);
}

void reflect_matrix_in_plane(u32 arg0, const ReflectionPlane *arg1)
{
    f32 xz = sqrtf_803D8F74(arg1->normal[0] * arg1->normal[0] + arg1->normal[2] * arg1->normal[2]);
    f32 len = sqrtf_803D8F74(arg1->normal[1] * arg1->normal[1] + xz * xz);
    s32 rx;
    s32 ry;
    if (arg1->normal[1] >= (0.0f)) {
        rx = -(s32)((10430.38043493439) * acosf_803D8F74(xz / len));
    }
    if (arg1->normal[1] < (0.0f)) {
        rx = (s32)((10430.38043493439) * acosf_803D8F74(xz / len));
    }
    if (arg1->normal[0] >= (0.0f)) {
        ry = (s32)((10430.38043493439) * acosf_803D8F74(arg1->normal[2] / xz));
    }
    if (arg1->normal[0] < (0.0f)) {
        ry = -(s32)((10430.38043493439) * acosf_803D8F74(arg1->normal[2] / xz));
    }
    translate_matrix(arg0, arg1->origin[0], arg1->origin[1], arg1->origin[2]);
    rotate_matrix_y((Matrix34*)arg0, ry);
    rotate_matrix_x(arg0, rx);
    scale_matrix(arg0, 1.0f, 1.0f, -1.0f);
    rotate_matrix_x(arg0, -rx);
    rotate_matrix_y((Matrix34*)arg0, -ry);
    translate_matrix(arg0, -arg1->origin[0], -arg1->origin[1], -arg1->origin[2]);
}
#pragma pop

void rotate_matrix_y(Matrix34* matrix, s32 angle) {
    Matrix34 rotation;
    Matrix34* selected;
    if (angle != 0) {
        if (matrix == NULL) selected = (Matrix34*)current_matrix;
        else selected = matrix;
        PSMTXRotRad(&rotation, 'y', (f32)((9.587378008291125e-05) * (f64)angle));
        PSMTXConcat((int)selected, (int)&rotation, (int)selected);
    }
}

}
