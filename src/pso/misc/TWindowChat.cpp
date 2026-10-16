#include "pso/misc/TWindowChat.h"
#include "pso/misc/TWindowMenu.h"
#include "types.h"

struct Win_8024701C { u8 p0[0x1E]; u16 flags; s32 f20; u8 p24[4]; s32 f28; };

struct Win_802473C8 { u8 pad0[0x1E]; u16 flags; };

#include <stddef.h>
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubShortCut.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
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
  s32 value;
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
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(void *, int);
s32 get_chat_shortcut(int);
s32 update_selected_symbol__20TWindowSubSymbolChatFv();
s32 is_active__16TKeyBoardControlFPv(int);
s32 is_key_active__16TKeyBoardControlFPv(int);
s32 export_keyboard_text(int, void *);
s32 reset_input__11TWindowChatFv(int);
s32 update_selected_symbol__20TWindowSubSymbolChatFv();
s32 sub_80247080__11TWindowChatFv(u8 *arg0);
s32 sub_80247128__11TWindowChatFv(u8 *arg0);
s32 sub_8025CB10__19TWindowKeyBoardBaseFv(s32);
bool TWindowCtrl__sub_8024701C(Win_8024701C *w);
s32 get_player_by_client_id(s32);
extern s32 local_client_id;
s32 end_player_keyboard_hold(s32);
s32 reset_input__11TWindowChatFv(int);
s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 init_parts__10TObjPlayerFPv(s32);
s32 set_flag60_bit200__16TKeyBoardControlFPv(s32);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(s32);
s32 fn_8002AE08(s32);
void send_chat_shortcut(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFv(void *, s32);
s32 check_flag_100__10TObjPlayerFPv();
s32 get_player_by_client_id(s32);
extern u8 controller_input_state[];
extern s32 local_client_id;
s32 TKeyBoardControl__sub_8025EC04(s32);
s32 TWindow__close(void *);
s32 queue_destruction__7TObjectFv(void *);
extern s32 local_client_id;
s32 init_parts__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
s32 end_player_keyboard_hold(s32);
s32 sub_80247080__11TWindowChatFv(u8 *arg0);
s32 sub_80247128__11TWindowChatFv(u8 *arg0);
s32 reset_input__11TWindowChatFv(int);
extern s32 local_client_id;
s32 fn_8002AE08(s32);
s32 is_key_held__16TKeyBoardControlFPv(int);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFv(void *, s32);
s32 init_parts__10TObjPlayerFPv(s32);
s32 reset_equip_slots__10TObjPlayerFPv(int);
s32 get_player_by_client_id(s32);
s32 begin_player_keyboard_hold(void *);
s32 end_player_keyboard_hold(s32);
s32 sub_8025CB10__19TWindowKeyBoardBaseFv(s32);
extern u8 controller_input_state[];
s32 __nw__7TObjectFUl(int);
s32 construct_symbol_chat_selection(int, void *);
s32 reset_input__11TWindowChatFv(int);
s32 TKeyBoardControl__sub_8025EC04(s32);
s32 TWindowKeyBoardSoft__ct(int, void *, void *);
s32 get_window_layout_position(int);
s32 TWindowDD__ct(int, void *, void *);
extern s32 local_client_id;
void render__11TWindowChatFv(void);
s32 sub_8025CB10__19TWindowKeyBoardBaseFv(s32);
void run_task__11TWindowChatFv(u8 *arg0);
s32 get_player_by_client_id(s32);
s32 end_player_keyboard_hold(s32);
s32 TWindow__close(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 init_parts__10TObjPlayerFPv(s32);
s32 queue_destruction__7TObjectFv(void *);
void render_shadows__7TObjectFv(void*);
void *__dt__11TWindowChatFv(void *, s16);
extern s32 __vt__11TWindowChat[];
extern s32 local_client_id;
void *__dt__11TWindowChatFv(void *arg0, s16 arg1);
void *TWindowKeyBoardBase__ct(void *);
void *TWindowKeyBoardHard__ct(void *, void *);
void init_keyboard_text_field(void *, int, int);
void __ct__7TObjectFP7TObject(void *);
s32 __nw__7TObjectFUl(int);
extern s32 __vt__11TWindowChat[];
extern void *window_chat_type_name_pointer;
void *TWindowChat__ct(void *arg0, void *arg1, void *arg2);
void TWindowChat__sub_80247D2C(void* p);
s32 TWindowChat__sub_80247D50(u8 *arg0);
int get_selected_menu_value(void*);
int TWindowChat__sub_80247DAC(void* p);
void TWindowChat__sub_80247DFC(u8 *arg0);
void TWindowChat__sub_80247E50(u8 *arg0);
s32 sub_80247EC0__11TWindowChatFv(u8 *arg0);
void fn_80247ED8(void* p);
    extern int chat_help_color_table[];
int TWindowSubSymbolChatHelp__sub_80247EE8(int a0);
}

extern "C" {

bool TWindowCtrl__sub_8024701C(Win_8024701C *w) {
    bool r;
    if (sub_8025CB10__19TWindowKeyBoardBaseFv(w->f20) != 0) {
        r = true;
    } else if (!(w->flags & 2)) {
        r = true;
    } else {
        r = TWindowChat__sub_80247D50((u8 *)(w->f28)) != 0;
    }
    return r;
}

s32 TWindowChat::sub_80247080() {
    s32 *temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x30));
    if (temp_r3 == NULL) {
        return 0;
    }
    if (TWindowChat__sub_80247DAC((void*)(temp_r3)) != 0) {
        ((TWindowChat *)((u8 *)this))->set_input_active();
        return 1;
    }
    if (((TWindowChat *)(*(u8 **)((s8 *)((u8 *)this) + 0x30)))->get_subcard_field1c() == 0) {
        return 0;
    }
    ((TWindowChat *)((u8 *)this))->set_active_flag();
    temp_r31 = (s32 *)(*(s32 *)((s8 *)((u8 *)this) + 0x38) + 4);
    *temp_r31 = ((TWindowChat *)(*(u8 **)((s8 *)((u8 *)this) + 0x30)))->forward_card_at_1c();
    if (*(u16 *)((s8 *)((u8 *)this) + 0x1E) & 0x80) {
        TWindowChat::open_symbol_chat((s32 *)temp_r31);
        update_selected_symbol__20TWindowSubSymbolChatFv();
    }
    return 1;
}

s32 TWindowChat::sub_80247128() {
    s32 temp_r3_2;
    u32 temp_r3;
    temp_r3 = *(u32 *)((s8 *)((u8 *)this) + 0x34);
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r3_2 = ((TWindowDD *)temp_r3)->get_mode_code();
    if (temp_r3_2 == 0) {
        return 0;
    }
    if (temp_r3_2 == 2) {
        ((TWindowChat *)((u8 *)this))->set_input_active();
        return 1;
    }
    if (temp_r3_2 != 1) {
        return 0;
    }
    ((TWindowChat *)((u8 *)this))->set_active_flag();
    return 1;
}

}

s32 TWindowChat::submit_keyboard_input() {
    u8 *arg0 = (u8*)this;
    u32 kb = *(u32 *)&this->composer;
    if (kb == 0U) {
        return 0;
    }
    if (is_active__16TKeyBoardControlFPv((int) kb) != 0) {
        reset_input__11TWindowChatFv((int) (*(u32 *)&this->composer));
        ((TWindowChat *)arg0)->set_input_active();
        return 1;
    }
    if (is_key_active__16TKeyBoardControlFPv((int) (*(u32 *)&this->composer)) == 0) {
        return 0;
    }
    ((TWindowChat *)arg0)->set_active_flag();
    if (((TWindowChat *)(*(u32 *)&this->composer))->get_flag() != 0) {
        TAdSinglePlyChrSelectGC__sub_80076D9C((void *) (*(u32 * *)&this->result), (int) (get_chat_shortcut((int) (s8)(((TWindowChat *)(*(u32 *)&this->composer))->get_input_mode()))));
        if (((u32) **(u32 * *)&this->result == 3U) && (((TWindowChat *)arg0)->is_mode_bit6() == 0)) {
            TWindowChat::open_symbol_chat((s32 *)((u8 *) *(u32 * *)&this->result + 4));
            update_selected_symbol__20TWindowSubSymbolChatFv();
        }
    } else {
        export_keyboard_text((int) (*(u32 *)&this->composer), (void *) ((u8 *) *(u32 * *)&this->result + 4));
    }
    reset_input__11TWindowChatFv((int) (*(u32 *)&this->composer));
    return 1;
}

extern "C" {

void TWindowChat::update() {
    s32 temp_r3;
    if (is_open() == 0) {
        this->flags = (u16) (this->flags | 1);
        TWindowChat__sub_80247E50((u8 *)(this));
        TWindowChat__sub_80247DFC((u8 *)(this));
        temp_r3 = get_player_by_client_id(local_client_id);
        if ((temp_r3 != 0) && !(this->flags & 2) && (is_mode_bit6() != 0)) {
            if (has_player_active_menu__11TWindowCtrlFv(local_client_id) == 0) {
                init_parts__10TObjPlayerFPv(temp_r3);
            }
            end_player_keyboard_hold(local_client_id);
        }
        reset_input__11TWindowChatFv((int)(*(s32 *)&this->composer));
        ((TWindowChat*)((void *)(this)))->close_all_children();
        set_flag60_bit200__16TKeyBoardControlFPv(*(s32 *)&this->hardKeyboard);
    }
}

}

void TWindowChat::open_input() {
    void *arg0 = this;
    if (((TWindowChat *)arg0)->is_open() != 0) {
        TWindowChat__sub_80247E50((u8 *)(arg0));
        TWindowChat__sub_80247DFC((u8 *)(arg0));
        *(u16 *)((s8 *)arg0 + 0x1E) = (u16) (*(u16 *)((s8 *)arg0 + 0x1E) & 0xFFFE);
        *(u16 *)((s8 *)arg0 + 0x1E) = (u16) (*(u16 *)((s8 *)arg0 + 0x1E) | 2);
        clear_flag60_bit200__16TKeyBoardControlFPv(*(s32 *)((s8 *)arg0 + 0x28));
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
    if (is_on_current_screen__11TCameraCtrlFv(pad, fn_8002AE08(local_client_id)) == 0) {
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
    TKeyBoardControl__sub_8025EC04(*(s32 *)((s8 *)arg0 + 0x28));
    if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x30));
        *(u32 *)((s8 *)arg0 + 0x30) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x34));
        *(u32 *)((s8 *)arg0 + 0x34) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
        *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x24));
        *(u32 *)((s8 *)arg0 + 0x24) = 0U;
    }
}

extern "C" {

void TWindowChat::handle_input() {
    s32 temp_r3;
    u8 temp_r0;
    temp_r3 = get_player_by_client_id(local_client_id);
    if (temp_r3 != 0) {
        if (this->flags & 2) {
            ((TWindowChat*)((Win_802473C8 *)(this)))->handle_dpad_shortcuts();
            if (((TWindowChat*)((u8 *)(this)))->submit_keyboard_input() != 0) {
                ((TWindowChat*)((void *)((void *)(this))))->close_all_children();
            }
        } else {
            temp_r0 = *(u8 *)((s8 *)this + 0x1C);
            switch ((s8) temp_r0) {
            case 0:
                if ((((TWindowChat*)((u8 *)(this)))->submit_keyboard_input() != 0) && (sub_80247EC0__11TWindowChatFv((u8 *)(this)) != 0)) {
                    if (is_mode_bit6() != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    ((TWindowChat*)((void *)((void *)(this))))->close_all_children();
                    this->flags = (u16) (this->flags | 2);
                    return;
                }
                break;
            case 1:
                if ((sub_80247128__11TWindowChatFv((u8 *)(this)) != 0) && (sub_80247EC0__11TWindowChatFv((u8 *)(this)) != 0)) {
                    if (is_mode_bit6() != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    ((TWindowChat*)((void *)((void *)(this))))->close_all_children();
                    this->flags = (u16) (this->flags | 2);
                    return;
                }
                break;
            case 2:
                if ((sub_80247080__11TWindowChatFv((u8 *)(this)) != 0) && (sub_80247EC0__11TWindowChatFv((u8 *)(this)) != 0)) {
                    if (is_mode_bit6() != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    ((TWindowChat*)((void *)((void *)(this))))->close_all_children();
                    this->flags = (u16) (this->flags | 2);
                }
                break;
            }
        }
    }
}

void TWindowChat::handle_chat_input() {
    u8 *arg0 = (u8 *)this;
  u8 temp_r3_2;
  u8 *temp_r30;
  s32 temp_r3;
  temp_r3 = get_player_by_client_id((s32)((void *) local_client_id));
  if (temp_r3 != 0)
  {
    if (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E & 2)
    {
      temp_r30 = ((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20;
      if ((TWindowShortListCtrl__check_controller_button((void *)((void *) temp_r30), (s32)((int) 0x200)) != 0) && (is_on_current_screen__11TCameraCtrlFv((void *)((int) temp_r30), (s32)((void *) fn_8002AE08((s32)((void *) local_client_id)))) == 0))
      {
        ((RecoveredFields_8024775C_arg0 *) arg0)->field_1E = (u16) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E & 0xFFFFFFFD);
        ((TWindowChat*)((void *) arg0))->close_all_children();
        ((TWindowChat*)((u8 *)((void *)((u8 *)((void *) arg0)))))->open_next_input_window();
        if (is_mode_bit6() != 0)
        {
          begin_player_keyboard_hold((void *) local_client_id);
          reset_equip_slots__10TObjPlayerFPv((int) temp_r3);
        }
      }
    }
    else
      if ((is_key_held__16TKeyBoardControlFPv((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_28) == 0) || ((sub_80247EC0__11TWindowChatFv((u8 *)((void *) arg0)) != 0) && (TWindowShortListCtrl__check_controller_button((void *)((void *) (((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20)), (s32)((int) 0x200)) != 0)))
    {
      if ((sub_80247EC0__11TWindowChatFv((u8 *)((void *) arg0)) != 0) && (TWindowShortListCtrl__check_controller_button((void *)((void *) (((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20)), (s32)((int) 0x200)) != 0))
      {
        reset_input__11TWindowChatFv((int)((void *)((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_20)));
      }
      ((TWindowChat*)((void *) arg0))->close_all_children();
      ((RecoveredFields_8024775C_arg0 *) arg0)->field_1E = (u16) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E | 2);
      ((TWindowChat*)((u8 *)((void *)((u8 *)((void *) arg0)))))->open_next_input_window();
      if (is_mode_bit6() != 0)
      {
        init_parts__10TObjPlayerFPv((s32)((int) temp_r3));
        end_player_keyboard_hold((s32)((void *) local_client_id));
      }
    }
    else
      if ((TWindowShortListCtrl__check_controller_button((void *)((void *) (((u8 *) (&(*(RecoveredGlobal_8024775C_lbl_8050E208 *)&controller_input_state).value)) + 0x20)), (s32)((int) 0x400)) != 0) && (sub_8025CB10__19TWindowKeyBoardBaseFv((s32)((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_20)) == 0))
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
        ((TWindowSubSymbolChatPartsSet *)(((RecoveredFields_8024792C_arg0 *)arg0)->field_20 + 0x30))->copy_vec2((void*)(get_window_layout_position((int) (0xB7))));
        *(s32 *)((s8 *)(((RecoveredFields_8024792C_arg0 *)arg0)->field_20) + 0x50) = 3;
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
        ((TWindowSubSymbolChatPartsSet *)(((RecoveredFields_8024792C_arg0 *)arg0)->field_20 + 0x30))->copy_vec2((void*)(get_window_layout_position((int) (0xB8))));
        *(s32 *)((s8 *)(((RecoveredFields_8024792C_arg0 *)arg0)->field_20) + 0x50) = 3;
        TKeyBoardControl__sub_8025EC04((s32)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_28)));
        return;
    case 1:
        ((s32)reset_input__11TWindowChatFv((int)((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20))));
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
        ((s32)reset_input__11TWindowChatFv((int)((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20))));
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
    if ((((int)((TWindowChat *)arg0)->is_open()) == 0) && (((TWindowChat *)arg0)->is_mode_bit4() == 0) && (((TWindowChat *)arg0)->is_visible() == 0)) {
        ((TWindowChat *)arg0)->handle_chat_input();
        ((TWindowChat *)arg0)->handle_input();
        if (sub_8025CB10__19TWindowKeyBoardBaseFv((s32)((int) ((s32)composer))) != 0) {
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
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TWindowChat;
        temp_r3 = get_player_by_client_id(local_client_id);
        if (temp_r3 != 0) {
            if (!(*(u16 *)((s8 *)arg0 + 0x1E) & 2)) {
                if (((TWindowChat *)arg0)->is_mode_bit6() != 0) {
                    init_parts__10TObjPlayerFPv(temp_r3);
                    end_player_keyboard_hold(local_client_id);
                }
            }
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x34));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x24));
            *(u32 *)((s8 *)arg0 + 0x24) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x28));
            *(u32 *)((s8 *)arg0 + 0x28) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x20) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x20));
            *(u32 *)((s8 *)arg0 + 0x20) = 0U;
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
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TWindowChat;
    *(void **)((s8 *)arg0 + 0x0) = window_chat_type_name_pointer;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    *(u16 *)((s8 *)arg0 + 0x1E) = 2;
    o = ((void *)__nw__7TObjectFUl(0xB8));
    if (o != NULL) {
        o = TWindowKeyBoardBase__ct(o);
    }
    *(void **)((s8 *)arg0 + 0x20) = o;
    init_keyboard_text_field(*(void **)((s8 *)arg0 + 0x20), 200, 2);
    o2 = ((void *)__nw__7TObjectFUl(0x74));
    if (o2 != NULL) {
        o2 = TWindowKeyBoardHard__ct(o2, *(void **)((s8 *)arg0 + 0x20));
    }
    *(void **)((s8 *)arg0 + 0x28) = o2;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(void **)((s8 *)arg0 + 0x38) = arg2;
    ((TWindowChat*)((u8 *)(arg0)))->open_next_input_window();
    return arg0;
}

void TWindowChat__sub_80247D2C(void* p) { *(u16*)((char*)p + 0x62) |= 0x4; }

u8 TWindowChat::get_input_mode() { return *(u8*)((char*)this + 0x65); }

int TWindowChat::get_flag() { return (*(u16*)((char*)this + 0x60) >> 6) & 0x1; }

s32 TWindowChat__sub_80247D50(u8 *arg0) {
    return *(s32 *)((s8 *)arg0 + 0x68) > 0;
}

int TWindowChat::forward_card_at_1c() { return get_selected_menu_value(*(void**)((char*)this + 0x1c)); }

int TWindowChat::get_subcard_field1c() { return ((TWindowMenu *)(*(void**)((char*)this + 0x1c)))->is_visible(); }

int TWindowChat__sub_80247DAC(void* p) { return ((TWindowSubComCard *)(*(void**)((char*)p + 0x1c)))->get_status_flag(); }

void TWindowChat::set_active_flag() { this->flags |= 0x10; }

void TWindowChat::set_input_active() { this->flags |= 0x20; }

int TWindowChat::is_mode_bit6() { return (this->flags >> 6) & 0x1; }

void TWindowChat__sub_80247DFC(u8 *arg0) {
    if (((TWindowChat *)arg0)->is_visible() != 0) {
        *(u16 *)((s8 *)arg0 + 0x1E) = (u16) (*(u16 *)((s8 *)arg0 + 0x1E) & 0xFFFFFFDF);
        ((TWindowChat*)((u8 *)((void *) (arg0))))->open_next_input_window();
    }
}

int TWindowChat::is_visible() { return (this->flags >> 5) & 0x1; }

void TWindowChat__sub_80247E50(u8 *arg0) {
    if (((TWindowChat *)arg0)->is_mode_bit4() != 0) {
        *(u16 *)((s8 *)arg0 + 0x1E) = (u16) (*(u16 *)((s8 *)arg0 + 0x1E) & 0xFFFFFFEF);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x20) != 0U) {
            ((TWindowChat *)(*(void **)((s8 *)arg0 + 0x20)))->flush_if_flagged();
        }
        ((TWindowChat*)((u8 *)((void *) (arg0))))->open_next_input_window();
    }
}

int TWindowChat::is_mode_bit4() { return (this->flags >> 4) & 0x1; }

int TWindowChat::is_open() { return this->flags & 0x1; }

s32 TWindowChat::sub_80247EC0() {
    return (u8) ((*(u16 *)((s8 *)((u8 *)this) + 0x1E) & 0x240) != 0);
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
