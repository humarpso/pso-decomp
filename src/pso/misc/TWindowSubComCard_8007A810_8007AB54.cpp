#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Card_8007AB84 { u8 data[0x100]; };

struct Card_8007AC10 { u8 body[0x94]; u8 used; u8 pad[0x100 - 0x95]; };

struct Box_8007AC10 { Card_8007AC10 cards[0xD2]; };

typedef s32 M2C_UNK;
struct Card_8007AC7C {
    u8 pad[0x100];
};

extern "C" {
s32 is_active__17TWindowSubComCardFPv(void *);
s32 has_inactive_card__17TWindowSubComCardFPvi(Card_8007AB84 *cards, s32 n);
s32 get_card_entry__17TWindowSubComCardFi(M2C_UNK);
void move_words__6TLobbyFPvPvi(u32 *dst, u32 *src, s32 n);
void TWindowSubComCard__sub_8007B26C(Card_8007AC10 *);
void remove_card_at__17TWindowSubComCardFi(s32 i);
s32 forward_return_arg__17TWindowSubComCardFi(void *, void *);
u32 get_card_id__17TWindowSubComCardFPv(void *);
s32 is_active__17TWindowSubComCardFPv(void *);
void forward_to_matching_card__17TWindowSubComCardFPvPvi(void *arg0, u8 *arg1, s32 arg2);
s32 forward_return_arg__17TWindowSubComCardFi(void *, void *);
u32 get_card_id__17TWindowSubComCardFPv(void *);
s32 is_active__17TWindowSubComCardFPv(void *);
s8 TWindowSubComCard__sub_8007B6EC(void *);
s32 TWindowSubComCard__sub_8007B6F4(void *);
s32 TWindowSubComCard__sub_8007AC7C(Card_8007AC7C *self, Card_8007AC7C *cards, M2C_UNK count);
}

extern "C" {

void init_com_card__17TWindowSubComCardFv(void);
s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0);
s32 send_guild_card__17TWindowSubComCardFi(s32 arg0);
s32 get_card_entry__17TWindowSubComCardFi(M2C_UNK);
s32 TWindowSubComCard__sub_8007B070();
int __ct__16TPlyGuildCardTagFv();

s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}

s32 has_inactive_card__17TWindowSubComCardFPvi(Card_8007AB84 *cards, s32 n) {
    s32 i;
    for (i = 0; i < n; i++, cards++) {
        if (is_active__17TWindowSubComCardFPv(cards) == 0) {
            return 1;
        }
    }
    return 0;
}

void init_com_card__17TWindowSubComCardFv(void) {
    has_inactive_card__17TWindowSubComCardFPvi((Card_8007AB84 *)(get_card_entry__17TWindowSubComCardFi((M2C_UNK)(0))), (s32)(0xD2));
}

void remove_card_at__17TWindowSubComCardFi(s32 i) {
    Box_8007AC10 *box = ((Box_8007AC10 *)get_card_entry__17TWindowSubComCardFi((M2C_UNK)(0)));
    if (i < 0xD1) {
        Card_8007AC10 *p = &box->cards[i];
        move_words__6TLobbyFPvPvi((u32 *)p, (u32 *)(p + 1), (0xD1 - i) * sizeof(Card_8007AC10) / 4);
    }
    TWindowSubComCard__sub_8007B26C(&box->cards[0xD1]);
    box->cards[0xD1].used = 0;
}

s32 TWindowSubComCard__sub_8007AC7C(Card_8007AC7C *self, Card_8007AC7C *cards, M2C_UNK count) {
    u32 id;
    s32 i;
    id = get_card_id__17TWindowSubComCardFPv(self);
    for (i = 0; i < count; i++, cards++) {
        if (is_active__17TWindowSubComCardFPv(cards) == 0) {
            return 0;
        }
        if (id == get_card_id__17TWindowSubComCardFPv(cards)) {
            if (TWindowSubComCard__sub_8007B6F4(self) != 0) {
                forward_return_arg__17TWindowSubComCardFi(cards, self);
            } else if (TWindowSubComCard__sub_8007B6F4(cards) == 0) {
                if (TWindowSubComCard__sub_8007B6EC(self) < 12) {
                    forward_return_arg__17TWindowSubComCardFi(cards, self);
                } else {
                    TWindowSubComCard__sub_8007B6EC(cards);
                }
            }
            return 1;
        }
    }
    return 0;
}

s32 send_guild_card__17TWindowSubComCardFi(s32 arg0) {
    s32 temp;
    if (TWindowSubComCard__sub_8007B070() != 0) {
        return 0;
    }
    temp = get_card_entry__17TWindowSubComCardFi((M2C_UNK)(0));
    return TWindowSubComCard__sub_8007AC7C((Card_8007AC7C *)(arg0), (Card_8007AC7C *)(temp), (M2C_UNK)(0xD2));
}
void forward_to_matching_card__17TWindowSubComCardFPvPvi(void *arg0, u8 *arg1, s32 arg2) {
    s32 i;
    u32 id = get_card_id__17TWindowSubComCardFPv(arg0);
    for (i = 0; i < arg2; i++, arg1 += 0x100) {
        if (is_active__17TWindowSubComCardFPv(arg1) == 0) {
            break;
        }
        if (id == get_card_id__17TWindowSubComCardFPv(arg1)) {
            break;
        }
    }
    if (i < arg2) {
        forward_return_arg__17TWindowSubComCardFi(arg1, arg0);
    }
}

}
