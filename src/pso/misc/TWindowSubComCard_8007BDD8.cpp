#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 clear();
s32 fn_8007B2E0(s32, s32);
s32 scroll_list__17TWindowSubComCardFl(s32);

void TWindowSubComCard::handle_press_a(s32 arg0, s32 arg1) {
    clear();
    if ((fn_8007B2E0(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFl(arg0) == 0)) {
        TWindowSubComCard::select_card_entry(arg0);
    }
}

}
