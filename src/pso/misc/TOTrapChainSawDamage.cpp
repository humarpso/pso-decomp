#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapChainSawDamage__vt22(void *arg0);

M2C_UNK TObjPlayer__sub_80154764(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK TOTrapChainSaw__sub_802C9600();

void TOTrapChainSawDamage__vt22(void *arg0) {
    TOTrapChainSaw__sub_802C9600();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        TObjPlayer__sub_80154764(arg0, 1, 0x100);
        return;
    }
    set_indexed_flags(arg0, 1, 0x100);
}

}
