#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open__11TWindowCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TWindowCtrl__sub_8024A928(u32, s32, s32, s32, s32);
M2C_UNK TWindowFukidasi__sub_80251BA0(s32, s32, s32);
M2C_UNK fn_8026A93C();

extern s32 lbl_805D53A0;
extern u32 TWindowCtrl__data_805D63F8;

s32 open__11TWindowCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    if ((u32) TWindowCtrl__data_805D63F8 == 0U) {
        return 0;
    }
    if (arg2 & 0x40) {
        fn_8026A93C();
    }
    temp_r3 = TWindowCtrl__sub_8024A928(TWindowCtrl__data_805D63F8, arg0, arg2, arg1, lbl_805D53A0);
    if (temp_r3 == 0) {
        return 0;
    }
    TWindowFukidasi__sub_80251BA0(temp_r3, arg1, arg2);
    return temp_r3;
}

}
