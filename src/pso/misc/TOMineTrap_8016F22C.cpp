#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOMineTrap__vt81(s32 arg0);
u32 TOMineTrapDisp__ct(u32, s32, u16, s32);
s32 TOMineTrap__sub_80171338(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 is_split_screen();

extern s32 lbl_805D53A0;

void TOMineTrap__vt81(s32 arg0) {
    u32 var_r31;
    u16 var_r30;

    if (is_split_screen() == 0) {
        var_r31 = __nw__7TObjectFUl(0xB0);
        if (var_r31 != 0U) {
            var_r31 = TOMineTrapDisp__ct(var_r31, arg0, (u16) lbl_805D53A0, TOMineTrap__sub_80171338(arg0));
        }
        if (var_r31 != 0U) {
            VecCopy__FP3VecPC3Vec(var_r31 + 0x50, arg0 + 0x50);
            VecCopy__FP3VecPC3Vec(var_r31 + 0x38, arg0 + 0x38);
        }
    } else {
        for (var_r30 = 0; var_r30 != 4; var_r30++) {
            var_r31 = __nw__7TObjectFUl(0xB0);
            if (var_r31 != 0U) {
                var_r31 = TOMineTrapDisp__ct(var_r31, arg0, var_r30, TOMineTrap__sub_80171338(arg0));
            }
            if (var_r31 != 0U) {
                VecCopy__FP3VecPC3Vec(var_r31 + 0x50, arg0 + 0x50);
                VecCopy__FP3VecPC3Vec(var_r31 + 0x38, arg0 + 0x38);
            }
        }
    }
}

}
