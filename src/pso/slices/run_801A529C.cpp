#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_card_window__17TWindowSubComCardFUi();

s32 test_card_flag__19TWindowKeyBoardHardFii(s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return (M2C_FIELD(temp_r3, s32 *, 0x10) & arg2) ? 1 : 0;
}

void *get_card_window__17TWindowSubComCardFUi();

void set_card_window_flags__19TWindowKeyBoardHardFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10) & arg2);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10) | arg1);
    }
}

void fn_801A5338(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0x40058;
    }
}

}
