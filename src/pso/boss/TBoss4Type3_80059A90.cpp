#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_grid_index__11TBoss4Type3FPv(void *arg0);

void calc_grid_index__11TBoss4Type3FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
    M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
}

}
