#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8032B000();
M2C_UNK fn_8032B03C();
M2C_UNK fn_8032B0A8(s32, s32, s32);
extern s32 lbl_805D5580;

void TLobby__sub_80134A40(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if ((var_r3 > 3) || (var_r3 < 0)) {
        var_r3 = 0;
    }
    switch (var_r3) {
    case 0:
        fn_8032B03C();
        return;
    case 1:
        fn_8032B0A8(lbl_805D5580 + 0x3F8A, lbl_805D5580 + 0x3F9B, lbl_805D5580 + 0x3F3A);
        return;
    case 2:
        fn_8032B000();
        return;
    }
}

}
