#ifndef PSO_MISC_TWINDOWSUBCOMCARD_8007A810_H
#define PSO_MISC_TWINDOWSUBCOMCARD_8007A810_H

#include "types.h"

extern "C" {
void TWindowSubComCard__sub_8007AF10(s32 arg0);
u32 TWindowSubComCard__sub_8007B070(u8 *arg0);
void TWindowSubComCard__sub_8007B1AC(void *arg0, u8 *arg1, s32 arg2);
int clear(void *p);
s32 copy_card__17TWindowSubComCardFiPv(s32 arg0, u8 *arg1);
s32 fn_8007B2E0(u8 *arg0, s32 id);
void forward_to_matching_card__17TWindowSubComCardFPvPvi(void *arg0, u8 *arg1, s32 arg2);
s32 get_card_entry__17TWindowSubComCardFi(s32 arg0);
void handle_6x06_send_guild_card(s32 arg0);
s32 init__17TWindowSubComCardFi(s32 arg0);
s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0);
s32 reinit__17TWindowSubComCardFi(s32 arg0);
}

#endif
