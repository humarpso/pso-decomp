#include "types.h"

extern "C" {

s32 create_menu__15TWindowMakeTeamFv(void);
void render__15TWindowMakeTeamFv(void);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 update_next_entry__17TWindowSubComCardFPviii(s32, s32, s32, s32);
s32 fn_80268738(s32, s32, s32);
s32 fn_80268BE4(s32);

s32 create_menu__15TWindowMakeTeamFv(void) {
    s32 temp_r31;

    temp_r31 = fn_80268BE4(5);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4D), 0, 0);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4E), 0, 1);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4F), 0, 2);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x50), 0, 3);
    fn_80268738(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x51), 4);
    return temp_r31;
}
void render__15TWindowMakeTeamFv(void) {  }

}
