#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_802029E8(M2C_UNK);
M2C_UNK fn_8028DA0C(s32);

void fn_8028DA4C(void) {
    fn_8028DA0C(TAdSinglePlyChrSelectGC__sub_802029E8(0xFFFF) + 0x370);
}

}
