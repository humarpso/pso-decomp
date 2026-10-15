#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 set_flag70_bit400__17TWindowOptionCtrlFv(s32);
s32 set_flag70_bit100__17TWindowOptionCtrlFv();
s32 align_menu_entry_positions(s32);
s32 set_scroll_target__17TWindowSubComCardFff(s32, f32, f32);
s32 draw_text_gray__17TWindowSubComCardFllll(s32, s32 *, s32, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 get_option_entry__17TWindowOptionCtrlFi(s32);
s32 fn_8036A514(s32);
s32 check_flag_index_set(s32);
s32 fn_8036A620(s32);
s32 get_option_table_entry(s32);

extern s32 lbl_8044F4AC[];
extern const f32 lbl_805DD268;
extern const f32 lbl_805DD26C;

s32 TWindowOptionCtrl::create_list_window() {
    s32 var_r31;
    s32 temp_r30;

    fn_8036A514(2);
    temp_r30 = check_room_seq_4__16TAdChrSelASlotGCFl(get_option_entry__17TWindowOptionCtrlFi(0xCF), 0x31);
    set_flag70_bit100__17TWindowOptionCtrlFv();
    var_r31 = 0;
    do {
        if (fn_8036A620(var_r31) != 0) {
            if (check_flag_index_set(var_r31) == 0) {
                draw_text_gray__17TWindowSubComCardFllll(temp_r30, lbl_8044F4AC, 0x26, var_r31);
            } else {
                forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r30, get_option_table_entry(var_r31), 0x26, var_r31);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 0x31);
    set_flag70_bit400__17TWindowOptionCtrlFv(temp_r30);
    set_scroll_target__17TWindowSubComCardFff(temp_r30, lbl_805DD268, lbl_805DD26C);
    align_menu_entry_positions(temp_r30);
    return temp_r30;
}

}
