#include "types.h"
#include "pso/misc/TWindowDD.h"

extern "C" {

void handle_input__9TWindowDDFi(s32 arg0);
s32 apply_entry_layout__9TWindowDDFPv(s32);
s32 update_selection_state__9TWindowDDFPv();
s32 TWindowDD__sub_803482B0(s32);
s32 TWindowDD__sub_803484C4(s32);

void handle_input__9TWindowDDFi(s32 arg0) {
    update_selection_state__9TWindowDDFPv();
    if (((TWindowDD *)arg0)->test_input_flag_4() != 0) {
        TWindowDD::play_sound();
        TWindowDD__sub_803484C4(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        TWindowDD::play_se();
        apply_entry_layout__9TWindowDDFPv(arg0);
    }
}

}
