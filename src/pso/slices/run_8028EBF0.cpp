#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 TObjCMMainMenu__data_805D659C;

u8 is_state_4__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 4);
}

extern s32 TObjCMMainMenu__data_805D659C;

u8 is_state_3__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 3);
}

    extern int lbl_805D652C;
void fn_8028EC18(void) { lbl_805D652C = 1; }

}
