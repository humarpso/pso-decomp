#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);

s32 fn_8034C2D8(void) {
    return get_card_window__17TWindowSubComCardFUi(0xFFFF) + 0x20FC;
}

}
