#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
M2C_UNK TFogCtrl__sub_800FADB4(s32);
extern M2C_UNK lbl_80501188[];

void TFogCtrl__sub_800FAD54(void) {
    s32 var_r29;
    s32 var_r31;
    s32 temp_r3;

    if (is_split_screen() == 0) {
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r3 = *(lbl_80501188 + var_r31);
            if ((u32)temp_r3 != 0U) {
                TFogCtrl__sub_800FADB4(temp_r3);
            }
            var_r29 += 1;
            var_r31 += 1;
        } while (var_r29 != 4);
    }
}

}
