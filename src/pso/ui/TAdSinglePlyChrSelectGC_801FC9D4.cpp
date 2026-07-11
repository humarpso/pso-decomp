#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_801FC9D4(void *arg0, void *arg1);

s32 TAdSinglePlyChrSelectGC__sub_801FC9D4(void *arg0, void *arg1) {
    return (u32) __cntlzw((u32) (M2C_FIELD(arg1, s32 *, 0x118) - M2C_FIELD(arg0, s32 *, 0x118))) >> 5;
}

}
