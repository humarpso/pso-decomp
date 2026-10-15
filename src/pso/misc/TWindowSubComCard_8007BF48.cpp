#include "types.h"

extern "C" {

void select_card_entry__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCard__sub_8007B1AC(s32, s32, s32);
s32 get_card_slot__17TWindowSubComCardFi(s32);

void select_card_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi(0);
    TWindowSubComCard__sub_8007B1AC(arg0, tmp, 0x1C);
}

}
