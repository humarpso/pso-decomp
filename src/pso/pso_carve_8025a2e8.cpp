#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80147A80(s32);
s32 fn_80147AA8(s32);
s32 fn_80228C30(u32);
M2C_UNK strncpy(s32, u32, s32);

void fn_8025A2E8(void *arg0, u32 arg1) {
    s32 temp_r3;

    fn_80147A80(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (arg1 != 0U) {
        temp_r3 = fn_80228C30(arg1);
        M2C_FIELD(arg0, s32 *, 0x18) = fn_80147AA8(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x18), arg1, temp_r3 + 1);
    }
}

}
