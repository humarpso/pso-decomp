#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_press__17TWindowSubComCardFv(void);
s32 TWindowSubComCard__sub_8007A8F8();
s32 scroll_list__17TWindowSubComCardFi();
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void update_press__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007A8F8();
    if (scroll_list__17TWindowSubComCardFi() == 0) {
        select_card_entry__17TWindowSubComCardFi(temp_r31);
    }
}

}
