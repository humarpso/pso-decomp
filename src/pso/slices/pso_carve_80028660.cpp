#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800B9958(void *, u16);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s16);

void fn_80028660(void *arg0, void *arg1) {
    fn_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x67C) = (s32) M2C_FIELD(arg1, s16 *, 6);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s16) M2C_FIELD(arg1, s16 *, 4)) {
        TObjEneDD__sub_800BBA18(arg0, (s16) M2C_FIELD(arg1, s16 *, 4));
    }
}

}
