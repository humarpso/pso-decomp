#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802B7530();
M2C_UNK fn_802B865C(void *, s32);

void fn_802B3664(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    fn_802B7530();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 == 5) {
            fn_802B865C(arg0, 1);
            return;
        }
        fn_802B865C(arg0, temp_r4 - 1);
    }
}

}
