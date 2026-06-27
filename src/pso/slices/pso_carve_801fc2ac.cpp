#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8030A730();
s32 fn_8030A770();
s32 fn_8030A7B0();

s32 fn_801FC2AC(void) {
    if (fn_8030A7B0() == 0) {
        return 1;
    }
    if (fn_8030A770() != 0) {
        return 0;
    }
    return (u32) __cntlzw(fn_8030A730()) >> 5;
}

}
