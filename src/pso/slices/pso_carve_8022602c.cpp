#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDD__sub_800B9B84();
M2C_UNK fn_80226258(s32, s32, M2C_UNK);
extern s32 lbl_805D370C;

void fn_8022602C(s32 arg0) {
    if (TObjEneDD__sub_800B9B84() != 0) {
        fn_80226258(lbl_805D370C, arg0, 0);
    }
}

}
