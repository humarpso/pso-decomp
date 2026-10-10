#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_menu_input__15TChCrCharSelectFv(void *arg0);
void handle_cursor_input__15TChCrCharSelectFv(s32 arg0);
M2C_UNK wrap_slot_index_to_range__15TChCrCharSelectFv(void *);
M2C_UNK clamp_slot_index_to_range__15TChCrCharSelectFv(s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TChCrCharSelect__sub_80298F8C(M2C_UNK);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);

extern s32 TChCrCharSelect__selected_slot_index;
extern s32 TChCrCharSelect__input_mode;

void handle_menu_input__15TChCrCharSelectFv(void *arg0) {
    if (TChCrCharSelect__sub_80298F8C(0x20) != 0) {
        TChCrCharSelect__selected_slot_index += 1;
        play_sound_effect(0x54100, 0, 0, 0);
    } else if (TChCrCharSelect__sub_80298F8C(0x10) != 0) {
        TChCrCharSelect__selected_slot_index -= 1;
        play_sound_effect(0x54100, 0, 0, 0);
    }
    wrap_slot_index_to_range__15TChCrCharSelectFv(arg0);
    if ((TObjCMProportion__sub_8029916C(2) != 0) || (TChCrCharSelect__sub_80298F8C(0x40) != 0)) {
        play_sound_effect(0x53704, 0, 0, 0);
        TChCrCharSelect__input_mode = 0;
        return;
    }
    if (TObjCMProportion__sub_8029916C(4) != 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xA;
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
