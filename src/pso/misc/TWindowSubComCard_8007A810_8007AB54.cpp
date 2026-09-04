#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_com_card__17TWindowSubComCardFv(void);
s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0);
s32 send_guild_card__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8007AB84(M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8007AC7C(s32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007B070();
int __ct__16TPlyGuildCardTagFv();

s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}

void init_com_card__17TWindowSubComCardFv(void) {
    TWindowSubComCard__sub_8007AB84(TWindowSubComCard__sub_8007A8F8((M2C_UNK)(0)), 0xD2);
}

s32 send_guild_card__17TWindowSubComCardFi(s32 arg0) {
    s32 temp;
    if (TWindowSubComCard__sub_8007B070() != 0) {
        return 0;
    }
    temp = TWindowSubComCard__sub_8007A8F8((M2C_UNK)(0));
    return TWindowSubComCard__sub_8007AC7C(arg0, temp, 0xD2);
}

}
