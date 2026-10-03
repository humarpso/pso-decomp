#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_trap_counts(s8 *arg0) {
    s32 var_ctr;

    for (var_ctr = 4; var_ctr != 0; var_ctr -= 1) {
        *arg0 = 0;
        arg0 += 1;
    }
}

}
