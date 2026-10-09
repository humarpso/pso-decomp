#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list_window__17TWindowOptionCtrlFv(void);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, s32);
M2C_UNK set_flag70_bit400__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv();
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, M2C_UNK *, M2C_UNK, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);
M2C_UNK fn_8036A514(M2C_UNK);
s32 check_flag_index_set(s32);
s32 fn_8036A620(s32);
s32 get_option_table_entry(s32);

extern M2C_UNK lbl_8044F4AC[];
extern const f32 lbl_805DD268;
extern const f32 lbl_805DD26C;

s32 create_list_window__17TWindowOptionCtrlFv(void) {
    s32 var_r31;
    s32 temp_r30;

    fn_8036A514(2);
    temp_r30 = check_room_seq_4__16TAdChrSelASlotGCFii(get_option_entry__17TWindowOptionCtrlFi(0xCF), 0x31);
    set_flag70_bit100__17TWindowOptionCtrlFPv();
    var_r31 = 0;
    do {
        if (fn_8036A620(var_r31) != 0) {
            if (check_flag_index_set(var_r31) == 0) {
                draw_text_gray__17TWindowSubComCardFiiii(temp_r30, lbl_8044F4AC, 0x26, var_r31);
            } else {
                forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r30, get_option_table_entry(var_r31), 0x26, var_r31);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 0x31);
    set_flag70_bit400__17TWindowOptionCtrlFPv(temp_r30);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r30, lbl_805DD268, lbl_805DD26C);
    align_menu_entry_positions(temp_r30);
    return temp_r30;
}

}
