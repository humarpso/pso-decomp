#include "types.h"

extern "C" {

void init_and_press_b__17TWindowSubComCardFi(s32 arg0);
s32 handle_press_b__17TWindowSubComCardFii(s32 *, s32);
s32 init_guild_card_tag__17TWindowSubComCardFi(s32 *);

void init_and_press_b__17TWindowSubComCardFi(s32 arg0) {
    u8 sp8[0x84];

    init_guild_card_tag__17TWindowSubComCardFi((s32 *) sp8);
    handle_press_b__17TWindowSubComCardFii((s32 *) sp8, arg0);
}

}
