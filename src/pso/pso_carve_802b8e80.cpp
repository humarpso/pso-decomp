#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802B8EE0(void *, M2C_UNK *);
M2C_UNK fn_802B909C(void *, M2C_UNK *);
M2C_UNK fn_802B9178(void *, M2C_UNK, M2C_UNK *);

void fn_802B8E80(void *arg0) {
    M2C_UNK sp8;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        fn_802B909C(arg0, &sp8);
    } else {
        fn_802B8EE0(arg0, &sp8);
    }
    M2C_FIELD(arg0, s32 *, 0x438) = 1;
    fn_802B9178(arg0, 2, &sp8);
}

}
