#include "pso/misc/TWindowChat.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_8024701C { u8 p0[0x1E]; u16 flags; s32 f20; u8 p24[4]; s32 f28; };

struct Win_802473C8 { u8 pad0[0x1E]; u16 flags; };

#include <stddef.h>
struct RecoveredFields_8024792C_arg0 {
    u8 unknown_0[0x1C];
    u8 field_1C;
    u8 unknown_1D[0x1];
    u16 field_1E;
    u8 * field_20;
    s32 field_24;
    s32 field_28;
    u8 unknown_2C[0x4];
    s32 field_30;
    s32 field_34;
    s32 * field_38;
};

struct RecoveredGlobal_8024775C_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredFields_8024775C_arg0
{
  u8 unknown_0[0x1C];
  u8 field_1C;
  u8 unknown_1D[0x1];
  u16 field_1E;
  s32 field_20;
  u8 unknown_24[0x4];
  s32 field_28;
};

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_80076D9C(void *, int);
s32 get_chat_shortcut(int);
M2C_UNK update_selected_symbol__20TWindowSubSymbolChatFPv();
M2C_UNK open_symbol_chat__11TWindowChatFPv(void *);
s32 is_active__16TKeyBoardControlFPv(int);
s32 is_key_active__16TKeyBoardControlFPv(int);
M2C_UNK export_keyboard_text(int, void *);
M2C_UNK reset_input__11TWindowChatFPv(int);
M2C_UNK update_selected_symbol__20TWindowSubSymbolChatFPv();
M2C_UNK open_symbol_chat__11TWindowChatFPv(void *);
s32 TWindowChat__sub_80247080(u8 *arg0);
s32 get_mode_code__9TWindowDDFPv(int);
s32 TWindowChat__sub_80247128(u8 *arg0);
s32 TWindowChat__sub_8025CB10(s32);
bool TWindowCtrl__sub_8024701C(Win_8024701C *w);
s32 get_player_by_client_id(s32);
extern s32 local_client_id;
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK reset_input__11TWindowChatFPv(int);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK set_flag60_bit200__16TKeyBoardControlFPv(s32);
void update__11TWindowChatFPv(void *arg0);
M2C_UNK clear_flag60_bit200__16TKeyBoardControlFPv(s32);
s32 fn_8002AE08(s32);
void send_chat_shortcut(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
s32 check_flag_100__10TObjPlayerFPv();
s32 get_player_by_client_id(s32);
extern u8 controller_input_state[];
extern s32 local_client_id;
M2C_UNK TKeyBoardControl__sub_8025EC04(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern s32 local_client_id;
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
M2C_UNK end_player_keyboard_hold(s32);
s32 TWindowChat__sub_80247080(u8 *arg0);
s32 TWindowChat__sub_80247128(u8 *arg0);
void handle_input__11TWindowChatFPv(void *arg0);
M2C_UNK reset_input__11TWindowChatFPv(int);
extern s32 local_client_id;
s32 fn_8002AE08(s32);
s32 is_key_held__16TKeyBoardControlFPv(int);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK reset_equip_slots__10TObjPlayerFPv(int);
s32 get_player_by_client_id(s32);
M2C_UNK begin_player_keyboard_hold(void *);
M2C_UNK end_player_keyboard_hold(s32);
s32 TWindowChat__sub_8025CB10(s32);
extern u8 controller_input_state[];
void handle_chat_input__11TWindowChatFPv(u8 *arg0);
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, int);
s32 __nw__7TObjectFUl(int);
s32 construct_symbol_chat_selection(int, void *);
M2C_UNK reset_input__11TWindowChatFPv(int);
M2C_UNK TKeyBoardControl__sub_8025EC04(s32);
s32 TWindowKeyBoardSoft__ct(int, void *, void *);
s32 get_window_layout_position(int);
s32 TWindowDD__ct(int, void *, void *);
extern s32 local_client_id;
void render__11TWindowChatFv(void);
void handle_input__11TWindowChatFPv(void *arg0);
void handle_chat_input__11TWindowChatFPv(u8 *arg0);
s32 TWindowChat__sub_8025CB10(s32);
void run_task__11TWindowChatFv(u8 *arg0);
s32 get_player_by_client_id(s32);
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
void render_shadows__7TObjectFv(void*);
void *__dt__11TWindowChatFv(void *, s16);
M2C_UNK __vt__11TWindowChat[6] = {
    0, 0,
    (M2C_UNK)__dt__11TWindowChatFv,
    (M2C_UNK)run_task__11TWindowChatFv,
    (M2C_UNK)render__11TWindowChatFv,
    (M2C_UNK)render_shadows__7TObjectFv,
};
extern s32 local_client_id;
void *__dt__11TWindowChatFv(void *arg0, s16 arg1);
void *TWindowKeyBoardBase__ct(void *);
void *TWindowKeyBoardHard__ct(void *, void *);
void init_keyboard_text_field(void *, int, int);
void __ct__7TObjectFP7TObject(void *);
s32 __nw__7TObjectFUl(int);
extern M2C_UNK __vt__11TWindowChat[];
extern void *window_chat_type_name_pointer;
void *TWindowChat__ct(void *arg0, void *arg1, void *arg2);
void TWindowChat__sub_80247D2C(void* p);
u8 get_input_mode__11TWindowChatFPv(void* p);
int get_flag__11TWindowChatFPv(void* p);
s32 TWindowChat__sub_80247D50(u8 *arg0);
int get_selected_menu_value(void*);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void*);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int get_status_flag__17TWindowSubComCardFPv(void*);
int TWindowChat__sub_80247DAC(void* p);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);
int is_mode_bit6__11TWindowChatFPv(void* p);
void TWindowChat__sub_80247DFC(u8 *arg0);
int is_visible__11TWindowChatFPv(void* p);
M2C_UNK flush_if_flagged__11TWindowChatFPv(void *);
void TWindowChat__sub_80247E50(u8 *arg0);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
s32 TWindowChat__sub_80247EC0(u8 *arg0);
void fn_80247ED8(void* p);
    extern int chat_help_color_table[];
int TWindowSubSymbolChatHelp__sub_80247EE8(int a0);
}

extern "C" {

void free_icon__18TWindowSubShortCutFPv(void* p);

bool TWindowCtrl__sub_8024701C(Win_8024701C *w) {
    bool r;
    if (TWindowChat__sub_8025CB10(w->f20) != 0) {
        r = true;
    } else if (!(w->flags & 2)) {
        r = true;
    } else {
        r = TWindowChat__sub_80247D50((u8 *)(w->f28)) != 0;
    }
    return r;
}

s32 TWindowChat__sub_80247080(u8 *arg0) {
    s32 *temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3 == NULL) {
        return 0;
    }
    if (TWindowChat__sub_80247DAC((void*)(temp_r3)) != 0) {
        set_input_active__11TWindowChatFPv((void*)((void *) (arg0)));
        return 1;
    }
    if (get_subcard_field1c__11TWindowChatFPv((void*)(M2C_FIELD(arg0, u8 **, 0x30))) == 0) {
        return 0;
    }
    set_active_flag__11TWindowChatFPv((void*)((void *) (arg0)));
    temp_r31 = (s32 *)(M2C_FIELD(arg0, s32 *, 0x38) + 4);
    *temp_r31 = forward_card_at_1c__11TWindowChatFPv((void*)(M2C_FIELD(arg0, u8 **, 0x30)));
    if (M2C_FIELD(arg0, u16 *, 0x1E) & 0x80) {
        open_symbol_chat__11TWindowChatFPv((void *)((int) (temp_r31)));
        update_selected_symbol__20TWindowSubSymbolChatFPv();
    }
    return 1;
}

s32 TWindowChat__sub_80247128(u8 *arg0) {
    s32 temp_r3_2;
    u32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x34);
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r3_2 = get_mode_code__9TWindowDDFPv((int) (temp_r3));
    if (temp_r3_2 == 0) {
        return 0;
    }
    if (temp_r3_2 == 2) {
        set_input_active__11TWindowChatFPv((void*)((void *) (arg0)));
        return 1;
    }
    if (temp_r3_2 != 1) {
        return 0;
    }
    set_active_flag__11TWindowChatFPv((void*)((void *) (arg0)));
    return 1;
}

}

s32 TWindowChat::submit_keyboard_input() {
    u8 *arg0 = (u8*)this;
    u32 kb = M2C_FIELD(arg0, u32 *, 0x20);
    if (kb == 0U) {
        return 0;
    }
    if (is_active__16TKeyBoardControlFPv((int) kb) != 0) {
        reset_input__11TWindowChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x20)));
        set_input_active__11TWindowChatFPv((void*)((void *) (arg0)));
        return 1;
    }
    if (is_key_active__16TKeyBoardControlFPv((int) (M2C_FIELD(arg0, u32 *, 0x20))) == 0) {
        return 0;
    }
    set_active_flag__11TWindowChatFPv((void*)((void *) (arg0)));
    if (get_flag__11TWindowChatFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x20)))) != 0) {
        TAdSinglePlyChrSelectGC__sub_80076D9C((void *) (M2C_FIELD(arg0, u32 **, 0x38)), (int) (get_chat_shortcut((int) (s8)(get_input_mode__11TWindowChatFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x20))))))));
        if (((u32) *M2C_FIELD(arg0, u32 **, 0x38) == 3U) && (is_mode_bit6__11TWindowChatFPv((void*)((void *) (arg0))) == 0)) {
            open_symbol_chat__11TWindowChatFPv((void *) ((u8 *) M2C_FIELD(arg0, u32 **, 0x38) + 4));
            update_selected_symbol__20TWindowSubSymbolChatFPv();
        }
    } else {
        export_keyboard_text((int) (M2C_FIELD(arg0, u32 *, 0x20)), (void *) ((u8 *) M2C_FIELD(arg0, u32 **, 0x38) + 4));
    }
    reset_input__11TWindowChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x20)));
    return 1;
}

extern "C" {

void update__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;
    if (is_open__11TWindowChatFPv((void*)((void*)((void*)(arg0)))) == 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 1);
        TWindowChat__sub_80247E50((u8 *)(arg0));
        TWindowChat__sub_80247DFC((u8 *)(arg0));
        temp_r3 = get_player_by_client_id(local_client_id);
        if ((temp_r3 != 0) && !(M2C_FIELD(arg0, u16 *, 0x1E) & 2) && (is_mode_bit6__11TWindowChatFPv((void*)(arg0)) != 0)) {
            if (has_player_active_menu__11TWindowCtrlFi(local_client_id) == 0) {
                init_parts__10TObjPlayerFPv(temp_r3);
            }
            end_player_keyboard_hold(local_client_id);
        }
        reset_input__11TWindowChatFPv((int)(M2C_FIELD(arg0, s32 *, 0x20)));
        ((TWindowChat*)((void *)(arg0)))->close_all_children();
        set_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
    }
}

}

void TWindowChat::open_input() {
    void *arg0 = this;
    if (is_open__11TWindowChatFPv((void*)((void*)((void*)(arg0)))) != 0) {
        TWindowChat__sub_80247E50((u8 *)(arg0));
        TWindowChat__sub_80247DFC((u8 *)(arg0));
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFE);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
        clear_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
        ((TWindowChat*)((u8 *)(arg0)))->open_next_input_window();
    }
}

extern "C" {

}

void TWindowChat::handle_dpad_shortcuts() {
    Win_802473C8 *arg0 = (Win_802473C8*)this;
    void *pad;
    if (arg0->flags & 8) {
        return;
    }
    pad = controller_input_state + 0x20;
    if (TWindowShortListCtrl__check_controller_button(pad, 0xF0) == 0) {
        return;
    }
    if (((void *(*)(s32))get_player_by_client_id)(local_client_id) == NULL) {
        return;
    }
    if (check_flag_100__10TObjPlayerFPv() != 0) {
        return;
    }
    if (is_on_current_screen__11TCameraCtrlFPv(pad, fn_8002AE08(local_client_id)) == 0) {
        if (TWindowShortListCtrl__check_controller_button(pad, 0x10) != 0) {
            send_chat_shortcut(0);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x20) != 0) {
            send_chat_shortcut(3);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x80) != 0) {
            send_chat_shortcut(1);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x40) != 0) {
            send_chat_shortcut(2);
        }
    } else {
        if (TWindowShortListCtrl__check_controller_button(pad, 0x10) != 0) {
            send_chat_shortcut(4);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x20) != 0) {
            send_chat_shortcut(7);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x80) != 0) {
            send_chat_shortcut(5);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x40) != 0) {
            send_chat_shortcut(6);
        }
    }
}

extern "C" {

}

void TWindowChat::close_all_children() {
    void *arg0 = this;
    TKeyBoardControl__sub_8025EC04(M2C_FIELD(arg0, s32 *, 0x28));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x24));
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    }
}

extern "C" {

void handle_input__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;
    u8 temp_r0;
    temp_r3 = get_player_by_client_id(local_client_id);
    if (temp_r3 != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x1E) & 2) {
            ((TWindowChat*)((Win_802473C8 *)(arg0)))->handle_dpad_shortcuts();
            if (((TWindowChat*)((u8 *)(arg0)))->submit_keyboard_input() != 0) {
                ((TWindowChat*)((void *)((void *)(arg0))))->close_all_children();
            }
        } else {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
            switch ((s8) temp_r0) {
            case 0:
                if ((((TWindowChat*)((u8 *)(arg0)))->submit_keyboard_input() != 0) && (TWindowChat__sub_80247EC0((u8 *)(arg0)) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv((void*)(arg0)) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    ((TWindowChat*)((void *)((void *)(arg0))))->close_all_children();
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 1:
                if ((TWindowChat__sub_80247128((u8 *)(arg0)) != 0) && (TWindowChat__sub_80247EC0((u8 *)(arg0)) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv((void*)(arg0)) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    ((TWindowChat*)((void *)((void *)(arg0))))->close_all_children();
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 2:
                if ((TWindowChat__sub_80247080((u8 *)(arg0)) != 0) && (TWindowChat__sub_80247EC0((u8 *)(arg0)) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv((void*)(arg0)) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    ((TWindowChat*)((void *)((void *)(arg0))))->close_all_children();
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                }
                break;
            }
        }
    }
}

void handle_chat_input__11TWindowChatFPv(u8 *arg0) {
  u8 temp_r3_2;
  u8 *temp_r30;
  s32 temp_r3;
  temp_r3 = get_player_by_client_id((s32)((void *) local_client_id));
  if (temp_r3 != 0)
  {
    if (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E & 2)
    {
      temp_r30 = ((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20;
      if ((TWindowShortListCtrl__check_controller_button((void *)((void *) temp_r30), (s32)((int) 0x200)) != 0) && (is_on_current_screen__11TCameraCtrlFPv((void *)((int) temp_r30), (s32)((void *) fn_8002AE08((s32)((void *) local_client_id)))) == 0))
      {
        ((RecoveredFields_8024775C_arg0 *) arg0)->field_1E = (u16) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E & 0xFFFFFFFD);
        ((TWindowChat*)((void *) arg0))->close_all_children();
        ((TWindowChat*)((u8 *)((void *)((u8 *)((void *) arg0)))))->open_next_input_window();
        if (is_mode_bit6__11TWindowChatFPv((void*)((void *) arg0)) != 0)
        {
          begin_player_keyboard_hold((void *) local_client_id);
          reset_equip_slots__10TObjPlayerFPv((int) temp_r3);
        }
      }
    }
    else
      if ((is_key_held__16TKeyBoardControlFPv((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_28) == 0) || ((TWindowChat__sub_80247EC0((u8 *)((void *) arg0)) != 0) && (TWindowShortListCtrl__check_controller_button((void *)((void *) (((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20)), (s32)((int) 0x200)) != 0)))
    {
      if ((TWindowChat__sub_80247EC0((u8 *)((void *) arg0)) != 0) && (TWindowShortListCtrl__check_controller_button((void *)((void *) (((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20)), (s32)((int) 0x200)) != 0))
      {
        reset_input__11TWindowChatFPv((int)((void *)((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_20)));
      }
      ((TWindowChat*)((void *) arg0))->close_all_children();
      ((RecoveredFields_8024775C_arg0 *) arg0)->field_1E = (u16) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E | 2);
      ((TWindowChat*)((u8 *)((void *)((u8 *)((void *) arg0)))))->open_next_input_window();
      if (is_mode_bit6__11TWindowChatFPv((void*)((void *) arg0)) != 0)
      {
        init_parts__10TObjPlayerFPv((s32)((int) temp_r3));
        end_player_keyboard_hold((s32)((void *) local_client_id));
      }
    }
    else
      if ((TWindowShortListCtrl__check_controller_button((void *)((void *) (((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20)), (s32)((int) 0x400)) != 0) && (TWindowChat__sub_8025CB10((s32)((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_20)) == 0))
    {
      ((TWindowChat*)((void *) arg0))->close_all_children();
      ((RecoveredFields_8024775C_arg0 *) arg0)->field_1C = (u8) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1C + 1);
      temp_r3_2 = ((RecoveredFields_8024775C_arg0 *) arg0)->field_1C;
      if (((s8) temp_r3_2) >= 3)
      {
        ((RecoveredFields_8024775C_arg0 *) arg0)->field_1C = (u8) (temp_r3_2 - 3);
      }
      ((TWindowChat*)((u8 *)((void *)((u8 *)((void *) arg0)))))->open_next_input_window();
    }
  }
}

}

void TWindowChat::open_next_input_window() {
    u8 *arg0 = (u8*)this;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    u8 temp_r0;
    if (((RecoveredFields_8024792C_arg0 *)arg0)->field_1E & 2) {
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 1;
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20 + 0x30), (int) (get_window_layout_position((int) (0xB7))));
        M2C_FIELD(((RecoveredFields_8024792C_arg0 *)arg0)->field_20, s32 *, 0x50) = 3;
        return;
    }
    temp_r0 = ((RecoveredFields_8024792C_arg0 *)arg0)->field_1C;
    switch ((s8) temp_r0) {
    case 0:
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 1;
        temp_r3 = __nw__7TObjectFUl((int) (0x70));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = TWindowKeyBoardSoft__ct((int) (temp_r3), (void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20), (void *) (local_client_id));
        }
        ((RecoveredFields_8024792C_arg0 *)arg0)->field_24 = var_r0;
        fn_80247ED8((void*)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_24)));
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20 + 0x30), (int) (get_window_layout_position((int) (0xB8))));
        M2C_FIELD(((RecoveredFields_8024792C_arg0 *)arg0)->field_20, s32 *, 0x50) = 3;
        TKeyBoardControl__sub_8025EC04((s32)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_28)));
        return;
    case 1:
        ((s32)reset_input__11TWindowChatFPv((int)((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20))));
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 2;
        temp_r3_2 = __nw__7TObjectFUl((int) (0x108));
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0) {
            var_r0_2 = TWindowDD__ct((int) (temp_r3_2), (void *) (arg0), (void *) (((u8 *)(((RecoveredFields_8024792C_arg0 *)arg0)->field_38)) + 4));
        }
        ((RecoveredFields_8024792C_arg0 *)arg0)->field_34 = var_r0_2;
        TKeyBoardControl__sub_8025EC04((s32)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_28)));
        return;
    case 2:
        ((s32)reset_input__11TWindowChatFPv((int)((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20))));
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 3;
        temp_r3_3 = __nw__7TObjectFUl((int) (0x24));
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0) {
            var_r0_3 = construct_symbol_chat_selection((int) (temp_r3_3), (void *) (arg0));
        }
        ((RecoveredFields_8024792C_arg0 *)arg0)->field_30 = var_r0_3;
        TKeyBoardControl__sub_8025EC04((s32)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_28)));
        return;
    }
}

extern "C" {

}

void TWindowChat::render() {  }

extern "C" {

}

void TWindowChat::run_task() {
    u8 *arg0 = (u8*)this;
    if ((((int)is_open__11TWindowChatFPv((void*)((void*)((void*)arg0)))) == 0) && (is_mode_bit4__11TWindowChatFPv((void*)((void*)((void *) (arg0)))) == 0) && (is_visible__11TWindowChatFPv((void*)((void*)((void *) (arg0)))) == 0)) {
        handle_chat_input__11TWindowChatFPv((u8 *)((void *) (arg0)));
        handle_input__11TWindowChatFPv((void *) (arg0));
        if (TWindowChat__sub_8025CB10((s32)((int) ((s32)composer))) != 0) {
            flags = (u16) (flags | 4);
            return;
        }
        flags = (u16) (flags & 0xFFFFFFFB);
    }
}

extern "C" {

}

extern "C" {
void *__dt__11TWindowChatFv(void *arg0, s16 arg1) {
    s32 temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowChat;
        temp_r3 = get_player_by_client_id(local_client_id);
        if (temp_r3 != 0) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1E) & 2)) {
                if (is_mode_bit6__11TWindowChatFPv((void*)((void *)(arg0))) != 0) {
                    init_parts__10TObjPlayerFPv(temp_r3);
                    end_player_keyboard_hold(local_client_id);
                }
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x28));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}

extern "C" {

void *TWindowChat__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowChat;
    M2C_FIELD(arg0, void **, 0x0) = window_chat_type_name_pointer;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 2;
    o = ((void *)__nw__7TObjectFUl(0xB8));
    if (o != NULL) {
        o = TWindowKeyBoardBase__ct(o);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    init_keyboard_text_field(M2C_FIELD(arg0, void **, 0x20), 200, 2);
    o2 = ((void *)__nw__7TObjectFUl(0x74));
    if (o2 != NULL) {
        o2 = TWindowKeyBoardHard__ct(o2, M2C_FIELD(arg0, void **, 0x20));
    }
    M2C_FIELD(arg0, void **, 0x28) = o2;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, void **, 0x38) = arg2;
    ((TWindowChat*)((u8 *)(arg0)))->open_next_input_window();
    return arg0;
}

void TWindowChat__sub_80247D2C(void* p) { *(u16*)((char*)p + 0x62) |= 0x4; }

u8 get_input_mode__11TWindowChatFPv(void* p) { return *(u8*)((char*)p + 0x65); }

int get_flag__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 6) & 0x1; }

s32 TWindowChat__sub_80247D50(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68) > 0;
}

int forward_card_at_1c__11TWindowChatFPv(void* p) { return get_selected_menu_value(*(void**)((char*)p + 0x1c)); }

int get_subcard_field1c__11TWindowChatFPv(void* p) { return is_visible__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }

int TWindowChat__sub_80247DAC(void* p) { return get_status_flag__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }

void set_active_flag__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x10; }

void set_input_active__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x20; }

int is_mode_bit6__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 6) & 0x1; }

void TWindowChat__sub_80247DFC(u8 *arg0) {
    if (is_visible__11TWindowChatFPv((void*)((void*)arg0)) != 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFFFFDF);
        ((TWindowChat*)((u8 *)((void *) (arg0))))->open_next_input_window();
    }
}

int is_visible__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 5) & 0x1; }

void TWindowChat__sub_80247E50(u8 *arg0) {
    if (is_mode_bit4__11TWindowChatFPv((void*)((void*)arg0)) != 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFFFFEF);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            flush_if_flagged__11TWindowChatFPv(M2C_FIELD(arg0, void **, 0x20));
        }
        ((TWindowChat*)((u8 *)((void *) (arg0))))->open_next_input_window();
    }
}

int is_mode_bit4__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 4) & 0x1; }

int is_open__11TWindowChatFPv(void* p) { return *(u16*)((char*)p + 0x1e) & 0x1; }

s32 TWindowChat__sub_80247EC0(u8 *arg0) {
    return (u8) ((M2C_FIELD(arg0, u16 *, 0x1E) & 0x240) != 0);
}

void fn_80247ED8(void* p) { *(u32*)((char*)p + 0x60) |= 0x2; }

int TWindowSubSymbolChatHelp__sub_80247EE8(int a0) {  return chat_help_color_table[a0]; }

typedef char RecoveredFields_8024792C_arg0_1C_offset[offsetof(RecoveredFields_8024792C_arg0, field_1C) == 0x1C ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_1E_offset[offsetof(RecoveredFields_8024792C_arg0, field_1E) == 0x1E ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_20_offset[offsetof(RecoveredFields_8024792C_arg0, field_20) == 0x20 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_24_offset[offsetof(RecoveredFields_8024792C_arg0, field_24) == 0x24 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_28_offset[offsetof(RecoveredFields_8024792C_arg0, field_28) == 0x28 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_30_offset[offsetof(RecoveredFields_8024792C_arg0, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_34_offset[offsetof(RecoveredFields_8024792C_arg0, field_34) == 0x34 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_38_offset[offsetof(RecoveredFields_8024792C_arg0, field_38) == 0x38 ? 1 : -1];

typedef struct RecoveredFields_8024775C_arg0 RecoveredFields_8024775C_arg0;
typedef struct RecoveredGlobal_8024775C_lbl_8050E208 RecoveredGlobal_8024775C_lbl_8050E208;
typedef char RecoveredGlobal_8024775C_lbl_8050E208_size[((sizeof(RecoveredGlobal_8024775C_lbl_8050E208)) == 0x1B0) ? (1) : (-1)];

}
