#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s16 lbl_805D4EC8;
extern u8 lbl_805D4ECA;

s32 fn_80080750(void) {
    s16 v;
    if ((s8) lbl_805D4ECA != 0) {
        v = lbl_805D4EC8;
        if (v == 4) {
            goto ret0;
        }
        if (v != 2) {
            goto ret1;
        }
ret0:
        return 0;
ret1:
        return 1;
    }
    return 0;
}

}
