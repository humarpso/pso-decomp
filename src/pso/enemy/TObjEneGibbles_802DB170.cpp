#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneGibbles__sub_802DB170(void *arg0, s32 arg1);
void TObjEneGibbles__sub_802DB1C0(void);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 fn_80142384(s32, s32);

void TObjEneGibbles__sub_802DB170(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    M2C_FIELD(arg0, s32 *, 0x3BC) = fn_80142384(M2C_FIELD(arg0, s32 *, 0x3BC), var_r4);
}

extern s32 lbl_805D68BC;
extern s32 lbl_805D68C0;

void TObjEneGibbles__sub_802DB1C0(void) {
    if ((s32) lbl_805D68BC == 0x18) {
        TObjContainerIdo__sub_803D96A8(0, lbl_805D68C0);
    }
    lbl_805D68BC += 1;
}

}
