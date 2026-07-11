#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1);

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (s8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x414) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x41C) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
}

}
