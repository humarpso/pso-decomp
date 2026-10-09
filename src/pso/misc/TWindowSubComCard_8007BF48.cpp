#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_card_entry__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B1AC(s32, s32, M2C_UNK);
s32 get_card_slot__17TWindowSubComCardFi(M2C_UNK);

void select_card_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi(0);
    TWindowSubComCard__sub_8007B1AC(arg0, tmp, 0x1C);
}

}
