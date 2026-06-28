#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_8007BECC(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007BE70(M2C_UNK *, s32);
M2C_UNK fn_8007AB54(M2C_UNK *);

void TWindowSubComCard__sub_8007BECC(s32 arg0) {
    u8 sp8[0x84];

    fn_8007AB54((M2C_UNK *) sp8);
    TWindowSubComCard__sub_8007BE70((M2C_UNK *) sp8, arg0);
}

}
