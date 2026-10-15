#include "types.h"

extern "C" {

void handle_input__9TWindowDDFi(s32 arg0);
s32 apply_entry_layout__9TWindowDDFPv(s32);
s32 update_selection_state__9TWindowDDFPv();
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(s32);
s32 test_input_flag_4__9TWindowDDFPv(s32);
s32 TWindowDD__sub_803484C4(s32);

void handle_input__9TWindowDDFi(s32 arg0) {
    update_selection_state__9TWindowDDFPv();
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        TWindowDD__sub_803484C4(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv(arg0);
    }
}

}
