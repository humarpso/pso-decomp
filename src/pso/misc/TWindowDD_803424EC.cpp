#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_input__9TWindowDDFi(s32 arg0);
M2C_UNK apply_entry_layout__9TWindowDDFPv(s32);
M2C_UNK update_selection_state__9TWindowDDFPv();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(s32);
s32 test_input_flag_4__9TWindowDDFPv(s32);
M2C_UNK TWindowDD__sub_803484C4(s32);

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
