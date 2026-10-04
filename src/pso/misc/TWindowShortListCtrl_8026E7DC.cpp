#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026EA60_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredFields_8026EA60_arg0
{
  u8 unknown_0[0x1C];
  u8 field_1C;
  u8 unknown_1D[0x7];
  s32 field_24;
  u8 unknown_28[0xC];
  u32 field_34;
};

struct RecoveredFields_8026EA60_temp_r29
{
  u8 unknown_0[0x34];
  s32 field_34;
};

struct Sc_8026EBB0 { f32 x; f32 y; };

struct Tb_8026EBB0 { s16 e[0x13]; };

struct Wn_8026EBB0 { u8 pad[0x24]; s32 card; };

struct Ctrl_8026ECBC {
    u8 pad0[0x1D];
    u8 state;
    s16 timer;
    u8 sub20[4];
    s32 player_id;
    u8 sub28[4];
    void *tech_win;
    void *list_win;
    void *help_win;
    s32 help_item;
};

extern "C" {
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
void TWindowShortListCtrl__sub_8026F66C(u8 *arg0);
u8 * find_item_by_id(s32);
u8 get_field_ec__12TOSwitchItemFPv(void *);
s32 canSetMenuCursorAction(M2C_UNK, s32, u8, u8);
s32 get_player_by_client_id(s32);
u32 TItemObject__sub_80115DE8(int);
M2C_UNK set_slot__20TWindowActionPaletteFPvUc(int, int);
M2C_UNK set_mode__20TWindowActionPaletteFPvUc(int, int);
M2C_UNK TMainCursor__sub_8013DFC4(int);
void TWindowShortListCtrl__sub_8026E93C(u32 arg0, u32 arg1);
extern M2C_UNK lbl_805DD380;
void TWindowShortListCtrl__sub_8026EA48(u8 *arg0);
s32 fn_8002AE08(int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_player_by_client_id(s32);
s32 is_player_input_active(int);
s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0);
void destroy_children__20TWindowShortListCtrlFPv(void *arg0);
void TWindowShortListCtrl__sub_8026EA48(u8 *arg0);
void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1);
extern RecoveredGlobal_8026EA60_lbl_8050E208 lbl_8050E208;
void TWindowShortListCtrl__sub_8026EA60(u8 *arg0);
s32 get_card_window__17TWindowSubComCardFUi(int);
void TWindowShortListCtrl__sub_8026E8EC(u8 *arg0, s32 arg1, s32 arg2);
s32 get_card_window__17TWindowSubComCardFUi(int);
void TWindowSubComCard__sub_802655E4(void *);
void set_selected_index__17TWindowSubComCardFPvs(void *, s16);
void align_menu_entry_positions(void *);
void set_scroll_target__17TWindowSubComCardFPvff(void *, f32, f32);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
void draw_technique_row__19TWindowSubTechniqueFiii(int, int, void *);
void TWindowShortListCtrl__sub_8026EBB0(Wn_8026EBB0 *arg0, s32 arg1, Sc_8026EBB0 *arg2);
s32 get_player_by_client_id(s32);
s32 is_player_input_active(int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
u8 * find_item_by_id(s32);
void TWindowShortListCtrl__sub_8026E93C(u32 arg0, u32 arg1);
void TWindowShortListCtrl__sub_8026EA60(u8 *arg0);
void TWindowShortListCtrl__sub_8026E8EC(u8 *arg0, s32 arg1, s32 arg2);
void TWindowShortListCtrl__sub_8026EBB0(Wn_8026EBB0 *arg0, s32 arg1, Sc_8026EBB0 *arg2);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
void TWindowShortListCtrl__sub_8026F66C(u8 *arg0);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1);
void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag_8__11TWindowCtrlFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
extern RecoveredGlobal_8026EA60_lbl_8050E208 lbl_8050E208;
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 get_status_flag__6TLobbyFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 is_usable__14TWindowSubItemFi(u8 *);
void try_send_6x27_use_item(u8 *, s32);
void TObjPlayer__sub_801B89B0(u8 *, s32);
s32 create_if_key_pressed__23TAdSinglePlyChrSelectGCFv();
void decrement_clamped(void *, int);
void update_cursor__10TObjPlayerFPvi(u8 *, s32);
s32 try_equip_item__10TObjPlayerFii(u8 *, s32);
void clear_flag_and_release__17TWindowSubComCardFPv(void *);
void set_flag70_bit10__20TWindowShortListCtrlFPv(void *);
void play_sound_effect(int, int, int, int);
void *__nw__7TObjectFUl(u32);
void set_flag_active__11TWindowCtrlFv();
s32 TWindowCtrl__sub_8024A228(s32);
void *TWindowHelpItem__ct(void *, s32, s32);
s16 get_selected_menu_value(void *);
void reset_selection__17TWindowSubComCardFPv(void *);
s32 select_cursor_entry__6TLobbyFPv(void *);
s32 get_window_layout_position(int);
void assign_shortcut__20TWindowShortListCtrlFiii(int, s32, s32);
void update_variant_a__20TWindowShortListCtrlFPv(void *);
void update_variant_b__20TWindowShortListCtrlFPv(void *);
void update_variant_c__20TWindowShortListCtrlFPv(void *);
void *create_equip_kind_window(s32, u8 *, s32);
s32 update_selection__19TWindowSubTechniqueFPvPv(void *, void *, s32);
void get_current_selection__19TWindowSubTechniqueFPvPv(void *, void *, s32);
s32 TWindowSubTechnique__sub_80286BF4(s32, s32);
extern u8 lbl_8044F5A0[];
void run_task__20TWindowShortListCtrlFv(u8 *arg0);
}

extern "C" {

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1);
void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void destroy_children__20TWindowShortListCtrlFPv(void *arg0);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0);
void render__20TWindowShortListCtrlFv(void);
void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1);
void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1);
void *create_window_menu(s32, s32, s32);
s32 get_player_by_client_id(s32);
M2C_UNK end_player_keyboard_hold(s32);
s32 TWindowCtrl__sub_8024A1A8();
s32 has_player_active_menu__11TWindowCtrlFi(s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK clear_flag_8__11TWindowCtrlFv();
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);
s32 set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
s32 set_flag70_bit10__16TObjCityMainWarpFPv();

void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x38))) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r31;

    temp_r3 = get_player_by_client_id((s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))));
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r31 = (unsigned char *) (temp_r3 + 0x85C);
    if (temp_r31 == NULL) {
        return 0;
    }
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r31, u32 *, 0x34) >> 4U) & 1;
}

void TWindowShortListCtrl__sub_8026E8EC(u8 *arg0, s32 arg1, s32 arg2) {
    s16 *p = (s16 *)(get_card_window__17TWindowSubComCardFUi(*(s32 *)(arg0 + 0x24)) + 0x22C4);
    s16 t = p[arg1];
    p[arg1] = p[arg2];
    p[arg2] = t;
}

void TWindowShortListCtrl__sub_8026E93C(u32 arg0, u32 arg1) {
    s32 var_r30;
    s32 var_r4;
    s32 var_r5;
    u32 temp_r3;
    u32 var_r29;
    u32 var_r31;
    u32 var_r3;
    u8 var_r6;
    var_r31 = arg0;
    var_r3 = arg1;
    var_r30 = get_player_by_client_id((s32)(var_r3));
    if (var_r30 != 0) {
        var_r29 = M2C_FIELD(var_r30, u32 *, 0x424);
        if (var_r29 != 0U) {
            var_r3 = var_r31;
            temp_r3 = (unsigned long) (find_item_by_id((s32) var_r3));
            var_r31 = temp_r3;
            if ((var_r31 != 0) && (get_field_ec__12TOSwitchItemFPv((void *) temp_r3) == 3)) {
                var_r3 = var_r31;
                var_r31 = TItemObject__sub_80115DE8((int) (var_r3));
                if ((s32) var_r31 != -1) {
                    var_r4 = var_r30;
                    var_r3 = var_r29 + 0x520;
                    var_r6 = (u8) var_r31;
                    var_r5 = 4;
                    if (canSetMenuCursorAction((s32) var_r3, var_r4, 4U, var_r6) != 0) {
                        var_r3 = var_r29 + 0x520;
                        var_r4 = 4;
                        set_mode__20TWindowActionPaletteFPvUc((int) (var_r3), (int) (4));
                        var_r3 = var_r29 + 0x520;
                        var_r4 = (s32) (u8) var_r31;
                        set_slot__20TWindowActionPaletteFPvUc((int) (var_r3), (int) (var_r4));
                        var_r3 = var_r29 + 0x520;
                        TMainCursor__sub_8013DFC4((int) (var_r3));
                    }
                }
            }
        }
    }
}

void destroy_children__20TWindowShortListCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
}

void TWindowShortListCtrl__sub_8026EA48(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(((u8 *)(&lbl_805DD380) + (s8) M2C_FIELD(arg0, u8 *, 0x1C)), u8 *, 0);
}

typedef struct RecoveredFields_8026EA60_arg0 RecoveredFields_8026EA60_arg0;
typedef struct RecoveredFields_8026EA60_temp_r29 RecoveredFields_8026EA60_temp_r29;
typedef struct RecoveredGlobal_8026EA60_lbl_8050E208 RecoveredGlobal_8026EA60_lbl_8050E208;
void TWindowShortListCtrl__sub_8026EA60(u8 *arg0) {
  s32 temp_r31;
  u32 temp_r3;
  u8 temp_r31_2;
  u8 temp_r3_2;
  u8 temp_r3_3;
  u8 temp_r3_4;
  u8 temp_r3_5;
  u8 temp_r3_6;
  u8 *temp_r29;
  temp_r31 = is_player_input_active((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24);
  if (TWindowShortListCtrl__check_controller_button((void *) ((((u8 *) (&lbl_8050E208.value)) + (temp_r31 * 0x50)) + 0x20), (int) fn_8002AE08((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24)) != 0)
  {
    temp_r31_2 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
    temp_r3 = ((u32)get_player_by_client_id((s32)((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24)));
    if (temp_r3 != 0U)
    {
      temp_r29 = (u8 *) (temp_r3 + 0x85C);
      if ((temp_r29 != 0) && (((u32) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_34) == 0U))
      {
        ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C + 1);
        temp_r3_2 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
        if (((s8) temp_r3_2) >= 4)
        {
          ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_2 - 4);
        }
        if ((((s32) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C) == 2) && (is_technique_usable__20TWindowShortListCtrlFPv((u8 *)((void *) arg0)) == 0))
        {
          ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C + 1);
          temp_r3_3 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
          if (((s8) temp_r3_3) >= 4)
          {
            ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_3 - 4);
          }
        }
        if (((RecoveredFields_8026EA60_temp_r29 *) temp_r29)->field_34 & 0x10)
        {
          temp_r3_4 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
          if (((s32) temp_r3_4) == 3)
          {
            ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_4 + 1);
            temp_r3_5 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
            if (((s8) temp_r3_5) >= 4)
            {
              ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_5 - 4);
            }
          }
        }
        temp_r3_6 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
        if (((s8) temp_r31_2) != ((s8) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C))
        {
          set_card_window_flags__20TWindowShortListCtrlFii((s32)((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24), (s32)((int) ((s32) ((s8) temp_r3_6))));
          destroy_children__20TWindowShortListCtrlFPv((void *) arg0);
          TWindowShortListCtrl__sub_8026EA48((u8 *)((void *) arg0));
        }
      }
    }
  }
}

void TWindowShortListCtrl__sub_8026EBB0(Wn_8026EBB0 *arg0, s32 arg1, Sc_8026EBB0 *arg2) {
    s32 i;
    s16 cur;
    Tb_8026EBB0 *tbl;
    tbl = (Tb_8026EBB0 *)(get_card_window__17TWindowSubComCardFUi(arg0->card) + 0x22C4);
    cur = get_cursor_pos__20TWindowShortListCtrlFPv((void*)((void *)arg1));
    TWindowSubComCard__sub_802655E4((void *)arg1);
    for (i = 0; i < 0x13; i++) {
        draw_technique_row__19TWindowSubTechniqueFiii(tbl->e[i], arg0->card, (void *)arg1);
    }
    set_scroll_target__17TWindowSubComCardFPvff((void *)arg1, arg2->x, arg2->y);
    align_menu_entry_positions((void *)arg1);
    set_selected_index__17TWindowSubComCardFPvs((void *)arg1, cur);
}

void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;

    temp_r31 = create_window_menu(arg1, 0x13, M2C_FIELD(arg0, s32 *, 0x24));
    set_flag70_bit10__16TObjCityMainWarpFPv();
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x01000000;
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    TWindowShortListCtrl__sub_8026EBB0((Wn_8026EBB0 *)((void*)((void*)(arg0))), (s32)((void*)((void*)(temp_r31))), (Sc_8026EBB0 *)((void*)((void*)(arg2))));
    return temp_r31;
}
void render__20TWindowShortListCtrlFv(void) {  }

extern void *__vt__20TWindowShortListCtrl[];

#define PAD(i) ((void *) ((((u8 *) (&lbl_8050E208.value)) + ((i) * 0x50)) + 0x20))
#define BACK_PRESSED(i) (TWindowShortListCtrl__check_controller_button(PAD(i), 2) != 0 || test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) (((u8 *) (&lbl_8050E208.value)) + 0x160), 2) != 0)
void run_task__20TWindowShortListCtrlFv(u8 *arg0) {
    Ctrl_8026ECBC *self = (Ctrl_8026ECBC *) arg0;
    s32 idx;
    u8 *player;
    s32 sel;
    idx = is_player_input_active(self->player_id);
    player = (u8 *) get_player_by_client_id(self->player_id);
    if ((self->timer > 2 && TWindowShortListCtrl__check_controller_button(PAD(idx), 0x200) != 0) || player == NULL) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    TWindowShortListCtrl__sub_8026EA60(arg0);
    switch (self->state) {
    case 0:
        if (self->list_win == NULL) {
            self->list_win = create_equip_kind_window(get_window_layout_position(1), lbl_8044F5A0, self->player_id);
            set_flag70_bit10__20TWindowShortListCtrlFPv(self->list_win);
            update_variant_c__20TWindowShortListCtrlFPv(self->list_win);
            *(s32 *) ((u8 *) self->list_win + 0x5C) = 0x01000000;
        }
        self->state = 1;
    case 1:
        if (TWindowShortListCtrl__check_controller_button(PAD(idx), 0x400) != 0) {
            if (self->help_win == NULL) {
                void *w = __nw__7TObjectFUl(0xBC);
                if (w != NULL) {
                    w = TWindowHelpItem__ct(w, get_window_layout_position(2), self->player_id);
                }
                self->help_win = w;
                self->help_item = -1;
                clear_flag_8__11TWindowCtrlFv();
            } else {
                TWindow__close(self->help_win);
                self->help_win = NULL;
                set_flag_active__11TWindowCtrlFv();
            }
        }
        set_displayed_item__20TWindowShortListCtrlFPvi(self, select_cursor_entry__6TLobbyFPv(self->list_win));
        if (get_flag_bit2__6TLobbyFPv(self->list_win) != 0) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (get_status_flag__6TLobbyFPv(self->list_win) != 0) {
            self->state = 2;
        }
        break;
    case 2:
        if (BACK_PRESSED(idx)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (is_usable__14TWindowSubItemFi(player) == 0) {
            break;
        }
        assign_shortcut__20TWindowShortListCtrlFiii(6, select_cursor_entry__6TLobbyFPv(self->list_win), self->player_id);
        queue_destruction__7TObjectFv(self);
        return;
    case 3:
        if (self->list_win == NULL) {
            self->list_win = create_equip_kind_window(get_window_layout_position(1), lbl_8044F5A0, self->player_id);
            set_flag70_bit10__20TWindowShortListCtrlFPv(self->list_win);
            update_variant_b__20TWindowShortListCtrlFPv(self->list_win);
            *(s32 *) ((u8 *) self->list_win + 0x5C) = 0x01000000;
        }
        self->state = 4;
    case 4:
        TWindowShortListCtrl__sub_8026E93C(select_cursor_entry__6TLobbyFPv(self->list_win), self->player_id);
        if (get_flag_bit2__6TLobbyFPv(self->list_win) != 0) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (get_status_flag__6TLobbyFPv(self->list_win) != 0) {
            self->state = 5;
        }
        break;
    case 5:
        TWindowShortListCtrl__sub_8026E93C(select_cursor_entry__6TLobbyFPv(self->list_win), self->player_id);
        if (BACK_PRESSED(idx)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (is_usable__14TWindowSubItemFi(player) == 0) {
            break;
        }
        sel = select_cursor_entry__6TLobbyFPv(self->list_win);
        if (find_item_by_id(sel) == NULL) {
            return;
        }
        try_send_6x27_use_item(player, sel);
        queue_destruction__7TObjectFv(self);
        return;
    case 6:
        if (self->list_win == NULL) {
            self->list_win = create_equip_kind_window(get_window_layout_position(1), lbl_8044F5A0, self->player_id);
            set_flag70_bit10__20TWindowShortListCtrlFPv(self->list_win);
            update_variant_a__20TWindowShortListCtrlFPv(self->list_win);
            *(s32 *) ((u8 *) self->list_win + 0x5C) = 0x01000000;
        }
        self->state = 7;
    case 7:
        TWindowShortListCtrl__sub_8026E93C(select_cursor_entry__6TLobbyFPv(self->list_win), self->player_id);
        if (get_flag_bit2__6TLobbyFPv(self->list_win) != 0) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (get_status_flag__6TLobbyFPv(self->list_win) != 0) {
            self->state = 8;
        }
        break;
    case 8:
        if (BACK_PRESSED(idx)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (is_usable__14TWindowSubItemFi(player) == 0) {
            return;
        }
        sel = select_cursor_entry__6TLobbyFPv(self->list_win);
        if ((sel & 0xF) == 4) {
            if (create_if_key_pressed__23TAdSinglePlyChrSelectGCFv() == 0) {
                break;
            }
            decrement_clamped(player + 0x7C8, 1);
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (TWindowCtrl__sub_8024A228(self->player_id) == 0) {
            return;
        }
        TObjPlayer__sub_801B89B0(player, sel & 0xF);
        queue_destruction__7TObjectFv(self);
        return;
    case 9:
        if (self->tech_win == NULL) {
            get_current_selection__19TWindowSubTechniqueFPvPv(self->sub20, self->sub28, self->player_id);
            self->tech_win = create_window__20TWindowShortListCtrlFPvii(self, get_window_layout_position(1), (s32) lbl_8044F5A0);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(self->tech_win);
        self->state = 10;
    case 10:
        update_cursor__10TObjPlayerFPvi(player, get_selected_menu_value(self->tech_win));
        if (update_selection__19TWindowSubTechniqueFPvPv(self->sub20, self->sub28, self->player_id) != 0) {
            TWindowShortListCtrl__sub_8026EBB0((Wn_8026EBB0 *) self, (s32) self->tech_win, (Sc_8026EBB0 *) lbl_8044F5A0);
        }
        if (TWindowShortListCtrl__check_controller_button(PAD(idx), 0x400) != 0) {
            if (get_selected_index__20TWindowShortListCtrlFPv(self->tech_win) == -1) {
                TWindowShortListCtrl__sub_8026F66C((u8 *) self->tech_win);
            } else {
                TWindowShortListCtrl__sub_8026E8EC(arg0, get_selected_index__20TWindowShortListCtrlFPv(self->tech_win), get_cursor_pos__20TWindowShortListCtrlFPv(self->tech_win));
                reset_selection__17TWindowSubComCardFPv(self->tech_win);
                TWindowShortListCtrl__sub_8026EBB0((Wn_8026EBB0 *) self, (s32) self->tech_win, (Sc_8026EBB0 *) lbl_8044F5A0);
            }
        }
        if (get_status_flag__17TWindowSubComCardFPv(self->tech_win) != 0) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (is_visible__17TWindowSubComCardFPv(self->tech_win) != 0) {
            self->state = 11;
        }
        break;
    case 11:
        update_cursor__10TObjPlayerFPvi(player, get_selected_menu_value(self->tech_win));
        if (BACK_PRESSED(idx)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (try_equip_item__10TObjPlayerFii(player, get_selected_menu_value(self->tech_win)) != 0) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        if (TWindowSubTechnique__sub_80286BF4(get_selected_menu_value(self->tech_win), self->player_id) == 0) {
            TWindowShortListCtrl__sub_8026EBB0((Wn_8026EBB0 *) self, (s32) self->tech_win, (Sc_8026EBB0 *) lbl_8044F5A0);
            self->state = 9;
            return;
        }
        break;
    }
    self->timer++;
    if (self->timer < 0) {
        self->timer = 2;
    }
}

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1) {
    s32 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__20TWindowShortListCtrl;
        temp_r3 = get_player_by_client_id((s32)(M2C_FIELD(arg0, s32 *, 0x24)));
        if ((temp_r3 != 0) && (has_player_active_menu__11TWindowCtrlFi(M2C_FIELD(arg0, s32 *, 0x24)) == 0) && (TWindowCtrl__sub_8024A1A8() == 0)) {
            init_parts__10TObjPlayerFPv(temp_r3);
        }
        end_player_keyboard_hold(M2C_FIELD(arg0, s32 *, 0x24));
        clear_flag_8__11TWindowCtrlFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x10, 0xFFFCFFFF);
}
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x78); }

void TWindowShortListCtrl__sub_8026F66C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x7A) = get_cursor_pos__20TWindowShortListCtrlFPv((void*)arg0);
}

s16 get_selected_index__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x7a); }

}
