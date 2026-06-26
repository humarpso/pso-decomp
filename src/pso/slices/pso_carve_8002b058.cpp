#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8002B058(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0xB);
}

}
