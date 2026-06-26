#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80292F5C();
s32 fn_80292F7C();

s32 fn_80299E44(void) {
    if ((fn_80292F7C() != 0) || (fn_80292F5C() <= 1)) {
        return 0;
    }
    return 1;
}

}
