#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__sub_8025A12C(u16 *arg0);
M2C_UNK TWindowHelpItem__sub_8025A2D4(u16 *, M2C_UNK);
M2C_UNK fn_8025A260(u16 *, M2C_UNK);

void TWindowHelpItem__sub_8025A12C(u16 *arg0) {
    s32 temp_r3;
    u16 temp_r0;

    temp_r0 = *arg0;
    temp_r3 = temp_r0 & 4;
    if ((temp_r3 != 0) || (temp_r0 & 8)) {
        if (temp_r3 == 0) {
            TWindowHelpItem__sub_8025A2D4(arg0, 0);
        }
        if (!(*arg0 & 8)) {
            fn_8025A260(arg0, 0);
        }
    }
}

}
