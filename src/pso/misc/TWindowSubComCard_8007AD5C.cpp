#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_8007AD5C(s32 arg0);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
s32 TWindowSubComCard__sub_8007AC7C(s32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007B070();

s32 TWindowSubComCard__sub_8007AD5C(s32 arg0) {
    s32 temp;
    if (TWindowSubComCard__sub_8007B070() != 0) {
        return 0;
    }
    temp = TWindowSubComCard__sub_8007A8F8(0);
    return TWindowSubComCard__sub_8007AC7C(arg0, temp, 0xD2);
}

}
