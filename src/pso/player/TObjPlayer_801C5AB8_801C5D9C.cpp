#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_pos_delta__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);

void calc_pos_delta__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, s16 *, 0) = (s16) (M2C_FIELD(arg1, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0));
    M2C_FIELD(arg2, s16 *, 2) = (s16) (M2C_FIELD(arg1, s16 *, 2) - M2C_FIELD(arg0, s16 *, 2));
    M2C_FIELD(arg2, s16 *, 4) = (s16) (M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg0, s16 *, 4));
    M2C_FIELD(arg2, s16 *, 6) = (s16) (M2C_FIELD(arg1, s16 *, 6) - M2C_FIELD(arg0, s16 *, 6));
    M2C_FIELD(arg2, s16 *, 8) = (s16) (M2C_FIELD(arg1, s16 *, 8) - M2C_FIELD(arg0, s16 *, 8));
    M2C_FIELD(arg2, s16 *, 0xA) = (s16) (M2C_FIELD(arg1, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0xA));
    M2C_FIELD(arg2, s16 *, 0x16) = (s16) (M2C_FIELD(arg1, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x16));
    M2C_FIELD(arg2, s16 *, 0x18) = (s16) (M2C_FIELD(arg1, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x18));
}

}
