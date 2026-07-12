#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss3Volopt__sub_80040FCC(void *arg0);

s32 TBoss3Volopt__sub_80040FCC(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), u32 *, 0x18) >> 1U) & 1;
}

}
