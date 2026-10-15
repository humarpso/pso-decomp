#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 TWindowSubComCard__sub_8007B010(s32, s32);
s32 get_card_slot__17TWindowSubComCardFl(s32);
s32 remove_entry__17TWindowGetComCardFlll(s32, s32, s32);

void TWindowSubComCard::init_card() {
    TWindowSubComCard__sub_8007B010(get_card_slot__17TWindowSubComCardFl((s32)(0)), 0x1C);
}

void TWindowSubComCard::remove_entry(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFl((s32)(0));
    remove_entry__17TWindowGetComCardFlll(arg0, tmp, 0x1C);
}

}
