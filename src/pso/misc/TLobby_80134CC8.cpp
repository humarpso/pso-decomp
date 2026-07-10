#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_option_state__6TLobbyFv(void);
s32 TWindowOptionCtrl__sub_8026B2E4();

extern s32 lbl_805D5704;

s32 get_option_state__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TWindowOptionCtrl__sub_8026B2E4();
    switch (temp_r3) {
    case 0:
        return lbl_805D5704;
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        return 0;
    }
}

}
