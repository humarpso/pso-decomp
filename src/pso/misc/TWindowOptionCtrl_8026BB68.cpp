#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 get_localized_text_entry(s32, s32);
s32 align_menu_entry_positions(s32);
s32 update_layout_height__21TWindowSubComCardListFf(s32, f32);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 get_option_entry__17TWindowOptionCtrlFi(s32);

extern const f32 lbl_805DD268;

s32 TWindowOptionCtrl::create_menu() {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_option_entry__17TWindowOptionCtrlFi(0xCE);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl(temp_r3, 9);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 0), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 1), 6, 7);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 2), 6, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 3), 6, 9);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 4), 6, 0xB);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 5), 6, 0x10);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 6), 6, 0x19);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 7), 6, 0x1B);
    update_layout_height__21TWindowSubComCardListFf(temp_r31, lbl_805DD268);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

}
