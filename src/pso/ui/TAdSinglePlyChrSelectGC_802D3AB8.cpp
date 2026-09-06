#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void request_scene_change__21TAdMultiChgGameModeGCFv(void);
void set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
void TWindow__close(void *);
int close__17TWindowSubComCardFPv(void *);
int get_data__23TAdSinglePlyChrSelectGCFv(void);
extern const f32 lbl_805DE780;
void TAdSinglePlyChrSelectGC__sub_802D3D5C(u8 *arg0);
}

extern "C" {

s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void handle_card_select__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
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

s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 var_r31 = arg1;

    if (TAdSinglePlyChrSelectGC__sub_802D4D9C() != 0) {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(arg1, 4);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 2), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 4), 6, 3);
    } else {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(arg1, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 4), 6, 3);
    }
    TWindowSubComCard__sub_80265F60(var_r31);
    TWindowSubComCard__sub_80265C30(var_r31);
    return var_r31;
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

}
