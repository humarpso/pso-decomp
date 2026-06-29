#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_80011014();
M2C_UNK TObjEneDD__sub_800BBA18(s32, M2C_UNK);
extern f32 lbl_805D9DAC;

void fn_800B7AC0(s32 arg0) {
    if (fn_80011014() < lbl_805D9DAC) {
        TObjEneDD__sub_800BBA18(arg0, 8);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 9);
}

}
