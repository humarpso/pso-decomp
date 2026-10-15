#include "types.h"
#include "pso/misc/TWindowSubShortMail.h"

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 set_flag70_bit10__16TObjCityMainWarpFv(s32);
s32 update_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 get_window_layout_position(s32);
s32 create_confirm_menu_window__19TWindowSubShortMailFv();
s32 align_menu_entry_positions(s32);
s32 build_menu__19TWindowSubShortMailFv();
s32 TWindow__close(void *);
int select_cursor_entry__6TLobbyFv(void *);
s32 advance_line__19TWindowSubShortMailFl(void *, s32);
u8 get_field_cc__19TWindowSubShortMailFPv(void *);
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
s32 mem_free(s32);
s32 get_card_window_area__6TLobbyFv();
void * get_mail_ptr__19TWindowSubShortMailFPv(void *);
s32 realloc_buffer__17TWindowSubComCardFv(s32);
}

extern "C" {
s32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 get_main_phase();
s32 draw_text_gray__17TWindowSubComCardFllll(s32, s32, s32, s32);
s32 draw_card_icon__17TWindowSubComCardFll(s32, s32, s32);
extern const f32 TWindowSubShortMail__data_805DD6C8;
s32 fn_8007B83C(s32);
s32 TLobby__sub_8022598C(s32);
u32 get_lobby_id__6TLobbyFPv();
s32 get_short_mail_ctrl__6TLobbyFv();
s32 clear_lobby_flag__6TLobbyFv();
s32 clamp_selection_to_valid_entry__20TShopArmorListWindowFv(void *);
s32 save_cursor_selection__20TShopArmorListWindowFv(void *);
s32 reset_list__20TShopArmorListWindowFPv(void *);
s32 add_status_entry__20TWindowSubStatusDispFScll(void *, s32, s32, u32);
s32 set_cursor_index__20TWindowSubStatusDispFPvs(void *, s16);
void *set_window_mode_4__6TLobbyFPvll(s32, void *, s32);
extern s32 lbl_8044FACC[];
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 notify_warp_flag70__19TWindowSubShortMailFv(s32);
s32 open_yes_no_prompt(s32, s32, s32, s32, f32);
extern const f32 lbl_805DD6D0;
}

extern "C" {

void TWindowSubShortMail__sub_8027E620(void* p);
s32 TKeyBoardControl__ct(s32, s32, s32, s32, s32, s32);
s32 get_shared_text_buffer();
s32 send_simple_mail__6TLobbyFiPv(s32, s32);
s32 TLobby__sub_8022598C(s32);
int send_find_user_self_tag__6TLobbyFi(void*);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
s32 TWindowSubComCard__sub_80225E80(s32, s32);
s32 open_yes_no_prompt(s32, s32, s32, s32, f32);
s32 __nw__7TObjectFUl(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 destroy_keyboard__17TWindowSubComCardFPv(s32);
s32 draw_card_icon__17TWindowSubComCardFll(s32, s32, s32);
s32 draw_text_gray__17TWindowSubComCardFllll(s32, s32, s32, s32);
s32 ensure_status_display__20TWindowSubStatusDispFl(s32, s32);
s32 fn_80267F38(s32, s32 *, s32, s16);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 get_flag_bit0__6TLobbyFv();
u32 get_lobby_id__6TLobbyFPv();
s32 get_main_phase();
s32 get_short_mail_ctrl__6TLobbyFv();
s32 notify_warp_flag70__19TWindowSubShortMailFv(s32);
s32 send_and_handle__6TLobbyFii(u32, s32, s32);
s32 set_flag70_bit10__20TWindowShortListCtrlFv(s32);
s32 set_flag_40__16TAdChrSelASlotGCFv(s32);
s32 set_keyboard_flag62_bit2__15TWindowMakeTeamFv(s32);
s32 set_scroll_target__17TWindowSubComCardFff(s32, f32, f32);
s32 set_selected_index__17TWindowSubComCardFs(s32, s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 set_sub_position__15TWindowMakeTeamFPUc(s32, s32);
s32 update_chat_window(s32);

void TWindowSubShortMail__sub_8027E620(void* p) { select_cursor_entry__6TLobbyFv((void*)(*(void**)((char*)p + 0x38))); get_card_entry__17TWindowSubComCardFi(); send_find_user_self_tag__6TLobbyFi(*(void**)((char*)p + 0x2c)); }

void TWindowSubShortMail::close() {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;
    s32 var_r29;

    temp_r31 = realloc_buffer__17TWindowSubComCardFv(*(s32 *)((s8 *)this + 0x5C));
    TWindowSubComCard__sub_80225E80(temp_r31, get_shared_text_buffer());
    send_simple_mail__6TLobbyFiPv(*(s32 *)((s8 *)this + 0x2C), get_shared_text_buffer());
    mem_free(temp_r31);
    temp_r31_2 = get_short_mail_ctrl__6TLobbyFv();
    for (var_r29 = 0; var_r29 < temp_r31_2; var_r29 += 1) {
        temp_r30 = TLobby__sub_8022598C(var_r29);
        if ((u32) *(u32 *)((s8 *)this + 0x30) == get_lobby_id__6TLobbyFPv()) {
            ((s32 (*)(s32)) TWindowSubShortMail__sub_8027FAD0)(temp_r30);
            return;
        }
    }
}

void TWindowSubShortMail::update_mail_count() {
    s32 temp_r3;

    if ((u32) *(u32 *)((s8 *)this + 0x3C) != 0U) {
        temp_r3 = select_cursor_entry__6TLobbyFv((void*)(*(s32 *)((s8 *)this + 0x38)));
        if ((s32) *(s32 *)((s8 *)this + 0x24) != temp_r3) {
            *(s32 *)((s8 *)this + 0x24) = temp_r3;
            if (find_short_mail_by_id__6TLobbyFUi(*(s32 *)((s8 *)this + 0x24)) != 0U) {
                send_and_handle__6TLobbyFii(*(u32 *)((s8 *)this + 0x3C), ((s32 (*)()) get_mail_ptr__19TWindowSubShortMailFPv)(), 0x482);
            }
        }
    }
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(s32 *)((s8 *)arg0 + 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFl(0x20), get_message_10__20TWindowSubStatusDispFl(0x104), get_window_layout_position((s32)(0xa3)), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(s32 *)((s8 *)arg0 + 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFl(0x20), get_message_10__20TWindowSubStatusDispFl(0x3e), get_window_layout_position((s32)(0x9f)), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_window_layout_position((s32)(0xA2));
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x105), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x106), 6, 0);
    if (get_flag_bit0__6TLobbyFv() == 0) {
        set_selected_index__17TWindowSubComCardFs(temp_r31, 1);
    }
    set_flag70_bit10__16TObjCityMainWarpFv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, TWindowSubShortMail__data_805DD6C8);
    return temp_r31;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;
extern const f32 lbl_805DD6CC;

s32 create_window__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_window_layout_position((s32)(0xA1));
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl(temp_r3, 2);
    if (get_flag_bit0__6TLobbyFv() != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x105), 0, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_card_window_area__6TLobbyFv(), 0, 0);
    } else {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x106), 0, 0);
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_card_window_area__6TLobbyFv(), 0, 0);
    }
    set_flag_40__16TAdChrSelASlotGCFv(temp_r31);
    set_status_flag_80__12TQuestThreadFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFff(temp_r31, TWindowSubShortMail__data_805DD6C8, lbl_805DD6CC);
    return temp_r31;
}

extern s32 local_client_id;
extern s32 tl_00;

s32 create_confirm_menu_window__19TWindowSubShortMailFv(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl((s32)((void *)(((s32)get_window_layout_position((int) (0xA0))))), (s32)((int) (2)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFl((int) (0x107)))), (s32)((int) (6)), (s32)((int) (0x16)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((int) (temp_r31)), (s32)((int) (get_message_10__20TWindowSubStatusDispFl((int) (0x108)))), (s32)((int) (6)), (s32)((int) (0x18)));
    set_flag70_bit10__16TObjCityMainWarpFv((s32)((int) (temp_r31)));
    update_layout_height__17TWindowSubComCardFPvf((s32)((int) (temp_r31)), (f32) (TWindowSubShortMail__data_805DD6C8));
    return temp_r31;
}

s32 open_confirm_prompt__19TWindowSubShortMailFPvi(void *arg0, s32 arg1) {
    s32 temp_r29;
    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, arg1, 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFl(0x20), get_message_10__20TWindowSubStatusDispFl(0x3f), get_window_layout_position(0x9e), lbl_805DD6D0);
    free_member__17TWindowSubComCardFv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFv(temp_r29);
    return temp_r29;
}

s32 create_keyboard__19TWindowSubShortMailFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, tl_00, 0xC6, 5, 4, local_client_id);
    }
    update_chat_window(var_r31);
    set_sub_position__15TWindowMakeTeamFPUc(var_r31, get_window_layout_position((s32)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern const f32 lbl_805DD6D4;

#pragma push
#pragma fp_contract on
s32 build_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r31;
    s32 msg;
    temp_r31 = draw_card_icon__17TWindowSubComCardFll((s32)(get_window_layout_position((s32)(0x9D))), (s32)(3), (s32)(get_message_10__20TWindowSubStatusDispFl(0x1E)));
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x7F), 6, 0xB);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x59), 6, 0xF);
    } else {
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x7F), 6, 0xB);
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x59), 6, 0xF);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x5A), 6, 0x11);
    set_flag70_bit10__16TObjCityMainWarpFv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, TWindowSubShortMail__data_805DD6C8);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}
#pragma pop

s32 create_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFll(get_window_layout_position((s32)(0x9A)), 3, get_message_10__20TWindowSubStatusDispFl(0x1D));
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x57), 6, 3);
    } else {
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x57), 6, 3);
    }
    if (get_short_mail_ctrl__6TLobbyFv() > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xCE), 6, 7);
    } else {
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xCE), 6, 7);
    }
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x103), 6, 0x13);
    } else {
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x103), 6, 0x13);
    }
    set_flag70_bit10__16TObjCityMainWarpFv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD6D4);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

extern s32 lbl_8044FAC4[];

s32 TWindowSubShortMail::refresh_mail_list(void *arg1) {
    u8 *arg0 = (u8 *)this;
    s32 n;
    u32 id;
    s32 i;
    s16 sel;
    s32 e;
    id = select_cursor_entry__6TLobbyFv((void*)(arg1));
    sel = -1;
    clear_lobby_flag__6TLobbyFv();
    save_cursor_selection__20TShopArmorListWindowFv(arg1);
    reset_list__20TShopArmorListWindowFPv(arg1);
    n = get_short_mail_ctrl__6TLobbyFv();
    i = n - 1;
    while (i >= 0) {
        e = TLobby__sub_8022598C(i);
        add_status_entry__20TWindowSubStatusDispFScll(arg1, ((s32 (*)(s32)) get_field_cc__19TWindowSubShortMailFPv)(e), fn_8007B83C(e), ((u32 (*)(s32))get_lobby_id__6TLobbyFPv)(e));
        if (id == ((u32 (*)(s32))get_lobby_id__6TLobbyFPv)(e)) {
            sel = (n - 1) - i;
        }
        i--;
    }
    if (n <= 0) {
        advance_line__19TWindowSubShortMailFl(arg1, -1);
        if (*(void **)((s8 *)arg0 + 0x3C) != 0) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x3C));
            *(void **)((s8 *)arg0 + 0x3C) = 0;
        }
    } else if (*(void **)((s8 *)arg0 + 0x3C) == 0) {
        *(void **)((s8 *)arg0 + 0x3C) = set_window_mode_4__6TLobbyFPvll(get_window_layout_position(0x9C), lbl_8044FACC, 1);
        *(s32 *)((s8 *)arg0 + 0x24) = -1;
    }
    if (sel == -1) {
        clamp_selection_to_valid_entry__20TShopArmorListWindowFv(arg1);
        return 0;
    }
    set_cursor_index__20TWindowSubStatusDispFPvs(arg1, sel);
    return 1;
}

s32 create_list_item__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = get_window_layout_position((s32)(0x9B));
    temp_r31 = fn_80267F38(temp_r3, lbl_8044FAC4, 8, (s16) *(s32 *)((s8 *)arg0 + 0x20));
    ensure_status_display__20TWindowSubStatusDispFl(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x2E));
    set_flag70_bit10__20TWindowShortListCtrlFv(temp_r31);
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
s32 close__17TWindowSubComCardFv(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 get_status_flag__17TWindowSubComCardFv(s32);
void clear_flag_and_release__17TWindowSubComCardFv(void *);
s32 is_visible__17TWindowSubComCardFv(void *);
s32 get_selected_menu_value(s32);
void *send_cmd_133__17TWindowSubComCardFv(void);
void *send_command__17TWindowSubComCardFi(s32);
void update_display_value__17TWindowSubComCardFUiUiPv(void *, void *, void *);
s32 get_card_id__17TWindowSubComCardFv(void *);
void clear_selected_and_update_entry__14TWindowSubItemFv(void *);
s32 is_active__19TWindowSubShortMailFv(void);
s32 get_flag_bit2__6TLobbyFv(void *);
s32 get_status_flag__6TLobbyFv(void *);
void clear_transition_flag__17TWindowSubComCardFv(void *);
s32 TWindowSubShortMail__sub_8007B834(void *);
void set_position__19TWindowSubShortMailFPv(void *, void *);
void free_menu_object(void *);
void hide_window__19TWindowSubShortMailFv(void *);
s32 is_keyboard_active__17TWindowSubComCardFv(void *);
s32 update_keyboard__17TWindowSubComCardFv(void *);
void TWindowSubShortMail__sub_80131998(void *);
s32 get_card_data__17TWindowSubComCardFv(void *);
s32 is_child_visible__17TWindowSubComCardFv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFv(void *);
void TWindowSubShortMail__sub_8027E620(void *p);
void open__17TWindowOptionCtrlFv(void *);
void remove_short_mail_by_id(s32);
s32 is_active__6TLobbyFv(void);
s32 set_flag_bit0__6TLobbyFl(s32);
void get_keyboard_field_6c__15TWindowMakeTeamFv(void *, void *);
void set_short_mail_text__6TLobbyFv(void *);
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
s32 sync_auto_reply_state__6TLobbyFv();
s32 TLobby__sub_802258C8();
s32 get_selected_menu_value(s32);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 close__17TWindowSubComCardFv(void *);
s32 fn_8027FD94(s32, s16);
s32 get_status_flag__17TWindowSubComCardFv(s32);
s32 is_player_input_active(s32);
s32 queue_destruction__7TObjectFv(void *);

void TWindowSubShortMail::render() {  }

extern s32 __vt__19TWindowSubShortMail[];

void TWindowSubShortMail::run_task() {
    ShortMail_8027EF98 *o = (ShortMail_8027EF98 *)this;
    switch (o->state) {
    case 0:
    case 1:
        if (o->w48 != NULL) { ((void (*)(void *)) TWindow__close)(o->w48); o->w48 = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w50 != NULL) { close__17TWindowSubComCardFv(o->w50); o->w50 = NULL; }
        if (o->w5c != NULL) { queue_destruction__7TObjectFv(o->w5c); o->w5c = NULL; }
        if (o->w38 != NULL) { ((void (*)(void *)) TWindow__close)(o->w38); o->w38 = NULL; }
        if (o->w58 != NULL) { ((void (*)(void *)) TWindow__close)(o->w58); o->w58 = NULL; }
        if (o->w54 != NULL) { ((void (*)(void *)) TWindow__close)(o->w54); o->w54 = NULL; }
        if (o->w40 == NULL) {
            o->w40 = ((void * (*)(void *)) create_menu__19TWindowSubShortMailFv)(o);
        }
        clear_flag_and_release__17TWindowSubComCardFv(o->w40);
        o->state = 2;
    case 2:
        if (get_status_flag__17TWindowSubComCardFv((s32)o->w40) != 0) {
            o->parent->m7();
            o->state = 0x1C;
        } else if (is_visible__17TWindowSubComCardFv(o->w40) != 0) {
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
        clear_flag_and_release__17TWindowSubComCardFv(o->w54);
        o->state = 4;
    case 4:
        update_display_value__17TWindowSubComCardFUiUiPv(o->w54, o->w58, &o->f28);
        if (get_status_flag__17TWindowSubComCardFv((s32)o->w54) != 0) {
            o->state = 1;
        } else if (is_visible__17TWindowSubComCardFv(o->w54) != 0) {
            void *p;
            o->f30 = -1;
            p = ((void * (*)(s32)) get_card_entry__17TWindowSubComCardFi)(get_selected_menu_value((s32)(o->w54)));
            if (p != NULL) {
                o->f2c = get_card_id__17TWindowSubComCardFv(p);
            }
            o->state = 0xB;
        }
        break;
    case 7:
        if (o->w50 != NULL) { close__17TWindowSubComCardFv(o->w50); o->w50 = NULL; }
        if (o->w5c != NULL) { queue_destruction__7TObjectFv(o->w5c); o->w5c = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w38 == NULL) {
            o->w38 = ((void * (*)(void *)) create_list_item__19TWindowSubShortMailFPv)(o);
            ((void (*)(void *, s32)) advance_line__19TWindowSubShortMailFl)(o->w38, -1);
        }
        refresh_mail_list(o->w38);
        clear_selected_and_update_entry__14TWindowSubItemFv(o->w38);
        o->state = 8;
    case 8:
        if (is_active__19TWindowSubShortMailFv() != 0) {
            refresh_mail_list(o->w38);
        }
        update_mail_count();
        if (get_flag_bit2__6TLobbyFv(o->w38) != 0) {
            o->parent->m7();
            o->state = 0x1C;
        } else if (get_status_flag__6TLobbyFv(o->w38) != 0) {
            o->state = 9;
        }
        break;
    case 9:
        if (o->w50 != NULL) { close__17TWindowSubComCardFv(o->w50); o->w50 = NULL; }
        if (o->w3c != NULL) { ((void (*)(void *)) TWindow__close)(o->w3c); o->w3c = NULL; }
        if (o->w44 == NULL) {
            o->w44 = ((void * (*)(void *)) build_menu__19TWindowSubShortMailFv)(o);
        }
        clear_flag_and_release__17TWindowSubComCardFv(o->w44);
        clear_transition_flag__17TWindowSubComCardFv(o->w44);
        o->state = 0xA;
    case 10:
        if (is_active__19TWindowSubShortMailFv() != 0 && refresh_mail_list(o->w38) == 0) {
            o->state = 7;
        } else if (get_status_flag__17TWindowSubComCardFv((s32)o->w44) != 0) {
            o->state = 7;
        } else if (is_visible__17TWindowSubComCardFv(o->w44) != 0) {
            void *p;
            o->f30 = ((s32 (*)(void *)) select_cursor_entry__6TLobbyFv)(o->w38);
            p = ((void * (*)(s32)) find_short_mail_by_id__6TLobbyFUi)(o->f30);
            if (p != NULL) {
                o->f2c = TWindowSubShortMail__sub_8007B834(p);
            }
            o->state = get_selected_menu_value((s32)(o->w44));
        }
        break;
    case 11:
        if (o->w50 != NULL) { close__17TWindowSubComCardFv(o->w50); o->w50 = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w3c != NULL) { ((void (*)(void *)) TWindow__close)(o->w3c); o->w3c = NULL; }
        if (o->w38 != NULL) { ((void (*)(void *)) TWindow__close)(o->w38); o->w38 = NULL; }
        if (o->w58 != NULL) { ((void (*)(void *)) TWindow__close)(o->w58); o->w58 = NULL; }
        if (o->w54 != NULL) { ((void (*)(void *)) TWindow__close)(o->w54); o->w54 = NULL; }
        if (o->w40 != NULL) { ((void (*)(void *)) TWindow__close)(o->w40); o->w40 = NULL; }
        if (o->w5c == NULL) {
            o->w5c = ((void * (*)()) create_keyboard__19TWindowSubShortMailFv)();
        }
        set_position__19TWindowSubShortMailFPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBB))));
        free_menu_object(o->w5c);
        hide_window__19TWindowSubShortMailFv(o->w5c);
        o->state = 0xC;
    case 12:
        if (is_keyboard_active__17TWindowSubComCardFv(o->w5c) != 0) {
            o->state = 1;
        } else if (update_keyboard__17TWindowSubComCardFv(o->w5c) != 0) {
            o->state = 0xD;
        }
        break;
    case 13:
        set_position__19TWindowSubShortMailFPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBC))));
        TWindowSubShortMail__sub_80131998(o->w5c);
        o->w50 = ((void * (*)(void *, s32)) open_confirm_prompt__19TWindowSubShortMailFPvi)(o, o->f20);
        o->state = 0xE;
    case 14:
        if (get_card_data__17TWindowSubComCardFv(o->w50) != 0) {
            o->state = 0xB;
        } else if (is_child_visible__17TWindowSubComCardFv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFv(o->w50) == 0) {
                close();
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
        open__17TWindowOptionCtrlFv(o->w44);
        o->w50 = ((void * (*)(void *)) open_confirm_dialog__19TWindowSubShortMailFPv)(o);
        o->state = 0x12;
    case 18:
        if (is_active__19TWindowSubShortMailFv() != 0 && refresh_mail_list(o->w38) == 0) {
            o->state = 7;
        } else if (get_card_data__17TWindowSubComCardFv(o->w50) != 0) {
            o->state = 9;
        } else if (is_child_visible__17TWindowSubComCardFv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFv(o->w50) == 0) {
                remove_short_mail_by_id(((s32 (*)(void *)) select_cursor_entry__6TLobbyFv)(o->w38));
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
        clear_flag_and_release__17TWindowSubComCardFv(o->w44);
        o->state = 0x15;
    case 21:
        if (get_status_flag__17TWindowSubComCardFv((s32)o->w44) != 0) {
            o->state = 1;
        } else if (is_visible__17TWindowSubComCardFv(o->w44) != 0) {
            o->state = get_selected_menu_value((s32)(o->w44));
        }
        break;
    case 22:
        if (o->w4c == NULL) {
            o->w4c = ((void * (*)()) open_menu__19TWindowSubShortMailFv)();
        }
        o->state = 0x17;
    case 23:
        if (get_status_flag__17TWindowSubComCardFv((s32)o->w4c) != 0) {
            o->state = 0x14;
        } else if (is_visible__17TWindowSubComCardFv(o->w4c) != 0) {
            if (set_flag_bit0__6TLobbyFl(get_selected_menu_value((s32)(o->w4c))) != 0) {
                if (o->w48 != NULL) { ((void (*)(void *)) TWindow__close)(o->w48); o->w48 = NULL; }
            }
            o->state = 0x14;
        }
        break;
    case 24:
        if (o->w50 != NULL) { close__17TWindowSubComCardFv(o->w50); o->w50 = NULL; }
        if (o->w48 != NULL) { ((void (*)(void *)) TWindow__close)(o->w48); o->w48 = NULL; }
        if (o->w44 != NULL) { ((void (*)(void *)) TWindow__close)(o->w44); o->w44 = NULL; }
        if (o->w40 != NULL) { ((void (*)(void *)) TWindow__close)(o->w40); o->w40 = NULL; }
        if (o->w5c == NULL) {
            o->w5c = ((void * (*)()) create_keyboard__19TWindowSubShortMailFv)();
            get_keyboard_field_6c__15TWindowMakeTeamFv(o->w5c, ((void * (*)()) get_card_window_area__6TLobbyFv)());
        }
        set_position__19TWindowSubShortMailFPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBB))));
        free_menu_object(o->w5c);
        hide_window__19TWindowSubShortMailFv(o->w5c);
        o->state = 0x19;
    case 25:
        if (is_keyboard_active__17TWindowSubComCardFv(o->w5c) != 0) {
            o->state = 1;
        } else if (update_keyboard__17TWindowSubComCardFv(o->w5c) != 0) {
            o->state = 0x1A;
        }
        break;
    case 26:
        set_position__19TWindowSubShortMailFPv(o->w5c, ((void *)((s32 (*)(int)) get_window_layout_position)((int)(0xBC))));
        TWindowSubShortMail__sub_80131998(o->w5c);
        if (o->w50 == NULL) {
            o->w50 = ((void * (*)(void *)) open_delete_confirm_dialog__19TWindowSubShortMailFPv)(o);
        }
        o->state = 0x1B;
    case 27:
        if (get_card_data__17TWindowSubComCardFv(o->w50) != 0) {
            o->state = 0x18;
        } else if (is_child_visible__17TWindowSubComCardFv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFv(o->w50) == 0) {
                void *b = ((void * (*)(void *)) realloc_buffer__17TWindowSubComCardFv)(o->w5c);
                set_short_mail_text__6TLobbyFv(b);
                ((void (*)(void *)) mem_free)(b);
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
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowSubShortMail;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            close__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x50));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x5C) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x5C));
            *(u32 *)((s8 *)arg0 + 0x5C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x4C)));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x48) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x48)));
            *(u32 *)((s8 *)arg0 + 0x48) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x44)));
            *(u32 *)((s8 *)arg0 + 0x44) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x3C)));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x38)));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x58) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x58)));
            *(u32 *)((s8 *)arg0 + 0x58) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x54)));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)arg0 + 0x40)));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
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

extern s32 __vt__19TWindowSubShortMail[];
extern void *TWindowSubShortMail__class_name;

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowSubShortMail;
    *(void **)((s8 *)arg0 + 0x0) = TWindowSubShortMail__class_name;
    *(void **)((s8 *)arg0 + 0x34) = arg1;
    *(void **)((s8 *)arg0 + 0x20) = arg2;
    *(u32 *)((s8 *)arg0 + 0x40) = 0;
    *(u32 *)((s8 *)arg0 + 0x54) = 0;
    *(u32 *)((s8 *)arg0 + 0x58) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x3C) = 0;
    *(u32 *)((s8 *)arg0 + 0x44) = 0;
    *(u32 *)((s8 *)arg0 + 0x48) = 0;
    *(u32 *)((s8 *)arg0 + 0x4C) = 0;
    *(u32 *)((s8 *)arg0 + 0x5C) = 0;
    *(u32 *)((s8 *)arg0 + 0x50) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = -1;
    *(u32 *)((s8 *)arg0 + 0x28) = -1;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void TWindowSubShortMail__sub_8027FAD0(u8 *arg0) {
    *(u8 *)((s8 *)arg0 + 0xCC) = (u8) (*(u8 *)((s8 *)arg0 + 0xCC) & ~0xA);
    *(u8 *)((s8 *)arg0 + 0xCC) = (u8) (*(u8 *)((s8 *)arg0 + 0xCC) | 4);
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
    temp_r31 = ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFl)((int) 0x1D);
    var_r31 = create_titled_window_menu((int) ((s32 (*)(int)) get_window_layout_position)((int) 0x18), (int) 3, (int) temp_r31, (int) (*((s32 *) (((s8 *) arg0) + 0x1C))));
  }
  ((s32 (*)(int, int, int, int)) forward_trade_action_default__16TObjCityMainWarpFPviii)((int) var_r31, (int) ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFl)((int) 0x10A), (int) 0x36, (int) 0);
  ((s32 (*)(int, int, int, int)) forward_trade_action_default__16TObjCityMainWarpFPviii)((int) var_r31, (int) ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFl)((int) 0x10B), (int) 0x36, (int) 1);
  ((s32 (*)(int, int, int, int)) forward_trade_action_default__16TObjCityMainWarpFPviii)((int) var_r31, (int) ((s32 (*)(int)) get_message_10__20TWindowSubStatusDispFl)((int) 0x10C), (int) 0x36, (int) 2);
  ((s32 (*)(int)) set_flag70_bit10__16TObjCityMainWarpFv)((int) var_r31);
  ((s32 (*)(int, f32)) update_layout_height__17TWindowSubComCardFPvf)((int) var_r31, (f32) lbl_805DD6D8);
  ((s32 (*)(int)) align_menu_entry_positions)((int) var_r31);
  return var_r31;
}

void TWindowSubShortMail__sub_8027FBEC(void) {  }

void TWindowSubShortMail::update() {
    is_player_input_active(*(s32 *)((s8 *)this + 0x1C));
    if (get_status_flag__17TWindowSubComCardFv(*(s32 *)((s8 *)this + 0x24)) != 0) {
        ((VObj_8027FBF0_8027E620 *) *(void **)((s8 *)this + 0x20))->m7();
    }
    fn_8027FD94(*(s32 *)((s8 *)this + 0x28), get_selected_menu_value(*(s32 *)((s8 *)this + 0x24)));
}

extern s32 status_category_window_vtable[];

void *TWindowSubShortMail::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = status_category_window_vtable;
        if (*(void **)((s8 *)this + 0x28) != NULL) { ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)this + 0x28))); *(s32 *)((s8 *)this + 0x28) = 0; }
        if (*(void **)((s8 *)this + 0x24) != NULL) { ((void (*)(void *)) TWindow__close)((void *)(*(void **)((s8 *)this + 0x24))); *(s32 *)((s8 *)this + 0x24) = 0; }
        __dt__7TObjectFv((void *)(this), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(this));
        }
    }
    return this;
}

}
