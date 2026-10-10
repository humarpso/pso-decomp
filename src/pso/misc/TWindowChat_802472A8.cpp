#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_802473C8 { u8 pad0[0x1E]; u16 flags; };

extern "C" {
s32 fn_8002AE08(s32);
void send_chat_shortcut(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
s32 check_flag_100__10TObjPlayerFPv();
s32 get_player_by_client_id(s32);
extern u8 controller_input_state[];
extern s32 local_client_id;
void handle_dpad_shortcuts__11TWindowChatFPv(Win_802473C8 *arg0);
}

extern "C" {

void update__11TWindowChatFPv(void *arg0);
void open_input__11TWindowChatFPv(void *arg0);
s32 get_player_by_client_id(s32);
M2C_UNK close_all_children__11TWindowChatFPv(void *);
M2C_UNK open_next_input_window__11TWindowChatFPv(void *);
s32 is_mode_bit6__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_80247DFC(void *);
M2C_UNK TWindowChat__sub_80247E50(void *);
s32 is_open__11TWindowChatFPv();
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK reset_input__11TWindowChatFPv(s32);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
M2C_UNK clear_flag60_bit200__16TKeyBoardControlFPv(s32);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK set_flag60_bit200__16TKeyBoardControlFPv(s32);

extern s32 local_client_id;

void update__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;

    if (is_open__11TWindowChatFPv() == 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 1);
        TWindowChat__sub_80247E50(arg0);
        TWindowChat__sub_80247DFC(arg0);
        temp_r3 = get_player_by_client_id(local_client_id);
        if ((temp_r3 != 0) && !(M2C_FIELD(arg0, u16 *, 0x1E) & 2) && (is_mode_bit6__11TWindowChatFPv(arg0) != 0)) {
            if (has_player_active_menu__11TWindowCtrlFi(local_client_id) == 0) {
                init_parts__10TObjPlayerFPv(temp_r3);
            }
            end_player_keyboard_hold(local_client_id);
        }
        reset_input__11TWindowChatFPv(M2C_FIELD(arg0, s32 *, 0x20));
        close_all_children__11TWindowChatFPv(arg0);
        set_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
    }
}

void open_input__11TWindowChatFPv(void *arg0) {
    if (is_open__11TWindowChatFPv() != 0) {
        TWindowChat__sub_80247E50(arg0);
        TWindowChat__sub_80247DFC(arg0);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFE);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
        clear_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
        open_next_input_window__11TWindowChatFPv(arg0);
    }
}
void handle_dpad_shortcuts__11TWindowChatFPv(Win_802473C8 *arg0) {
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

}
