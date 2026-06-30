#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_80011014();
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
extern const f32 lbl_805DA158;
extern const f32 lbl_805DA15C;

void fn_800D0CB8(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x49C) = lbl_805DA15C;
    if (fn_80011014() < lbl_805DA158) {
        TObjEneDD__sub_800BBA18(arg0, 9);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 0xA);
}

}
