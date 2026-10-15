#include "types.h"

struct RecoveredGlobal_8027C56C_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8027C6B4_lbl_804D17E8 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8027C6B4___vt__19TWindowSubMagPhoton {
    s32 value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_8027C2D0_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Win_8027C4C8 { u8 pad[0x62]; s16 f62; };

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
void render__19TWindowSubMagPhotonFv(s32 arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(int);
s32 update_window_entry_list(void *, void *);
s32 get_active_flag__13TWindowSubMagFPv(void *);
void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0);
void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0);
extern RecoveredGlobal_8027C56C_lbl_8050E208 controller_input_state;
void run_task__19TWindowSubMagPhotonFv(u8 *arg0);
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 save_position__17TWindowSubComCardFPv(void *);
s32 init_photon_blast_entries__19TWindowSubMagPhotonFPv(void *, int);
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, void *, void *);
extern RecoveredGlobal_8027C6B4_lbl_804D17E8 TWindowSubMagPhoton__layout_descriptor;
extern s32 __vt__19TWindowSubMagPhoton[];
extern s32 TWindowSubMagPhoton__class_name;
u8 *TWindowSubMagPhoton__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3);
s32 play_sound_effect(s32, s32, s32, s32);
s32 is_player_input_active(int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_8027C56C_lbl_8050E208 controller_input_state;
void update_selection_input__19TWindowSubMagPhotonFPv(u8 *arg0);
void get_cursor_origin__19TWindowSubMagPhotonFPvPv(void *, void *);
void draw_cursor_sprite__21TWindowSubCustomEquipFPvPvif(void *, void *, int, f32);
extern const f32 lbl_805DD680;
s32 draw_cursor__19TWindowSubMagPhotonFPvi(void *arg0, int arg1);
s32 test_card_flag_2__12TBoss8DragonFPv(int);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 fn_801A51F0(int);
s32 get_card_window_flags__20TWindowSubStatusDispFi(int);
s32 is_card_flag_set__19TWindowKeyBoardHardFPv(int);
s32 set_flag70_bit10__20TWindowShortListCtrlFPv(int);
s32 test_card_flag8__23TAdSinglePlyChrSelectGCFPv(int);
s32 set_field_1c__6TLobbyFPvf(s32);
s32 set_selected_index__20TWindowSubStatusDispFPvs(int, s16);
s32 draw_status__20TWindowSubStatusDispFiii(int, int, int);
s32 dispatch_without_flags__20TWindowSubStatusDispFiii(int, int, int);
s32 TWindowSubStatusDisp__sub_80248BE8(s32, void *, int);
s32 TWindowSubEquip__sub_80263AF8(s32, s32);
s32 test_keyboard_card_flag4(int);
s32 ensure_status_display__20TWindowSubStatusDispFPvi(int, int);
s32 get_window_layout_position(s32);
extern u8 lbl_8044FA28[];
s32 TWindowSubStatusDisp__sub_8027C884(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__19TWindowSubMagPhotonFv(void *arg0, s16 arg1);
s32 create_option_menu_window(void *arg0);
void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0);
void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0);
void update_photon_selection__19TWindowSubMagPhotonFPv(void *arg0);
void update_quest_board_card_flags(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
s32 get_selected_menu_value(s32);
s32 align_menu_entry_positions(s32);
s32 update_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 get_window_layout_position(s32);
s32 TWindowSubEquip__sub_80263AF8(s32, s32);
s32 TWindowSubQuestBoard__sub_8027CF50(s32, s32);
void __dl__7TObjectFPv(void *);
s32 clear_card_window_flags__20TWindowSubQuestBoardFii(s32, s32);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 create_titled_window_menu(s32, s32, s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 is_split_screen();
s32 set_board_flags__20TWindowSubQuestBoardFii(s32, s32);
s32 set_card_flags_direct__20TWindowSubQuestBoardFPvi(s32, s32);
s32 set_card_flags_scaled__20TWindowSubQuestBoardFii(s32, s32);
s32 set_card_window_flags__20TWindowSubQuestBoardFii(s32, s32);
s32 set_field_1c__6TLobbyFPvf(s32);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(s32);
s32 spawn_effect__11TBoss4Type3Fsss(s32, s32, s16);
s32 update_selected_item__17TWindowOptionCtrlFPv(s32);

void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0) {
    if (get_active_flag__13TWindowSubMagFPv((void *)(arg0)) == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 2);
    }
}

void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0) {
    play_sound_effect(0x52D01, 0, 0, 0);
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 1);
}

extern s32 __vt__19TWindowSubMagPhoton[];

typedef char RecoveredGlobal_8027C2D0_lbl_8050E208_size[sizeof(RecoveredGlobal_8027C2D0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void update_selection_input__19TWindowSubMagPhotonFPv(u8 *arg0) {
    u8 temp_r3;
    u8 temp_r3_2;
    u8 *temp_r30;
    temp_r30 = (u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&controller_input_state).value + (is_player_input_active((int)((s32) *(s16 *)((s8 *)arg0 + 0x20))) * 0x50) + 0x20;
    if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0xF0), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0xF0), (int) (6), (int) (1)) != 0)) {
        play_sound_effect((s32)(0x54100), (s32)(0U), (s32)(0), (s32)(0));
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (*(u8 *)((s8 *)arg0 + 0x61) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (*(u8 *)((s8 *)arg0 + 0x61) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x80), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x80), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (*(u8 *)((s8 *)arg0 + 0x61) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x40), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x40), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (*(u8 *)((s8 *)arg0 + 0x61) - 1);
        }
        temp_r3 = *(u8 *)((s8 *)arg0 + 0x61);
        if ((s8) temp_r3 < 0) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (temp_r3 + 3);
        }
        temp_r3_2 = *(u8 *)((s8 *)arg0 + 0x61);
        if ((s8) temp_r3_2 >= 3) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (temp_r3_2 - 3);
        }
    }
}

s32 draw_cursor__19TWindowSubMagPhotonFPvi(void *arg0, int arg1) {
    u8 sp8[16];
    get_cursor_origin__19TWindowSubMagPhotonFPvPv(arg0, sp8);
    ((void (*)(f32, void *, void *, int))draw_cursor_sprite__21TWindowSubCustomEquipFPvPvif)(lbl_805DD680, (void *)arg1, sp8, ((Win_8027C4C8 *)arg0)->f62);
}

void render__19TWindowSubMagPhotonFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    draw_cursor__19TWindowSubMagPhotonFPvi((void *)((void *) (arg0)), (int)((int) (temp_r3)));
}

typedef char RecoveredGlobal_8027C56C_lbl_8050E208_size[sizeof(RecoveredGlobal_8027C56C_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__19TWindowSubMagPhotonFv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r31_2;
    temp_r31 = is_player_input_active((int) ((s32) *(s16 *)((s8 *)arg0 + 0x20)));
    if (get_active_flag__13TWindowSubMagFPv((void *)((void *) (arg0))) == 0) {
        update_selection_input__19TWindowSubMagPhotonFPv((u8 *)((void *) (arg0)));
        temp_r31_2 = (u8 *)&controller_input_state.value + (temp_r31 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31_2), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            play_open_sound__19TWindowSubMagPhotonFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31_2), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__19TWindowSubMagPhotonFPv((void *) (arg0));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
    *(s16 *)((s8 *)arg0 + 0x62) = (s16) (*(s16 *)((s8 *)arg0 + 0x62) + 1);
}

void *__dt__19TWindowSubMagPhotonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowSubMagPhoton;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8027C6B4_lbl_804D17E8_size[sizeof(RecoveredGlobal_8027C6B4_lbl_804D17E8) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8027C6B4___vt__19TWindowSubMagPhoton_size[sizeof(RecoveredGlobal_8027C6B4___vt__19TWindowSubMagPhoton) == 0x1C ? 1 : -1];
u8 *TWindowSubMagPhoton__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s16 temp_r4;
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&TWindowSubMagPhoton__layout_descriptor.value), (void *) (arg3), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8027C6B4___vt__19TWindowSubMagPhoton *)&__vt__19TWindowSubMagPhoton).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubMagPhoton__class_name;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x30), (void *) (arg1));
    save_position__17TWindowSubComCardFPv((void *) (arg0));
    *(s16 *)((s8 *)arg0 + 0x20) = arg3;
    *(s32 *)((s8 *)arg0 + 0x70) = arg2;
    *(s8 *)((s8 *)arg0 + 0x60) = 0;
    *(s8 *)((s8 *)arg0 + 0x61) = 1;
    temp_r4 = *(s16 *)((s8 *)arg0 + 0x62);
    *(s16 *)((s8 *)arg0 + 0x62) = (s16) (temp_r4 + 1);
    init_photon_blast_entries__19TWindowSubMagPhotonFPv((void *) (arg0), (int) (temp_r4));
    return arg0;
}

void update_photon_selection__19TWindowSubMagPhotonFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = get_selected_menu_value(*(s32 *)((s8 *)arg0 + 0x28));
    temp_r3 = update_selected_item__17TWindowOptionCtrlFPv(*(s32 *)((s8 *)arg0 + 0x2C));
    if ((temp_r31 == 4) && ((s8) *(u8 *)((s8 *)arg0 + 0x1D) != temp_r3)) {
        *(u8 *)((s8 *)arg0 + 0x1D) = (u8) temp_r3;
        if ((s8) *(u8 *)((s8 *)arg0 + 0x1D) == 0) {
            spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (s16) *(s32 *)((s8 *)arg0 + 0x20));
        }
    }
}

void update_quest_board_card_flags(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = get_selected_menu_value(*(s32 *)((s8 *)arg0 + 0x28));
    temp_r4 = update_selected_item__17TWindowOptionCtrlFPv(*(s32 *)((s8 *)arg0 + 0x2C));
    switch (temp_r31) {
    case 0:
        set_card_flags_direct__20TWindowSubQuestBoardFPvi(*(s32 *)((s8 *)arg0 + 0x20), temp_r4);
        return;
    case 1:
        set_card_flags_scaled__20TWindowSubQuestBoardFii(*(s32 *)((s8 *)arg0 + 0x20), temp_r4);
        return;
    case 2:
        TWindowSubQuestBoard__sub_8027CF50(*(s32 *)((s8 *)arg0 + 0x20), temp_r4);
        return;
    case 4:
        clear_card_window_flags__20TWindowSubQuestBoardFii(*(s32 *)((s8 *)arg0 + 0x20), temp_r4);
        return;
    case 3:
        set_card_window_flags__20TWindowSubQuestBoardFii(*(s32 *)((s8 *)arg0 + 0x20), temp_r4);
        return;
    case 5:
        set_board_flags__20TWindowSubQuestBoardFii(*(s32 *)((s8 *)arg0 + 0x20), temp_r4);
        return;
    }
}

extern const f32 lbl_805DD688;

s32 TWindowSubStatusDisp__sub_8027C884(u8 *arg0, s32 arg1) {
    s16 var_r29;
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = TWindowSubStatusDisp__sub_80248BE8(get_window_layout_position(0x16), lbl_8044FA28, *(s32 *)((s8 *)arg0 + 0x20));
    switch (arg1) {
    case 0:
        ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x66))));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x6F))), (int) (0));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x70))), (int) (1));
        var_r29 = is_card_flag_set__19TWindowKeyBoardHardFPv((int) (*(s32 *)((s8 *)arg0 + 0x20)));
        break;
    case 1:
        ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x67))));
        draw_status__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x71))), (int) (0));
        draw_status__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x72))), (int) (1));
        var_r29 = test_card_flag_2__12TBoss8DragonFPv((int) (*(s32 *)((s8 *)arg0 + 0x20)));
        break;
    case 2:
        ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x68))));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x73))), (int) (0));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x74))), (int) (1));
        var_r29 = test_keyboard_card_flag4((int) (*(s32 *)((s8 *)arg0 + 0x20)));
        break;
    case 4:
        ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x6A))));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0xA6))), (int) (0));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0xA7))), (int) (1));
        temp_r3 = test_card_flag8__23TAdSinglePlyChrSelectGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x20)));
        *(s8 *)((s8 *)arg0 + 0x1D) = temp_r3;
        var_r29 = (s16) temp_r3;
        break;
    case 3:
        ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x69))));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x75))), (int) (0));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x76))), (int) (1));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x77))), (int) (2));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x78))), (int) (3));
        var_r29 = get_card_window_flags__20TWindowSubStatusDispFi((int) (*(s32 *)((s8 *)arg0 + 0x20)));
        break;
    case 5:
        ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x6E))));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x79))), (int) (0));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x7A))), (int) (1));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x7B))), (int) (2));
        dispatch_without_flags__20TWindowSubStatusDispFiii((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x7C))), (int) (3));
        var_r29 = fn_801A51F0((int) (*(s32 *)((s8 *)arg0 + 0x20)));
        break;
    }
    set_selected_index__20TWindowSubStatusDispFPvs((int) (temp_r31), var_r29);
    set_flag70_bit10__20TWindowShortListCtrlFPv((int) (temp_r31));
    TWindowSubEquip__sub_80263AF8((int) (*(s32 *)((s8 *)arg0 + 0x24)), (int) (1));
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

s32 create_option_menu_window(void *arg0) {
    s32 temp_r31;

    temp_r31 = create_titled_window_menu(get_window_layout_position(0x15), 6, get_message_10__20TWindowSubStatusDispFPv(0x2A), *(s32 *)((s8 *)arg0 + 0x20));
    if (is_split_screen() == 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x66), 6, 0);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x67), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x68), 6, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x69), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x6A), 6, 4);
    if (is_split_screen() == 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x6E), 6, 5);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD688);
    align_menu_entry_positions(temp_r31);
    TWindowSubEquip__sub_80263AF8(*(s32 *)((s8 *)arg0 + 0x24), 0);
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

}
