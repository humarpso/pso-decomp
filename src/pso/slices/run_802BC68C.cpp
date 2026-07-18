#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_indices__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x518) = -1;
    M2C_FIELD(arg0, s32 *, 0x51C) = 0;
}

s32 get_hit_count__11TBoss6Type2FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F4);
}

}
