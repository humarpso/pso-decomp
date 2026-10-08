#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * get_card_entry__17TWindowSubComCardFi(void *self);
u8 *TWindowSubComCard__sub_8007A860(void *self);
}

extern "C" {

void set_card_text__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK strncpy(void *, s32, M2C_UNK);

void set_card_text__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    u8 *temp_r3;

    if (arg1 != 0) {
        temp_r3 = get_card_entry__17TWindowSubComCardFi((void *)(arg0));
        if (temp_r3 != NULL) {
            strncpy(temp_r3 + 0x94, arg1, 0x6B);
            M2C_FIELD(temp_r3, s8 *, 0xFF) = 0;
        }
    }
}
u8 *TWindowSubComCard__sub_8007A860(void *self) {
    u8 *p = get_card_entry__17TWindowSubComCardFi((void *)(self));
    if (p == 0) {
        return 0;
    }
    return p + 0x94;
}

}
