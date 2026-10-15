#include "types.h"

extern "C" {

s32 check_all_players_active__13TObjTombstoneFv(void);
s32 check_height_ready__13TObjTombstoneFPv(void *arg0);
u32 get_player_by_client_id(s32);
s32 TWindowCtrlMain__sub_8024CE58();

s32 obj_testFlags30(u32, s32);

s32 check_all_players_active__13TObjTombstoneFv(void) {
    s32 var_r31;
    u32 temp_r3;

    if (TWindowCtrlMain__sub_8024CE58() == 0) {
        return 0;
    }
    var_r31 = 0;
loop_3:
    temp_r3 = get_player_by_client_id(var_r31);
    if ((temp_r3 != 0U) && (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_3;
}

extern f32 lbl_805D91A4;

s32 check_height_ready__13TObjTombstoneFPv(void *arg0) {
    if (check_all_players_active__13TObjTombstoneFv() == 0) {
        return 0;
    }
    return (u32)__cntlzw(*(f32 *)((s8 *)arg0 + 0xB0) > lbl_805D91A4) >> 5;
}

}
