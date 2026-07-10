#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_unlock_flags__16TObjCityMainWarpFv(void);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);
s32 fn_800B9CF4();

s32 is_split_screen();
extern s32 lbl_805D5B54;

void update_unlock_flags__16TObjCityMainWarpFv(void) {
    M2C_UNK var_r31;
    M2C_UNK var_r30;
    M2C_UNK var_r3;

    lbl_805D5B54 |= 1;
    if ((fn_800B9CF4() != 0) || (is_split_screen() != 0)) {
        var_r3 = 0x4C;
        var_r31 = 0x4F;
        var_r30 = 0x52;
    } else {
        var_r3 = 0x4D;
        var_r31 = 0x50;
        var_r30 = 0x53;
    }
    if (TODoorVoShip__sub_801F44BC(var_r3) != 0) {
        lbl_805D5B54 |= 4;
    }
    if (TODoorVoShip__sub_801F44BC(var_r31) != 0) {
        lbl_805D5B54 |= 0x10;
    }
    if (TODoorVoShip__sub_801F44BC(var_r30) != 0) {
        lbl_805D5B54 |= 0x200;
    }
}

}
