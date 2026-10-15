#include "types.h"

struct RecoveredGlobal_802D4730_lbl_804C89BC { s32 value; u8 remaining[0x74]; };
typedef char RecoveredGlobal_802D4730_lbl_804C89BC_size[sizeof(RecoveredGlobal_802D4730_lbl_804C89BC) == 0x78 ? 1 : -1];

struct RecoveredGlobal_802D4730_lbl_8050E208 { s32 value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_802D4730_lbl_8050E208_size[sizeof(RecoveredGlobal_802D4730_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct RecoveredGlobal_802D4664_lbl_8050E208 { s32 value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_802D4664_lbl_8050E208_size[sizeof(RecoveredGlobal_802D4664_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct RecoveredGlobal_802D4570_lbl_80472510 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802D4570_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
void request_scene_change__21TAdMultiChgGameModeGCFv(void);
void set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
void TWindow__close(void *);
int close__17TWindowSubComCardFPv(void *);
int get_data__23TAdSinglePlyChrSelectGCFv(void);
extern const f32 lbl_805DE780;
void close_and_change_scene__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
u32 TAdChrSelASlotGC__sub_8030CB08(int, int, int);
extern RecoveredGlobal_802D4730_lbl_804C89BC lbl_804C89BC;
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D4730(u8 *arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D4664(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 play_sound_effect(int, int, int, int);
s32 add_item_rect__12TLevelSelectFPvPv(int, void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
extern RecoveredGlobal_802D4570_lbl_80472510 single_chr_select_item_rect_table;
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D4570(u8 *arg0);
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F9CC(s32);
s32 request_transition__21TAdMultiChgGameModeGCFv();
s32 set_game_mode_changed__21TAdMultiChgGameModeGCFv();
void TWindow__close(void *);
void set_opening_movie_purpose(s32);
int close__17TWindowSubComCardFPv(void *);
int get_data__23TAdSinglePlyChrSelectGCFv(void);
extern const f32 lbl_805DE780;
void finish_character_selection_transition(void *arg0);
s32 get_state_flag__9TMainTaskFv(void);
void render__23TAdSinglePlyChrSelectGCFv(void *self);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
s32 get_selected_menu_value(int);
s32 open__17TWindowOptionCtrlFPv(int);
s32 set_selection_state__21TAdMultiSelGameModeGCFPvi(s32, s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 create_format_message_window__16TAdChrSelASlotGCFiii(int, void *, int);
s32 TAdChrSelASlotGC__sub_8030C978(int, void *, int);
extern s32 lbl_80472538[];
void handle_menu_selection__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 get_localized_text_entry(s32, s32);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 load_tables();
u32 TAdSinglePlyChrSelectGC__sub_801FE4BC();
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
u32 check_flag__23TAdSinglePlyChrSelectGCFi(s32);
s32 play_sound_effect(int, int, int, int);
u32 __nw__7TObjectFUl(s32);
void TWindow__close(void *);
int close__17TWindowSubComCardFPv(void *);
s32 set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, s32);
u32 __ct__9TAdFadeGCFv(u32, s32, s32);
s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 TAdChrSelASlotGC__sub_8030C3C0(s32, s32);
u32 open_yes_no_window__16TAdChrSelASlotGCFiii(s32, s32 *, s32);
u32 TAdChrSelASlotGC__sub_8030CA84(s32, s32 *);
extern s32 lbl_80472540[];
extern s32 lbl_80472548[];
extern s32 lbl_80472550[];
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
extern s32 controller_physical_port_bank[];
extern s32 tl_fade;
extern s32 lbl_805DE784;
void handle_slot_selection__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
u32 TAdChrSelASlotGC__sub_8030CB08(int, int, int);
extern RecoveredGlobal_802D4730_lbl_804C89BC lbl_804C89BC;
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D486C(void *arg0);
}

extern "C" {

s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void handle_card_select__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 get_localized_text_entry(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 clear_entry__23TAdSinglePlyChrSelectGCFi();
s32 TAdSinglePlyChrSelectGC__sub_802D4D9C();
s32 align_menu_entry_positions(s32);
s32 calc_window_size__17TWindowSubComCardFPv(s32);
s32 is_child_visible__17TWindowSubComCardFPv(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(s32, s32);
s32 clear_transition_flag__17TWindowSubComCardFPv(s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_selection_state__21TAdMultiSelGameModeGCFPvi(s32, s32);

void render__23TAdSinglePlyChrSelectGCFv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) return;
}

s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 var_r31 = arg1;

    if (TAdSinglePlyChrSelectGC__sub_802D4D9C() != 0) {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(arg1, 4);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 2), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 4), 6, 3);
    } else {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(arg1, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 4), 6, 3);
    }
    calc_window_size__17TWindowSubComCardFPv(var_r31);
    align_menu_entry_positions(var_r31);
    return var_r31;
}

void finish_character_selection_transition(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x38));
        *(u32 *)((s8 *)arg0 + 0x38) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x44));
        *(u32 *)((s8 *)arg0 + 0x44) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x4C));
        *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x50));
        *(u32 *)((s8 *)arg0 + 0x50) = 0U;
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1C) + 1;
    *(s32 *)((s8 *)arg0 + 0x1C) = temp_r4;
    if ((f32) temp_r4 > lbl_805DE780) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x5C);
        switch (temp_r0) {
        case 0:
            if (((s32)get_data__23TAdSinglePlyChrSelectGCFv()) == 0) {
                request_transition__21TAdMultiChgGameModeGCFv();
                return;
            }
            TKeyBoardControl__sub_8000F91C(0xE);
            set_game_mode_changed__21TAdMultiChgGameModeGCFv();
            return;
        case 1:
            TKeyBoardControl__sub_8000F9CC(5);
            return;
        case 2: break;
        case 3:
            set_opening_movie_purpose(1);
            TKeyBoardControl__sub_8000F9CC(3);
            break;
        }
    }
}

void close_and_change_scene__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    s32 temp_r3_3;
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x38));
    if (temp_r3 != NULL) {
        TWindow__close(temp_r3);
        *(u8 **)((s8 *)arg0 + 0x38) = NULL;
    }
    temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x44));
    if (temp_r3_2 != NULL) {
        close__17TWindowSubComCardFPv(temp_r3_2);
        *(u8 **)((s8 *)arg0 + 0x44) = NULL;
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1C) + 1;
    *(s32 *)((s8 *)arg0 + 0x1C) = temp_r4;
    if ((f32) temp_r4 > lbl_805DE780) {
        temp_r3_3 = get_data__23TAdSinglePlyChrSelectGCFv();
        switch (temp_r3_3) {
        case 0:
            request_scene_change__21TAdMultiChgGameModeGCFv();
            return;
        case 1:
            set_game_mode_state__21TAdMultiChgGameModeGCFv();
            break;
        }
    }
}

void handle_card_select__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x28)) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x50)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x50));
        switch (temp_r3) {
        case 0:
            *(s32 *)((s8 *)arg0 + 0x5C) = 3;
            *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
            return;
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x38));
            set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
            *(s32 *)((s8 *)arg0 + 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x50)) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x38));
        set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
        *(s32 *)((s8 *)arg0 + 0x20) = 5;
    }
}

void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x28)) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x4C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x4C));
        switch (temp_r3) {
        case 0:
            *(s32 *)((s8 *)arg0 + 0x5C) = 1;
            *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
            return;
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x38));
            set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
            *(s32 *)((s8 *)arg0 + 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x4C)) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x38));
        set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
        *(s32 *)((s8 *)arg0 + 0x20) = 5;
    }
}

void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x28)) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x44)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x44));
        switch (temp_r3) {
        case 0:
            *(s32 *)((s8 *)arg0 + 0x5C) = 3;
            *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
            return;
        case 1:
            set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
            *(s32 *)((s8 *)arg0 + 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x44)) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
        *(s32 *)((s8 *)arg0 + 0x20) = 5;
    }
}

void update__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x28)) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x48)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x48));
        switch (temp_r3) {
        case 0:
            TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C));
            clear_entry__23TAdSinglePlyChrSelectGCFi();
            get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x28));
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x28), 0xF);
            set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
            *(s32 *)((s8 *)arg0 + 0x20) = 0;
            return;
        case 1:
            set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
            *(s32 *)((s8 *)arg0 + 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x48)) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi(*(s32 *)((s8 *)arg0 + 0x2C), 1);
        *(s32 *)((s8 *)arg0 + 0x20) = 5;
    }
}

typedef char RecoveredGlobal_802D4570_lbl_80472510_size[sizeof(RecoveredGlobal_802D4570_lbl_80472510) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802D4570_lbl_8050E208_size[sizeof(RecoveredGlobal_802D4570_lbl_8050E208) == 0x1B0 ? 1 : -1];

void handle_menu_selection__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    s32 temp_r0;
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x28)))) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (is_visible__17TWindowSubComCardFPv((int) (*(s32 *)((s8 *)arg0 + 0x38))) != 0) {
        *(s32 *)((s8 *)arg0 + 0x5C) = get_selected_menu_value((int) (*(s32 *)((s8 *)arg0 + 0x38)));
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x5C);
        switch (temp_r0) {
        case 0:
            *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
            return;
        case 1:
            open__17TWindowOptionCtrlFPv((int) (*(s32 *)((s8 *)arg0 + 0x38)));
            *(s32 *)((s8 *)arg0 + 0x4C) = create_format_message_window__16TAdChrSelASlotGCFiii((int) (*(s32 *)((s8 *)arg0 + 0x28)), (void *) (lbl_80472538), (int) (0));
            *(s32 *)((s8 *)arg0 + 0x20) = 9;
            return;
        case 2:
            set_selection_state__21TAdMultiSelGameModeGCFPvi((s32)((int) (*(s32 *)((s8 *)arg0 + 0x2C))), (s32)((int) (1)));
            *(s32 *)((s8 *)arg0 + 0x20) = 5;
            return;
        case 3:
            open__17TWindowOptionCtrlFPv((int) (*(s32 *)((s8 *)arg0 + 0x38)));
            *(s32 *)((s8 *)arg0 + 0x50) = TAdChrSelASlotGC__sub_8030C978((int) (*(s32 *)((s8 *)arg0 + 0x28)), (void *) (lbl_80472538), (int) (0));
            *(s32 *)((s8 *)arg0 + 0x20) = 0xA;
            return;
        }
    } else if (get_status_flag__17TWindowSubComCardFPv((int) (*(s32 *)((s8 *)arg0 + 0x38))) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi((s32)((int) (*(s32 *)((s8 *)arg0 + 0x2C))), (s32)((int) (1)));
        *(s32 *)((s8 *)arg0 + 0x20) = 5;
    }
}

void handle_slot_selection__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 var_r30;
    u32 var_r0;
    if (*(u32 *)((s8 *)arg0 + 0x38) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x38));
        *(u32 *)((s8 *)arg0 + 0x38) = 0U;
    }
    if (*(u32 *)((s8 *)arg0 + 0x44) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x44));
        *(u32 *)((s8 *)arg0 + 0x44) = 0U;
    }
    if (*(u32 *)((s8 *)arg0 + 0x48) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x48));
        *(u32 *)((s8 *)arg0 + 0x48) = 0U;
    }
    if (*(u32 *)((s8 *)arg0 + 0x50) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x50));
        *(u32 *)((s8 *)arg0 + 0x50) = 0U;
    }
    if (*(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x4C));
        *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
    }
    if (*(u32 *)((s8 *)arg0 + 0x54) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x54));
        *(u32 *)((s8 *)arg0 + 0x54) = 0U;
    }
    if ((TWindowShortListCtrl__check_controller_button((void *)((u8 *)controller_physical_port_bank + 0x20), 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x28)) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    var_r30 = 0;
    if (*(s32 *)((s8 *)arg0 + 0x58) != TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C))) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x30), 1);
        TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C));
        if (TAdSinglePlyChrSelectGC__sub_801FE4BC() != 0U) {
            TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C));
            load_tables();
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x30), 2);
            if (check_flag__23TAdSinglePlyChrSelectGCFi(1) != 0U) {
                var_r30 = 1;
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x34), 0, get_localized_text_entry(0x1E, 5));
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x34), 1, get_localized_text_entry(0x1E, 6));
            }
        }
        if (var_r30 == 0) {
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x34), 0, get_localized_text_entry(0x1E, 0));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x34), 1, (s32)&lbl_805DE784);
        }
        *(s32 *)((s8 *)arg0 + 0x58) = TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C));
    }
    if (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x2C)) == 1) {
        TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C));
        load_tables();
        TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C));
        if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() != 0) {
            if (TAdChrSelASlotGC__sub_8030C3C0(*(s32 *)((s8 *)arg0 + 0x28), TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                var_r0 = __nw__7TObjectFUl(0x38);
                if (var_r0 != 0U) {
                    var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
                }
                *(u32 *)((s8 *)arg0 + 0x54) = var_r0;
                *(u32 *)((s8 *)arg0 + 0x48) = open_yes_no_window__16TAdChrSelASlotGCFiii(*(s32 *)((s8 *)arg0 + 0x28), lbl_80472540, 0);
                *(s32 *)((s8 *)arg0 + 0x20) = 7;
                return;
            }
            *(u32 *)((s8 *)arg0 + 0x38) = create_chr_warp__23TAdSinglePlyChrSelectGCFii((s32)arg0, (s32)lbl_80472548);
            *(s32 *)((s8 *)arg0 + 0x20) = 6;
            return;
        }
        *(u32 *)((s8 *)arg0 + 0x44) = TAdChrSelASlotGC__sub_8030CA84(*(s32 *)((s8 *)arg0 + 0x28), lbl_80472550);
        *(s32 *)((s8 *)arg0 + 0x20) = 8;
    }
}

void TAdSinglePlyChrSelectGC__sub_802D4570(u8 *arg0) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&(*(RecoveredGlobal_802D4570_lbl_8050E208 *)&controller_input_state).value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_802D4570_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x28)))) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    add_item_rect__12TLevelSelectFPvPv((int) (*(s32 *)((s8 *)arg0 + 0x2C)), (void *) (&single_chr_select_item_rect_table.value));
    add_item_rect__12TLevelSelectFPvPv((int) (*(s32 *)((s8 *)arg0 + 0x2C)), (void *) ((u8 *)&single_chr_select_item_rect_table.value + 8));
    add_item_rect__12TLevelSelectFPvPv((int) (*(s32 *)((s8 *)arg0 + 0x2C)), (void *) ((u8 *)&single_chr_select_item_rect_table.value + 0x10));
    add_item_rect__12TLevelSelectFPvPv((int) (*(s32 *)((s8 *)arg0 + 0x2C)), (void *) ((u8 *)&single_chr_select_item_rect_table.value + 0x18));
    *(s32 *)((s8 *)arg0 + 0x20) = 5;
}

void TAdSinglePlyChrSelectGC__sub_802D4664(u8 *arg0) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x28)))) == 1) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        *(s32 *)((s8 *)arg0 + 0x20) = 4;
    }
}

void TAdSinglePlyChrSelectGC__sub_802D4730(u8 *arg0) {
    s32 temp_r0;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x28)))) == 1) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50((int) (0)) == 0) {
        if (find_card_file__15TAdPlayerLoadGCFiPv((int) (0), (void *) (&lbl_804C89BC.value)) == 0) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
                TWindow__close(*(void **)((s8 *)arg0 + 0x40));
                *(u32 *)((s8 *)arg0 + 0x40) = 0U;
            }
            load_player__23TAdSinglePlyChrSelectGCFv();
            *(s32 *)((s8 *)arg0 + 0x20) = 3;
            return;
        }
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C) + 1;
        *(s32 *)((s8 *)arg0 + 0x1C) = temp_r0;
        if ((temp_r0 > 0xA) && ((u32) *(u32 *)((s8 *)arg0 + 0x40) == 0U)) {
            *(u32 *)((s8 *)arg0 + 0x40) = TAdChrSelASlotGC__sub_8030CB08((int) (*(s32 *)((s8 *)arg0 + 0x28)), (int) (0), (int) (0x18));
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802D486C(void *arg0) {
    s32 temp_r0;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x28)) == 1) {
        if (*(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x3C));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) == 0) {
        if ((u32)find_card_file__15TAdPlayerLoadGCFiPv(0, (void *)&lbl_804C89BC.value) != 0xFFFFFF41U) {
            if (*(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
                TWindow__close(*(void **)((s8 *)arg0 + 0x3C));
                *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 2;
            return;
        }
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C) + 1;
        *(s32 *)((s8 *)arg0 + 0x1C) = temp_r0;
        if ((temp_r0 > 0xA) && (*(u32 *)((s8 *)arg0 + 0x3C) == 0U)) {
            *(u32 *)((s8 *)arg0 + 0x3C) = TAdChrSelASlotGC__sub_8030CB08(*(s32 *)((s8 *)arg0 + 0x28), 0, 0x16);
        }
    }
}

}
