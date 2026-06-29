#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80215720(s32);
M2C_UNK fn_8021587C(s32);
M2C_UNK fn_8021599C(s32);
s32 fn_80215ABC();
extern u32 lbl_805D61C0;
extern s32 lbl_805D61C4;
extern s32 lbl_805D61C8;

void fn_80215AE4(s32 arg0) {
    if ((u32) lbl_805D61C0 != 0U) {
        lbl_805D61C8 = 0;
        lbl_805D61C4 = fn_80215ABC();
        fn_8021599C(arg0);
        fn_8021587C(arg0);
        fn_80215720(arg0);
    }
}

}
