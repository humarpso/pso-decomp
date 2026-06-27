#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubStatusDisp__sub_80223B88(void *, s16);
M2C_UNK fn_80258F34(s32, s32, s32);

void fn_80267580(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
        if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
            fn_80258F34(TWindowSubStatusDisp__sub_80223B88(arg0, temp_r4), arg1, arg2);
            M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
        }
    }
}

}
