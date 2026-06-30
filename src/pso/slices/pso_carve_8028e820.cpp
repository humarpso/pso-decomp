#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(s32);
M2C_UNK fn_8028D8F4();
s32 TObjCMMainMenu__sub_8028EBF0(s32);
s32 TObjCMMainMenu__sub_8028EC04(s32);
M2C_UNK fn_80291268();
M2C_UNK fn_80293D10(s32);
M2C_UNK fn_8033A3D0(M2C_UNK);
extern s32 tl_03;
extern s32 lbl_805D6524;
extern s32 lbl_805D652C;

s32 TCharaMaking__sub_8028E820(s32 arg0) {
    M2C_UNK var_r3;

    if (TObjCMMainMenu__sub_8028EC04(lbl_805D6524) != 0) {
        fn_8028D8F4();
        var_r3 = 0;
        if ((s32) lbl_805D652C == 1) {
            var_r3 = 1;
        }
        fn_8033A3D0(var_r3);
        fn_80291268();
        queue_destruction__7TObjectFv(arg0);
        return 1;
    }
    if (TObjCMMainMenu__sub_8028EBF0(lbl_805D6524) != 0) {
        queue_destruction__7TObjectFv(arg0);
        fn_80293D10(tl_03);
        return 1;
    }
    return 0;
}

}
