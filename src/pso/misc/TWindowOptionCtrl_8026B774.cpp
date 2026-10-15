#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {
s32 get_localized_text_entry(int, int);
s32 align_menu_entry_positions(int);
s32 update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(void *, int);
s32 get_option_entry__17TWindowOptionCtrlFi(int);
extern const f32 lbl_805DD268;
}

extern "C" {

s32 TWindowOptionCtrl::create_sub_menu_window() {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl((void *)(get_option_entry__17TWindowOptionCtrlFi((int) (0xCF))), (int) (3));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (0x1A))), (int) (6), (int) (0x12));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (0x1B))), (int) (6), (int) (0x14));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (0x1C))), (int) (6), (int) (0x15));
    update_layout_height__17TWindowSubComCardFPvf((int) (temp_r31), (f32) (lbl_805DD268));
    align_menu_entry_positions((int) (temp_r31));
    return temp_r31;
}

}
