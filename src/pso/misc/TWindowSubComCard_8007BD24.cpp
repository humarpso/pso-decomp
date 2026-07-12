#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_card__17TWindowSubComCardFv(void);
void remove_entry__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B010(M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8007BC04(M2C_UNK);
M2C_UNK remove_entry__17TWindowGetComCardFiii(s32, s32, M2C_UNK);

void init_card__17TWindowSubComCardFv(void) {
    TWindowSubComCard__sub_8007B010(TWindowSubComCard__sub_8007BC04((M2C_UNK)(0)), 0x1C);
}

void remove_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = TWindowSubComCard__sub_8007BC04((M2C_UNK)(0));
    remove_entry__17TWindowGetComCardFiii(arg0, tmp, 0x1C);
}

}
