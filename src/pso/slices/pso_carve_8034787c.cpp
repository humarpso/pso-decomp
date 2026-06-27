#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80347858();

s32 fn_8034787C(s16 arg0) {
    if (arg0 == 0x2C8) {
        return 0;
    }
    return (u32) __cntlzw((u32) fn_80347858()) >> 5;
}

}
