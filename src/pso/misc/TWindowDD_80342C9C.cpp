#include "types.h"

extern "C" {
s32 TWindowDD__sub_803428C4(void *);
s32 TWindowDD__sub_80342B5C(void *);
s32 update_numeric_parameter_input__9TWindowDDFPv();
s32 update_close_flag__9TWindowDDFPv(void *);
s32 apply_entry_layout__9TWindowDDFPv(void *);
s32 TWindowDD__sub_803435A0(void *);
s32 update_selection_state__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80347C50();
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
s32 init_item_slots__9TWindowDDFPv(void *);
extern s32 TWindowDD__window_mode;
void TWindowDD__sub_80342D14(u8 *arg0);
}

extern "C" {

void update_transition__9TWindowDDFPv(void *arg0);
s32 apply_entry_layout__9TWindowDDFPv(void *);
s32 TWindowDD__sub_803435A0(void *);
s32 update_selection_state__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80347C50();
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void update_transition__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347C50();
    update_selection_state__9TWindowDDFPv(arg0);
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        *(s32 *)((s8 *)arg0 + 0xB4) = 6;
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv(arg0);
    }
}
void TWindowDD__sub_80342D14(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    var_r31 = 0;
    *(s16 *)((s8 *)arg0 + 0xC6) = 1;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        update_selection_state__9TWindowDDFPv((void *) (arg0));
        if (test_input_flag_4__9TWindowDDFPv((void *) (arg0)) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = !update_close_flag__9TWindowDDFPv((void *) (arg0));
        } else if (TWindowDD__sub_803482B0((void *) (arg0)) != 0) {
            play_se__9TWindowDDFv();
            *(s32 *)((s8 *)arg0 + 0xA4) = 0;
            apply_entry_layout__9TWindowDDFPv((void *) (arg0));
        }
        break;
    case 1:
        var_r31 = update_numeric_parameter_input__9TWindowDDFPv();
        break;
    }
    if (var_r31) {
        *(s32 *)((s8 *)arg0 + 0xA4) = 1;
        if ((s32) *(s32 *)((s8 *)arg0 + 0x8C) == -0x3C) {
            *(s32 *)((s8 *)arg0 + 0xB4) = 0x14;
        } else {
            switch (TWindowDD__window_mode) {
            case 0:
                TWindowDD__sub_80342B5C((void *) (arg0));
                init_item_slots__9TWindowDDFPv((void *) (arg0 + 0xC4));
                *(s16 *)((s8 *)arg0 + 0xC6) = 3;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            default:
                init_item_slots__9TWindowDDFPv((void *) (arg0 + 0xC4));
                *(s16 *)((s8 *)arg0 + 0xC6) = 4;
                TWindowDD__sub_803428C4((void *) (arg0));
                break;
            }
        }
        TWindowDD__sub_803435A0((void *) (arg0));
    }
}

}
