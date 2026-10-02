#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_802473C8 { u8 pad0[0x1E]; u16 flags; };

extern "C" {
s32 fn_8002AE08(s32);
void TWindowShortListCtrl__sub_80076D1C(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
s32 check_flag_100__10TObjPlayerFPv();
s32 get_player_by_client_id(s32);
extern u8 lbl_8050E208[];
extern s32 lbl_805D53A0;
void TWindowShortListCtrl__sub_802473C8(Win_802473C8 *arg0);
}

extern "C" {

void update__11TWindowChatFPv(void *arg0);
void open_input__11TWindowChatFPv(void *arg0);
s32 get_player_by_client_id(s32);
M2C_UNK close_all_children__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_8024792C(void *);
s32 is_mode_bit6__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_80247DFC(void *);
M2C_UNK TWindowChat__sub_80247E50(void *);
s32 is_open__11TWindowChatFPv();
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowChat__sub_8025CB70(s32);
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK clear_flag60_bit200__16TKeyBoardControlFPv(s32);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK set_flag60_bit200__16TKeyBoardControlFPv(s32);

extern s32 lbl_805D53A0;

void update__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;

    if (is_open__11TWindowChatFPv() == 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 1);
        TWindowChat__sub_80247E50(arg0);
        TWindowChat__sub_80247DFC(arg0);
        temp_r3 = get_player_by_client_id(lbl_805D53A0);
        if ((temp_r3 != 0) && !(M2C_FIELD(arg0, u16 *, 0x1E) & 2) && (is_mode_bit6__11TWindowChatFPv(arg0) != 0)) {
            if (TWindowCtrl__sub_8024AF74(lbl_805D53A0) == 0) {
                init_parts__10TObjPlayerFPv(temp_r3);
            }
            TWindowChat__sub_8024AD30(lbl_805D53A0);
        }
        TWindowChat__sub_8025CB70(M2C_FIELD(arg0, s32 *, 0x20));
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
        TWindowChat__sub_8024792C(arg0);
    }
}
void TWindowShortListCtrl__sub_802473C8(Win_802473C8 *arg0) {
    void *pad;
    if (arg0->flags & 8) {
        return;
    }
    pad = lbl_8050E208 + 0x20;
    if (TWindowShortListCtrl__check_controller_button(pad, 0xF0) == 0) {
        return;
    }
    if (((void *(*)(s32))get_player_by_client_id)(lbl_805D53A0) == NULL) {
        return;
    }
    if (check_flag_100__10TObjPlayerFPv() != 0) {
        return;
    }
    if (is_on_current_screen__11TCameraCtrlFPv(pad, fn_8002AE08(lbl_805D53A0)) == 0) {
        if (TWindowShortListCtrl__check_controller_button(pad, 0x10) != 0) {
            TWindowShortListCtrl__sub_80076D1C(0);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x20) != 0) {
            TWindowShortListCtrl__sub_80076D1C(3);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x80) != 0) {
            TWindowShortListCtrl__sub_80076D1C(1);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x40) != 0) {
            TWindowShortListCtrl__sub_80076D1C(2);
        }
    } else {
        if (TWindowShortListCtrl__check_controller_button(pad, 0x10) != 0) {
            TWindowShortListCtrl__sub_80076D1C(4);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x20) != 0) {
            TWindowShortListCtrl__sub_80076D1C(7);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x80) != 0) {
            TWindowShortListCtrl__sub_80076D1C(5);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x40) != 0) {
            TWindowShortListCtrl__sub_80076D1C(6);
        }
    }
}

}
