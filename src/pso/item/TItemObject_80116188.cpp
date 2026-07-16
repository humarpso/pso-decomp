#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TItemObject__vt7(u8 *arg0);

u8 *TItemObject__vt7(u8 *arg0) {
    u32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r4 != 0U) {
        return (unsigned char *) (temp_r4 + 0x38);
    }
    return arg0 + 0x38;
}

}
