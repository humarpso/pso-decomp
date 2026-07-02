#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80293828(s32);
s32 fn_80298F8C(M2C_UNK);
s32 fn_8029916C(M2C_UNK);
extern s32 lbl_805D3CB4;
extern s32 lbl_805D6590;

void fn_802939FC(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (fn_80298F8C(0x20) != 0) {
        temp_r0 = lbl_805D3CB4 + 1;
        lbl_805D3CB4 = temp_r0;
        if (temp_r0 >= 3) {
            lbl_805D3CB4 = 0;
        }
        fn_8022675C(0x54100, 0, 0, 0);
    } else if (fn_80298F8C(0x10) != 0) {
        temp_r0_2 = lbl_805D3CB4 - 1;
        lbl_805D3CB4 = temp_r0_2;
        if (temp_r0_2 < 0) {
            lbl_805D3CB4 = 2;
        }
        fn_8022675C(0x54100, 0, 0, 0);
    }
    if ((fn_8029916C(4) != 0) || (fn_80298F8C(0x80) != 0)) {
        fn_8022675C(0x52D01, 0, 0, 0);
        fn_80293828(arg0);
        lbl_805D6590 = 1;
    }
}

}
