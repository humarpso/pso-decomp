#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 PSMTXMultVecArray(s32, s32);
extern s32 lbl_805D7774;
void TObjPlayer__sub_803D8960(u32 arg0, s32 arg1);
s32 PSMTXInverse(int, int);
extern s32 lbl_805D7774;
void TObjPlayer__sub_803D89E8(u32 arg0);
M2C_UNK PSMTXMultVec(int);
extern s32 lbl_805D7774;
void TCameraCtrl__sub_803D8934(u32 arg0);
void rotate_matrix_z(void *, s32);
void rotate_matrix_x(void *, s32);
void rotate_matrix_y(void *, s32);
void TBoss7Tentacle__sub_803D8A6C(void *m, s32 x, s32 y, s32 z);
extern s32 lbl_805D7774;
void PSMTXCopy(void *src, void *dst);
void TObjPlayer__sub_803D898C(void *m);
void rotate_matrix_y(void *, s32);
void rotate_matrix_z(void *, s32);
void rotate_matrix_x(void *, s32);
void rotate_matrix_yxz(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 lbl_805D7774;
void PSMTXScale(f32 (*m)[4], f32 sx, f32 sy, f32 sz);
void PSMTXConcat(f32 (*a)[4], f32 (*b)[4], f32 (*ab)[4]);
void scale_matrix(f32 (*m)[4], f32 sx, f32 sy, f32 sz);
}

extern "C" {

#pragma push
#pragma scheduling off
void TCameraCtrl__sub_803D8934(u32 arg0) {
    u32 var_r3;
    u32 var_r3_2;
    u32 phi_r3;
    var_r3 = arg0;
    phi_r3 = var_r3;
    if (var_r3 == 0U) {
        var_r3_2 = (*(u32 *)&lbl_805D7774);
        phi_r3 = var_r3_2;
    }
    PSMTXMultVec((int) (phi_r3));
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D8960(u32 arg0, s32 arg1) {
    u32 var_r3;
    var_r3 = arg0;
    if (var_r3 == 0U) {
        var_r3 = (u32) lbl_805D7774;
    }
    PSMTXMultVecArray((s32) var_r3, arg1);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803D898C(void *m) {
    void *src = (*(void * *)&lbl_805D7774);
    if (m == 0) {
        m = src;
    }
    PSMTXCopy(src, m);
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D89E8(u32 arg0) {
    u32 var_r3;
    var_r3 = arg0;
    if (var_r3 == 0U) {
        var_r3 = (*(u32 *)&lbl_805D7774);
    }
    PSMTXInverse((int) (var_r3), (int) (var_r3));
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma optimize_for_size off
void TBoss7Tentacle__sub_803D8A6C(void *m, s32 x, s32 y, s32 z) {
    if (z != 0) {
        rotate_matrix_z(m, z);
    }
    if (y != 0) {
        rotate_matrix_y(m, y);
    }
    if (x != 0) {
        rotate_matrix_x(m, x);
    }
}
#pragma pop

void rotate_matrix_yxz(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 != 0) {
        rotate_matrix_y((void *)((void *) (arg0)), (s32)((void *) (arg2)));
    }
    if (arg1 != 0) {
        rotate_matrix_x((void *)((void *) (arg0)), (s32)((void *) (arg1)));
    }
    if (arg3 != 0) {
        rotate_matrix_z((void *)((void *) (arg0)), (s32)((void *) (arg3)));
    }
}
typedef f32 Mtx_803D8B5C[3][4];
void scale_matrix(f32 (*m)[4], f32 sx, f32 sy, f32 sz) {
    Mtx_803D8B5C tmp;
    f32 (*t)[4];
    if (m == NULL) t = (f32 (*)[4])lbl_805D7774;
    else t = m;
    PSMTXScale(tmp, sx, sy, sz);
    PSMTXConcat(t, tmp, t);
}

}
