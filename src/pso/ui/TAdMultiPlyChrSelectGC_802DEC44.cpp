#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DEDA8_lbl_804727D0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802DEDA8_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(int);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5A44(int, void *, int);
s32 is_multiplayer_character_slot_selected(int);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C658C(int);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6660(int);
M2C_UNK reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E006C(int, int, int);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(int, int);
extern RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0 TAdMultiPlyChrSelectGC__data_804727B0;
extern RecoveredGlobal_802DEDA8_lbl_804727D0 lbl_804727D0;
extern s8 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DEDA8(u8 *arg0);
}

extern "C" {

void update_button_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802DC118(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK *get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();

extern s8 controller_physical_port_bank[];
extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void update_button_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + 0x20, 2) != 0) && (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() < 1)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 1) {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(0) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, get_localized_text_entry(0x1F, 0xB));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
        }
    } else if (count_ready__22TAdMultiPlyChrSelectGCFv() < 2) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 1) {
            M2C_FIELD(arg0, s32 *, 0x44) = 1;
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, get_localized_text_entry(0x1F, 0xC));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = 2;
        TAdMultiPlyChrSelectGC__sub_802DC118(arg0, get_clamped_cursor__22TAdMultiPlyChrSelectGCFv());
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
    }
}
typedef char RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0_size[sizeof(RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DEDA8_lbl_804727D0_size[sizeof(RecoveredGlobal_802DEDA8_lbl_804727D0) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_802DEDA8_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DEDA8_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdMultiPlyChrSelectGC__sub_802DEDA8(u8 *arg0) {
    s32 var_r30;
    set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (0));
    if ((TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DEDA8_lbl_8050E3B8 *)&controller_physical_port_bank).value + 0x20)), (M2C_UNK)((int) (2))) != 0) && (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() < 1)) {
        play_sound_effect((M2C_UNK)((int) (0x52F16)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x68)))) == 1) {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    reset_cursor_state__22TAdMultiPlyChrSelectGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__data_804727B0.value), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 8), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 0x10), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 0x18), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) (&lbl_804727D0.value), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727D0.value + 8), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727D0.value + 0x10), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802E006C((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (0), (int) (1));
    var_r30 = 0;
    do {
        if (is_multiplayer_character_slot_selected((int) (var_r30)) != 0) {
            TAdMultiPlyChrSelectGC__sub_802C658C((int) (var_r30));
            if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) {
                reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            }
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    TAdMultiPlyChrSelectGC__sub_802C6660((int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    M2C_FIELD(arg0, s32 *, 0x20) = 3;
}

}
