#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_16__FPUs(s32);
M2C_UNK bswap_32__FPUl(s32);

void bswap__16TPlyGuildCardTagFv(s32 arg0) {
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 2);
}

}
