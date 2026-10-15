#include "types.h"

extern "C" {

void update_dispatch__9TWindowDDFi(s32 arg0);
void update_layout__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80342B5C(s32);
s32 apply_entry_layout__9TWindowDDFPv(void *);
s32 TWindowDD__sub_803435A0(void *);
s32 update_selection_state__9TWindowDDFPv();
s32 TWindowDD__sub_80347C50();
s32 TWindowDD__sub_803482B0(void *);
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 test_input_flag_4__9TWindowDDFPv(void *);

void update_dispatch__9TWindowDDFi(s32 arg0) {
    TWindowDD__sub_80347C50();
    if (test_input_flag_4__9TWindowDDFPv((void *)(arg0)) != 0) {
        play_sound__9TWindowDDFv();
        TWindowDD__sub_80342B5C(arg0);
        TWindowDD__sub_803435A0((void *)(arg0));
        return;
    }
    if (TWindowDD__sub_803482B0((void *)(arg0)) != 0) {
        play_sound__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv((void *)(arg0));
    }
}

void update_layout__9TWindowDDFPv(void *arg0) {
    update_selection_state__9TWindowDDFPv();
    if (test_input_flag_4__9TWindowDDFPv((void *)(arg0)) != 0) {
        play_sound__9TWindowDDFv();
        *(s32 *)((s8 *)arg0 + 0xB4) = 0x14;
        *(s32 *)((s8 *)arg0 + 0x8C) = -0x3C;
        TWindowDD__sub_803435A0((void *)(arg0));
        return;
    }
    if (TWindowDD__sub_803482B0((void *)(arg0)) != 0) {
        play_se__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv((void *)(arg0));
    }
}

}
