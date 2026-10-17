#include "types.h"
#include "pso/misc/TKeyBoardControl_8000F764.h"
#include "pso/unk/text_8034CEDC.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/object/TObjCityMainWarp.h"
extern "C" {
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 align_menu_entry_positions(int);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *p, int a1, int a2, int a3);
s32 draw_card_icon__17TWindowSubComCardFll(int, int, int);
s32 get_window_layout_position(int);
extern const f32 lbl_805DFDE0;
s32 create_info_board_menu(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFl((int) 0x1D));
  temp_r31 = draw_card_icon__17TWindowSubComCardFll((int) get_window_layout_position((int) 0xA4), (int) 2, (int) temp_r31_2);
  if (get_main_phase() == 0xF)
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)((int) get_message_10__20TWindowSubStatusDispFl((int) 0x117)), (int)((int) 6), (int)((int) 3));
  }
  else
  {
    TWindowSubComCard::draw_text_gray((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFl((int) 0x117), (int) 6, (int) 3);
  }
  forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)((int) get_message_10__20TWindowSubStatusDispFl((int) 0x118)), (int)((int) 6), (int)((int) 9));
  ((TWindowSubComCardList *)temp_r31)->set_flag70_bit10();
  ((TWindowSubComCardList *)temp_r31)->update_layout_height((f32) lbl_805DFDE0);
  align_menu_entry_positions((int) temp_r31);
  return temp_r31;
}

}
