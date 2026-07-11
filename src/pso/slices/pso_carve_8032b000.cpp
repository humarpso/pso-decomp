#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TAdSinglePlyChrSelectGC__sub_80202BA0();
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);

void fn_8032B000(void) {
    u32 temp_r3;

    temp_r3 = TAdSinglePlyChrSelectGC__sub_80202BA0();
    if (temp_r3 != 0U) {
        memset(temp_r3 + 0x1154C, 0, 0x10);
    }
}

}
