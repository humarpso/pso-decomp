#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0);
M2C_UNK unpack_path_entry__11TBoss6Type2FPvPv(s32);

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0) {
    unpack_path_entry__11TBoss6Type2FPvPv(arg0 + 1);
}

}
