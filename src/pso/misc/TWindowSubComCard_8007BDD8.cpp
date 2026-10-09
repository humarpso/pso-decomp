#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK clear();
s32 fn_8007B2E0(s32, s32);
s32 scroll_list__17TWindowSubComCardFi(s32);
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fn_8007B2E0(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFi(arg0) == 0)) {
        select_card_entry__17TWindowSubComCardFi(arg0);
    }
}

}
