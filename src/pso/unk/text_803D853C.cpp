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
void TObjPlayer__sub_803D89E8(u32 arg0) {
    u32 var_r3;
    var_r3 = arg0;
    if (var_r3 == 0U) {
        var_r3 = (*(u32 *)&lbl_805D7774);
    }
    PSMTXInverse((int) (var_r3), (int) (var_r3));
}
#pragma pop

}
