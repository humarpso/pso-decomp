#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80352D10(s32);
M2C_UNK fn_803DA798(s32);
extern s32 lbl_805D6EE0;
extern s32 lbl_805D6EE4;

void TEndingPic__vt2(s32 arg0) {
    if ((s32) lbl_805D6EE0 != 0) {
        fn_803DA798(lbl_805D6EE4);
        fn_80352D10(arg0);
    }
}

}
