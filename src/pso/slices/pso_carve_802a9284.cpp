#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802A83F4();
M2C_UNK TEffIndirectCtrl__sub_802A942C();
M2C_UNK xfree__FPv(s32);
extern M2C_UNK lbl_80540AF0[];

void TEffIndirectCtrl__sub_802A9284(void) {
    s32 var_r28;
    s32 var_r30;
    s32 var_r31;
    s32 temp_r3;

    fn_802A83F4();
    TEffIndirectCtrl__sub_802A942C();
    var_r31 = 0;
    var_r30 = var_r31;
    var_r28 = 0;
    do {
        temp_r3 = *(lbl_80540AF0 + var_r31);
        if ((u32)temp_r3 != 0U) {
            xfree__FPv(temp_r3);
            *(lbl_80540AF0 + var_r31) = var_r30;
        }
        var_r28 += 1;
        var_r31 += 1;
    } while (var_r28 < 8);
}

}
