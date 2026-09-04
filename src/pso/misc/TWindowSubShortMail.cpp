#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_line__19TWindowSubShortMailFPvi(void *arg0, s32 arg1);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK TWindowSubStatusDisp__sub_8025882C(s32, s32);

void advance_line__19TWindowSubShortMailFPvi(void *arg0, s32 arg1) {
    s16 temp_r4;
    temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        TWindowSubStatusDisp__sub_8025882C(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8007B824
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubShortMail__sub_8007B824(void);

extern u16 lbl_805D63FC;

void TWindowSubShortMail__sub_8007B824(void) {
    lbl_805D63FC |= 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B834
#include "types.h"

extern "C" {

s32 TWindowSubShortMail__sub_8007B834(void* p);
void* fn_8007B83C(void* p);

s32 TWindowSubShortMail__sub_8007B834(void* p) { return *(s32*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131998
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 window_request_show(void * a0 = 0);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
s32 TWindowSubTradeMain__sub_80244A4C(void *);
int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p);
int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
int set_field_1c__6TLobbyFPvf(void*);

void TWindowSubShortMail__sub_80131998(void *arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x1C);
    if (!(temp_r3 & 4)) {
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (temp_r3 | 4);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            set_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, void **, 0x24));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, void **, 0x28));
        }
    }
}
void hide_window__19TWindowSubShortMailFPv(void *arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x1C);
    if (temp_r3 & 4) {
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (temp_r3 & 0xFFFFFFFB);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            clear_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, void **, 0x24));
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x1C) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U)) {
            window_request_show(M2C_FIELD(arg0, void **, 0x28));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131AA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_position__19TWindowSubShortMailFPvPv(void *arg0, void *arg1);

extern const f32 lbl_805DB078;
extern const f32 lbl_805DB07C;

void set_position__19TWindowSubShortMailFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), f32 *, 0x30) = (f32) (M2C_FIELD(arg1, f32 *, 0) - lbl_805DB078);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), f32 *, 0x34) = (f32) (M2C_FIELD(arg1, f32 *, 4) - lbl_805DB07C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x50) = 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027E620
#include "types.h"

extern "C" {

void TWindowSubShortMail__sub_8027E620(void* p);
int TLobby__sub_802421C4(void*);
int TWindowSubComCard__sub_8007A8F8(void);
int select_cursor_entry__6TLobbyFPv(void*);

void TWindowSubShortMail__sub_8027E620(void* p) { select_cursor_entry__6TLobbyFPv(*(void**)((char*)p + 0x38)); TWindowSubComCard__sub_8007A8F8(); TLobby__sub_802421C4(*(void**)((char*)p + 0x2c)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027E65C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__19TWindowSubShortMailFPv(void *arg0);
M2C_UNK TLobby__sub_80225828(s32, s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK TWindowSubShortMail__sub_8027FAD0(s32);
s32 TLobby__sub_8001DC24();
s32 realloc_buffer__17TWindowSubComCardFPv(s32);
s32 TLobby__sub_8022598C(s32);
u32 get_lobby_id__6TLobbyFPv();
s32 get_short_mail_ctrl__6TLobbyFv();
M2C_UNK TWindowSubComCard__sub_80225E80(s32, s32);

void close__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;
    s32 var_r29;

    temp_r31 = realloc_buffer__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    TWindowSubComCard__sub_80225E80(temp_r31, TLobby__sub_8001DC24());
    TLobby__sub_80225828(M2C_FIELD(arg0, s32 *, 0x2C), TLobby__sub_8001DC24());
    free__11TOBoss4RockFUi(temp_r31);
    temp_r31_2 = get_short_mail_ctrl__6TLobbyFv();
    for (var_r29 = 0; var_r29 < temp_r31_2; var_r29 += 1) {
        temp_r30 = TLobby__sub_8022598C(var_r29);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == get_lobby_id__6TLobbyFPv()) {
            TWindowSubShortMail__sub_8027FAD0(temp_r30);
            return;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027E6FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_mail_count__19TWindowSubShortMailFPv(void *arg0);
s32 get_mail_ptr__19TWindowSubShortMailFPv();
u32 TLobby__sub_80225924(s32);
s32 select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);

void update_mail_count__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        temp_r3 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x38));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != temp_r3) {
            M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
            if (TLobby__sub_80225924(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
                send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x3C), get_mail_ptr__19TWindowSubShortMailFPv(), 0x482);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027E76C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0);
s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubShortMail__sub_802A58AC(s32, s32, s32, s32, f32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x104), TWindowSubComCard__sub_8026CBB8(0xa3), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x3e), TWindowSubComCard__sub_8026CBB8(0x9f), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027E884
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_menu__19TWindowSubShortMailFv(void);
s32 create_window__19TWindowSubShortMailFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_card_window_area__6TLobbyFv();
s32 get_flag_bit0__6TLobbyFv();
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(s32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(s32, M2C_UNK);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xA2);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x105), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x106), 6, 0);
    if (get_flag_bit0__6TLobbyFv() == 0) {
        set_selected_index__17TWindowSubComCardFPvs(temp_r31, 1);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, TWindowSubShortMail__data_805DD6C8);
    return temp_r31;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;
extern const f32 lbl_805DD6CC;

s32 create_window__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xA1);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    if (get_flag_bit0__6TLobbyFv() != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x105), 0, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_card_window_area__6TLobbyFv(), 0, 0);
    } else {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x106), 0, 0);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_card_window_area__6TLobbyFv(), 0, 0);
    }
    set_flag_40__16TAdChrSelASlotGCFPv(temp_r31);
    set_status_flag_80__12TQuestThreadFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r31, TWindowSubShortMail__data_805DD6C8, lbl_805DD6CC);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027EB10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_keyboard__19TWindowSubShortMailFv(void);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK update_chat_window(s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);

extern s32 lbl_805D53A0;
extern s32 tl_00;

s32 create_keyboard__19TWindowSubShortMailFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, tl_00, 0xC6, 5, 4, lbl_805D53A0);
    }
    update_chat_window(var_r31);
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, TWindowSubComCard__sub_8026CBB8(0xBB));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027EC94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_menu__19TWindowSubShortMailFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_short_mail_ctrl__6TLobbyFv();
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

s32 get_main_phase();
extern const f32 lbl_805DD6D4;

s32 create_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8(0x9A), 3, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x57), 6, 3);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x57), 6, 3);
    }
    if (get_short_mail_ctrl__6TLobbyFv() > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xCE), 6, 7);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xCE), 6, 7);
    }
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x103), 6, 0x13);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x103), 6, 0x13);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD6D4);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027EF24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list_item__19TWindowSubShortMailFPv(void *arg0);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 fn_80267F38(M2C_UNK, M2C_UNK *, M2C_UNK, s16);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_8044FAC4[];

s32 create_list_item__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8(0x9B);
    temp_r31 = fn_80267F38(temp_r3, lbl_8044FAC4, 8, (s16) M2C_FIELD(arg0, s32 *, 0x20));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x2E));
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027EF94
#include "types.h"

extern "C" {

void render__19TWindowSubShortMailFv(void);

void render__19TWindowSubShortMailFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027F8E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TWindowSubShortMailFv(void *arg0, s16 arg1);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK TLobby__sub_8001DA00();
M2C_UNK TLobby__sub_802258C8();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__19TWindowSubShortMail[];

void *__dt__19TWindowSubShortMailFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C));
            M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x48));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x58));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x54));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        TLobby__sub_802258C8();
        TLobby__sub_8001DA00();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027FA38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__19TWindowSubShortMail[];
extern void *lbl_805D3A98;

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A98;
    M2C_FIELD(arg0, void **, 0x34) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x5C) = 0;
    M2C_FIELD(arg0, u32 *, 0x50) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    M2C_FIELD(arg0, u32 *, 0x28) = -1;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027FAF0
#include "types.h"

extern "C" {

void* get_mail_ptr__19TWindowSubShortMailFPv(void* p);
u8 get_field_cc__19TWindowSubShortMailFPv(void* p);

void* get_mail_ptr__19TWindowSubShortMailFPv(void* p) { return (char*)p + 0x20; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027FAF8
#include "types.h"

extern "C" {

u8 get_field_cc__19TWindowSubShortMailFPv(void* p);
void* get_mail_ptr__19TWindowSubShortMailFPv(void* p);

u8 get_field_cc__19TWindowSubShortMailFPv(void* p) { return *(u8*)((char*)p + 0xcc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027FBEC
#include "types.h"

extern "C" {

void TWindowSubShortMail__sub_8027FBEC(void);

void TWindowSubShortMail__sub_8027FBEC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027FBF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__19TWindowSubShortMailFPv(void *arg0);
void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK fn_8027FD94(s32, s16);
M2C_UNK is_player_input_active(s32);

struct VObj_8027FBF0_Base_8027fbf0 { char pad[0x18]; };
struct VObj_8027FBF0 : VObj_8027FBF0_Base_8027fbf0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

void update__19TWindowSubShortMailFPv(void *arg0) {
    is_player_input_active(M2C_FIELD(arg0, s32 *, 0x1C));
    if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        ((VObj_8027FBF0 *) M2C_FIELD(arg0, void **, 0x20))->m7();
    }
    fn_8027FD94(M2C_FIELD(arg0, s32 *, 0x28), TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x24)));
}

extern M2C_UNK lbl_804D1AD0[];

void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D1AD0;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A571C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int TWindowSubShortMail__sub_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
void update_card_slot__17TWindowSubComCardFPv(void* p);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int close__17TWindowSubComCardFPv(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
int queue_destruction__7TObjectFv(void*);

void notify_warp_flag70__19TWindowSubShortMailFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) set_flag70_bit10__16TObjCityMainWarpFPv(m); }

}
#endif
#endif
