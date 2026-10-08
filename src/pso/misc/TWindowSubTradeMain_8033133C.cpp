#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredFields_80331434_arg0
{
  u8 unknown_0[0x28];
  s32 field_28;
};

struct RecoveredFields_80331520_arg0
{
  u8 unknown_0[0x28];
  s32 field_28;
};

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct Ctrl_8033162C {
    u8 pad0[0x20];
    u8 btn[0x30];
};

struct TWindowSubTradeMain_8033162C {
    u8 pad0[0x1C];
    u8 state;
    u8 flags;
    u8 pad1E[2];
    s32 timer;
    u8 pad24[4];
    s32 player;
    VObj_18_204a81 *obj2C;
    void *menu;
    void *confirm;
    void *card;
    void *offer;
    void *request;
    void *list;
    void *number;
    void *help;
    void *chat;
    u8 submission[4];
};

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 add_text_entry__19TWindowSubTradeMainFPviiii(int, int, int, int, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(int);
extern const f32 TWindowSubTradeMain__data_805DF858;
s32 create_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 add_text_entry__19TWindowSubTradeMainFPviiii(int, int, int, int, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(int);
extern const f32 TWindowSubTradeMain__data_805DF858;
s32 build_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 get_window_layout_position(int);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, int);
M2C_UNK open_yes_no_prompt(s32, s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
extern const f32 TWindowSubTradeMain__data_805DF858;
s32 open_confirm_yes_no__19TWindowSubTradeMainFPv(u8 *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 chat_accept_submission(void *);
s32 get_status_flag__6TLobbyFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
void clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(void *);
s32 get_result__24TShopEquipmentSellWindowFPv(void *);
s32 is_confirmed__18TWindowInputNumberFPv(void *);
void clear_flag_and_release__17TWindowSubComCardFPv(void *);
void play_sound_effect(int, int, int, int);
void TWindowSubTradeMain__sub_802448E4(void *, s32);
void TWindow__close(void *);
void request_close__19TWindowSubTradeMainFPv(void *);
void window_request_show(void *);
s32 TWindowCtrl__sub_8024701C(void *);
void TWindowChat__sub_80247DFC(void *);
s32 is_visible__11TWindowChatFPv(void *);
void TWindowChat__sub_80247E50(void *);
s32 is_mode_bit4__11TWindowChatFPv(void *);
s32 is_player_input_active(s32);
void TWindowSubComCard__sub_80265680(void *, int);
void TWindowSubComCard__sub_802656D8(void *, int, int);
u8 get_selected_menu_value(void *);
void clear_transition_flag__17TWindowSubComCardFPv(void *);
void open__17TWindowOptionCtrlFPv(void *);
void update_trade_state__19TWindowSubTradeMainFPv(void *);
void close__19TWindowSubTradeMainFPv(void *);
void *select_cursor_entry__6TLobbyFPv(void *);
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void *);
s32 get_window_layout_position(int);
void close__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(void *);
s32 get_state__19TWindowSubTradeMainFv(void *, void *);
s32 check_trade_items_and_show_error__6TLobbyFv();
s32 TWindowSubTradeMain__sub_802D2808();
void TWindowSubTradeMain__sub_802D2824();
void TWindowSubTradeMain__sub_802D2834();
s32 TWindowSubTradeMain__sub_802D2844();
void TWindowSubTradeMain__sub_802D2850();
void TWindowSubTradeMain__sub_802D2860();
void draw_offer__19TWindowSubTradeMainFPvPv(void *, s32);
void draw_request__19TWindowSubTradeMainFPvPv(void *, s32);
void *TLobby__sub_802D298C();
void *TLobby__sub_802D29AC();
void clear_flag400__6TLobbyFv();
void reset__6TLobbyFv();
void set_child_windows_enabled__19TWindowSubTradeMainFPvi(void *, int);
void set_labels__19TWindowSubTradeMainFPvi(void *, int);
void set_displayed_item__19TWindowSubTradeMainFPvi(void *, void *);
void *create_help_item__19TWindowSubTradeMainFPv(void *);
void *create_input_number__19TWindowSubTradeMainFPvi(void *, s32);
void *create_list__19TWindowSubTradeMainFPv(void *);
void *open_trade_equip_window__19TWindowSubTradeMainFPv(void *);
void *create_trade_window__19TWindowSubTradeMainFPv(void *);
void *open_confirm_prompt__19TWindowSubTradeMainFPv(void *);
int TWindowSubTradeMain__sub_8033131C(void* p);
void open_status_window__19TWindowSubTradeMainFi(s32 arg0);
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0);
s32 open_confirm_yes_no__19TWindowSubTradeMainFPv(u8 *arg0);
s32 create_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
s32 build_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
void TWindowSubTradeMain__sub_803323C8(void *);
extern Ctrl_8033162C lbl_8050E208[];
void run_task__19TWindowSubTradeMainFv(TWindowSubTradeMain_8033162C *o);
}

extern "C" {

void open_status_window__19TWindowSubTradeMainFi(s32 arg0);
void render__19TWindowSubTradeMainFv(void);
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0);
s32 TLobby__sub_802D268C();
int open_option_dialog__19TWindowSubTradeMainFPvi(void*, void* a1 = 0);
int TWindowSubTradeMain__sub_8033131C(void* p);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);

void open_status_window__19TWindowSubTradeMainFi(s32 arg0) {
    open_option_dialog__19TWindowSubTradeMainFPvi((void*)(arg0), (void*)(get_message_10__20TWindowSubStatusDispFPv(0xF7)));
}
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0) {
    open_option_dialog__19TWindowSubTradeMainFPvi((void*)(arg0), (void*)(TLobby__sub_802D268C()));
}

typedef struct RecoveredFields_80331434_arg0 RecoveredFields_80331434_arg0;
#pragma fp_contract on

s32 open_confirm_yes_no__19TWindowSubTradeMainFPv(u8 *arg0) {
    s32 w = create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x28), 0, 0);
    open_yes_no_prompt(w, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0xE6), get_window_layout_position(0x5F), TWindowSubTradeMain__data_805DF858);
    free_member__17TWindowSubComCardFPv(w, 1);
    return w;
}

s32 create_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDD)));
  temp_r31 = create_titled_window_menu((int) get_window_layout_position((int) 0x5E), (int) 4, (int) temp_r31_2, (int) ((RecoveredFields_80331434_arg0 *) arg0)->field_28);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDC)), (int) 6, (int) 0x11);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xE3)), (int) 6, (int) 0x16);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDE)), (int) 6, (int) 0x1A, (int) 0xFFEE946E);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDF)), (int) 6, (int) 0x17, (int) 0xFFEE6ED8);
  update_layout_height__17TWindowSubComCardFPvf((int) temp_r31, (f32) TWindowSubTradeMain__data_805DF858);
  align_menu_entry_positions((int) temp_r31);
  return temp_r31;
}

typedef struct RecoveredFields_80331520_arg0 RecoveredFields_80331520_arg0;
#pragma fp_contract on
s32 build_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0x26)));
  temp_r31 = create_titled_window_menu((int) get_window_layout_position((int) 0x5C), (int) 5, (int) temp_r31_2, (int) ((RecoveredFields_80331520_arg0 *) arg0)->field_28);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDA)), (int) 6, (int) 3);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDB)), (int) 6, (int) 0xA);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDC)), (int) 6, (int) 0x11);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDD)), (int) 6, (int) 0x14, (int) 0xFFEE946E);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDF)), (int) 6, (int) 0x17, (int) 0xFFEE6ED8);
  update_layout_height__17TWindowSubComCardFPvf((int) temp_r31, (f32) TWindowSubTradeMain__data_805DF858);
  align_menu_entry_positions((int) temp_r31);
  return temp_r31;
}

void render__19TWindowSubTradeMainFv(void) {  }
void run_task__19TWindowSubTradeMainFv(TWindowSubTradeMain_8033162C *o) {
    s32 player;
    void *entry;
    s32 n;
    player = is_player_input_active(o->player);
    if (is_mode_bit4__11TWindowChatFPv(o->chat) != 0 && chat_accept_submission(o->submission) != 0) {
        TWindowChat__sub_80247E50(o->chat);
    }
    if (is_visible__11TWindowChatFPv(o->chat) != 0) {
        TWindowChat__sub_80247DFC(o->chat);
    }
    if (TWindowCtrl__sub_8024701C(o->chat) != 0) {
        set_labels__19TWindowSubTradeMainFPvi(o, 0xA);
        set_child_windows_enabled__19TWindowSubTradeMainFPvi(o, 0);
        o->flags |= 1;
    } else {
        set_labels__19TWindowSubTradeMainFPvi(o, 0);
        set_child_windows_enabled__19TWindowSubTradeMainFPvi(o, 1);
        o->flags &= ~1;
    }
    switch (o->state) {
    case 0:
    case 1:
        if (o->offer == 0) {
            o->offer = create_trade_window__19TWindowSubTradeMainFPv(o);
        }
        if (o->request == 0) {
            o->request = open_trade_equip_window__19TWindowSubTradeMainFPv(o);
        }
        if (o->menu == 0) {
            o->menu = (void *)build_trade_menu__19TWindowSubTradeMainFPv((u8 *)o);
        }
        window_request_show(o->menu);
        clear_flag_and_release__17TWindowSubComCardFPv(o->menu);
        clear_flag70_bit4__17TWindowOptionCtrlFPv(o->menu);
        o->state = 2;
    case 2:
        if (get_status_flag__17TWindowSubComCardFPv(o->menu) != 0) {
            o->state = 0x17;
        } else if (is_visible__17TWindowSubComCardFPv(o->menu) != 0) {
            o->state = get_selected_menu_value(o->menu);
        }
        break;
    case 3:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->offer != 0) {
            TWindowSubTradeMain__sub_802448E4(o->offer, get_window_layout_position(0x62));
        }
        if (o->request != 0) {
            TWindowSubTradeMain__sub_802448E4(o->request, get_window_layout_position(0x63));
        }
        if (o->list == 0) {
            o->list = create_list__19TWindowSubTradeMainFPv(o);
        }
        if (o->help == 0) {
            o->help = create_help_item__19TWindowSubTradeMainFPv(o);
        }
        clear_selected_and_update_entry__14TWindowSubItemFPv(o->list);
        o->state = 4;
    case 4:
        set_displayed_item__19TWindowSubTradeMainFPvi(o, select_cursor_entry__6TLobbyFPv(o->list));
        if (get_flag_bit2__6TLobbyFPv(o->list) != 0) {
            o->state = 5;
        } else if (get_status_flag__6TLobbyFPv(o->list) != 0) {
            o->state = 6;
        }
        break;
    case 5:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        if (o->list != 0) {
            TWindow__close(o->list);
            o->list = 0;
        }
        if (o->offer != 0) {
            TWindowSubTradeMain__sub_802448E4(o->offer, get_window_layout_position(0x60));
        }
        if (o->request != 0) {
            TWindowSubTradeMain__sub_802448E4(o->request, get_window_layout_position(0x61));
        }
        o->state = 1;
        break;
    case 6:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        entry = select_cursor_entry__6TLobbyFPv(o->list);
        n = get_state__19TWindowSubTradeMainFv(TLobby__sub_802D298C(), entry);
        if (n <= 1) {
            draw_request__19TWindowSubTradeMainFPvPv(entry, 1);
            o->state = 9;
            break;
        }
        if (o->number == 0) {
            o->number = create_input_number__19TWindowSubTradeMainFPvi(o, n);
        }
        o->state = 7;
    case 7:
        if (is_confirmed__24TShopEquipmentSellWindowFPv(o->number) != 0) {
            o->state = 8;
        }
        if (is_confirmed__18TWindowInputNumberFPv(o->number) != 0) {
            n = get_result__24TShopEquipmentSellWindowFPv(o->number);
            draw_request__19TWindowSubTradeMainFPvPv(select_cursor_entry__6TLobbyFPv(o->list), n);
            o->state = 9;
        }
        break;
    case 8:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 3;
        break;
    case 9:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 5;
        break;
    case 10:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->request != 0) {
            update_trade_state__19TWindowSubTradeMainFPv(o->request);
        }
        if (o->help == 0) {
            o->help = create_help_item__19TWindowSubTradeMainFPv(o);
        }
        clear_selected_and_update_entry__14TWindowSubItemFPv(o->request);
        o->state = 0xB;
    case 11:
        set_displayed_item__19TWindowSubTradeMainFPvi(o, select_cursor_entry__6TLobbyFPv(o->request));
        if (get_flag_bit2__6TLobbyFPv(o->request) != 0) {
            o->state = 0xC;
        } else if (get_status_flag__6TLobbyFPv(o->request) != 0) {
            o->state = 0xD;
        }
        break;
    case 12:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        if (o->request != 0) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(o->request);
            TWindowSubTradeMain__sub_803323C8(o->request);
            close__19TWindowSubTradeMainFPv(o->request);
        }
        o->state = 1;
        break;
    case 13:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        entry = select_cursor_entry__6TLobbyFPv(o->request);
        n = get_state__19TWindowSubTradeMainFv(TLobby__sub_802D29AC(), entry);
        if (n <= 1) {
            draw_offer__19TWindowSubTradeMainFPvPv(entry, 1);
            o->state = 0x10;
            break;
        }
        if (o->number == 0) {
            o->number = create_input_number__19TWindowSubTradeMainFPvi(o, n);
        }
        o->state = 0xE;
    case 14:
        if (is_confirmed__24TShopEquipmentSellWindowFPv(o->number) != 0) {
            o->state = 0xF;
        }
        if (is_confirmed__18TWindowInputNumberFPv(o->number) != 0) {
            n = get_result__24TShopEquipmentSellWindowFPv(o->number);
            draw_offer__19TWindowSubTradeMainFPvPv(select_cursor_entry__6TLobbyFPv(o->request), n);
            o->state = 0x10;
        }
        break;
    case 15:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 0xA;
        break;
    case 16:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 0xC;
        break;
    case 17:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->offer != 0) {
            update_trade_state__19TWindowSubTradeMainFPv(o->offer);
        }
        if (o->help == 0) {
            o->help = create_help_item__19TWindowSubTradeMainFPv(o);
        }
        o->state = 0x12;
    case 18:
        set_displayed_item__19TWindowSubTradeMainFPvi(o, select_cursor_entry__6TLobbyFPv(o->offer));
        if (get_flag_bit2__6TLobbyFPv(o->offer) != 0) {
            o->state = 0x13;
        } else if (get_status_flag__6TLobbyFPv(o->offer) != 0) {
            o->state = 0x13;
        }
        break;
    case 19:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        if (o->offer != 0) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(o->offer);
            TWindowSubTradeMain__sub_803323C8(o->offer);
            close__19TWindowSubTradeMainFPv(o->offer);
        }
        if (TWindowSubTradeMain__sub_802D2844() != 0) {
            o->state = 0x14;
        } else {
            o->state = 1;
        }
        break;
    case 20:
        if (o->menu != 0) {
            open__17TWindowOptionCtrlFPv(o->menu);
        }
        window_request_show(o->menu);
        if (o->confirm == 0) {
            o->confirm = (void *)create_trade_menu__19TWindowSubTradeMainFPv((u8 *)o);
        }
        window_request_show(o->confirm);
        clear_flag_and_release__17TWindowSubComCardFPv(o->confirm);
        TWindowSubTradeMain__sub_802D2860();
        o->state = 0x15;
    case 21:
        if (TWindowSubTradeMain__sub_802D2808() != 0) {
            TWindowSubComCard__sub_802656D8(o->confirm, 2, 0xFFEE946E);
        } else {
            TWindowSubComCard__sub_80265680(o->confirm, 2);
        }
        if (get_status_flag__17TWindowSubComCardFPv(o->confirm) != 0) {
            o->state = 0x16;
        } else if (is_visible__17TWindowSubComCardFPv(o->confirm) != 0) {
            o->state = get_selected_menu_value(o->confirm);
            if (o->confirm != 0) {
                request_close__19TWindowSubTradeMainFPv(o->confirm);
            }
            if (o->menu != 0) {
                clear_transition_flag__17TWindowSubComCardFPv(o->menu);
            }
        }
        break;
    case 22:
        if (o->confirm != 0) {
            TWindow__close(o->confirm);
            o->confirm = 0;
        }
        if (o->menu != 0) {
            clear_transition_flag__17TWindowSubComCardFPv(o->menu);
        }
        TWindowSubTradeMain__sub_802D2850();
        o->state = 1;
        break;
    case 23:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->card == 0) {
            o->card = open_confirm_prompt__19TWindowSubTradeMainFPv(o);
        }
        o->state = 0x18;
    case 24:
        if (get_card_data__17TWindowSubComCardFPv(o->card) != 0) {
            o->state = 0x19;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->card) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->card) == 0) {
                o->obj2C->m7();
                o->state = 0x22;
            } else {
                o->state = 0x19;
            }
        }
        break;
    case 25:
        if (o->card != 0) {
            close__17TWindowSubComCardFPv(o->card);
            o->card = 0;
        }
        if (TWindowSubTradeMain__sub_802D2844() != 0) {
            o->state = 0x14;
        } else {
            o->state = 1;
        }
        break;
    case 26:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if ((n = check_trade_items_and_show_error__6TLobbyFv()) != 0) {
            if (o->card == 0) {
                o->card = (void *)((int (*)(void *, s32))TWindowSubTradeMain__sub_8033131C)(o, n);
            }
            o->state = 0x1C;
        } else {
            if (o->card == 0) {
                o->card = ((void *)open_confirm_yes_no__19TWindowSubTradeMainFPv((u8 *)(o)));
            }
            o->state = 0x1B;
        }
    case 27:
        if (TWindowSubTradeMain__sub_802D2808() == 0) {
            o->state = 0x1D;
        }
        if (get_card_data__17TWindowSubComCardFPv(o->card) != 0) {
            o->state = 0x1D;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->card) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->card) == 0) {
                close__17TWindowSubComCardFPv(o->card);
                o->card = ((void *(*)(void *))update_from_lobby__19TWindowSubTradeMainFi)(o);
                TWindowSubTradeMain__sub_802D2834();
                o->state = 0x1C;
            } else {
                o->state = 0x1D;
            }
        }
        break;
    case 28:
        if (TWindowSubTradeMain__sub_802D2808() == 0 ||
            (!(o->flags & 1) &&
             (TWindowShortListCtrl__check_controller_button(lbl_8050E208[player].btn, 2) != 0 ||
              test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208[4].btn, 2) != 0))) {
            play_sound_effect(0x52F16, 0, 0, 0);
            TWindowSubTradeMain__sub_802D2824();
            o->state = 0x1D;
        }
        break;
    case 29:
        if (o->card != 0) {
            close__17TWindowSubComCardFPv(o->card);
            o->card = 0;
        }
        o->state = 0x14;
        break;
    case 30:
        if (o->card != 0) {
            close__17TWindowSubComCardFPv(o->card);
            o->card = 0;
        }
        o->card = ((void *(*)(void *))open_status_window__19TWindowSubTradeMainFi)(o);
        o->timer = 900;
        o->state = 0x1F;
    case 31:
        if (o->timer > 0) {
            o->timer--;
        } else if (!(o->flags & 1) &&
                   (TWindowShortListCtrl__check_controller_button(lbl_8050E208[player].btn, 2) != 0 ||
                    test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208[4].btn, 2) != 0)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            clear_flag400__6TLobbyFv();
            o->timer = 900;
            o->state = 0x20;
        }
        break;
    case 32:
        if (o->timer > 0) {
            o->timer--;
        } else {
            reset__6TLobbyFv();
            o->state = 0x22;
        }
        break;
    case 33:
    case 34:
        break;
    }
}

}
