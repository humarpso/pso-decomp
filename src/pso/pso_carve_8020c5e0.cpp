#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8020C5E0(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s16 *, 2) = (s16) (M2C_FIELD(temp_r4, s16 *, 2) | 8);
        return 1;
    }
    return 0;
}

}
