#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8027C56C_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8027C6B4_lbl_804D17E8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8027C6B4___vt__19TWindowSubMagPhoton {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_8027C2D0_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubMagPhoton__sub_8027C4C8(void *, int);
void render__19TWindowSubMagPhotonFv(s32 arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(int);
s32 TWindowSubStatusDisp__sub_80257C28(void *, void *);
s32 get_active_flag__13TWindowSubMagFPv(void *);
void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0);
void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0);
extern RecoveredGlobal_8027C56C_lbl_8050E208 lbl_8050E208;
void run_task__19TWindowSubMagPhotonFv(u8 *arg0);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
M2C_UNK fn_8027C188(void *, int);
s32 TWindowDD__sub_802466E0(void *, void *, void *, void *);
extern RecoveredGlobal_8027C6B4_lbl_804D17E8 lbl_804D17E8;
extern M2C_UNK __vt__19TWindowSubMagPhoton[];
extern s32 lbl_805D3A70;
u8 *TWindowSubMagPhoton__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_player_input_active(int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_8027C56C_lbl_8050E208 lbl_8050E208;
void TWindowSubMagPhoton__sub_8027C2D0(u8 *arg0);
}

extern "C" {

void *__dt__19TWindowSubMagPhotonFv(void *arg0, s16 arg1);
s32 create_option_menu_window(void *arg0);
void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0);
void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0);
void update_photon_selection__19TWindowSubMagPhotonFPv(void *arg0);
void update_quest_board_card_flags(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK TWindowSubQuestBoard__sub_8027CF50(s32, s32);
void __dl__7TObjectFPv(void *);
M2C_UNK clear_card_window_flags__20TWindowSubQuestBoardFii(s32, s32);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 fn_8026652C(s32, M2C_UNK, s32, s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 is_split_screen();
M2C_UNK set_board_flags__20TWindowSubQuestBoardFii(s32, s32);
M2C_UNK set_card_flags_direct__20TWindowSubQuestBoardFPvi(s32, s32);
M2C_UNK set_card_flags_scaled__20TWindowSubQuestBoardFii(s32, s32);
M2C_UNK set_card_window_flags__20TWindowSubQuestBoardFii(s32, s32);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK spawn_effect__11TBoss4Type3Fsss(M2C_UNK, M2C_UNK, s16);
s32 update_selected_item__17TWindowOptionCtrlFPv(s32);

void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0) {
    if (get_active_flag__13TWindowSubMagFPv((void *)(arg0)) == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

extern M2C_UNK __vt__19TWindowSubMagPhoton[];

typedef char RecoveredGlobal_8027C2D0_lbl_8050E208_size[sizeof(RecoveredGlobal_8027C2D0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubMagPhoton__sub_8027C2D0(u8 *arg0) {
    u8 temp_r3;
    u8 temp_r3_2;
    u8 *temp_r30;
    temp_r30 = (u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&lbl_8050E208).value + (is_player_input_active((int)((s32) M2C_FIELD(arg0, s16 *, 0x20))) * 0x50) + 0x20;
    if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0xF0), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0xF0), (int) (6), (int) (1)) != 0)) {
        TBoss3Volopt__sub_8022675C((M2C_UNK)(0x54100), (M2C_UNK)(0U), (M2C_UNK)(0), (M2C_UNK)(0));
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x80), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x80), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x40), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_8027C2D0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x40), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) - 1);
        }
        temp_r3 = M2C_FIELD(arg0, u8 *, 0x61);
        if ((s8) temp_r3 < 0) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3 + 3);
        }
        temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x61);
        if ((s8) temp_r3_2 >= 3) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3_2 - 3);
        }
    }
}

void render__19TWindowSubMagPhotonFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    TWindowSubMagPhoton__sub_8027C4C8((void *) (arg0), (int) (temp_r3));
}

typedef char RecoveredGlobal_8027C56C_lbl_8050E208_size[sizeof(RecoveredGlobal_8027C56C_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__19TWindowSubMagPhotonFv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r31_2;
    temp_r31 = is_player_input_active((int) ((s32) M2C_FIELD(arg0, s16 *, 0x20)));
    if (get_active_flag__13TWindowSubMagFPv((void *)((void *) (arg0))) == 0) {
        TWindowSubMagPhoton__sub_8027C2D0((u8 *)((void *) (arg0)));
        temp_r31_2 = (u8 *)&lbl_8050E208.value + (temp_r31 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31_2), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            play_open_sound__19TWindowSubMagPhotonFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31_2), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__19TWindowSubMagPhotonFPv((void *) (arg0));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
    M2C_FIELD(arg0, s16 *, 0x62) = (s16) (M2C_FIELD(arg0, s16 *, 0x62) + 1);
}

void *__dt__19TWindowSubMagPhotonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubMagPhoton;
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
    TWindowDD__sub_802466E0((void *) (arg0), (void *) (&lbl_804D17E8.value), (void *) (arg3), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8027C6B4___vt__19TWindowSubMagPhoton *)&__vt__19TWindowSubMagPhoton).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A70;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x30), (void *) (arg1));
    save_position__17TWindowSubComCardFPv((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x70) = arg2;
    M2C_FIELD(arg0, s8 *, 0x60) = 0;
    M2C_FIELD(arg0, s8 *, 0x61) = 1;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x62);
    M2C_FIELD(arg0, s16 *, 0x62) = (s16) (temp_r4 + 1);
    fn_8027C188((void *) (arg0), (int) (temp_r4));
    return arg0;
}

void update_photon_selection__19TWindowSubMagPhotonFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r3 = update_selected_item__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, s32 *, 0x2C));
    if ((temp_r31 == 4) && ((s8) M2C_FIELD(arg0, u8 *, 0x1D) != temp_r3)) {
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r3;
        if ((s8) M2C_FIELD(arg0, u8 *, 0x1D) == 0) {
            spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (s16) M2C_FIELD(arg0, s32 *, 0x20));
        }
    }
}

void update_quest_board_card_flags(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r4 = update_selected_item__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, s32 *, 0x2C));
    switch (temp_r31) {
    case 0:
        set_card_flags_direct__20TWindowSubQuestBoardFPvi(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 1:
        set_card_flags_scaled__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 2:
        TWindowSubQuestBoard__sub_8027CF50(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 4:
        clear_card_window_flags__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 3:
        set_card_window_flags__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 5:
        set_board_flags__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    }
}

extern const f32 lbl_805DD688;

s32 create_option_menu_window(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8026652C(TWindowSubComCard__sub_8026CBB8(0x15), 6, get_message_10__20TWindowSubStatusDispFPv(0x2A), M2C_FIELD(arg0, s32 *, 0x20));
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
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD688);
    TWindowSubComCard__sub_80265C30(temp_r31);
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x24), 0);
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

}
