#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 *TItemDrop__sub_800F94BC(s32, u32);
s32 fn_800F9D80(s32);
s32 fn_80208280();
extern s32 lbl_804C9390[];
extern s32 lbl_805D6068;
extern s32 lbl_805D606C;
extern s32 *lbl_805D6070;
extern u32 lbl_805D6074;

void fn_80208340(void) {
    s32 *temp_r3;
    s32 temp_r0;
    s32 temp_r30;

    lbl_805D606C = 0;
    lbl_805D6070 = NULL;
    if ((u32) lbl_805D6074 != 0U) {
        temp_r30 = fn_80208280();
        if (fn_800F9D80(lbl_804C9390[temp_r30]) <= 0x24B8) {
            temp_r3 = TItemDrop__sub_800F94BC(lbl_804C9390[temp_r30], lbl_805D6074);
            lbl_805D6070 = temp_r3;
            if (temp_r3 != NULL) {
                temp_r0 = *temp_r3;
                lbl_805D606C = temp_r0;
                lbl_805D6068 = temp_r0;
            }
        }
    }
}

}
