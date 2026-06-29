#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8008CB54(s32);
M2C_UNK fn_8008CC5C();
M2C_UNK TEndingAB__sub_8008CCC0(s32);
extern s32 lbl_805D4F10;

void TEndingAB__vt2(s32 arg0) {
    if ((s32) lbl_805D4F10 != 0) {
        fn_8008CC5C();
        fn_8008CB54(arg0);
        TEndingAB__sub_8008CCC0(arg0);
    }
}

}
