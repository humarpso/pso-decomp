#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80076F48(s32, s32);
M2C_UNK fn_8036B1AC(s32);

void fn_8036B2A0(void *arg0, u16 arg1, s32 arg2) {
    u32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r6 != 0U) {
        fn_80076F48(arg2, temp_r6 + (arg1 * 0x3C));
        return;
    }
    fn_8036B1AC(arg2);
}

}
