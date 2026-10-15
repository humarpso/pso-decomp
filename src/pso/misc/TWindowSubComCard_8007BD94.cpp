#include "types.h"

extern "C" {

void scroll_list__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCard__sub_8007B0D0(s32, s32, s32);
s32 get_card_slot__17TWindowSubComCardFi(s32);

void scroll_list__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi(0);
    TWindowSubComCard__sub_8007B0D0(arg0, tmp, 0x1C);
}

}
