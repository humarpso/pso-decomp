#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 TCameraCtrl__sub_8006B368();
u32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
M2C_UNK fn_802133C4();
s32 TRaderMapCore__sub_8030A808();
M2C_UNK memcpy(s32, M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_805127F8[];

void fn_801F43B4(void) {
    u32 temp_r3;

    if ((get_main_phase() != 0xF) && (TRaderMapCore__sub_8030A808() != 1)) {
        if (TCameraCtrl__sub_8006B368() != 0) {
            fn_802133C4();
        }
        temp_r3 = get_card_window__17TWindowSubComCardFUi(0);
        if (temp_r3 != 0U) {
            memcpy(temp_r3 + 0x44, lbl_805127F8, 0x200);
        }
    }
}

}
