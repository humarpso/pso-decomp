#include "types.h"

extern "C" {

void enter_state_18__9TWindowDDFPv(void *arg0);
void enter_state_19__9TWindowDDFPv(void *arg0);
s32 update_numeric_parameter_input__9TWindowDDFPv();
s32 apply_entry_layout__9TWindowDDFPv(void *);
s32 TWindowDD__sub_803435A0(void *);
s32 update_selection_state__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80347C50();
s32 TWindowDD__sub_803482B0(void *);
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 test_input_flag_4__9TWindowDDFPv(void *);
s32 update_close_flag__9TWindowDDFPv(void *);

void enter_state_19__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        update_selection_state__9TWindowDDFPv(arg0);
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            apply_entry_layout__9TWindowDDFPv(arg0);
        }
        break;
    case 1:
        var_r31 = update_numeric_parameter_input__9TWindowDDFPv();
        break;
    }
    if ((s32) var_r31 != 0) {
        *(s32 *)((s8 *)arg0 + 0xB4) = 0x13;
        TWindowDD__sub_803435A0(arg0);
    }
}

void enter_state_18__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        update_selection_state__9TWindowDDFPv(arg0);
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            apply_entry_layout__9TWindowDDFPv(arg0);
        }
        break;
    case 1:
        var_r31 = update_numeric_parameter_input__9TWindowDDFPv();
        break;
    }
    if ((s32) var_r31 != 0) {
        *(s32 *)((s8 *)arg0 + 0xB4) = 0x12;
        TWindowDD__sub_803435A0(arg0);
    }
}

}
