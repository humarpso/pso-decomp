#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80202BA0();
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);

void clear_state(void) {
    s32 temp_r3;

    temp_r3 = fn_80202BA0();
    if (temp_r3 != 0) {
        memset(temp_r3 + 0x1152C, 0, 0x10);
        memset(temp_r3 + 0x1153C, 0, 0x10);
        memset(temp_r3 + 0x1154C, 0, 0x10);
    }
}

}
