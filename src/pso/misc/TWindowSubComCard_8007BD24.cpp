#include "types.h"

extern "C" {

void init_card__17TWindowSubComCardFv(void);
void remove_entry__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCard__sub_8007B010(s32, s32);
s32 get_card_slot__17TWindowSubComCardFi(s32);
s32 remove_entry__17TWindowGetComCardFiii(s32, s32, s32);

void init_card__17TWindowSubComCardFv(void) {
    TWindowSubComCard__sub_8007B010(get_card_slot__17TWindowSubComCardFi((s32)(0)), 0x1C);
}

void remove_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi((s32)(0));
    remove_entry__17TWindowGetComCardFiii(arg0, tmp, 0x1C);
}

}
