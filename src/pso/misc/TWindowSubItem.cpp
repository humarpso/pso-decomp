#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80279714 { char pad[0x18]; };
struct V_A_80279714 : Base_A_80279714 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual s32 m31();
};

struct ItemData_80279754 {
    u8 b[0x14];
};

struct VBase_18_1de278 { char pad[0x18]; };

struct VObj_18_1de278 : VBase_18_1de278 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual s32 m34();
};

struct Pad_80279FFC { u8 pad0[0x20]; u8 f20[0x30]; };

extern "C" {
void TWindowSubItem__sub_8027AA30(u8 *arg0);
s32 TWindowSubItem__sub_8027AA78(s32 arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, s32);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(M2C_UNK);
s32 create_menu_window__14TWindowSubItemFPv(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(M2C_UNK);
void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3);
void add_meseta_purpose_actions__14TWindowSubItemFii(s32 arg0, s32 arg1);
s32 open_purpose_window__14TWindowSubItemFPvi(u8 *arg0, s32 arg1);
s32 get_player_by_client_id(s32);
M2C_UNK TObjPlayer__sub_801B7B58(int, int, int);
s32 select_cursor_entry__6TLobbyFPv(int);
s32 get_selected_entry__14TWindowSubItemFPv(void *arg0);
void use_selected_item__14TWindowSubItemFPv(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
u32 get_usable_action_flags__5TItemFPvUiUi(int, int, int);
s32 get_item_info__10TObjPlayerFiiPv(int, int, void *);
void *find_item_by_id(s32);
u32 test_item_flags__10TObjPlayerFPvUi(int, int);
u8 get_field_ec__12TOSwitchItemFPv(int);
s32 get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, s32);
void add_item_purpose_actions(u8 *arg0, s32 arg1, s32 arg2);
struct En_8027AA80 { u16 flags; u8 pad2[0x2A]; u32 c2c; u32 c30; u32 c34; };
s32 is_flag_4_set__20TWindowSubStatusDispFPv();

struct Wn_8027AA80 { u8 pad0[0x76]; s16 f76; };
struct En_8027AB10 { u16 flags; u8 pad2[0x2A]; u32 c2c; u32 c30; u32 c34; };

struct Wn_8027AB10 { u8 pad0[0x76]; s16 f76; };
struct Quest_8027ABFC { u8 pad[0x20]; s32 count; };
struct Player_8027ABFC { u8 pad[0xD00]; s32 inv; };
struct Win_8027ABFC { u8 pad0[0x20]; s16 id; u8 pad1[0x72 - 0x22]; s16 sel; u8 pad2[0x8C - 0x74]; u32 n; };

Quest_8027ABFC *get_quest_id__12TQuestListVMFPv(void *);
u32 run_and_get_result__10TObjPlayerFPvi(s32, s32 *);
void calc_list_content_extent(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, s32);
void push_status_disp_entry(void *, s32, s32);
void add_battle_stat_entry(void *, s32, s32, s32);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *, void *, s32);
void gray_out_unusable_entries__14TWindowSubItemFPv(Wn_8027AA80 *arg0);
void TWindowSubItem__sub_8027AB10(Wn_8027AB10 *arg0);
void populate_sub_item_list(Win_8027ABFC *arg0);
u8 get_field_ed__10TObjPlayerFPv(void *);
void copy_to_item_data__5TItemFPvPv(void *, ItemData_80279754 *);
u8 get_field_ec__12TOSwitchItemFPv(int);
s32 get_player_by_client_id(s32);
u32 get_slot_value__10TObjPlayerFPvi(s32, s8);
s32 has_armor_with_unit_slot(void *arg0, int arg1);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
void *find_item_by_id(s32);
s32 get_status_flag__6TLobbyFPv(s32);
s32 get_flag_bit2__6TLobbyFPv(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_usable__14TWindowSubItemFi(s32);
void send_trap_packet__10TObjPlayerFPvi(s32, s32);
void request_meseta_drop__10TObjPlayerFPvi(s32, s32);
void request_item_drop__10TObjPlayerFPvii(s32, s32, s32);
s32 get_player_by_client_id(s32);
u32 is_action_active__10TObjPlayerFPv(s32);
s32 create_if_key_pressed__23TAdSinglePlyChrSelectGCFv();
void decrement_clamped(void *, s32);
void clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
void clear_flag_and_release__17TWindowSubComCardFPv(u32);
s16 get_cursor_index__18TShopGetItemWindowFPv(s32);
void play_sound_effect(s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
void TWindow__close(void *);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
s32 is_player_input_active(s32);
s32 TWindowCtrl__sub_8024A228(s32);
u32 TWindowHelpItem__ct(s32, s32, s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
s32 get_selected_menu_value(u32);
void clear_transition_flag__17TWindowSubComCardFPv(u32);
void open__17TWindowOptionCtrlFPv(u32);
s32 select_cursor_entry__6TLobbyFPv(int);
s32 get_window_layout_position(M2C_UNK);
void assign_item_to_palette__20TWindowShortListCtrlFUiUi(s32, s32);
void set_displayed_item__14TWindowSubItemFPvi(void *arg0, s32 arg1);
void use_selected_item__14TWindowSubItemFPv(u8 *arg0);
void close_windows__14TWindowSubItemFPvi(void *arg0, s32 arg1);
void exec_item_command__14TWindowSubItemFPvii(void *arg0, s32 arg1, s32 arg2);
s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1);
s32 create_menu_window__14TWindowSubItemFPv(u8 *arg0);
s32 open_purpose_window__14TWindowSubItemFPvi(u8 *arg0, s32 arg1);
void clear_flag_and_release__14TWindowSubItemFPv(void *arg0);
void TWindowSubItem__sub_8027AA30(u8 *arg0);
void reset_selected__14TWindowSubItemFPv(void* p);
void set_field_74__14TWindowSubItemFPvs(void* p, s16 v);
void refresh__14TWindowSubItemFPv(void* p);
extern Pad_80279FFC controller_input_state[];
void run_task__14TWindowSubItemFv(u8 *arg0);
void set_cursor_row_for_mode__14TWindowSubItemFPvi(void *arg0, s32 arg1);
}

extern "C" {

void *TWindowSubItem__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__14TWindowSubItemFv(void *arg0, s16 arg1);
void clear_flag_and_release__14TWindowSubItemFPv(void *arg0);
void close_windows__14TWindowSubItemFPvi(void *arg0, s32 arg1);
s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1);
void add_meseta_purpose_actions__14TWindowSubItemFii(s32 arg0, s32 arg1);
void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3);
void exec_item_command__14TWindowSubItemFPvii(void *arg0, s32 arg1, s32 arg2);
void refresh__14TWindowSubItemFPv(void* p);
void render__14TWindowSubItemFv(void);
void reset_selected__14TWindowSubItemFPv(void* p);
void set_displayed_item__14TWindowSubItemFPvi(void *arg0, s32 arg1);
void set_field_74__14TWindowSubItemFPvs(void* p, s16 v);
void set_flag60_bit10__14TWindowSubItemFPv(void* p);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
void *find_item_by_id(s32);
M2C_UNK send_6x26_unequip_item__10TObjPlayerFPvPv(s32, s32);
M2C_UNK send_6x25_equip_item(s32, s32, M2C_UNK);
s32 is_boss_area();
s32 get_player_by_client_id(s32);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);
s32 TWindowInputNumber__ct(s32, s32, M2C_UNK, s32, M2C_UNK, s16);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
int clamp_scroll_offset__20TWindowSubStatusDispFPv(void*);
void TWindow__close(void *);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK close_sub_window__10TObjPlayerFPv();
M2C_UNK create__18TWindowInputNumberFPvi(s32, s32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, s32);
M2C_UNK try_send_6x27_use_item(s32, s32);
s32 create_sub_item_list_window(s32, M2C_UNK *, s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, s32);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK get_cursor_pos__14TWindowSubItemFPv();
s32 get_field_d8__10TObjPlayerFPv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
u32 get_slot_value__10TObjPlayerFPvi(s32, s8);
s32 reset_key_machine_state__10TObjPlayerFv(s32);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
M2C_UNK set_value__18TWindowInputNumberFPvf(s32, f32);

extern "C" {
Quest_8027ABFC *get_quest_id__12TQuestListVMFPv(void *);
void gray_out_unusable_entries__14TWindowSubItemFPv(Wn_8027AA80 *arg0);
void TWindowSubItem__sub_8027AB10(Wn_8027AB10 *arg0);
}

void set_displayed_item__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x20))) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x40));
    }
}

s32 has_armor_with_unit_slot(void *arg0, int arg1) {
    ItemData_80279754 d;
    s32 pl;
    u32 item;
    pl = get_player_by_client_id(*(s32 *)((u8 *)arg0 + 0x24));
    if (pl == 0) {
        return 0;
    }
    if (get_field_ec__12TOSwitchItemFPv(arg1) != 1) {
        return 1;
    }
    if (get_field_ed__10TObjPlayerFPv((void *)arg1) != 3) {
        return 1;
    }
    item = get_slot_value__10TObjPlayerFPvi(pl + 0xD04, 2);
    if (item == 0) {
        return 0;
    }
    copy_to_item_data__5TItemFPvPv((void *)item, &d);
    return d.b[5] != 0 ? 1 : 0;
}

#pragma push
#pragma scheduling off
void use_selected_item__14TWindowSubItemFPv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    temp_r3 = get_player_by_client_id((s32)(M2C_FIELD(arg0, u32 *, 0x24)));
    if (temp_r3 != 0) {
        temp_r31 = get_selected_entry__14TWindowSubItemFPv((void *)((int) (M2C_FIELD(arg0, s32 *, 0x30))));
        TObjPlayer__sub_801B7B58((int) (temp_r3), (int) (select_cursor_entry__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 0x30)))), (int) (temp_r31));
    }
}
#pragma pop

void close_windows__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    if (get_player_by_client_id((s32)(M2C_FIELD(arg0, s32 *, 0x24))) != 0U) {
        switch (arg1) {
        case 0:
            close_sub_window__10TObjPlayerFPv();
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            return;
        case 1:
            if (M2C_FIELD(arg0, void **, 0x38) != NULL) {
                TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x38)));
                M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            }
            if (M2C_FIELD(arg0, void **, 0x34) != NULL) {
                TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x34)));
                M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            }
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xA;
            break;
        }
    }
}

void exec_item_command__14TWindowSubItemFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r3_2;
    s32 t;

    temp_r3 = get_player_by_client_id((s32)(M2C_FIELD(arg0, s32 *, 0x24)));
    if ((temp_r3 != 0) && (temp_r3_2 = find_item_by_id(arg1), ((temp_r3_2 == NULL) == 0))) {
        switch (arg2) {
        case 3:
            break;
        case 0:
            try_send_6x27_use_item(temp_r3, arg1);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        case 1:
            if (get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, (s8) ((V_A_80279714 *) temp_r3_2)->m31()) != 0U) {
                t = get_field_d8__10TObjPlayerFPv();
                send_6x26_unequip_item__10TObjPlayerFPvPv(temp_r3, t);
            }
            send_6x25_equip_item(temp_r3, arg1, 0);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        case 2:
            send_6x26_unequip_item__10TObjPlayerFPvPv(temp_r3, arg1);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        }
    }
}

void set_cursor_row_for_mode__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 3:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0xC;
        return;
    case 4:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0xF;
        return;
    case 5:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x11;
        return;
    case 6:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x13;
        return;
    case 7:
        M2C_FIELD(arg0, s8 *, 0x1C) = 6;
        return;
    case 0:
    case 1:
    case 2:
        M2C_FIELD(arg0, s8 *, 0x1C) = 5;
        return;
    }
}

void add_item_purpose_actions(u8 *arg0, s32 arg1, s32 arg2) {
  M2C_UNK sp8;
  s32 temp_r3;
  s32 temp_r3_2;
  temp_r3 = ((s32)find_item_by_id((s32)((void *) arg2)));
  if (temp_r3 != 0)
  {
    if (get_usable_action_flags__5TItemFPvUiUi((int) temp_r3, (int) 2, (int) 0) != 0U)
    {
      if ((get_usable_action_flags__5TItemFPvUiUi((int) temp_r3, (int) 1, (int) 0) != 0U) || (get_global_state__14TOKeyMachine01Fv() == 0xF))
      {
        draw_text_gray__17TWindowSubComCardFiiii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x60))), (M2C_UNK)((int) 6), (s32)((int) 0));
      }
      else
      {
        forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x60))), (M2C_UNK)((int) 6), (s32)((int) 0));
      }
    }
    get_field_ec__12TOSwitchItemFPv((0, (int) (temp_r3 & 0xFFFFFFFFu)));
    if (get_usable_action_flags__5TItemFPvUiUi((int) temp_r3, (int) 8, (int) 0) != 0U)
    {
      if (test_item_flags__10TObjPlayerFPvUi((int) temp_r3, (int) 8) != 0U)
      {
        if (get_global_state__14TOKeyMachine01Fv() == 0xF)
        {
          draw_text_gray__17TWindowSubComCardFiiii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x61))), (M2C_UNK)((int) 6), (s32)((int) 2));
        }
        else
        {
          forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x61))), (M2C_UNK)((int) 6), (s32)((int) 2));
        }
      }
      else
      {
        temp_r3_2 = get_player_by_client_id((s32)((int) (*((s32 *) (((s8 *) arg0) + 0x24)))));
        if (temp_r3_2 != 0)
        {
          if (((get_item_info__10TObjPlayerFiiPv((int) temp_r3, (int) temp_r3_2, (void *) (&sp8)) != 0) && (has_armor_with_unit_slot((void *)((void *) arg0), (int)((int) temp_r3)) != 0)) && (get_global_state__14TOKeyMachine01Fv() != 0xF))
          {
            forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x62))), (M2C_UNK)((int) 6), (s32)((int) 1));
          }
          else
          {
            draw_text_gray__17TWindowSubComCardFiiii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x62))), (M2C_UNK)((int) 6), (s32)((int) 1));
          }
        }
      }
    }
    if ((get_global_state__14TOKeyMachine01Fv() == 0xF) || (get_usable_action_flags__5TItemFPvUiUi((int) temp_r3, (int) 0x10, (int) 0) != 0U))
    {
      draw_text_gray__17TWindowSubComCardFiiii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x5F))), (M2C_UNK)((int) 6), (s32)((int) 3));
    }
    else
    {
      forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x5F))), (M2C_UNK)((int) 6), (s32)((int) 3));
    }
    if (get_global_state__14TOKeyMachine01Fv() == 0xF)
    {
      draw_text_gray__17TWindowSubComCardFiiii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x63))), (M2C_UNK)((int) 6), (s32)((int) 7));
      return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((void *) arg1), (s32)((int) get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) 0x63))), (M2C_UNK)((int) 6), (s32)((int) 7));
  }
}

void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = (u32)__cntlzw(4 - (arg3 & 0xF)) >> 5;
    temp_r31 = temp_r3 + 4;
    if ((reset_key_machine_state__10TObjPlayerFv(temp_r3) == 0) || (is_boss_area() != 0)) {
        draw_text_gray__17TWindowSubComCardFiiii((s32)(arg2), (s32)(get_localized_text_entry(0x10, 0xF)), (M2C_UNK)(6), (s32)(temp_r31));
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)(arg2), (s32)(get_localized_text_entry(0x10, 0xF)), (M2C_UNK)(0x26), (s32)(temp_r31));
}

void add_meseta_purpose_actions__14TWindowSubItemFii(s32 arg0, s32 arg1) {
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        draw_text_gray__17TWindowSubComCardFiiii((s32)(arg1), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x5F)), (M2C_UNK)(6), (s32)(6));
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)(arg1), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x5F)), (M2C_UNK)(6), (s32)(6));
}

extern const f32 lbl_805DD630;

s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x7C);
    if (var_r31 != 0) {
        var_r31 = TWindowInputNumber__ct(var_r31, get_window_layout_position(5), 1, arg1, 1, (s16) M2C_FIELD(arg0, s32 *, 0x24));
    }
    create__18TWindowInputNumberFPvi(var_r31, get_message_10__20TWindowSubStatusDispFPv(0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 3);
    set_field_1c__6TLobbyFPvf(var_r31);
    set_value__18TWindowInputNumberFPvf(var_r31, lbl_805DD630);
    set_flag60_bit10__14TWindowSubItemFPv((void*)(var_r31));
    return var_r31;
}

s32 create_menu_window__14TWindowSubItemFPv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = create_titled_window_menu(((int)get_window_layout_position((M2C_UNK)((int) (6)))), (int) (2), get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) (0x27))), (int) (M2C_FIELD(arg0, s32 *, 0x24)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x5D)))), (M2C_UNK)((int) (6)), (s32)((int) (0)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x5E)))), (M2C_UNK)((int) (6)), (s32)((int) (1)));
    TWindowSubEquip__sub_80263AF8((s32)((int) (M2C_FIELD(arg0, s32 *, 0x2C))), (M2C_UNK)((int) (2)));
    set_field_1c__6TLobbyFPvf((s32)((int) (temp_r31)));
    set_flag70_bit10__16TObjCityMainWarpFPv((int) (temp_r31));
    update_layout_height__17TWindowSubComCardFPvf((int) (temp_r31), (f32) (lbl_805DD630));
    align_menu_entry_positions((int) (temp_r31));
    return temp_r31;
}

s32 open_purpose_window__14TWindowSubItemFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    temp_r31 = create_titled_window_menu(((int)get_window_layout_position((M2C_UNK)((int) (4)))), (int) (3), get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) (0x26))), (int) (M2C_FIELD(arg0, s32 *, 0x24)));
    if (arg1 == -0xFF) {
        add_meseta_purpose_actions__14TWindowSubItemFii((s32)((void *) (arg0)), (s32)((int) (temp_r31)));
    } else if ((s32) (arg1 & 0xFFFFFFF0) == -0x10) {
        draw_slot__14TWindowSubItemFiii((s32)((void *) (arg0)), (s32)((int) (temp_r31)), (s32)((void *) (arg1)));
    } else {
        add_item_purpose_actions((u8 *)((void *) (arg0)), (s32)((int) (temp_r31)), (s32)((void *) (arg1)));
    }
    TWindowSubEquip__sub_80263AF8((s32)((int) (M2C_FIELD(arg0, s32 *, 0x2C))), (M2C_UNK)((int) (1)));
    set_field_1c__6TLobbyFPvf((s32)((int) (temp_r31)));
    set_flag70_bit10__16TObjCityMainWarpFPv((int) (temp_r31));
    update_layout_height__17TWindowSubComCardFPvf((int) (temp_r31), (f32) (lbl_805DD630));
    align_menu_entry_positions((int) (temp_r31));
    return temp_r31;
}

void render__14TWindowSubItemFv(void) {  }

extern M2C_UNK __vt__14TWindowSubItem[];

#define F(t, o) M2C_FIELD(arg0, t *, o)
#define LIST F(s32, 0x30)
#define BACK_PRESSED(idx) (TWindowShortListCtrl__check_controller_button(controller_input_state[idx].f20, 2) != 0 || test_flag_4c__23TAdSinglePlyChrSelectGCFPv(controller_input_state[4].f20, 2) != 0)
void run_task__14TWindowSubItemFv(u8 *arg0) {
    s32 p;
    s32 idx;
    u32 w;
    p = get_player_by_client_id(F(s32, 0x24));
    if (p != 0) {
        idx = is_player_input_active(F(s32, 0x24));
        switch (F(u8, 0x1C)) {
        case 0:
        case 1:
            if (F(u32, 0x3C) != 0) {
                TWindow__close((void *) F(u32, 0x3C));
                F(u32, 0x3C) = 0;
            }
            if (F(u32, 0x38) != 0) {
                TWindow__close((void *) F(u32, 0x38));
                F(u32, 0x38) = 0;
            }
            if (F(u32, 0x34) != 0) {
                TWindow__close((void *) F(u32, 0x34));
                F(u32, 0x34) = 0;
            }
            if (F(u32, 0x40) == 0) {
                w = __nw__7TObjectFUl(0xBC);
                if (w != 0) {
                    w = TWindowHelpItem__ct(w, get_window_layout_position(2), F(s32, 0x24));
                }
                F(u32, 0x40) = w;
                TWindowSubEquip__sub_80263AF8(F(s32, 0x2C), 4);
                set_field_1c__6TLobbyFPvf(F(u32, 0x40));
                F(s32, 0x20) = -1;
            }
            refresh__14TWindowSubItemFPv((void *) LIST);
            clear_selected_and_update_entry__14TWindowSubItemFPv(LIST);
            F(u8, 0x1C) = 2;
        case 2:
            set_displayed_item__14TWindowSubItemFPvi(arg0, select_cursor_entry__6TLobbyFPv(LIST));
            if (get_flag_bit2__6TLobbyFPv(LIST) != 0) {
                ((VObj_18_1de278 *) F(u8 *, 0x2C))->m7();
                F(u8, 0x1C) = 0x17;
                return;
            }
            if (get_status_flag__6TLobbyFPv(LIST) != 0) {
                F(u8, 0x1C) = 3;
                return;
            }
            break;
        case 3:
            if (F(u32, 0x3C) != 0) {
                TWindow__close((void *) F(u32, 0x3C));
                F(u32, 0x3C) = 0;
            }
            if (F(u32, 0x38) != 0) {
                TWindow__close((void *) F(u32, 0x38));
                F(u32, 0x38) = 0;
            }
            if (F(u32, 0x40) != 0) {
                TWindow__close((void *) F(u32, 0x40));
                F(u32, 0x40) = 0;
            }
            if (F(u32, 0x34) == 0) {
                F(u32, 0x34) = open_purpose_window__14TWindowSubItemFPvi(arg0, select_cursor_entry__6TLobbyFPv(LIST));
            }
            clear_flag_and_release__17TWindowSubComCardFPv(F(u32, 0x34));
            clear_transition_flag__17TWindowSubComCardFPv(F(u32, 0x34));
            F(u8, 0x1C) = 4;
        case 4:
            if (get_selected_menu_value(F(u32, 0x34)) == 0) {
                assign_item_to_palette__20TWindowShortListCtrlFUiUi(select_cursor_entry__6TLobbyFPv(LIST), F(s32, 0x24));
            }
            if (get_status_flag__17TWindowSubComCardFPv(F(u32, 0x34)) != 0) {
                F(u8, 0x1C) = 1;
            }
            if (is_visible__17TWindowSubComCardFPv(F(u32, 0x34)) != 0) {
                set_cursor_row_for_mode__14TWindowSubItemFPvi((void *)(arg0), (s32)(get_selected_menu_value(F(u32, 0x34))));
                return;
            }
            break;
        case 5:
            if (BACK_PRESSED(idx)) {
                play_sound_effect(0x52F16, 0, 0, 0);
                F(u8, 0x1C) = 3;
            }
            if (is_usable__14TWindowSubItemFi(p) != 0) {
                exec_item_command__14TWindowSubItemFPvii(arg0, select_cursor_entry__6TLobbyFPv(LIST), get_selected_menu_value(F(u32, 0x34)));
                return;
            }
            break;
        case 6:
            open__17TWindowOptionCtrlFPv(F(u32, 0x34));
            F(u32, 0x38) = create_menu_window__14TWindowSubItemFPv(arg0);
            F(u8, 0x1C) = 7;
        case 7:
            if (get_status_flag__17TWindowSubComCardFPv(F(u32, 0x38)) != 0) {
                F(u8, 0x1C) = 3;
            }
            if (is_visible__17TWindowSubComCardFPv(F(u32, 0x38)) != 0) {
                close_windows__14TWindowSubItemFPvi(arg0, get_selected_menu_value(F(u32, 0x38)));
                return;
            }
            break;
        case 8: {
            s16 cur = get_cursor_index__18TShopGetItemWindowFPv(LIST);
            refresh__14TWindowSubItemFPv((void *) LIST);
            TWindowSubItem__sub_8027AB10((Wn_8027AB10 *) LIST);
            gray_out_unusable_entries__14TWindowSubItemFPv((Wn_8027AA80 *) LIST);
            set_field_74__14TWindowSubItemFPvs((void *) LIST, cur);
            clear_selected_and_update_entry__14TWindowSubItemFPv(LIST);
            reset_selected__14TWindowSubItemFPv((void *) LIST);
            F(u8, 0x1C) = 9;
        }
        case 9:
            if (get_flag_bit2__6TLobbyFPv(LIST) != 0) {
                ((VObj_18_1de278 *) F(u8 *, 0x2C))->m7();
                F(u8, 0x1C) = 0x17;
                return;
            }
            if (get_status_flag__6TLobbyFPv(LIST) != 0) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(LIST);
                F(u8, 0x1C) = 0xA;
                return;
            }
            break;
        case 10:
            TWindowSubItem__sub_8027AB10((Wn_8027AB10 *) LIST);
            gray_out_unusable_entries__14TWindowSubItemFPv((Wn_8027AA80 *) LIST);
            TWindowSubItem__sub_8027AA30((u8 *) LIST);
            clear_selected_and_update_entry__14TWindowSubItemFPv(LIST);
            F(u8, 0x1C) = 0xB;
        case 11:
            if (get_flag_bit2__6TLobbyFPv(LIST) != 0) {
                F(u8, 0x1C) = 8;
                return;
            }
            if (get_status_flag__6TLobbyFPv(LIST) != 0) {
                use_selected_item__14TWindowSubItemFPv(arg0);
                clear_selected_and_update_entry__14TWindowSubItemFPv(LIST);
                F(u8, 0x1C) = 8;
                return;
            }
            break;
        case 12: {
            s32 n = ((VObj_18_1de278 *) find_item_by_id(select_cursor_entry__6TLobbyFPv(LIST)))->m34();
            if (n <= 1) {
                F(s32, 0x28) = 1;
                F(u8, 0x1C) = 0xE;
                return;
            }
            open__17TWindowOptionCtrlFPv(F(u32, 0x34));
            if (F(u32, 0x3C) == 0) {
                F(u32, 0x3C) = create_count_input__14TWindowSubItemFPvi(arg0, n);
            }
            clear_flag_and_release__14TWindowSubItemFPv((void *) F(u32, 0x3C));
            F(u8, 0x1C) = 0xD;
        }
        case 13:
            if (is_confirmed__24TShopEquipmentSellWindowFPv(F(u32, 0x3C)) != 0) {
                F(u8, 0x1C) = 3;
            }
            if (is_confirmed__18TWindowInputNumberFPv(F(u32, 0x3C)) != 0) {
                F(s32, 0x28) = get_result__24TShopEquipmentSellWindowFPv(F(u32, 0x3C));
                F(u8, 0x1C) = 0xE;
                return;
            }
            break;
        case 14:
            if (BACK_PRESSED(idx)) {
                play_sound_effect(0x52F16, 0, 0, 0);
                F(u8, 0x1C) = 3;
            }
            if (is_usable__14TWindowSubItemFi(p) != 0) {
                request_item_drop__10TObjPlayerFPvii(p, select_cursor_entry__6TLobbyFPv(LIST), F(s32, 0x28));
                F(u8, 0x1C) = 0x16;
                return;
            }
            break;
        case 15:
            F(u8, 0x1C) = 0x10;
        case 16:
            if (BACK_PRESSED(idx)) {
                play_sound_effect(0x52F16, 0, 0, 0);
                F(u8, 0x1C) = 1;
            }
            p = get_player_by_client_id(F(s32, 0x24));
            if (p != 0 && is_usable__14TWindowSubItemFi(p) != 0 && TWindowCtrl__sub_8024A228(F(s32, 0x24)) != 0) {
                send_trap_packet__10TObjPlayerFPvi(p, select_cursor_entry__6TLobbyFPv(LIST) & 0xF);
                F(u8, 0x1C) = 1;
                return;
            }
            break;
        case 17:
            F(u8, 0x1C) = 0x12;
        case 18:
            if (BACK_PRESSED(idx)) {
                play_sound_effect(0x52F16, 0, 0, 0);
                F(u8, 0x1C) = 1;
            }
            p = get_player_by_client_id(F(s32, 0x24));
            if (p != 0 && is_usable__14TWindowSubItemFi(p) != 0 && create_if_key_pressed__23TAdSinglePlyChrSelectGCFv() != 0) {
                decrement_clamped((void *) (p + 0x7C8), 1);
                F(u8, 0x1C) = 1;
                return;
            }
            break;
        case 19: {
            Quest_8027ABFC *q = get_quest_id__12TQuestListVMFPv((void *) p);
            s32 n;
            if (q == NULL) {
                F(u8, 0x1C) = 0x16;
                return;
            }
            n = q->count;
            if (n <= 1) {
                if (n == 1) {
                    F(s32, 0x28) = 1;
                    F(u8, 0x1C) = 0x15;
                    return;
                }
                F(u8, 0x1C) = 0x16;
                return;
            }
            open__17TWindowOptionCtrlFPv(F(u32, 0x34));
            if (F(u32, 0x3C) == 0) {
                F(u32, 0x3C) = create_count_input__14TWindowSubItemFPvi(arg0, n);
            }
            clear_flag_and_release__14TWindowSubItemFPv((void *) F(u32, 0x3C));
            F(u8, 0x1C) = 0x14;
        }
        case 20:
            if (is_confirmed__24TShopEquipmentSellWindowFPv(F(u32, 0x3C)) != 0) {
                F(u8, 0x1C) = 3;
            }
            if (is_confirmed__18TWindowInputNumberFPv(F(u32, 0x3C)) != 0) {
                F(s32, 0x28) = get_result__24TShopEquipmentSellWindowFPv(F(u32, 0x3C));
                F(u8, 0x1C) = 0x15;
                return;
            }
            break;
        case 21:
            if (BACK_PRESSED(idx)) {
                play_sound_effect(0x52F16, 0, 0, 0);
                F(u8, 0x1C) = 3;
            }
            if (is_usable__14TWindowSubItemFi(p) != 0) {
                request_meseta_drop__10TObjPlayerFPvi(p, F(s32, 0x28));
                F(u8, 0x1C) = 0x16;
                return;
            }
            break;
        case 22:
            if (is_action_active__10TObjPlayerFPv(p) == 0) {
                F(u8, 0x1C) = 1;
            }
            break;
        case 23:
            break;
        }
    }
}

void *__dt__14TWindowSubItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowSubItem;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x3C))); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x38))); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x34))); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x40))); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x30))); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8044F998[];
extern M2C_UNK __vt__14TWindowSubItem[];
extern s32 TWindowSubItem__class_name;

void *TWindowSubItem__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowSubItem;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TWindowSubItem__class_name;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = create_sub_item_list_window(get_window_layout_position(3), lbl_8044F998, M2C_FIELD(arg0, s32 *, 0x24));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 0);
    set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, s32 *, 0x30));
    set_flag70_bit10__20TWindowShortListCtrlFPv(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

void set_flag60_bit10__14TWindowSubItemFPv(void* p) { *(u16*)((char*)p + 0x60) |= 0x10; }
void clear_flag_and_release__14TWindowSubItemFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & 0xFFFFFFFD);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x70), 1);
    }
}

void TWindowSubItem__sub_8027AA30(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x88) = (s16) M2C_FIELD(arg0, s16 *, 0x74);
}

void reset_selected__14TWindowSubItemFPv(void* p) { *(s16*)((char*)p + 0x88) = -1; }
void set_field_74__14TWindowSubItemFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x74) = v; }
s32 get_selected_entry__14TWindowSubItemFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x88));
    get_cursor_pos__14TWindowSubItemFPv();
}

s32 TWindowSubItem__sub_8027AA78(s32 arg0) {
    return arg0 - 0x10;
}

void gray_out_unusable_entries__14TWindowSubItemFPv(Wn_8027AA80 *arg0) {
    s32 i;
    En_8027AA80 *e;

    for (i = 0; i < arg0->f76; i++) {
        e = (En_8027AA80 *)((M2C_UNK (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
        if (is_flag_4_set__20TWindowSubStatusDispFPv() != 0 && ((M2C_UNK (*)(void *))get_cursor_pos__14TWindowSubItemFPv)(e) == -0xFF) {
            e->c2c = 0xFFAAAAAA;
            e->c34 = 0xFF909090;
            e->flags |= 0x80;
        }
    }
}
void TWindowSubItem__sub_8027AB10(Wn_8027AB10 *arg0) {
    s32 i;
    En_8027AB10 *e;

    for (i = 0; i < arg0->f76; i++) {
        e = (En_8027AB10 *)((M2C_UNK (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
        if (is_flag_4_set__20TWindowSubStatusDispFPv() != 0 && (((M2C_UNK (*)(void *))get_cursor_pos__14TWindowSubItemFPv)(e) & -0x10) == -0x10) {
            e->c2c = 0xFFAAAAAA;
            e->c30 = 0xFF909090;
            e->c34 = 0xFF909090;
            e->flags |= 0x80;
        }
    }
}

void refresh__14TWindowSubItemFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); populate_sub_item_list((Win_8027ABFC*)(p)); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); clamp_scroll_offset__20TWindowSubStatusDispFPv(p); reset_selected__14TWindowSubItemFPv((void*)(p)); }

void populate_sub_item_list(Win_8027ABFC *arg0) {
    s32 ids[30];
    Player_8027ABFC *pl;
    Quest_8027ABFC *q;
    u32 i;
    void *it;

    pl = (Player_8027ABFC *)get_player_by_client_id(arg0->id);
    if (pl != NULL) {
        arg0->n = run_and_get_result__10TObjPlayerFPvi(pl->inv, ids);
        for (i = 0; i < arg0->n; i++) {
            it = find_item_by_id(ids[i]);
            if (it != NULL) {
                add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, it, ids[i]);
            }
        }
        for (i = 0; i < 5; i++) {
            add_battle_stat_entry(arg0, i, TWindowSubItem__sub_8027AA78(i), 0);
        }
        q = get_quest_id__12TQuestListVMFPv(pl);
        if (q != NULL && q->count > 0) {
            push_status_disp_entry(arg0, q->count, -0xFF);
        }
        if (arg0->sel <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        calc_list_content_extent(arg0);
    }
}

}
