#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2);
s32 TWindowSubComCard__sub_80265BF8(u32);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
M2C_UNK TWindowComCard__sub_80249950(u32, s32, s32);

void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = TWindowSubComCard__sub_8007A8F8(0);
    if ((arg0 != 0U) && (arg1 != 0U)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(arg0);
        if (temp_r3 != (s32) *arg2) {
            *arg2 = temp_r3;
            TWindowComCard__sub_80249950(arg1, temp_r3, temp_r31);
        }
    }
}

}
