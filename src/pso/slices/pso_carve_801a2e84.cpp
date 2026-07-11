#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
M2C_UNK TObjPlayer__sub_801BDEF8(s32, s32, u32);
u32 fn_802029E8(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
extern s32 lbl_805D53A0;
extern s32 lbl_805D53A8;

void fn_801A2E84(void) {
    s32 var_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    if (is_split_screen() != 0) {
        var_r31 = 0;
        do {
            if (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) != 0) {
                temp_r3 = fn_802029E8(var_r31);
                if (temp_r3 != 0U) {
                    TObjPlayer__sub_801BDEF8(var_r31, lbl_805D53A8 + var_r31, temp_r3);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    temp_r3_2 = fn_802029E8(lbl_805D53A0);
    if (temp_r3_2 != 0U) {
        TObjPlayer__sub_801BDEF8(0, lbl_805D53A8, temp_r3_2);
    }
}

}
