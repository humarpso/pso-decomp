#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(int, f32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
s32 get_window_layout_position(M2C_UNK);
extern const f32 lbl_805DD528;
s32 TWindowSubComCard__sub_80273308(void);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
s32 get_window_layout_position(M2C_UNK);
s32 TWindowSubComCard__sub_8027353C(void);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
s32 get_window_layout_position(M2C_UNK);
extern const f32 lbl_805DD52C;
s32 TWindowSubComCard__sub_8027346C(void);
}

extern "C" {

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0);
s32 create_menu__17TWindowSubComCardFv(void);
s32 open_menu__17TWindowSubComCardFv(void);
s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0);
void render__17TWindowSubComCardFv(void);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK open_yes_no_prompt(s32, s32, s32, s32, f32);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_main_phase();
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);

extern const f32 TWindowSubComCard__data_805DD520;

s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x100), get_window_layout_position((M2C_UNK)(0x97)), TWindowSubComCard__data_805DD520);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 lbl_805DD524;

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x39), get_window_layout_position((M2C_UNK)(0x88)), lbl_805DD524);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 lbl_805DD510;

s32 open_menu__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position((M2C_UNK)(0x87)), 5, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x101), 6, 0x11);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x102), 6, 0x13);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x63), 6, 0x1B);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 0x15);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD510);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD530;

s32 TWindowSubComCard__sub_80273308(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *)(((M2C_UNK)get_window_layout_position((M2C_UNK)((int) (0x84))))), (int) (1));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x38)))), (M2C_UNK)((int) (3)), (M2C_UNK)((int) (0)));
    set_flag_40__16TAdChrSelASlotGCFPv((int) (temp_r31));
    set_scroll_target__17TWindowSubComCardFPvff((int) (temp_r31), (f32) (TWindowSubComCard__data_805DD520), (f32) (lbl_805DD528));
    return temp_r31;
}

s32 TWindowSubComCard__sub_8027346C(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x1D)));
  temp_r31 = draw_card_icon__17TWindowSubComCardFiii((s32)((int) get_window_layout_position((M2C_UNK)((int) 0x8B))), (M2C_UNK)((int) 2), (s32)((int) temp_r31_2));
  forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) temp_r31), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x57))), (M2C_UNK)((int) 6), (M2C_UNK)((int) 0x21));
  if (get_global_state__14TOKeyMachine01Fv() == 0xF)
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) temp_r31), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x58))), (M2C_UNK)((int) 6), (M2C_UNK)((int) 0x25));
  }
  else
  {
    draw_text_gray__17TWindowSubComCardFiiii((s32)((int) temp_r31), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x58))), (M2C_UNK)((int) 6), (M2C_UNK)((int) 0x25));
  }
  set_flag70_bit10__16TObjCityMainWarpFPv((s32)((int) temp_r31));
  temp_r31_2 = temp_r31;
  TWindowSubComCard__sub_80265E60((s32)((int) temp_r31_2), (f32) lbl_805DD52C);
  TWindowSubComCard__sub_80265C30((s32)((int) temp_r31_2));
  return temp_r31_2;
}

s32 TWindowSubComCard__sub_8027353C(void) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii((s32)(((M2C_UNK)get_window_layout_position((int) (0x82)))), (M2C_UNK)((int) (2)), (s32)(get_message_10__20TWindowSubStatusDispFPv((int) (0x1E))));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x55)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (5)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x56)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (9)));
    set_flag70_bit10__16TObjCityMainWarpFPv((s32)((int) (temp_r31)));
    TWindowSubComCard__sub_80265E60((s32)((int) (temp_r31)), (f32) (TWindowSubComCard__data_805DD520));
    TWindowSubComCard__sub_80265C30((s32)((int) (temp_r31)));
    return temp_r31;
}

s32 create_menu__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position((M2C_UNK)(0x7F)), 6, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x52), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x53), 6, 0xB);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x54), 6, 0x1D);
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x6D), 6, 0x33);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xF8), 6, 0x39);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x6D), 6, 0x33);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xF8), 6, 0x39);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD530);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

void render__17TWindowSubComCardFv(void) {  }

}
