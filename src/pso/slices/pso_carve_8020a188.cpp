#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007EBB4(s32);
s32 fn_8007EBFC(M2C_UNK);
u32 fn_802095EC(s32, s32);
u32 fn_8020967C(s32, s32);
u32 fn_80209C58(s32, s32);
M2C_UNK fn_80209D34(s32);
extern u32 lbl_805D60A8;
extern u32 lbl_805D60AC;
extern u32 lbl_805D60B0;
extern s32 lbl_805D60B4;
extern s32 lbl_805D60BC;
extern s32 lbl_805D60C0;
extern s32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void fn_8020A188(s32 arg0, s32 arg1) {
    u32 temp_r3;

    lbl_805D60A8 = fn_80209C58(arg1, arg0);
    lbl_805D60AC = fn_8020967C(arg1, arg0);
    temp_r3 = fn_802095EC(arg1, arg0);
    lbl_805D60B0 = temp_r3;
    if (((u32) lbl_805D60A8 != 0U) && ((u32) lbl_805D60AC != 0U) && (temp_r3 != 0U)) {
        lbl_805D60B4 = fn_8007EBFC(0x9000);
        lbl_805D60BC = fn_8007EBFC(0x1400);
        lbl_805D60C0 = 0;
        lbl_805D60C4 = fn_8007EBFC(0x1000);
        lbl_805D60C8 = 0;
        fn_80209D34(arg0);
        fn_8007EBB4(lbl_805D60C4);
        fn_8007EBB4(lbl_805D60BC);
        lbl_805D60BC = 0;
        fn_8007EBB4(lbl_805D60B4);
        lbl_805D60B4 = 0;
    }
}

}
