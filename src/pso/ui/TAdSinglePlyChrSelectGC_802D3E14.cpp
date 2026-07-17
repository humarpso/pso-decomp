#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_card_select__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801334DC(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE2D0();
M2C_UNK clear_transition_flag__17TWindowSubComCardFPv(s32);
M2C_UNK set_selection_state__21TAdMultiSelGameModeGCFPvi(s32, M2C_UNK);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);

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
