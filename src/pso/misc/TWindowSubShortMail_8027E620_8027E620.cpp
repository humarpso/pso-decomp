#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
s32 TWindowSubShortMail__sub_8027E9FC(void);
s32 get_main_phase();
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
extern const f32 TWindowSubShortMail__data_805DD6C8;
s32 TWindowSubShortMail__sub_8027EB90(void);
}

extern "C" {

void TWindowSubShortMail__sub_8027E620(void* p);
void close__19TWindowSubShortMailFPv(void *arg0);
s32 create_keyboard__19TWindowSubShortMailFv(void);
s32 create_list_item__19TWindowSubShortMailFPv(void *arg0);
s32 create_menu__19TWindowSubShortMailFv(void);
s32 create_window__19TWindowSubShortMailFv(void);
s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0);
s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0);
s32 open_menu__19TWindowSubShortMailFv(void);
void update_mail_count__19TWindowSubShortMailFPv(void *arg0);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 TLobby__sub_8001DC24();
M2C_UNK TLobby__sub_80225828(s32, s32);
u32 TLobby__sub_80225924(s32);
s32 TLobby__sub_8022598C(s32);
int TLobby__sub_802421C4(void*);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
int TWindowSubComCard__sub_8007A8F8(void);
M2C_UNK TWindowSubComCard__sub_80225E80(s32, s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubShortMail__sub_8027FAD0(s32);
M2C_UNK TWindowSubShortMail__sub_802A58AC(s32, s32, s32, s32, f32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 fn_80267F38(M2C_UNK, M2C_UNK *, M2C_UNK, s16);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_card_window_area__6TLobbyFv();
s32 get_flag_bit0__6TLobbyFv();
u32 get_lobby_id__6TLobbyFPv();
s32 get_mail_ptr__19TWindowSubShortMailFPv();
s32 get_main_phase();
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_short_mail_ctrl__6TLobbyFv();
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
s32 realloc_buffer__17TWindowSubComCardFPv(s32);
int select_cursor_entry__6TLobbyFPv(void*);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(s32);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(s32, M2C_UNK);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK update_chat_window(s32);

void TWindowSubShortMail__sub_8027E620(void* p) { select_cursor_entry__6TLobbyFPv((void*)(*(void**)((char*)p + 0x38))); TWindowSubComCard__sub_8007A8F8(); TLobby__sub_802421C4(*(void**)((char*)p + 0x2c)); }

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

void update_mail_count__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        temp_r3 = select_cursor_entry__6TLobbyFPv((void*)(M2C_FIELD(arg0, s32 *, 0x38)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != temp_r3) {
            M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
            if (TLobby__sub_80225924(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
                send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x3C), get_mail_ptr__19TWindowSubShortMailFPv(), 0x482);
            }
        }
    }
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x104), TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xa3)), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x3e), TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0x9f)), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xA2));
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

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xA1));
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

extern s32 lbl_805D53A0;
extern s32 tl_00;

s32 TWindowSubShortMail__sub_8027E9FC(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((M2C_UNK)((void *)(((M2C_UNK)TWindowSubComCard__sub_8026CBB8((int) (0xA0))))), (M2C_UNK)((int) (2)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x107)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (0x16)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x108)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (0x18)));
    set_flag70_bit10__16TObjCityMainWarpFPv((s32)((int) (temp_r31)));
    TWindowSubComCard__sub_80265E60((s32)((int) (temp_r31)), (f32) (TWindowSubShortMail__data_805DD6C8));
    return temp_r31;
}

s32 create_keyboard__19TWindowSubShortMailFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, tl_00, 0xC6, 5, 4, lbl_805D53A0);
    }
    update_chat_window(var_r31);
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern const f32 lbl_805DD6D4;

#pragma push
#pragma fp_contract on
s32 TWindowSubShortMail__sub_8027EB90(void) {
    s32 temp_r31;
    s32 msg;
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii((s32)(TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0x9D))), (M2C_UNK)(3), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x1E)));
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x7F), 6, 0xB);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x7F), 6, 0xB);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 0x11);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, TWindowSubShortMail__data_805DD6C8);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}
#pragma pop

s32 create_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0x9A)), 3, get_message_10__20TWindowSubStatusDispFPv(0x1D));
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

extern M2C_UNK lbl_8044FAC4[];

s32 create_list_item__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0x9B));
    temp_r31 = fn_80267F38(temp_r3, lbl_8044FAC4, 8, (s16) M2C_FIELD(arg0, s32 *, 0x20));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x2E));
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    return temp_r31;
}

}
