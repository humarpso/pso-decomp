#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_menu__17TWindowOptionCtrlFv(void);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);

extern const f32 lbl_805DD268;

s32 create_menu__17TWindowOptionCtrlFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_option_entry__17TWindowOptionCtrlFi(0xCE);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 9);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 0), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 1), 6, 7);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 2), 6, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 3), 6, 9);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 4), 6, 0xB);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 5), 6, 0x10);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 6), 6, 0x19);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 7), 6, 0x1B);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD268);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

}
