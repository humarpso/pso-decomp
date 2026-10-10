#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_window_layout_position(M2C_UNK);
s32 create_confirm_menu_window__19TWindowSubShortMailFv();
M2C_UNK align_menu_entry_positions(s32);
s32 build_menu__19TWindowSubShortMailFv();
M2C_UNK TWindow__close(void *);
int select_cursor_entry__6TLobbyFPv(void *);
M2C_UNK advance_line__19TWindowSubShortMailFPvi(void *, s32);
u8 get_field_cc__19TWindowSubShortMailFPv(void *);
s32 refresh_mail_list__19TWindowSubShortMailFPvPv(u8 *, void *);
s32 open_confirm_prompt__19TWindowSubShortMailFPvi(void *, s32);
s32 create_keyboard__19TWindowSubShortMailFv();
s32 create_list_item__19TWindowSubShortMailFPv(void *);
s32 create_menu__19TWindowSubShortMailFv();
s32 create_window__19TWindowSubShortMailFv();
s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *);
s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *);
s32 open_menu__19TWindowSubShortMailFv();
u32 find_short_mail_by_id__6TLobbyFUi(s32);
int get_card_entry__17TWindowSubComCardFi();
void TWindowSubShortMail__sub_8027FAD0(u8 *);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 get_card_window_area__6TLobbyFv();
void * get_mail_ptr__19TWindowSubShortMailFPv(void *);
s32 realloc_buffer__17TWindowSubComCardFPv(s32);
}

typedef s32 M2C_UNK;

extern "C" {
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
s32 get_main_phase();
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
extern const f32 TWindowSubShortMail__data_805DD6C8;
s32 fn_8007B83C(s32);
s32 TLobby__sub_8022598C(s32);
u32 get_lobby_id__6TLobbyFPv();
s32 get_short_mail_ctrl__6TLobbyFv();
M2C_UNK clear_lobby_flag__6TLobbyFv();
M2C_UNK clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void *);
M2C_UNK save_cursor_selection__20TShopArmorListWindowFPv(void *);
M2C_UNK reset_list__20TShopArmorListWindowFPv(void *);
M2C_UNK add_status_entry__20TWindowSubStatusDispFPvcii(void *, s32, s32, u32);
M2C_UNK set_cursor_index__20TWindowSubStatusDispFPvs(void *, s16);
void *set_window_mode_4__6TLobbyFPvii(s32, void *, s32);
extern M2C_UNK lbl_8044FACC[];
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
M2C_UNK open_yes_no_prompt(s32, s32, s32, s32, f32);
extern const f32 lbl_805DD6D0;
}

extern "C" {

void TWindowSubShortMail__sub_8027E620(void* p);
void close__19TWindowSubShortMailFPv(void *arg0);
void update_mail_count__19TWindowSubShortMailFPv(void *arg0);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 get_shared_text_buffer();
M2C_UNK send_simple_mail__6TLobbyFiPv(s32, s32);
s32 TLobby__sub_8022598C(s32);
int send_find_user_self_tag__6TLobbyFi(void*);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80225E80(s32, s32);
M2C_UNK open_yes_no_prompt(s32, s32, s32, s32, f32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 fn_80267F38(M2C_UNK, M2C_UNK *, M2C_UNK, s16);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_flag_bit0__6TLobbyFv();
u32 get_lobby_id__6TLobbyFPv();
s32 get_main_phase();
s32 get_short_mail_ctrl__6TLobbyFv();
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(s32);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(s32, M2C_UNK);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK update_chat_window(s32);

void TWindowSubShortMail__sub_8027E620(void* p) { select_cursor_entry__6TLobbyFPv((void*)(*(void**)((char*)p + 0x38))); get_card_entry__17TWindowSubComCardFi(); send_find_user_self_tag__6TLobbyFi(*(void**)((char*)p + 0x2c)); }

void close__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;
    s32 var_r29;

    temp_r31 = realloc_buffer__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    TWindowSubComCard__sub_80225E80(temp_r31, get_shared_text_buffer());
    send_simple_mail__6TLobbyFiPv(M2C_FIELD(arg0, s32 *, 0x2C), get_shared_text_buffer());
    free__11TOBoss4RockFUi(temp_r31);
    temp_r31_2 = get_short_mail_ctrl__6TLobbyFv();
    for (var_r29 = 0; var_r29 < temp_r31_2; var_r29 += 1) {
        temp_r30 = TLobby__sub_8022598C(var_r29);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == get_lobby_id__6TLobbyFPv()) {
            ((M2C_UNK (*)(s32)) TWindowSubShortMail__sub_8027FAD0)(temp_r30);
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
            if (find_short_mail_by_id__6TLobbyFUi(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
                send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x3C), ((s32 (*)()) get_mail_ptr__19TWindowSubShortMailFPv)(), 0x482);
            }
        }
    }
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x104), get_window_layout_position((M2C_UNK)(0xa3)), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x3e), get_window_layout_position((M2C_UNK)(0x9f)), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_window_layout_position((M2C_UNK)(0xA2));
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x105), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x106), 6, 0);
    if (get_flag_bit0__6TLobbyFv() == 0) {
        set_selected_index__17TWindowSubComCardFPvs(temp_r31, 1);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, TWindowSubShortMail__data_805DD6C8);
    return temp_r31;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;
extern const f32 lbl_805DD6CC;

s32 create_window__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_window_layout_position((M2C_UNK)(0xA1));
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

extern s32 local_client_id;
extern s32 tl_00;

s32 create_confirm_menu_window__19TWindowSubShortMailFv(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((M2C_UNK)((void *)(((M2C_UNK)get_window_layout_position((int) (0xA0))))), (M2C_UNK)((int) (2)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x107)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (0x16)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x108)))), (M2C_UNK)((int) (6)), (M2C_UNK)((int) (0x18)));
    set_flag70_bit10__16TObjCityMainWarpFPv((s32)((int) (temp_r31)));
    update_layout_height__17TWindowSubComCardFPvf((s32)((int) (temp_r31)), (f32) (TWindowSubShortMail__data_805DD6C8));
    return temp_r31;
}

s32 open_confirm_prompt__19TWindowSubShortMailFPvi(void *arg0, s32 arg1) {
    s32 temp_r29;
    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, arg1, 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x3f), get_window_layout_position(0x9e), lbl_805DD6D0);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

s32 create_keyboard__19TWindowSubShortMailFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, tl_00, 0xC6, 5, 4, local_client_id);
    }
    update_chat_window(var_r31);
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, get_window_layout_position((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern const f32 lbl_805DD6D4;

#pragma push
#pragma fp_contract on
s32 build_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r31;
    s32 msg;
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii((s32)(get_window_layout_position((M2C_UNK)(0x9D))), (M2C_UNK)(3), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x1E)));
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x7F), 6, 0xB);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x7F), 6, 0xB);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 0x11);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, TWindowSubShortMail__data_805DD6C8);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}
#pragma pop

s32 create_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position((M2C_UNK)(0x9A)), 3, get_message_10__20TWindowSubStatusDispFPv(0x1D));
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
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD6D4);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

extern M2C_UNK lbl_8044FAC4[];

s32 refresh_mail_list__19TWindowSubShortMailFPvPv(u8 *arg0, void *arg1) {
    s32 n;
    u32 id;
    s32 i;
    s16 sel;
    s32 e;
    id = select_cursor_entry__6TLobbyFPv((void*)(arg1));
    sel = -1;
    clear_lobby_flag__6TLobbyFv();
    save_cursor_selection__20TShopArmorListWindowFPv(arg1);
    reset_list__20TShopArmorListWindowFPv(arg1);
    n = get_short_mail_ctrl__6TLobbyFv();
    i = n - 1;
    while (i >= 0) {
        e = TLobby__sub_8022598C(i);
        add_status_entry__20TWindowSubStatusDispFPvcii(arg1, ((s32 (*)(s32)) get_field_cc__19TWindowSubShortMailFPv)(e), fn_8007B83C(e), ((u32 (*)(s32))get_lobby_id__6TLobbyFPv)(e));
        if (id == ((u32 (*)(s32))get_lobby_id__6TLobbyFPv)(e)) {
            sel = (n - 1) - i;
        }
        i--;
    }
    if (n <= 0) {
        advance_line__19TWindowSubShortMailFPvi(arg1, -1);
        if (M2C_FIELD(arg0, void **, 0x3C) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, void **, 0x3C) = 0;
        }
    } else if (M2C_FIELD(arg0, void **, 0x3C) == 0) {
        M2C_FIELD(arg0, void **, 0x3C) = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x9C), lbl_8044FACC, 1);
        M2C_FIELD(arg0, s32 *, 0x24) = -1;
    }
    if (sel == -1) {
        clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(arg1);
        return 0;
    }
    set_cursor_index__20TWindowSubStatusDispFPvs(arg1, sel);
    return 1;
}

s32 create_list_item__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = get_window_layout_position((M2C_UNK)(0x9B));
    temp_r31 = fn_80267F38(temp_r3, lbl_8044FAC4, 8, (s16) M2C_FIELD(arg0, s32 *, 0x20));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x2E));
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    return temp_r31;
}

}

struct VBase_18_8027EF98 { char pad[0x18]; };

struct VObj_18_8027EF98 : VBase_18_8027EF98 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual void m7();
};

struct ShortMail_8027EF98 {
    u8 pad0[0x1C];
    u8 state;
    u8 pad1D[3];
    s32 f20;
    u8 pad24[4];
    s32 f28;
    s32 f2c;
    s32 f30;
    VObj_18_8027EF98 *parent;
    void *w38;
    void *w3c;
    void *w40;
    void *w44;
    void *w48;
    void *w4c;
    void *w50;
    void *w54;
    void *w58;
    void *w5c;
};

extern "C" {
s32 get_camera_id__11TCameraCtrlFv();
s32 create_window_menu(int, int, int);
s32 create_titled_window_menu(int, int, int, int);
extern const f32 lbl_805DD6D8;
s32 create_status_category_menu(u8 *arg0);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
void clear_flag_and_release__17TWindowSubComCardFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_selected_menu_value(s32);
void *send_cmd_133__17TWindowSubComCardFv(void);
void *send_command__17TWindowSubComCardFi(s32);
void update_display_value__17TWindowSubComCardFUiUiPv(void *, void *, void *);
s32 get_card_id__17TWindowSubComCardFPv(void *);
void clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 is_active__19TWindowSubShortMailFv(void);
void update_mail_count__19TWindowSubShortMailFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 get_status_flag__6TLobbyFPv(void *);
void clear_transition_flag__17TWindowSubComCardFPv(void *);
s32 TWindowSubShortMail__sub_8007B834(void *);
void set_position__19TWindowSubShortMailFPvPv(void *, void *);
void free_menu_object(void *);
void hide_window__19TWindowSubShortMailFPv(void *);
s32 is_keyboard_active__17TWindowSubComCardFPv(void *);
s32 update_keyboard__17TWindowSubComCardFPv(void *);
void TWindowSubShortMail__sub_80131998(void *);
s32 get_card_data__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *);
void close__19TWindowSubShortMailFPv(void *);
void TWindowSubShortMail__sub_8027E620(void *p);
void open__17TWindowOptionCtrlFPv(void *);
void remove_short_mail_by_id(s32);
s32 is_active__6TLobbyFv(void);
s32 set_flag_bit0__6TLobbyFi(s32);
void get_keyboard_field_6c__15TWindowMakeTeamFPv(void *, void *);
void set_short_mail_text__6TLobbyFi(void *);
void run_task__19TWindowSubShortMailFv(ShortMail_8027EF98 *o);
}

extern "C" {

struct VObj_8027FBF0_Base_8027fbf0_8027E620 { char pad[0x18]; };
struct VObj_8027FBF0_8027E620 : VObj_8027FBF0_Base_8027fbf0_8027E620 {
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

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2);
void TWindowSubShortMail__sub_8027FBEC(void);
void *__dt__19TWindowSubShortMailFv(void *arg0, s16 arg1);
void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1);
void render__19TWindowSubShortMailFv(void);
void update__19TWindowSubShortMailFPv(void *arg0);
M2C_UNK sync_auto_reply_state__6TLobbyFv();
M2C_UNK TLobby__sub_802258C8();
s32 get_selected_menu_value(s32);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK fn_8027FD94(s32, s16);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
M2C_UNK is_player_input_active(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__19TWindowSubShortMailFv(void) {  }

extern M2C_UNK __vt__19TWindowSubShortMail[];

void run_task__19TWindowSubShortMailFv(ShortMail_8027EF98 *o) {
    switch (o->state) {
    case 0:
    case 1:
        if (o->w48 != NULL) { ((void (*)(void *)) TWindow__close)(o->w48); o->w48 = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w5c != NULL) { queue_destruction__7TObjectFv(o->w5c); o->w5c = NULL; }
        if (o->w38 != NULL) { ((void (*)(void *)) TWindow__close)(o->w38); o->w38 = NULL; }
        if (o->w58 != NULL) { ((void (*)(void *)) TWindow__close)(o->w58); o->w58 = NULL; }
        if (o->w54 != NULL) { ((void (*)(void *)) TWindow__close)(o->w54); o->w54 = NULL; }
        if (o->w40 == NULL) {
            o->w40 = ((void * (*)(void *)) create_menu__19TWindowSubShortMailFv)(o);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w40);
        o->state = 2;
    case 2:
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w40) != 0) {
            o->parent->m7();
            o->state = 0x1C;
        } else if (is_visible__17TWindowSubComCardFPv(o->w40) != 0) {
            o->state = get_selected_menu_value((s32)(o->w40));
        }
        break;
    case 3:
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w54 == NULL) {
            o->w54 = send_cmd_133__17TWindowSubComCardFv();
        }
        if (o->w58 == NULL) {
            o->f28 = get_selected_menu_value((s32)(o->w54));
            o->w58 = send_command__17TWindowSubComCardFi(o->f28);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w54);
        o->state = 4;
    case 4:
        update_display_value__17TWindowSubComCardFUiUiPv(o->w54, o->w58, &o->f28);
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w54) != 0) {
            o->state = 1;
        } else if (is_visible__17TWindowSubComCardFPv(o->w54) != 0) {
            void *p;
            o->f30 = -1;
            p = ((void * (*)(s32)) get_card_entry__17TWindowSubComCardFi)(get_selected_menu_value((s32)(o->w54)));
            if (p != NULL) {
                o->f2c = get_card_id__17TWindowSubComCardFPv(p);
            }
            o->state = 0xB;
        }
        break;
    case 7:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w5c != NULL) { queue_destruction__7TObjectFv(o->w5c); o->w5c = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w38 == NULL) {
            o->w38 = ((void * (*)(void *)) create_list_item__19TWindowSubShortMailFPv)(o);
            ((void (*)(void *, s32)) advance_line__19TWindowSubShortMailFPvi)(o->w38, -1);
        }
        ((s32 (*)(void *, void *)) refresh_mail_list__19TWindowSubShortMailFPvPv)(o, o->w38);
        clear_selected_and_update_entry__14TWindowSubItemFPv(o->w38);
        o->state = 8;
    case 8:
        if (is_active__19TWindowSubShortMailFv() != 0) {
            ((s32 (*)(void *, void *)) refresh_mail_list__19TWindowSubShortMailFPvPv)(o, o->w38);
        }
        update_mail_count__19TWindowSubShortMailFPv(o);
        if (get_flag_bit2__6TLobbyFPv(o->w38) != 0) {
            o->parent->m7();
            o->state = 0x1C;
        } else if (get_status_flag__6TLobbyFPv(o->w38) != 0) {
            o->state = 9;
        }
        break;
    case 9:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w3c != NULL) { ((void (*)(void *)) TWindow__close)(o->w3c); o->w3c = NULL; }
        if (o->w44 == NULL) {
            o->w44 = ((void * (*)(void *)) build_menu__19TWindowSubShortMailFv)(o);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w44);
        clear_transition_flag__17TWindowSubComCardFPv(o->w44);
        o->state = 0xA;
    case 10:
        if (is_active__19TWindowSubShortMailFv() != 0 && ((s32 (*)(void *, void *)) refresh_mail_list__19TWindowSubShortMailFPvPv)(o, o->w38) == 0) {
            o->state = 7;
        } else if (get_status_flag__17TWindowSubComCardFPv((s32)o->w44) != 0) {
            o->state = 7;
        } else if (is_visible__17TWindowSubComCardFPv(o->w44) != 0) {
            void *p;
            o->f30 = ((s32 (*)(void *)) select_cursor_entry__6TLobbyFPv)(o->w38);
            p = ((void * (*)(s32)) find_short_mail_by_id__6TLobbyFUi)(o->f30);
            if (p != NULL) {
                o->f2c = TWindowSubShortMail__sub_8007B834(p);
            }
            o->state = get_selected_menu_value((s32)(o->w44));
        }
        break;
    case 11:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w3c != NULL) { ((void (*)(void *)) TWindow__close)(o->w3c); o->w3c = NULL; }
        if (o->w38 != NULL) { ((void (*)(void *)) TWindow__close)(o->w38); o->w38 = NULL; }
        if (o->w58 != NULL) { ((void (*)(void *)) TWindow__close)(o->w58); o->w58 = NULL; }
        if (o->w54 != NULL) { ((void (*)(void *)) TWindow__close)(o->w54); o->w54 = NULL; }
        if (o->w40 != NULL) { ((void (*)(void *)) TWindow__close)(o->w40); o->w40 = NULL; }
        if (o->w5c == NULL) {
            o->w5c = ((void * (*)()) create_keyboard__19TWindowSubShortMailFv)();
        }
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBB))));
        free_menu_object(o->w5c);
        hide_window__19TWindowSubShortMailFPv(o->w5c);
        o->state = 0xC;
    case 12:
        if (is_keyboard_active__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 1;
        } else if (update_keyboard__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 0xD;
        }
        break;
    case 13:
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBC))));
        TWindowSubShortMail__sub_80131998(o->w5c);
        o->w50 = ((void * (*)(void *, s32)) open_confirm_prompt__19TWindowSubShortMailFPvi)(o, o->f20);
        o->state = 0xE;
    case 14:
        if (get_card_data__17TWindowSubComCardFPv(o->w50) != 0) {
            o->state = 0xB;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->w50) == 0) {
                close__19TWindowSubShortMailFPv(o);
                o->state = 1;
            } else {
                o->state = 0xB;
            }
        }
        break;
    case 15:
        TWindowSubShortMail__sub_8027E620(o);
        o->state = 0x10;
    case 16:
        o->state = 1;
        break;
    case 17:
        open__17TWindowOptionCtrlFPv(o->w44);
        o->w50 = ((void * (*)(void *)) open_confirm_dialog__19TWindowSubShortMailFPv)(o);
        o->state = 0x12;
    case 18:
        if (is_active__19TWindowSubShortMailFv() != 0 && ((s32 (*)(void *, void *)) refresh_mail_list__19TWindowSubShortMailFPvPv)(o, o->w38) == 0) {
            o->state = 7;
        } else if (get_card_data__17TWindowSubComCardFPv(o->w50) != 0) {
            o->state = 9;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->w50) == 0) {
                remove_short_mail_by_id(((s32 (*)(void *)) select_cursor_entry__6TLobbyFPv)(o->w38));
                o->state = 7;
            } else {
                o->state = 9;
            }
        }
        break;
    case 19:
        if (is_active__6TLobbyFv() != 0) {
            o->state = 0x14;
        } else {
            o->state = 0x18;
        }
        break;
    case 20:
        if (o->w4c != NULL) { ((void (*)(void *)) TWindow__close)(o->w4c); o->w4c = NULL; }
        if (o->w44 == NULL) {
            o->w44 = ((void * (*)(void *)) create_confirm_menu_window__19TWindowSubShortMailFv)(o);
        }
        if (o->w48 == NULL) {
            o->w48 = ((void * (*)(void *)) create_window__19TWindowSubShortMailFv)(o);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w44);
        o->state = 0x15;
    case 21:
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w44) != 0) {
            o->state = 1;
        } else if (is_visible__17TWindowSubComCardFPv(o->w44) != 0) {
            o->state = get_selected_menu_value((s32)(o->w44));
        }
        break;
    case 22:
        if (o->w4c == NULL) {
            o->w4c = ((void * (*)()) open_menu__19TWindowSubShortMailFv)();
        }
        o->state = 0x17;
    case 23:
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w4c) != 0) {
            o->state = 0x14;
        } else if (is_visible__17TWindowSubComCardFPv(o->w4c) != 0) {
            if (set_flag_bit0__6TLobbyFi(get_selected_menu_value((s32)(o->w4c))) != 0) {
                if (o->w48 != NULL) { ((void (*)(void *)) TWindow__close)(o->w48); o->w48 = NULL; }
            }
            o->state = 0x14;
        }
        break;
    case 24:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w48 != NULL) { ((void (*)(void *)) TWindow__close)(o->w48); o->w48 = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w40 != NULL) { ((void (*)(void *)) TWindow__close)(o->w40); o->w40 = NULL; }
        if (o->w5c == NULL) {
            o->w5c = ((void * (*)()) create_keyboard__19TWindowSubShortMailFv)();
            get_keyboard_field_6c__15TWindowMakeTeamFPv(o->w5c, ((void * (*)()) get_card_window_area__6TLobbyFv)());
        }
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBB))));
        free_menu_object(o->w5c);
        hide_window__19TWindowSubShortMailFPv(o->w5c);
        o->state = 0x19;
    case 25:
        if (is_keyboard_active__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 1;
        } else if (update_keyboard__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 0x1A;
        }
        break;
    case 26:
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBC))));
        TWindowSubShortMail__sub_80131998(o->w5c);
        if (o->w50 == NULL) {
            o->w50 = ((void * (*)(void *)) open_delete_confirm_dialog__19TWindowSubShortMailFPv)(o);
        }
        o->state = 0x1B;
    case 27:
        if (get_card_data__17TWindowSubComCardFPv(o->w50) != 0) {
            o->state = 0x18;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->w50) == 0) {
                void *b = ((void * (*)(void *)) realloc_buffer__17TWindowSubComCardFPv)(o->w5c);
                set_short_mail_text__6TLobbyFi(b);
                ((void (*)(void *)) free__11TOBoss4RockFUi)(b);
                o->state = 1;
            } else {
                o->state = 0x18;
            }
        }
        break;
    case 5:
    case 6:
    case 28:
        break;
    }
}

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
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x48)));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x44)));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x38)));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x58)));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x54)));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        TLobby__sub_802258C8();
        sync_auto_reply_state__6TLobbyFv();
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TWindowSubShortMail[];
extern void *TWindowSubShortMail__class_name;

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
    M2C_FIELD(arg0, void **, 0x0) = TWindowSubShortMail__class_name;
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

void TWindowSubShortMail__sub_8027FAD0(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0xCC) = (u8) (M2C_FIELD(arg0, u8 *, 0xCC) & ~0xA);
    M2C_FIELD(arg0, u8 *, 0xCC) = (u8) (M2C_FIELD(arg0, u8 *, 0xCC) | 4);
}

void* get_mail_ptr__19TWindowSubShortMailFPv(void* p) { return (char*)p + 0x20; }

u8 get_field_cc__19TWindowSubShortMailFPv(void* p) { return *(u8*)((char*)p + 0xcc); }

s32 create_status_category_menu(u8 *arg0) {
  s32 temp_r31;
  s32 var_r31;
  if (get_camera_id__11TCameraCtrlFv() > 2)
  {
    temp_r31 = ((s32 (*)(int)) get_window_layout_position)((int) 0x18);
    var_r31 = create_window_menu((int) temp_r31, (int) 3, (int) (*((s32 *) (((s8 *) arg0) + 0x1C))));
  }
  else
  {
    temp_r31 = ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFPv)((int) 0x1D);
    var_r31 = create_titled_window_menu((int) ((s32 (*)(int)) get_window_layout_position)((int) 0x18), (int) 3, (int) temp_r31, (int) (*((s32 *) (((s8 *) arg0) + 0x1C))));
  }
  ((s32 (*)(int, int, int, int)) forward_trade_action_default__16TObjCityMainWarpFPviii)((int) var_r31, (int) ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFPv)((int) 0x10A), (int) 0x36, (int) 0);
  ((s32 (*)(int, int, int, int)) forward_trade_action_default__16TObjCityMainWarpFPviii)((int) var_r31, (int) ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFPv)((int) 0x10B), (int) 0x36, (int) 1);
  ((s32 (*)(int, int, int, int)) forward_trade_action_default__16TObjCityMainWarpFPviii)((int) var_r31, (int) ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFPv)((int) 0x10C), (int) 0x36, (int) 2);
  ((s32 (*)(int)) set_flag70_bit10__16TObjCityMainWarpFPv)((int) var_r31);
  ((s32 (*)(int, f32)) update_layout_height__17TWindowSubComCardFPvf)((int) var_r31, (f32) lbl_805DD6D8);
  ((s32 (*)(int)) align_menu_entry_positions)((int) var_r31);
  return var_r31;
}

void TWindowSubShortMail__sub_8027FBEC(void) {  }

void update__19TWindowSubShortMailFPv(void *arg0) {
    is_player_input_active(M2C_FIELD(arg0, s32 *, 0x1C));
    if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        ((VObj_8027FBF0_8027E620 *) M2C_FIELD(arg0, void **, 0x20))->m7();
    }
    fn_8027FD94(M2C_FIELD(arg0, s32 *, 0x28), get_selected_menu_value(M2C_FIELD(arg0, s32 *, 0x24)));
}

extern M2C_UNK lbl_804D1AD0[];

void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D1AD0;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x28))); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { ((void (*)(void *)) TWindow__close)((void *)(M2C_FIELD(arg0, void **, 0x24))); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

}
