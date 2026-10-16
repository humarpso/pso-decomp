#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 TWindowSubComCard__sub_8007B1AC(s32, s32, s32);

void TWindowSubComCard::select_card_entry(s32 arg0) {
    s32 tmp = TWindowSubComCard::get_card_slot(0);
    TWindowSubComCard__sub_8007B1AC(arg0, tmp, 0x1C);
}

}
