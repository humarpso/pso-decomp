#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7();
};

struct ComEntry_8027375C { u8 data[0xD4]; };

struct ComList_8027375C { u8 pad[4]; ComEntry_8027375C entries[1]; };

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(int, f32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
s32 get_window_layout_position(M2C_UNK);
extern const f32 lbl_805DD528;
s32 create_single_entry_window__17TWindowSubComCardFv(void);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
s32 get_window_layout_position(M2C_UNK);
s32 TWindowSubComCard__sub_8027353C(void);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
s32 get_window_layout_position(M2C_UNK);
extern const f32 lbl_805DD52C;
s32 TWindowSubComCard__sub_8027346C(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_shared_text_buffer();
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
u32 get_com_count__17TWindowSubComCardFv();
M2C_UNK release__17TWindowSubComCardFv();
u32 get_chr_select__17TWindowSubComCardFv();
M2C_UNK TWindowSubComCard__sub_800778B4(void *, int);
M2C_UNK set_card_text__17TWindowSubComCardFii(int, int);
M2C_UNK swap_cards__17TWindowSubComCardFii(int, int);
M2C_UNK remove_card_at__17TWindowSubComCardFi(int);
M2C_UNK TWindowSubComCard__sub_8007AF10(int);
M2C_UNK set_text__17TWindowSubComCardFPvPv(int, int);
s32 get_keyboard_mode__17TWindowSubComCardFv();
M2C_UNK remove_entry__17TWindowSubComCardFi(int);
M2C_UNK init_and_press_a__17TWindowSubComCardFi(int);
M2C_UNK init_and_press_b__17TWindowSubComCardFi(int);
M2C_UNK update_press__17TWindowSubComCardFv(int);
M2C_UNK TWindowSubShortMail__sub_80131998(int);
M2C_UNK hide_window__19TWindowSubShortMailFPv(int);
M2C_UNK set_position__19TWindowSubShortMailFPvPv(int, int);
s32 realloc_buffer__17TWindowSubComCardFPv(int);
s32 is_keyboard_active__17TWindowSubComCardFPv(int);
s32 update_keyboard__17TWindowSubComCardFPv(int);
M2C_UNK free__11TOBoss4RockFUi(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK send_choice_search_options_request__9TProtocolFv(int);
M2C_UNK free_menu_object(int);
s32 get_card_window__17TWindowSubComCardFUi(int);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(int);
M2C_UNK TWindowSubComCard__sub_80225E80(int, int);
M2C_UNK play_sound_effect(int, int, int, int);
u32 __nw__7TObjectFUl(int);
M2C_UNK TLobby__sub_8024220C(void *);
M2C_UNK find_and_load_com_card__6TLobbyFUi(int);
M2C_UNK TLobby__sub_8024259C();
M2C_UNK fn_80244958(int, int);
s32 fn_80244994(int);
M2C_UNK fn_802449E0(int);
M2C_UNK TWindow__close(int);
M2C_UNK request_close__19TWindowSubTradeMainFPv(int);
M2C_UNK window_request_show(int);
s32 is_com_card_active();
M2C_UNK begin_scroll__17TWindowSubComCardFPvf(int, f32);
M2C_UNK TWindowSubComCard__sub_80249144(int);
s32 is_open__17TWindowSubComCardFPv(int);
u32 create_com_card_window__17TWindowSubComCardFi(int);
M2C_UNK fn_8024AB54(int);
M2C_UNK TWindowSubComCard__sub_8024AB98(int);
s32 get_flag__17TWindowSubComCardFPv(int);
M2C_UNK clear_flag_and_release2__17TWindowSubComCardFPv(int);
s32 get_selected_menu_value(int);
M2C_UNK clear_transition_flag__17TWindowSubComCardFPv(int);
M2C_UNK open__17TWindowOptionCtrlFPv(int);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK reset_selection__17TWindowSubComCardFPv(int);
s32 update_selected_entry__17TWindowSubComCardFPv(int);
s32 get_window_layout_position(M2C_UNK);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(int);
s16 get_selected_index__20TWindowShortListCtrlFPv(int);
M2C_UNK send_packet__6TLobbyFii(void *, void *);
M2C_UNK send_state_if_dirty__17TWindowSubComCardFPv(void *);
M2C_UNK TWindowSubComCard__sub_80271F04(void *, void *, int, int);
u32 apply_selection__17TWindowSubComCardFi(int);
u32 send_command__17TWindowSubComCardFi(int);
u32 init_layout__17TWindowSubComCardFv();
u32 send_cmd_133__17TWindowSubComCardFv();
M2C_UNK cleanup__17TWindowSubComCardFPv();
M2C_UNK TWindowSubComCard__sub_802721D8(void *);
M2C_UNK set_card_index__17TWindowSubComCardFPvi(void *, int);
M2C_UNK set_selected_card__17TWindowSubComCardFPvi(void *, int);
M2C_UNK set_help_message__17TWindowSubComCardFPvi(void *, int);
M2C_UNK update_selection__17TWindowSubComCardFiii(int, int, void *);
M2C_UNK update_display_value__17TWindowSubComCardFUiUiPv(int, int, void *);
u32 create_keyboard__17TWindowSubComCardFii(void *, int);
u32 create_keyboard__17TWindowSubComCardFi(void *);
u32 create__17TWindowSubComCardFv(void *);
u32 TWindowSubComCard__sub_80272640(void *);
u32 TWindowSubComCard__sub_80272714(void *);
u32 create_card_action_window__17TWindowSubComCardFv();
u32 TWindowSubComCard__sub_802728CC(void *);
u32 create_menu_window__17TWindowSubComCardFv(void *);
u32 open_mode4_window__17TWindowSubComCardFv(void *);
u32 TWindowSubComCard__sub_80272A98(void *);
u32 TWindowSubComCard__sub_80272B60(void *, void *, int);
u32 create_entry_list_window__17TWindowSubComCardFPv(void *);
u32 TWindowSubComCard__sub_80272DE0(void *);
u32 open_layout_window__17TWindowSubComCardFv(void *);
M2C_UNK TWindowSubComCard__sub_80272EF0(void *, int);
u32 TWindowSubComCard__sub_80273004(void *);
s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0);
s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0);
s32 open_menu__17TWindowSubComCardFv(void);
s32 create_single_entry_window__17TWindowSubComCardFv(void);
u32 TWindowSubComCard__sub_8027337C();
s32 TWindowSubComCard__sub_8027346C(void);
s32 TWindowSubComCard__sub_8027353C(void);
s32 create_menu__17TWindowSubComCardFv(void);
s32 TWindowSubComCard__sub_80275228();
M2C_UNK set_display_page__17TWindowSubComCardFi(int);
M2C_UNK TWindowSubComCardList__sub_80275360(int);
u32 open_confirm_prompt__19TWindowSubShortMailFPvi(void *, int);
u32 create_keyboard__19TWindowSubShortMailFv();
u32 TWindowUserSort__ct(int, int, int);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 is_child_visible__17TWindowSubComCardFPv(int);
extern M2C_UNK lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern M2C_UNK lbl_805DD534;
extern const f32 lbl_805DD538;
extern const f32 lbl_805DD53C;
void run_task__17TWindowSubComCardFv(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, M2C_UNK, M2C_UNK);
extern const f32 TWindowSubComCard__data_805DD520;
s32 TWindowSubComCard__sub_802730E0(u8 *arg0);
}

extern "C" {

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0);
s32 create_menu__17TWindowSubComCardFv(void);
s32 open_menu__17TWindowSubComCardFv(void);
s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0);
void render__17TWindowSubComCardFv(void);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
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

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x100), get_window_layout_position((M2C_UNK)(0x97)), TWindowSubComCard__data_805DD520);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 lbl_805DD524;

s32 TWindowSubComCard__sub_802730E0(u8 *arg0) {
    s32 temp_r30;
    temp_r30 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(temp_r30, get_message_10__20TWindowSubStatusDispFPv(0xFC), get_window_layout_position(0x96), (*(f32 *)&TWindowSubComCard__data_805DD520));
    free_member__17TWindowSubComCardFPv(temp_r30, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r30);
    return temp_r30;
}

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
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
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD510);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD530;

s32 create_single_entry_window__17TWindowSubComCardFv(void) {
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
  update_layout_height__17TWindowSubComCardFPvf((s32)((int) temp_r31_2), (f32) lbl_805DD52C);
  align_menu_entry_positions((s32)((int) temp_r31_2));
  return temp_r31_2;
}

s32 TWindowSubComCard__sub_8027353C(void) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii((s32)(((M2C_UNK)get_window_layout_position((int) (0x82)))), (M2C_UNK)((int) (2)), (s32)(get_message_10__20TWindowSubStatusDispFPv((int) (0x1E))));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x55)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (5)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x56)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (9)));
    set_flag70_bit10__16TObjCityMainWarpFPv((s32)((int) (temp_r31)));
    update_layout_height__17TWindowSubComCardFPvf((s32)((int) (temp_r31)), (f32) (TWindowSubComCard__data_805DD520));
    align_menu_entry_positions((s32)((int) (temp_r31)));
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
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD530);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

void render__17TWindowSubComCardFv(void) {  }
void run_task__17TWindowSubComCardFv(u8 *arg0) {
    s32 temp_r29;
    s32 temp_r29_4;
    s32 temp_r29_7;
    s32 temp_r29_8;
    s32 temp_r30;
    u32 temp_r30_2;
    s32 temp_r4;
    s32 var_r29;
    u8 temp_r0;
    s32 temp_r29_6;
    s32 temp_r30_3;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
    switch (temp_r0) {
    case 0x0:
    case 0x1:
        send_state_if_dirty__17TWindowSubComCardFPv((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x7C)));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x78)));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x74)));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x60) = ((s32 (*)(void *)) create_menu__17TWindowSubComCardFv)((void *) (arg0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x6C) = open_layout_window__17TWindowSubComCardFv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x60)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 2U;
    case 0x2:
        set_help_message__17TWindowSubComCardFPvi((void *) (arg0), (int) (get_cursor_pos__20TWindowShortListCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x60)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x60))) != 0) {
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x5C));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x4FU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x60))) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
                TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
                M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x60)));
            return;
        }
        break;
    case 0x3:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x74) = create_com_card_window__17TWindowSubComCardFi(get_window_layout_position((int) (0x81)));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x64) = ((s32 (*)(void *)) TWindowSubComCard__sub_8027353C)((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        clear_transition_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
    case 0x4:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            return;
        }
        break;
    case 0x5:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x68) = TWindowSubComCard__sub_8027337C();
        }
        open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 6U;
    case 0x6:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 3U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            TWindowSubComCard__sub_8007AF10(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x68))));
            M2C_FIELD(arg0, u8 *, 0x1C) = 7U;
            return;
        }
        break;
    case 0x7:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x68) = ((s32 (*)(void *)) create_single_entry_window__17TWindowSubComCardFv)((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 8U;
    case 0x8:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (6)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 3U;
            return;
        }
        break;
    case 0x9:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x74)));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x60)));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x80) = create_keyboard__17TWindowSubComCardFi((void *) (arg0));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xAU;
    case 0xA:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80))) != 0) {
            temp_r29 = realloc_buffer__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80)));
            TWindowSubComCard__sub_80225E80((int) (temp_r29), (int) (get_shared_text_buffer()));
            temp_r30 = get_keyboard_mode__17TWindowSubComCardFv();
            set_text__17TWindowSubComCardFPvPv((int) (temp_r30), (int) (get_shared_text_buffer()));
            free__11TOBoss4RockFUi((int) (temp_r29));
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        break;
    case 0xB:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x6C) = create__17TWindowSubComCardFv((void *) (arg0));
            fn_802449E0((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x84) = send_cmd_133__17TWindowSubComCardFv();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x24) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u32 *, 0x74) = send_command__17TWindowSubComCardFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        }
        fn_80244958((int) (M2C_FIELD(arg0, u32 *, 0x6C)), (int) (get_window_layout_position((int) (0x99))));
        request_close__19TWindowSubTradeMainFPv((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xCU;
    case 0xC:
        update_display_value__17TWindowSubComCardFUiUiPv((int) (M2C_FIELD(arg0, u32 *, 0x84)), (int) (M2C_FIELD(arg0, u32 *, 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        set_card_index__17TWindowSubComCardFPvi((void *) (arg0), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)))));
        if (TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (0x400)) != 0) {
            if (fn_80244994((int) (M2C_FIELD(arg0, u32 *, 0x6C))) != 0) {
                request_close__19TWindowSubTradeMainFPv((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
            } else {
                window_request_show((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
            }
        }
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xDU;
            return;
        }
        break;
    case 0xD:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x74)));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x64) = ((s32 (*)(void *)) open_menu__17TWindowSubComCardFv)((void *) (arg0));
        }
        clear_transition_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xEU;
    case 0xE:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xBU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            return;
        }
        break;
    case 0xF:
        cleanup__17TWindowSubComCardFPv();
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x10U;
    case 0x10:
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xBU;
        return;
    case 0x11:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x6C) = create__17TWindowSubComCardFv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        set_card_index__17TWindowSubComCardFPvi((void *) (arg0), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)))));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x12U;
    case 0x12:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (6)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xBU;
            return;
        }
        break;
    case 0x13:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            M2C_FIELD(arg0, s32 *, 0x24) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x60)));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x80) = create_keyboard__17TWindowSubComCardFii((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x24)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x14U;
    case 0x14:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80))) != 0) {
            temp_r29 = realloc_buffer__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80)));
            TWindowSubComCard__sub_80225E80((int) (temp_r29), (int) (get_shared_text_buffer()));
            set_card_text__17TWindowSubComCardFii((int) (M2C_FIELD(arg0, s32 *, 0x24)), (int) (get_shared_text_buffer()));
            free__11TOBoss4RockFUi((int) (temp_r29));
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        break;
    case 0x15:
        open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        M2C_FIELD(arg0, u32 *, 0x70) = confirm_and_free__17TWindowSubComCardFPv((void *) (arg0));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x16U;
    case 0x16:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xDU;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) == 0) {
                remove_card_at__17TWindowSubComCardFi(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84))));
                M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xDU;
            return;
        }
        break;
    case 0x19:
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x1AU;
    case 0x1A:
        update_display_value__17TWindowSubComCardFUiUiPv((int) (M2C_FIELD(arg0, u32 *, 0x84)), (int) (M2C_FIELD(arg0, u32 *, 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x1BU;
            return;
        }
        break;
    case 0x1B:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x84) = send_cmd_133__17TWindowSubComCardFv();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x24) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u32 *, 0x74) = send_command__17TWindowSubComCardFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        }
        set_display_page__17TWindowSubComCardFi((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x1CU;
    case 0x1C:
        update_display_value__17TWindowSubComCardFUiUiPv((int) (M2C_FIELD(arg0, u32 *, 0x84)), (int) (M2C_FIELD(arg0, u32 *, 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            reset_selection__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            swap_cards__17TWindowSubComCardFii((int) (get_selected_index__20TWindowShortListCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)))), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)))));
            reset_selection__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            TWindowSubComCardList__sub_80275360((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x19U;
            return;
        }
        break;
    case 0x1D:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x78)));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x68) = TWindowSubComCard__sub_80273004((void *) (arg0));
        forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x68)), (s32) (&lbl_805DD534), (int) (0x15), (int) (-1));
        TWindowSubComCard__sub_80272EF0((void *) (arg0), (int) (M2C_FIELD(arg0, u32 *, 0x68)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x1EU;
    case 0x1E:
        if (is_com_card_active() != 0) {
            TWindowSubComCard__sub_80272EF0((void *) (arg0), (int) (M2C_FIELD(arg0, u32 *, 0x68)));
        }
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            find_and_load_com_card__6TLobbyFUi(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x68))));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x1FU;
            return;
        }
        break;
    case 0x1F:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) == 0U) {
            var_r29 = TWindowSubComCard__sub_80275228();
            temp_r30_2 = __nw__7TObjectFUl((int) (0x64));
            if (temp_r30_2 != 0U) {
                temp_r30_2 = TWindowUserSort__ct((int) (temp_r30_2), (int) (get_window_layout_position((int) (0x8A))), (int) (var_r29));
            }
            M2C_FIELD(arg0, u32 *, 0x78) = temp_r30_2;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x64) = ((s32 (*)(void *)) TWindowSubComCard__sub_8027346C)((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x20U;
    case 0x20:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x1DU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            return;
        }
        break;
    case 0x21:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x78)));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x60)));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x80) = create_keyboard__19TWindowSubShortMailFv();
        }
        set_position__19TWindowSubShortMailFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x80)), (int) (get_window_layout_position((int) (0xBB))));
        free_menu_object((int) (M2C_FIELD(arg0, u32 *, 0x80)));
        hide_window__19TWindowSubShortMailFPv((int) (M2C_FIELD(arg0, u32 *, 0x80)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x22U;
    case 0x22:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x80))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x23U;
            return;
        }
        break;
    case 0x23:
        set_position__19TWindowSubShortMailFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x80)), (int) (get_window_layout_position((int) (0xBC))));
        TWindowSubShortMail__sub_80131998((int) (M2C_FIELD(arg0, u32 *, 0x80)));
        M2C_FIELD(arg0, u32 *, 0x70) = open_confirm_prompt__19TWindowSubShortMailFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x20)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x24U;
    case 0x24:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x21U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) == 0) {
                TWindowSubComCard__sub_802721D8((void *) (arg0));
                M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x21U;
            return;
        }
        break;
    case 0x25:
        TWindowSubComCard__sub_80275228();
        TLobby__sub_8024259C();
        fn_8024AB54((int) (M2C_FIELD(arg0, s32 *, 0x20)));
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x26U;
    case 0x26:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r4 + 1);
        if ((f32) temp_r4 > lbl_805DD538) {
            TWindowSubComCard__sub_8024AB98((int) (M2C_FIELD(arg0, s32 *, 0x20)));
            temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x5C));
            ((VObj_18_204a81 *)(temp_r3_2))->m7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x4FU;
            return;
        }
        break;
    case 0x27:
    case 0x33:
        if (get_chr_select__17TWindowSubComCardFv() == 0U) {
            send_choice_search_options_request__9TProtocolFv((int) (TLobby__data_805D5580));
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x27) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x28U;
        } else {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x34U;
        }
    case 0x28:
    case 0x34:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        }
        if (get_chr_select__17TWindowSubComCardFv() != 0U) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x58) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x58) = get_chr_select__17TWindowSubComCardFv();
                temp_r29_4 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
                TWindowSubComCard__sub_800778B4((void *) ((u8 *)(arg0) + 0x30), (int) (M2C_FIELD(arg0, u32 *, 0x58)));
                TWindowSubComCard__sub_800778B4((void *) (temp_r29_4 + 0x22EC), (int) (M2C_FIELD(arg0, u32 *, 0x58)));
            }
            if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x28) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x29U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x35U;
            return;
        }
        break;
    case 0x29:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x7C) = TWindowSubComCard__sub_80272DE0((void *) (arg0));
        }
        begin_scroll__17TWindowSubComCardFPvf((int) (M2C_FIELD(arg0, u32 *, 0x7C)), (f32) (lbl_805DD53C));
        clear_flag_and_release2__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x2AU;
    case 0x2A:
        if (get_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_open__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C))) != 0) {
            if (update_selected_entry__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C))) == 0) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x2DU;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x2BU;
            return;
        }
        break;
    case 0x2B:
        TWindowSubComCard__sub_80249144((int) (M2C_FIELD(arg0, u32 *, 0x7C)));
        M2C_FIELD(arg0, u32 *, 0x64) = TWindowSubComCard__sub_80272B60((void *) (arg0), (void *) ((u8 *)(arg0) + 0x30), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C)))));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x2CU;
    case 0x2C:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x29U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            TWindowSubComCard__sub_80271F04((void *) (arg0), (void *) ((u8 *)(arg0) + 0x30), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C)))), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64)))));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x29U;
            return;
        }
        break;
    case 0x2D:
        release__17TWindowSubComCardFv();
        send_packet__6TLobbyFii((void *) (arg0), (void *) ((u8 *)(arg0) + 0x30));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x2EU;
    case 0x2E:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x29U;
        }
        if (get_com_count__17TWindowSubComCardFv() != 0U) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x2FU;
            return;
        }
        break;
    case 0x2F:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x7C)));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x68) = TWindowSubComCard__sub_80272A98((void *) (arg0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x6C) = open_mode4_window__17TWindowSubComCardFv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x30U;
    case 0x30:
        set_selected_card__17TWindowSubComCardFPvi((void *) (arg0), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x68)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x31U;
            return;
        }
        break;
    case 0x31:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
            temp_r29_6 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            ComList_8027375C *cl = (ComList_8027375C *) get_com_count__17TWindowSubComCardFv();
            TLobby__sub_8024220C(&cl->entries[temp_r29_6]);
            M2C_FIELD(arg0, u32 *, 0x64) = create_menu_window__17TWindowSubComCardFv((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x32U;
    case 0x32:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x2FU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            return;
        }
        break;
    case 0x35:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x7C) = create_entry_list_window__17TWindowSubComCardFPv((void *) (arg0));
        }
        begin_scroll__17TWindowSubComCardFPvf((int) (M2C_FIELD(arg0, u32 *, 0x7C)), (f32) (lbl_805DD53C));
        clear_flag_and_release2__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x36U;
    case 0x36:
        if (get_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_open__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x37U;
            return;
        }
        break;
    case 0x37:
        TWindowSubComCard__sub_80249144((int) (M2C_FIELD(arg0, u32 *, 0x7C)));
        temp_r29_7 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
        M2C_FIELD(arg0, u32 *, 0x64) = TWindowSubComCard__sub_80272B60((void *) (arg0), (void *) (temp_r29_7 + 0x22EC), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C)))));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x38U;
    case 0x38:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x35U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            temp_r29_8 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
            TWindowSubComCard__sub_80271F04((void *) (arg0), (void *) (temp_r29_8 + 0x22EC), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x7C)))), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64)))));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x35U;
            return;
        }
        break;
    case 0x39:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x74)));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x64) = TWindowSubComCard__sub_802728CC((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x3AU;
    case 0x3A:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            return;
        }
        break;
    case 0x3B:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x84) = init_layout__17TWindowSubComCardFv();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x24) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u32 *, 0x74) = apply_selection__17TWindowSubComCardFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x3CU;
    case 0x3C:
        update_selection__17TWindowSubComCardFiii((int) (M2C_FIELD(arg0, u32 *, 0x84)), (int) (M2C_FIELD(arg0, u32 *, 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x39U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x3DU;
            return;
        }
        break;
    case 0x3D:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x74)));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x70) = TWindowSubComCard__sub_802730E0((u8 *)((void *) (arg0)));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x3EU;
    case 0x3E:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x3BU;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) == 0) {
                remove_entry__17TWindowSubComCardFi(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84))));
                M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 2);
                M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x3BU;
            return;
        }
        break;
    case 0x3F:
        M2C_FIELD(arg0, u32 *, 0x68) = create_card_action_window__17TWindowSubComCardFv();
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x40U;
    case 0x40:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x39U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            return;
        }
        break;
    case 0x41:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x84) = send_cmd_133__17TWindowSubComCardFv();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x24) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84)));
            M2C_FIELD(arg0, u32 *, 0x74) = send_command__17TWindowSubComCardFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x42U;
    case 0x42:
        update_display_value__17TWindowSubComCardFUiUiPv((int) (M2C_FIELD(arg0, u32 *, 0x84)), (int) (M2C_FIELD(arg0, u32 *, 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x43U;
            return;
        }
        break;
    case 0x43:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x74)));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x70) = open_yesno_dialog__17TWindowSubComCardFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x44U;
    case 0x44:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x41U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) == 0) {
                update_press__17TWindowSubComCardFv(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x84))));
                M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 2);
                M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x41U;
            return;
        }
        break;
    case 0x45:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
    case 0x46:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x64) = TWindowSubComCard__sub_80272714((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x47U;
    case 0x47:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x48U;
            return;
        }
        break;
    case 0x48:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x70) = open_yesno_dialog__17TWindowSubComCardFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x49U;
    case 0x49:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x46U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) == 0) {
                init_and_press_b__17TWindowSubComCardFi(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64))));
                M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 2);
                M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x46U;
            return;
        }
        break;
    case 0x4A:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x64)));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
    case 0x4B:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x68)));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x64) = TWindowSubComCard__sub_80272640((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x4CU;
    case 0x4C:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x64))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x4DU;
            return;
        }
        break;
    case 0x4D:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x70) = open_yesno_dialog__17TWindowSubComCardFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x4EU;
    case 0x4E:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x4BU;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x70))) == 0) {
                init_and_press_a__17TWindowSubComCardFi(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x64))));
                M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 2);
                M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x4BU;
        }
        break;
    case 0x4F:
        break;
    }
}

}
