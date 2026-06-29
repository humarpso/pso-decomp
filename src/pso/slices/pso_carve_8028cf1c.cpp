#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D6510;

s32 fn_8028CF1C(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x8C) != 0) || ((s32) lbl_805D6510 < 0) || ((s32) lbl_805D6510 > 1)) {
        return 0;
    }
    if ((s32) lbl_805D6510 >= 1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 1;
    lbl_805D6510 += 1;
    return 1;
}

}
