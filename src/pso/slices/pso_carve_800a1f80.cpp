#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80040B68(void *, M2C_UNK);
M2C_UNK fn_800A0728();
s32 fn_800A3224();
u32 fn_800F6A44(u16);

void fn_800A1F80(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if ((temp_r0 == 2) && (fn_800A3224() != 0) && (fn_800F6A44(M2C_FIELD(arg0, u16 *, 0x428)) != 0U)) {
            fn_800A0728();
            return;
        }
        fn_80040B68(arg0, 4);
    }
}

}
