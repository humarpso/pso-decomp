#include "types.h"
#include "pso/misc/TLobby_80132ED0.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

int forward_trade_action_default__16TObjCityMainWarpFPviii(void *p, int a1, int a2, int a3);
s32 align_menu_entry_positions(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 get_option_entry__17TWindowOptionCtrlFi(s32);

extern const f32 lbl_805DD268;

s32 TWindowOptionCtrl::create_menu() {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_option_entry__17TWindowOptionCtrlFi(0xCE);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl(temp_r3, 9);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 0)), (int)(6), (int)(3));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 1)), (int)(6), (int)(7));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 2)), (int)(6), (int)(5));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 3)), (int)(6), (int)(9));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 4)), (int)(6), (int)(0xB));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 5)), (int)(6), (int)(0x10));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 6)), (int)(6), (int)(0x19));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_localized_text_entry(0xF, 7)), (int)(6), (int)(0x1B));
    ((TWindowSubComCardList *)temp_r31)->update_layout_height(lbl_805DD268);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

}
