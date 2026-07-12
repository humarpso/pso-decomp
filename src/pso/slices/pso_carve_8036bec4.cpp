#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8036BF10(s32);
s32 TObjEneHoldEffect__sub_8036CDA8();

s32 fn_8036BEC4(s32 arg0) {
    if (TObjEneHoldEffect__sub_8036CDA8() == 0) {
        return 0;
    }
    return fn_8036BF10(arg0 + 4) != 0 ? 1 : 0;
}

}
