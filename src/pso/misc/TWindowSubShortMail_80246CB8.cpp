#include "types.h"
#include "pso/misc/TWindowSubShortMail.h"

extern "C" {

extern u16 lbl_805D63FC;

s32 is_trade_active(void) {
    return ((u16) lbl_805D63FC >> 3U) & 1;
}

extern u16 lbl_805D63FC;

s32 TWindowSubShortMail::is_active() {
    return lbl_805D63FC & 1;
}

extern u16 lbl_805D63FC;

s32 is_com_card_active(void) {
    return ((u16) lbl_805D63FC >> 2U) & 1;
}

extern u16 lbl_805D63FC;

s32 is_guild_card_receive_active(void) {
    return ((u16) lbl_805D63FC >> 1U) & 1;
}

}
