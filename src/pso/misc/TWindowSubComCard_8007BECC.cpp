#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 handle_press_b__17TWindowSubComCardFii(s32 *, s32);
s32 init_guild_card_tag__17TWindowSubComCardFi(s32 *);

void TWindowSubComCard::init_and_press_b(s32 arg0) {
    u8 sp8[0x84];

    init_guild_card_tag__17TWindowSubComCardFi((s32 *) sp8);
    handle_press_b__17TWindowSubComCardFii((s32 *) sp8, arg0);
}

}
