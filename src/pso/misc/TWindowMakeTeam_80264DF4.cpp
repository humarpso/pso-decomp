#include "types.h"

extern "C" {

s32 create_menu__15TWindowMakeTeamFv(void);
void render__15TWindowMakeTeamFv(void);
s32 TWindowSubStatusDisp__sub_80077760(s32);
s32 TWindowSubComCard__sub_802686D4(s32, s32, s32, s32);
s32 fn_80268738(s32, s32, s32);
s32 fn_80268BE4(s32);

s32 create_menu__15TWindowMakeTeamFv(void) {
    s32 temp_r31;

    temp_r31 = fn_80268BE4(5);
    TWindowSubComCard__sub_802686D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x4D), 0, 0);
    TWindowSubComCard__sub_802686D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x4E), 0, 1);
    TWindowSubComCard__sub_802686D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x4F), 0, 2);
    TWindowSubComCard__sub_802686D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x50), 0, 3);
    fn_80268738(temp_r31, TWindowSubStatusDisp__sub_80077760(0x51), 4);
    return temp_r31;
}
void render__15TWindowMakeTeamFv(void) {  }

}
