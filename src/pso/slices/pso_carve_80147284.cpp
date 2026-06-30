#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80146294();
M2C_UNK fn_80147168();
M2C_UNK fn_803FAFDC();
M2C_UNK fn_803FB1A4(s16 *);
M2C_UNK fn_80423064(s16, M2C_UNK);
extern s32 lbl_805D2D00;
extern s32 lbl_805D56F8;

s32 fn_80147284(void) {
    s16 sp8;

    if ((s32) lbl_805D2D00 != -1) {
        fn_80423064((s16) lbl_805D2D00, 0);
        sp8 = 1;
        fn_803FB1A4(&sp8);
    }
    fn_80146294();
    if (lbl_805D56F8 & 4) {
        fn_803FAFDC();
        lbl_805D56F8 &= 0xFFFFFFFB;
    }
    fn_80147168();
    lbl_805D2D00 = -1;
    return 0;
}

}
