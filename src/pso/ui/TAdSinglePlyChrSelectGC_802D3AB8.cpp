#include "types.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/TAdMultiChgGameModeGC.h"
#include "pso/TAdMultiSelGameModeGC.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/TLevelSelect.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/ui/TAdChrSelASlotGC.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"

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
void TWindow__close(void *);
extern const f32 lbl_805DE780;
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(int, int, int);
extern RecoveredGlobal_802D4730_lbl_804C89BC lbl_804C89BC;
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D4730(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D4664(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 play_sound_effect(int, int, int, int);
extern RecoveredGlobal_802D4570_lbl_80472510 single_chr_select_item_rect_table;
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D4570(u8 *arg0);
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F9CC(s32);
void TWindow__close(void *);
void set_opening_movie_purpose(s32);
extern const f32 lbl_805DE780;
void finish_character_selection_transition(void *arg0);
s32 get_state_flag__9TMainTaskFv(void);
s32 get_selected_menu_value(int);
s32 TAdChrSelASlotGC__sub_8030C978(int, void *, int);
extern s32 lbl_80472538[];
s32 queue_destruction__7TObjectFv(void *);
s32 get_localized_text_entry(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 load_tables();
u32 TAdSinglePlyChrSelectGC__sub_801FE4BC();
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
u32 check_flag__23TAdSinglePlyChrSelectGCFl(s32);
s32 play_sound_effect(int, int, int, int);
u32 __nw__7TObjectFUl(s32);
void TWindow__close(void *);
u32 __ct__9TAdFadeGCFv(u32, s32, s32);
s32 TAdChrSelASlotGC__sub_8030C3C0(s32, s32);
u32 TAdChrSelASlotGC__sub_8030CA84(s32, s32 *);
extern s32 lbl_80472540[];
extern s32 lbl_80472548[];
extern s32 lbl_80472550[];
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
extern s32 controller_physical_port_bank[];
extern s32 tl_fade;
extern s32 lbl_805DE784;
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(int, int, int);
extern RecoveredGlobal_802D4730_lbl_804C89BC lbl_804C89BC;
extern RecoveredGlobal_802D4730_lbl_8050E208 controller_input_state;
void TAdSinglePlyChrSelectGC__sub_802D486C(void *arg0);
}

extern "C" {

s32 get_localized_text_entry(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 clear_entry__23TAdSinglePlyChrSelectGCFi();
s32 TAdSinglePlyChrSelectGC__sub_802D4D9C();
s32 align_menu_entry_positions(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);

void TAdSinglePlyChrSelectGC::render() {
    if (get_state_flag__9TMainTaskFv() == 1) return;
}

s32 TAdSinglePlyChrSelectGC::create_chr_warp(s32 arg0, s32 arg1) {
    s32 var_r31 = arg1;

    if (TAdSinglePlyChrSelectGC__sub_802D4D9C() != 0) {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFl(arg1, 4);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 2), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 4), 6, 3);
    } else {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFl(arg1, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, get_localized_text_entry(0x1E, 4), 6, 3);
    }
    ((TWindowSubComCard *)var_r31)->calc_window_size();
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
        ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x44)))->close();
        *(u32 *)((s8 *)arg0 + 0x44) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
        ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x4C)))->close();
        *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
        ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x50)))->close();
        *(u32 *)((s8 *)arg0 + 0x50) = 0U;
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1C) + 1;
    *(s32 *)((s8 *)arg0 + 0x1C) = temp_r4;
    if ((f32) temp_r4 > lbl_805DE780) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x5C);
        switch (temp_r0) {
        case 0:
            if (((s32)TAdSinglePlyChrSelectGC::get_data()) == 0) {
                TAdMultiChgGameModeGC::request_transition();
                return;
            }
            TKeyBoardControl__sub_8000F91C(0xE);
            TAdMultiChgGameModeGC::set_game_mode_changed();
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

void TAdSinglePlyChrSelectGC::close_and_change_scene() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3_3;
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(*(u8 * *)&this->unk_38);
    if (temp_r3 != NULL) {
        TWindow__close(temp_r3);
        *(u8 * *)&this->unk_38 = NULL;
    }
    temp_r3_2 = (u8 *)(*(u8 * *)&this->m_44);
    if (temp_r3_2 != NULL) {
        ((TWindowSubComCard *)temp_r3_2)->close();
        *(u8 * *)&this->m_44 = NULL;
    }
    temp_r4 = *(s32 *)&this->m_1c + 1;
    *(s32 *)&this->m_1c = temp_r4;
    if ((f32) temp_r4 > lbl_805DE780) {
        temp_r3_3 = TAdSinglePlyChrSelectGC::get_data();
        switch (temp_r3_3) {
        case 0:
            TAdMultiChgGameModeGC::request_scene_change();
            return;
        case 1:
            TAdMultiChgGameModeGC::set_game_mode_state();
            break;
        }
    }
}

void TAdSinglePlyChrSelectGC::handle_card_select() {
    s32 temp_r3;

    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->get_player_index() == 1) {
        *(s32 *)&this->m_20 = 0;
        return;
    }
    if (((TWindowMessageYesNo *)(*(s32 *)&this->unk_50))->is_child_visible() != 0) {
        temp_r3 = ((TWindowSubComCard *)(*(s32 *)&this->unk_50))->get_slot_or_neg1();
        switch (temp_r3) {
        case 0:
            this->m_5c = 3;
            *(s32 *)&this->m_20 = 0xC;
            return;
        case 1:
            ((TWindowSubComCard *)(*(s32 *)&this->unk_38))->clear_transition_flag();
            ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
            *(s32 *)&this->m_20 = 5;
            return;
        }
    } else if (((TWindowSubComCard *)(*(s32 *)&this->unk_50))->get_card_data() != 0) {
        ((TWindowSubComCard *)(*(s32 *)&this->unk_38))->clear_transition_flag();
        ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
        *(s32 *)&this->m_20 = 5;
    }
}

void TAdSinglePlyChrSelectGC::handle_card_select2() {
    s32 temp_r3;

    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->get_player_index() == 1) {
        *(s32 *)&this->m_20 = 0;
        return;
    }
    if (((TWindowMessageYesNo *)(this->m_4c))->is_child_visible() != 0) {
        temp_r3 = ((TWindowSubComCard *)(this->m_4c))->get_slot_or_neg1();
        switch (temp_r3) {
        case 0:
            this->m_5c = 1;
            *(s32 *)&this->m_20 = 0xC;
            return;
        case 1:
            ((TWindowSubComCard *)(*(s32 *)&this->unk_38))->clear_transition_flag();
            ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
            *(s32 *)&this->m_20 = 5;
            return;
        }
    } else if (((TWindowSubComCard *)(this->m_4c))->get_card_data() != 0) {
        ((TWindowSubComCard *)(*(s32 *)&this->unk_38))->clear_transition_flag();
        ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
        *(s32 *)&this->m_20 = 5;
    }
}

void TAdSinglePlyChrSelectGC::update_card_input() {
    s32 temp_r3;

    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->get_player_index() == 1) {
        *(s32 *)&this->m_20 = 0;
        return;
    }
    if (((TWindowMessageYesNo *)(this->m_44))->is_child_visible() != 0) {
        temp_r3 = ((TWindowSubComCard *)(this->m_44))->get_slot_or_neg1();
        switch (temp_r3) {
        case 0:
            this->m_5c = 3;
            *(s32 *)&this->m_20 = 0xC;
            return;
        case 1:
            ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
            *(s32 *)&this->m_20 = 5;
            return;
        }
    } else if (((TWindowSubComCard *)(this->m_44))->get_card_data() != 0) {
        ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
        *(s32 *)&this->m_20 = 5;
    }
}

void TAdSinglePlyChrSelectGC::update() {
    s32 temp_r3;

    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->get_player_index() == 1) {
        *(s32 *)&this->m_20 = 0;
        return;
    }
    if (((TWindowMessageYesNo *)(*(s32 *)&this->unk_48))->is_child_visible() != 0) {
        temp_r3 = ((TWindowSubComCard *)(*(s32 *)&this->unk_48))->get_slot_or_neg1();
        switch (temp_r3) {
        case 0:
            TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c);
            clear_entry__23TAdSinglePlyChrSelectGCFi();
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->get_player_index();
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->set_cursor_index(0xF);
            ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
            *(s32 *)&this->m_20 = 0;
            return;
        case 1:
            ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
            *(s32 *)&this->m_20 = 5;
            return;
        }
    } else if (((TWindowSubComCard *)(*(s32 *)&this->unk_48))->get_card_data() != 0) {
        ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state(1);
        *(s32 *)&this->m_20 = 5;
    }
}

typedef char RecoveredGlobal_802D4570_lbl_80472510_size[sizeof(RecoveredGlobal_802D4570_lbl_80472510) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802D4570_lbl_8050E208_size[sizeof(RecoveredGlobal_802D4570_lbl_8050E208) == 0x1B0 ? 1 : -1];

void TAdSinglePlyChrSelectGC::handle_menu_selection() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->get_player_index() == 1) {
        *(s32 *)&this->m_20 = 0;
        return;
    }
    if (((TWindowMenu *)(*(s32 *)&this->unk_38))->is_visible() != 0) {
        this->m_5c = get_selected_menu_value((int) (*(s32 *)&this->unk_38));
        temp_r0 = this->m_5c;
        switch (temp_r0) {
        case 0:
            *(s32 *)&this->m_20 = 0xC;
            return;
        case 1:
            ((TWindowOptionCtrl *)(*(s32 *)&this->unk_38))->open();
            this->m_4c = TAdChrSelASlotGC::create_format_message_window((s32)((int) (*(s32 *)&this->m_28)), (s32)((void *) (lbl_80472538)), (s32)((int) (0)));
            *(s32 *)&this->m_20 = 9;
            return;
        case 2:
            ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state((s32)((int) (1)));
            *(s32 *)&this->m_20 = 5;
            return;
        case 3:
            ((TWindowOptionCtrl *)(*(s32 *)&this->unk_38))->open();
            *(s32 *)&this->unk_50 = TAdChrSelASlotGC__sub_8030C978((int) (*(s32 *)&this->m_28), (void *) (lbl_80472538), (int) (0));
            *(s32 *)&this->m_20 = 0xA;
            return;
        }
    } else if (((TWindowSubComCard *)(*(s32 *)&this->unk_38))->get_status_flag() != 0) {
        ((TAdMultiSelGameModeGC *)(*(s32 *)&this->m_2c))->set_selection_state((s32)((int) (1)));
        *(s32 *)&this->m_20 = 5;
    }
}

void TAdSinglePlyChrSelectGC::handle_slot_selection() {
    s32 var_r30;
    u32 var_r0;
    if (*(u32 *)&this->unk_38 != 0U) {
        TWindow__close(*(void * *)&this->unk_38);
        *(u32 *)&this->unk_38 = 0U;
    }
    if (*(u32 *)&this->m_44 != 0U) {
        ((TWindowSubComCard *)(*(void * *)&this->m_44))->close();
        *(u32 *)&this->m_44 = 0U;
    }
    if (*(u32 *)&this->unk_48 != 0U) {
        ((TWindowSubComCard *)(*(void * *)&this->unk_48))->close();
        *(u32 *)&this->unk_48 = 0U;
    }
    if (*(u32 *)&this->unk_50 != 0U) {
        ((TWindowSubComCard *)(*(void * *)&this->unk_50))->close();
        *(u32 *)&this->unk_50 = 0U;
    }
    if (*(u32 *)&this->m_4c != 0U) {
        ((TWindowSubComCard *)(*(void * *)&this->m_4c))->close();
        *(u32 *)&this->m_4c = 0U;
    }
    if (this->m_54 != 0U) {
        queue_destruction__7TObjectFv(*(void * *)&this->m_54);
        this->m_54 = 0U;
    }
    if ((TWindowShortListCtrl__check_controller_button((void *)((u8 *)controller_physical_port_bank + 0x20), 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)&this->m_20 = 0xB;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_28))->get_player_index() == 1) {
        *(s32 *)&this->m_20 = 0;
        return;
    }
    var_r30 = 0;
    if (*(s32 *)&this->unk_58 != TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c)) {
        ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_30))->set_field_100(1);
        TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c);
        if (TAdSinglePlyChrSelectGC__sub_801FE4BC() != 0U) {
            TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c);
            load_tables();
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_30))->set_field_100(2);
            if (check_flag__23TAdSinglePlyChrSelectGCFl(1) != 0U) {
                var_r30 = 1;
                ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_34))->set_entry_value(0, get_localized_text_entry(0x1E, 5));
                ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_34))->set_entry_value(1, get_localized_text_entry(0x1E, 6));
            }
        }
        if (var_r30 == 0) {
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_34))->set_entry_value(0, get_localized_text_entry(0x1E, 0));
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)&this->m_34))->set_entry_value(1, (s32)&lbl_805DE784);
        }
        *(s32 *)&this->unk_58 = TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c);
    }
    if (((TAdSinglePlyChrSelectGC *)(*(s32 *)&this->m_2c))->get_selected_slot() == 1) {
        TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c);
        load_tables();
        TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c);
        if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() != 0) {
            if (TAdChrSelASlotGC__sub_8030C3C0(*(s32 *)&this->m_28, TAdSinglePlyChrSelectGC__sub_801334DC(*(s32 *)&this->m_2c)) != 0) {
                var_r0 = __nw__7TObjectFUl(0x38);
                if (var_r0 != 0U) {
                    var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
                }
                this->m_54 = var_r0;
                *(u32 *)&this->unk_48 = TAdChrSelASlotGC::open_yes_no_window((s32)(*(s32 *)&this->m_28), (s32)lbl_80472540, (s32)0);
                *(s32 *)&this->m_20 = 7;
                return;
            }
            *(u32 *)&this->unk_38 = TAdSinglePlyChrSelectGC::create_chr_warp((s32)this, (s32)lbl_80472548);
            *(s32 *)&this->m_20 = 6;
            return;
        }
        *(u32 *)&this->m_44 = TAdChrSelASlotGC__sub_8030CA84(*(s32 *)&this->m_28, lbl_80472550);
        *(s32 *)&this->m_20 = 8;
    }
}

void TAdSinglePlyChrSelectGC__sub_802D4570(u8 *arg0) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&(*(RecoveredGlobal_802D4570_lbl_8050E208 *)&controller_input_state).value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&(*(RecoveredGlobal_802D4570_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x28)))->get_player_index() == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    ((TLevelSelect *)(*(s32 *)((s8 *)arg0 + 0x2C)))->add_item_rect((void *) (&single_chr_select_item_rect_table.value));
    ((TLevelSelect *)(*(s32 *)((s8 *)arg0 + 0x2C)))->add_item_rect((void *) ((u8 *)&single_chr_select_item_rect_table.value + 8));
    ((TLevelSelect *)(*(s32 *)((s8 *)arg0 + 0x2C)))->add_item_rect((void *) ((u8 *)&single_chr_select_item_rect_table.value + 0x10));
    ((TLevelSelect *)(*(s32 *)((s8 *)arg0 + 0x2C)))->add_item_rect((void *) ((u8 *)&single_chr_select_item_rect_table.value + 0x18));
    *(s32 *)((s8 *)arg0 + 0x20) = 5;
}

void TAdSinglePlyChrSelectGC__sub_802D4664(u8 *arg0) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x28)))->get_player_index() == 1) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (TAdPlayerLoadGC::get_instance() == 0) {
        *(s32 *)((s8 *)arg0 + 0x20) = 4;
    }
}

void TAdSinglePlyChrSelectGC__sub_802D4730(u8 *arg0) {
    s32 temp_r0;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x28)))->get_player_index() == 1) {
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
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x28)))->get_player_index() == 1) {
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
