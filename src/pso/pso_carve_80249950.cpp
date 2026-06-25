#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802497A8(s32, s32);

void fn_80249950(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 << 8);
    if (temp != 0) {
        fn_802497A8(arg0 + 0x24, temp);
    }
}

}
