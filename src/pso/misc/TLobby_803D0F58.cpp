#include "types.h"

extern "C" {

void TLobby__sub_803D0F58(void);
extern s32 (*lbl_805D7620)(s32, s32);

extern s32 lbl_805D7624;
extern s32 lbl_805D7628;

void TLobby__sub_803D0F58(void) {
    if (((s32 (*)(s32, s32)) lbl_805D7620) != NULL) {
        lbl_805D7620(lbl_805D7624, lbl_805D7628);
    }
}

}
