#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x12, 0xFFFBFFFF);
}

}
