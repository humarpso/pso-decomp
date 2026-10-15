#include "types.h"

extern "C" {

void update_press__17TWindowSubComCardFv(void);
s32 get_card_entry__17TWindowSubComCardFi();
s32 scroll_list__17TWindowSubComCardFi();
s32 select_card_entry__17TWindowSubComCardFi(s32);

void update_press__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = get_card_entry__17TWindowSubComCardFi();
    if (scroll_list__17TWindowSubComCardFi() == 0) {
        select_card_entry__17TWindowSubComCardFi(temp_r31);
    }
}

}
