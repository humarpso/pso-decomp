#include "types.h"

extern "C" {

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1);
s32 clear();
s32 fill_guild_card_from_player(s32, s32);
s32 scroll_list__17TWindowSubComCardFi(s32);
s32 select_card_entry__17TWindowSubComCardFi(s32);

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fill_guild_card_from_player(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFi(arg0) == 0)) {
        select_card_entry__17TWindowSubComCardFi(arg0);
    }
}

}
