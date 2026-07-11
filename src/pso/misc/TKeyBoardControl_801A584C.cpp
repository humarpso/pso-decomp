#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_reset_button__16TKeyBoardControlFv(void);

s32 OSGetResetButtonState();
extern u8 lbl_805D5D0A;

s32 check_reset_button__16TKeyBoardControlFv(void) {
    if (OSGetResetButtonState() != 0) {
        lbl_805D5D0A = 1;
    }
    if ((s8) lbl_805D5D0A != 0) {
        if (OSGetResetButtonState() != 0) {
            return 0;
        }
        lbl_805D5D0A = 0;
        return 1;
    }
    return 0;
}

}
