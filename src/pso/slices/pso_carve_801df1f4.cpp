#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap__16TPlyGuildCardTagFv(s32);
M2C_UNK bswap_32__FPUl(s32);

void bswap__21TPlyMeetUserExtensionFv(s32 arg0) {
    s32 var_r31;
    s32 var_r30;

    var_r30 = 0;
    var_r31 = 0;
    do {
        bswap__16TPlyGuildCardTagFv(arg0 + var_r31);
        var_r30 += 1;
        var_r31 += 8;
    } while (var_r30 < 8);
    bswap_32__FPUl(arg0 + 0x40);
}

}
