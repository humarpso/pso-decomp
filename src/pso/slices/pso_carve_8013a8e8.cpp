#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_16__FPUs(s32);
M2C_UNK bswap_32__FPUl(s32);

void bswap__15disp_data_part2Fv(s32 arg0) {
    s32 off;
    s32 i;

    bswap_32__FPUl(arg0 + 0x18);
    bswap_32__FPUl(arg0 + 0x2C);
    bswap_32__FPUl(arg0 + 0x34);
    for (i = 0, off = 0; i < 8; i++, off += 2) {
        bswap_16__FPUs((s32)((char *)arg0 + off + 0x38));
    }
    bswap_32__FPUl(arg0 + 0x48);
    bswap_32__FPUl(arg0 + 0x4C);
}

}
