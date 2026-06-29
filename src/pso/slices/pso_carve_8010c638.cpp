#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8010C638(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (arg1 >> 8U);
    M2C_FIELD(arg0, u8 *, 0xB) = arg1;
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (M2C_FIELD(arg0, u8 *, 0xA) | 0x80);
}

}
