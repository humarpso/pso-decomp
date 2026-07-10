#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void swap_cards__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK TWindowSubComCard__sub_8007AAF4(M2C_UNK *);
M2C_UNK *fn_8007A8F8(s32);
M2C_UNK TWindowSubComCard__sub_8007A9C0(M2C_UNK *, M2C_UNK *);

void swap_cards__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[64];
    M2C_UNK *first_ptr;
    M2C_UNK *second_ptr;

    TWindowSubComCard__sub_8007AAF4(sp8);
    first_ptr = fn_8007A8F8(arg0);
    second_ptr = fn_8007A8F8(arg1);
    TWindowSubComCard__sub_8007A9C0(sp8, first_ptr);
    TWindowSubComCard__sub_8007A9C0(first_ptr, second_ptr);
    TWindowSubComCard__sub_8007A9C0(second_ptr, sp8);
}

}
