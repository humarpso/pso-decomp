#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK clear();
s32 fn_8007B370(s32, s32);
s32 TWindowSubComCard__sub_8007BD94(s32);
M2C_UNK TWindowSubComCard__sub_8007BF48(s32);

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fn_8007B370(arg0, arg1) != 0) && (TWindowSubComCard__sub_8007BD94(arg0) == 0)) {
        TWindowSubComCard__sub_8007BF48(arg0);
    }
}

}
