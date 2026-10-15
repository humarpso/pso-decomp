#include "types.h"
#include "pso/TChCrCharSelect.h"

extern "C" {

void handle_cursor_input__15TChCrCharSelectFv(s32 arg0);
s32 wrap_slot_index_to_range__15TChCrCharSelectFv(void *);
s32 clamp_slot_index_to_range__15TChCrCharSelectFv(s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TChCrCharSelect__sub_80298F8C(s32);
s32 TObjCMProportion__sub_8029916C(s32);

extern s32 TChCrCharSelect__selected_slot_index;
extern s32 TChCrCharSelect__input_mode;

void TChCrCharSelect::handle_menu_input() {
    if (TChCrCharSelect__sub_80298F8C(0x20) != 0) {
        TChCrCharSelect__selected_slot_index += 1;
        play_sound_effect(0x54100, 0, 0, 0);
    } else if (TChCrCharSelect__sub_80298F8C(0x10) != 0) {
        TChCrCharSelect__selected_slot_index -= 1;
        play_sound_effect(0x54100, 0, 0, 0);
    }
    wrap_slot_index_to_range__15TChCrCharSelectFv(this);
    if ((TObjCMProportion__sub_8029916C(2) != 0) || (TChCrCharSelect__sub_80298F8C(0x40) != 0)) {
        play_sound_effect(0x53704, 0, 0, 0);
        TChCrCharSelect__input_mode = 0;
        return;
    }
    if (TObjCMProportion__sub_8029916C(4) != 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        *(s32 *)((s8 *)this + 0x1C) = 0xA;
        TChCrCharSelect__input_mode = 2;
    }
}

extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__input_mode;

void handle_cursor_input__15TChCrCharSelectFv(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (TChCrCharSelect__sub_80298F8C(0x20) != 0) {
        temp_r0 = TChCrCharSelect__selected_char_index + 1;
        TChCrCharSelect__selected_char_index = temp_r0;
        if (temp_r0 >= 3) {
            TChCrCharSelect__selected_char_index = 0;
        }
        play_sound_effect(0x54100, 0, 0, 0);
    } else if (TChCrCharSelect__sub_80298F8C(0x10) != 0) {
        temp_r0_2 = TChCrCharSelect__selected_char_index - 1;
        TChCrCharSelect__selected_char_index = temp_r0_2;
        if (temp_r0_2 < 0) {
            TChCrCharSelect__selected_char_index = 2;
        }
        play_sound_effect(0x54100, 0, 0, 0);
    }
    if ((TObjCMProportion__sub_8029916C(4) != 0) || (TChCrCharSelect__sub_80298F8C(0x80) != 0)) {
        play_sound_effect(0x52D01, 0, 0, 0);
        clamp_slot_index_to_range__15TChCrCharSelectFv(arg0);
        TChCrCharSelect__input_mode = 1;
    }
}

}
