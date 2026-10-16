#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 clear();
s32 fill_guild_card_from_player(s32, s32);
s32 scroll_list__17TWindowSubComCardFl(s32);

void TWindowSubComCard::handle_press_b(s32 arg0, s32 arg1) {
    clear();
    if ((fill_guild_card_from_player(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFl(arg0) == 0)) {
        TWindowSubComCard::select_card_entry(arg0);
    }
}

}
