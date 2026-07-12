#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK update_selection__17TWindowSubComCardFUiUiPvi(s32, s32, s32, s32);
s32 TWindowSubComCard__sub_8007BC04(M2C_UNK);

void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 tmp = TWindowSubComCard__sub_8007BC04(0);
    update_selection__17TWindowSubComCardFUiUiPvi(arg0, arg1, arg2, tmp);
}

}
