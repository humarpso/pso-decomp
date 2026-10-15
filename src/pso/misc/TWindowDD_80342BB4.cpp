#include "types.h"
#include "pso/misc/TWindowDD.h"

extern "C" {

s32 TWindowDD__sub_80342B5C(s32);
s32 apply_entry_layout__9TWindowDDFPv(void *);
s32 TWindowDD__sub_803435A0(void *);
s32 update_selection_state__9TWindowDDFPv();
s32 TWindowDD__sub_80347C50();
s32 TWindowDD__sub_803482B0(void *);
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 test_input_flag_4__9TWindowDDFv(void *);

void TWindowDD::update_dispatch() {
    s32 arg0 = (s32)this;
    TWindowDD__sub_80347C50();
    if (test_input_flag_4__9TWindowDDFv((void *)(arg0)) != 0) {
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

void TWindowDD::update_layout() {
    update_selection_state__9TWindowDDFPv();
    if (test_input_flag_4__9TWindowDDFv((void *)(this)) != 0) {
        play_sound__9TWindowDDFv();
        *(s32 *)((s8 *)this + 0xB4) = 0x14;
        *(s32 *)((s8 *)this + 0x8C) = -0x3C;
        TWindowDD__sub_803435A0((void *)(this));
        return;
    }
    if (TWindowDD__sub_803482B0((void *)(this)) != 0) {
        play_se__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv((void *)(this));
    }
}

}
