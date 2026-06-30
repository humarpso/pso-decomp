#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F8D08();
M2C_UNK fn_800F8DC8(s32 *, s32, s32);
M2C_UNK fn_800F9E18();
s32 fn_803CC4C0(s32);
M2C_UNK fn_803CCB5C();
extern s32 lbl_805D53D4;

void fn_800FDF7C(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = arg0;
    fn_803CCB5C();
    fn_800F8DC8(&sp8, arg1, arg2);
loop_1:
    if (fn_803CC4C0(sp8) != 3) {
        fn_800F9E18();
        goto loop_1;
    }
    fn_800F8D08();
    lbl_805D53D4 += arg1 << 0xB;
}

}
