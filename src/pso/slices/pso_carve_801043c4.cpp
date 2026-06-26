#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8010E59C(u32, s32);

void fn_801043C4(s32 arg0, u32 arg1) {
    if (arg1 != 0U) {
        fn_8010E59C(arg1, arg0);
    }
}

}
