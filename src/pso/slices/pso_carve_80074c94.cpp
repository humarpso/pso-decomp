#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80074CF0(void *);
M2C_UNK TWindowCtrl__sub_8024A4B0(s32);
s32 TWindowCtrlMain__sub_8024CE58();
extern s32 lbl_805D4E40;

void TObjCHTimeWin__vt1(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        TWindowCtrl__sub_8024A4B0(lbl_805D4E40);
        return;
    }
    if (TWindowCtrlMain__sub_8024CE58() == 1) {
        fn_80074CF0(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
