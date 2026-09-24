#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Card_8007AB84 { u8 data[0x100]; };

struct Card_8007AC10 { u8 body[0x94]; u8 used; u8 pad[0x100 - 0x95]; };

struct Box_8007AC10 { Card_8007AC10 cards[0xD2]; };

extern "C" {
s32 is_active__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_8007AB84(Card_8007AB84 *cards, s32 n);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
void TLobby__sub_803DE7BC(u32 *dst, u32 *src, s32 n);
void TWindowSubComCard__sub_8007B26C(Card_8007AC10 *);
void TWindowSubComCard__sub_8007AC10(s32 i);
}

extern "C" {

void init_com_card__17TWindowSubComCardFv(void);
s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0);
s32 send_guild_card__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
s32 TWindowSubComCard__sub_8007AC7C(s32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007B070();
int __ct__16TPlyGuildCardTagFv();

s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}

s32 TWindowSubComCard__sub_8007AB84(Card_8007AB84 *cards, s32 n) {
    s32 i;
    for (i = 0; i < n; i++, cards++) {
        if (is_active__17TWindowSubComCardFPv(cards) == 0) {
            return 1;
        }
    }
    return 0;
}

void init_com_card__17TWindowSubComCardFv(void) {
    TWindowSubComCard__sub_8007AB84((Card_8007AB84 *)(TWindowSubComCard__sub_8007A8F8((M2C_UNK)(0))), (s32)(0xD2));
}

void TWindowSubComCard__sub_8007AC10(s32 i) {
    Box_8007AC10 *box = ((Box_8007AC10 *)TWindowSubComCard__sub_8007A8F8((M2C_UNK)(0)));
    if (i < 0xD1) {
        Card_8007AC10 *p = &box->cards[i];
        TLobby__sub_803DE7BC((u32 *)p, (u32 *)(p + 1), (0xD1 - i) * sizeof(Card_8007AC10) / 4);
    }
    TWindowSubComCard__sub_8007B26C(&box->cards[0xD1]);
    box->cards[0xD1].used = 0;
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
