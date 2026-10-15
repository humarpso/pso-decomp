#include "types.h"

extern "C" {

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1);
s32 clear();
s32 fn_8007B2E0(s32, s32);
s32 scroll_list__17TWindowSubComCardFl(s32);
s32 select_card_entry__17TWindowSubComCardFl(s32);

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fn_8007B2E0(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFl(arg0) == 0)) {
        select_card_entry__17TWindowSubComCardFl(arg0);
    }
}

}
