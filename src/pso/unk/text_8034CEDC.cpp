#include "types.h"
extern "C" {
s32 get_main_phase();
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 set_flag70_bit10__16TObjCityMainWarpFv(int);
s32 align_menu_entry_positions(int);
s32 update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 draw_text_gray__17TWindowSubComCardFllll(int, int, int, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 draw_card_icon__17TWindowSubComCardFll(int, int, int);
s32 get_window_layout_position(int);
extern const f32 lbl_805DFDE0;
s32 create_info_board_menu(void);
}

extern "C" {

s32 create_info_board_menu(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFl((int) 0x1D));
  temp_r31 = draw_card_icon__17TWindowSubComCardFll((int) get_window_layout_position((int) 0xA4), (int) 2, (int) temp_r31_2);
  if (get_main_phase() == 0xF)
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFl((int) 0x117), (int) 6, (int) 3);
  }
  else
  {
    draw_text_gray__17TWindowSubComCardFllll((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFl((int) 0x117), (int) 6, (int) 3);
  }
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFl((int) 0x118), (int) 6, (int) 9);
  set_flag70_bit10__16TObjCityMainWarpFv((int) temp_r31);
  update_layout_height__17TWindowSubComCardFPvf((int) temp_r31, (f32) lbl_805DFDE0);
  align_menu_entry_positions((int) temp_r31);
  return temp_r31;
}

}
