#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 fn_8006A5DC();

s32 fn_80227BFC(void) {
    if ((fn_8006A5DC() == 5) || (fn_8006A5DC() == 9)) {
        return 1;
    }
    return 0;
}

}
