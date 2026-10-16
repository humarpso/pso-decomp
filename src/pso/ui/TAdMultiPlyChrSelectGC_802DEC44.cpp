#include "types.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"

struct RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DEDA8_lbl_804727D0 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802DEDA8_lbl_8050E3B8 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
s32 play_sound_effect(s32, s32, s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C5A44(int, void *, int);
s32 is_multiplayer_character_slot_selected(int);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C658C(int);
s32 TAdMultiPlyChrSelectGC__sub_802C6660(int);
s32 TAdMultiPlyChrSelectGC__sub_802E006C(int, int, int);
extern RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0 TAdMultiPlyChrSelectGC__character_slot_positions;
extern RecoveredGlobal_802DEDA8_lbl_804727D0 multi_play_chr_select_slot_positions;
extern s8 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DEDA8(u8 *arg0);
}

extern "C" {

s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);
s32 TAdMultiPlyChrSelectGC__sub_802DC118(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 *get_localized_text_entry(s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();

extern s8 controller_physical_port_bank[];
extern s32 TAdMultiPlyChrSelectGC__data_805DE898;

void TAdMultiPlyChrSelectGC::update_button_input() {
    if ((TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + 0x20, 2) != 0) && (TAdMultiPlyChrSelectGC::get_chr_select_state() == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() < 1)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)this + 0x20) = 0x1B;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x68)))->get_player_index() == 1) {
        TAdMultiPlyChrSelectGC::reset_slot_selections();
        *(s32 *)((s8 *)this + 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(0) == 0) {
        if ((s32) *(s32 *)((s8 *)this + 0x44) != 0) {
            *(s32 *)((s8 *)this + 0x44) = 0;
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x64)))->set_entry_value((s32)0, (u32)(get_localized_text_entry(0x1F, 0xB)));
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x64)))->set_entry_value((s32)1, (u32)(&TAdMultiPlyChrSelectGC__data_805DE898));
        }
    } else if (TAdMultiPlyChrSelectGC::count_ready() < 2) {
        if ((s32) *(s32 *)((s8 *)this + 0x44) != 1) {
            *(s32 *)((s8 *)this + 0x44) = 1;
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x64)))->set_entry_value((s32)0, (u32)(get_localized_text_entry(0x1F, 0xC)));
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x64)))->set_entry_value((s32)1, (u32)(&TAdMultiPlyChrSelectGC__data_805DE898));
        }
    } else {
        *(s32 *)((s8 *)this + 0x44) = 2;
        TAdMultiPlyChrSelectGC__sub_802DC118(this, TAdMultiPlyChrSelectGC::get_clamped_cursor());
        *(s32 *)((s8 *)this + 0x20) = 3;
    }
}
typedef char RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0_size[sizeof(RecoveredGlobal_802DEDA8_TAdMultiPlyChrSelectGC__data_804727B0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DEDA8_lbl_804727D0_size[sizeof(RecoveredGlobal_802DEDA8_lbl_804727D0) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_802DEDA8_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DEDA8_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdMultiPlyChrSelectGC__sub_802DEDA8(u8 *arg0) {
    s32 var_r30;
    ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x60)))->set_index_and_close_status((int) (0));
    if ((TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DEDA8_lbl_8050E3B8 *)&controller_physical_port_bank).value + 0x20)), (s32)((int) (2))) != 0) && (TAdMultiPlyChrSelectGC::get_chr_select_state() == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() < 1)) {
        play_sound_effect((s32)((int) (0x52F16)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0)));
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1B;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x68)))->get_player_index() == 1) {
        TAdMultiPlyChrSelectGC::reset_slot_selections();
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x5C)))->reset_cursor_state();
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__character_slot_positions.value), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 8), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 0x10), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 0x18), (int) (0));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) (&multi_play_chr_select_slot_positions.value), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_play_chr_select_slot_positions.value + 8), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_play_chr_select_slot_positions.value + 0x10), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802E006C((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (int) (0), (int) (1));
    var_r30 = 0;
    do {
        if (is_multiplayer_character_slot_selected((int) (var_r30)) != 0) {
            TAdMultiPlyChrSelectGC__sub_802C658C((int) (var_r30));
            if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) {
                TAdMultiPlyChrSelectGC::reset_slot_selections();
            }
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    TAdMultiPlyChrSelectGC__sub_802C6660((int) (*(s32 *)((s8 *)arg0 + 0x5C)));
    *(s32 *)((s8 *)arg0 + 0x20) = 3;
}

}
