#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8006EF6C(M2C_UNK);

s32 fn_8013292C(s32 arg0) {
    if (arg0 & 0x20) {
        return fn_8006EF6C(3);
    }
    if (arg0 & 0x40) {
        return fn_8006EF6C(4);
    }
    if (arg0 & 0x80) {
        return fn_8006EF6C(5);
    }
    return 0;
}

}
