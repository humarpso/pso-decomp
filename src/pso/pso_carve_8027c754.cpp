#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80242EBC(M2C_UNK, M2C_UNK, s16);
s32 fn_80248940(s32);
s32 fn_80265BF8(s32);

void fn_8027C754(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = fn_80265BF8(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r3 = fn_80248940(M2C_FIELD(arg0, s32 *, 0x2C));
    if ((temp_r31 == 4) && ((s8) M2C_FIELD(arg0, u8 *, 0x1D) != temp_r3)) {
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r3;
        if ((s8) M2C_FIELD(arg0, u8 *, 0x1D) == 0) {
            fn_80242EBC(0xC0, 0xF, (s16) M2C_FIELD(arg0, s32 *, 0x20));
        }
    }
}

}
