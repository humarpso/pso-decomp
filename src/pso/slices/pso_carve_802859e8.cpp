#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80284C04();

void fn_802859E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x78) = arg1;
    M2C_FIELD(arg0, s16 *, 0x76) = 0xC0;
    fn_80284C04();
    M2C_FIELD(arg0, s8 *, 0x71) = 1;
}

}
