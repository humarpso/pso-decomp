#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802D4730_lbl_804C89BC { M2C_UNK value; u8 remaining[0x74]; };
typedef char RecoveredGlobal_802D4730_lbl_804C89BC_size[sizeof(RecoveredGlobal_802D4730_lbl_804C89BC) == 0x78 ? 1 : -1];

struct RecoveredGlobal_802D4730_lbl_8050E208 { M2C_UNK value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_802D4730_lbl_8050E208_size[sizeof(RecoveredGlobal_802D4730_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct RecoveredGlobal_802D4664_lbl_8050E208 { M2C_UNK value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_802D4664_lbl_8050E208_size[sizeof(RecoveredGlobal_802D4664_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct RecoveredGlobal_802D4570_lbl_80472510 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802D4570_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
void request_scene_change__21TAdMultiChgGameModeGCFv(void);
void set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
void TWindow__close(void *);
int close__17TWindowSubComCardFPv(void *);
int get_data__23TAdSinglePlyChrSelectGCFv(void);
extern const f32 lbl_805DE780;
void TAdSinglePlyChrSelectGC__sub_802D3D5C(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E2048(int, void *);
M2C_UNK load_player__23TAdSinglePlyChrSelectGCFv();
M2C_UNK play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
u32 TAdChrSelASlotGC__sub_8030CB08(int, int, int);
extern RecoveredGlobal_802D4730_lbl_804C89BC lbl_804C89BC;
extern RecoveredGlobal_802D4730_lbl_8050E208 lbl_8050E208;
void TAdSinglePlyChrSelectGC__sub_802D4730(u8 *arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
extern RecoveredGlobal_802D4730_lbl_8050E208 lbl_8050E208;
void TAdSinglePlyChrSelectGC__sub_802D4664(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK TLevelSelect__sub_802AEBE4(int, void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
extern RecoveredGlobal_802D4570_lbl_80472510 lbl_80472510;
extern RecoveredGlobal_802D4730_lbl_8050E208 lbl_8050E208;
void TAdSinglePlyChrSelectGC__sub_802D4570(u8 *arg0);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);
M2C_UNK request_transition__21TAdMultiChgGameModeGCFv();
M2C_UNK set_game_mode_changed__21TAdMultiChgGameModeGCFv();
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
s32 TWindowSubComCard__sub_80265BF8(int);
M2C_UNK open__17TWindowOptionCtrlFPv(int);
M2C_UNK set_selection_state__21TAdMultiSelGameModeGCFPvi(s32, M2C_UNK);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 TAdChrSelASlotGC__sub_8030C8D8(int, void *, int);
s32 TAdChrSelASlotGC__sub_8030C978(int, void *, int);
extern M2C_UNK lbl_80472538[];
void TAdSinglePlyChrSelectGC__sub_802D4168(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK load_tables();
u32 TAdSinglePlyChrSelectGC__sub_801FE4BC();
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
u32 check_flag__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK play_sound_effect(int, int, int, int);
u32 __nw__7TObjectFUl(M2C_UNK);
void TWindow__close(void *);
int close__17TWindowSubComCardFPv(void *);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, s32);
u32 __ct__9TAdFadeGCFv(u32, s32, M2C_UNK);
s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 TAdChrSelASlotGC__sub_8030C3C0(s32, s32);
u32 open_yes_no_window__16TAdChrSelASlotGCFiii(s32, M2C_UNK *, M2C_UNK);
u32 TAdChrSelASlotGC__sub_8030CA84(s32, M2C_UNK *);
extern M2C_UNK lbl_80472540[];
extern M2C_UNK lbl_80472548[];
extern M2C_UNK lbl_80472550[];
extern RecoveredGlobal_802D4730_lbl_8050E208 lbl_8050E208;
extern M2C_UNK lbl_8050E3B8[];
extern s32 tl_fade;
extern M2C_UNK lbl_805DE784;
void TAdSinglePlyChrSelectGC__sub_802D4294(void *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E2048(int, void *);
M2C_UNK play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
u32 TAdChrSelASlotGC__sub_8030CB08(int, int, int);
extern RecoveredGlobal_802D4730_lbl_804C89BC lbl_804C89BC;
extern RecoveredGlobal_802D4730_lbl_8050E208 lbl_8050E208;
void TAdSinglePlyChrSelectGC__sub_802D486C(void *arg0);
}

extern "C" {

s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void handle_card_select__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801334DC(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE2D0();
s32 TAdSinglePlyChrSelectGC__sub_802D4D9C();
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(s32, M2C_UNK);
M2C_UNK clear_transition_flag__17TWindowSubComCardFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_selection_state__21TAdMultiSelGameModeGCFPvi(s32, M2C_UNK);

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
    TWindowSubComCard__sub_80265F60(var_r31);
    TWindowSubComCard__sub_80265C30(var_r31);
    return var_r31;
}

void finish_character_selection_transition(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r4;
    if ((f32) temp_r4 > lbl_805DE780) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
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

void TAdSinglePlyChrSelectGC__sub_802D3D5C(u8 *arg0) {
    s32 temp_r3_3;
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38));
    if (temp_r3 != NULL) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u8 **, 0x38) = NULL;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x44));
    if (temp_r3_2 != NULL) {
        close__17TWindowSubComCardFPv(temp_r3_2);
        M2C_FIELD(arg0, u8 **, 0x44) = NULL;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r4;
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

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x50)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x50));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x5C) = 3;
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x50)) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x4C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x4C));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x5C) = 1;
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x4C)) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x44)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x44));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x5C) = 3;
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 1:
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x44)) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

void update__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x48));
        switch (temp_r3) {
        case 0:
            TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
            TAdSinglePlyChrSelectGC__sub_801FE2D0();
            get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28));
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x28), 0xF);
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            return;
        case 1:
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

typedef char RecoveredGlobal_802D4570_lbl_80472510_size[sizeof(RecoveredGlobal_802D4570_lbl_80472510) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802D4570_lbl_8050E208_size[sizeof(RecoveredGlobal_802D4570_lbl_8050E208) == 0x1B0 ? 1 : -1];

void TAdSinglePlyChrSelectGC__sub_802D4168(u8 *arg0) {
    s32 temp_r0;
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x28)))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x38))) != 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = TWindowSubComCard__sub_80265BF8((int) (M2C_FIELD(arg0, s32 *, 0x38)));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 1:
            open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, s32 *, 0x38)));
            M2C_FIELD(arg0, s32 *, 0x4C) = TAdChrSelASlotGC__sub_8030C8D8((int) (M2C_FIELD(arg0, s32 *, 0x28)), (void *) (lbl_80472538), (int) (0));
            M2C_FIELD(arg0, s32 *, 0x20) = 9;
            return;
        case 2:
            set_selection_state__21TAdMultiSelGameModeGCFPvi((s32)((int) (M2C_FIELD(arg0, s32 *, 0x2C))), (M2C_UNK)((int) (1)));
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        case 3:
            open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, s32 *, 0x38)));
            M2C_FIELD(arg0, s32 *, 0x50) = TAdChrSelASlotGC__sub_8030C978((int) (M2C_FIELD(arg0, s32 *, 0x28)), (void *) (lbl_80472538), (int) (0));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xA;
            return;
        }
    } else if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x38))) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi((s32)((int) (M2C_FIELD(arg0, s32 *, 0x2C))), (M2C_UNK)((int) (1)));
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

void TAdSinglePlyChrSelectGC__sub_802D4294(void *arg0) {
    s32 var_r30;
    u32 var_r0;
    if (M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if (M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if (M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    if (M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if (M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
    }
    if ((TWindowShortListCtrl__check_controller_button((void *)((u8 *)lbl_8050E3B8 + 0x20), 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    var_r30 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x58) != TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C))) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x30), 1);
        TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
        if (TAdSinglePlyChrSelectGC__sub_801FE4BC() != 0U) {
            TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
            load_tables();
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x30), 2);
            if (check_flag__23TAdSinglePlyChrSelectGCFi(1) != 0U) {
                var_r30 = 1;
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 0, get_localized_text_entry(0x1E, 5));
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 1, get_localized_text_entry(0x1E, 6));
            }
        }
        if (var_r30 == 0) {
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 0, get_localized_text_entry(0x1E, 0));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 1, (s32)&lbl_805DE784);
        }
        M2C_FIELD(arg0, s32 *, 0x58) = TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
    }
    if (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x2C)) == 1) {
        TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
        load_tables();
        TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
        if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() != 0) {
            if (TAdChrSelASlotGC__sub_8030C3C0(M2C_FIELD(arg0, s32 *, 0x28), TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                var_r0 = __nw__7TObjectFUl(0x38);
                if (var_r0 != 0U) {
                    var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
                }
                M2C_FIELD(arg0, u32 *, 0x54) = var_r0;
                M2C_FIELD(arg0, u32 *, 0x48) = open_yes_no_window__16TAdChrSelASlotGCFiii(M2C_FIELD(arg0, s32 *, 0x28), lbl_80472540, 0);
                M2C_FIELD(arg0, s32 *, 0x20) = 7;
                return;
            }
            M2C_FIELD(arg0, u32 *, 0x38) = create_chr_warp__23TAdSinglePlyChrSelectGCFii((s32)arg0, (s32)lbl_80472548);
            M2C_FIELD(arg0, s32 *, 0x20) = 6;
            return;
        }
        M2C_FIELD(arg0, u32 *, 0x44) = TAdChrSelASlotGC__sub_8030CA84(M2C_FIELD(arg0, s32 *, 0x28), lbl_80472550);
        M2C_FIELD(arg0, s32 *, 0x20) = 8;
    }
}

void TAdSinglePlyChrSelectGC__sub_802D4570(u8 *arg0) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&(*(RecoveredGlobal_802D4570_lbl_8050E208 *)&lbl_8050E208).value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_802D4570_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x28)))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    TLevelSelect__sub_802AEBE4((int) (M2C_FIELD(arg0, s32 *, 0x2C)), (void *) (&lbl_80472510.value));
    TLevelSelect__sub_802AEBE4((int) (M2C_FIELD(arg0, s32 *, 0x2C)), (void *) ((u8 *)&lbl_80472510.value + 8));
    TLevelSelect__sub_802AEBE4((int) (M2C_FIELD(arg0, s32 *, 0x2C)), (void *) ((u8 *)&lbl_80472510.value + 0x10));
    TLevelSelect__sub_802AEBE4((int) (M2C_FIELD(arg0, s32 *, 0x2C)), (void *) ((u8 *)&lbl_80472510.value + 0x18));
    M2C_FIELD(arg0, s32 *, 0x20) = 5;
}

void TAdSinglePlyChrSelectGC__sub_802D4664(u8 *arg0) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x28)))) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 4;
    }
}

void TAdSinglePlyChrSelectGC__sub_802D4730(u8 *arg0) {
    s32 temp_r0;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x28)))) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50((int) (0)) == 0) {
        if (TAdPlayerLoadGC__sub_801E2048((int) (0), (void *) (&lbl_804C89BC.value)) == 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x40));
                M2C_FIELD(arg0, u32 *, 0x40) = 0U;
            }
            load_player__23TAdSinglePlyChrSelectGCFv();
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
        if ((temp_r0 > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U)) {
            M2C_FIELD(arg0, u32 *, 0x40) = TAdChrSelASlotGC__sub_8030CB08((int) (M2C_FIELD(arg0, s32 *, 0x28)), (int) (0), (int) (0x18));
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802D486C(void *arg0) {
    s32 temp_r0;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        if (M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) == 0) {
        if ((u32)TAdPlayerLoadGC__sub_801E2048(0, (void *)&lbl_804C89BC.value) != 0xFFFFFF41U) {
            if (M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 2;
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
        if ((temp_r0 > 0xA) && (M2C_FIELD(arg0, u32 *, 0x3C) == 0U)) {
            M2C_FIELD(arg0, u32 *, 0x3C) = TAdChrSelASlotGC__sub_8030CB08(M2C_FIELD(arg0, s32 *, 0x28), 0, 0x16);
        }
    }
}

}
