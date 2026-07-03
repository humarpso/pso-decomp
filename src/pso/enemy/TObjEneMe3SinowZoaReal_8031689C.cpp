#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe3SinowZoaReal__vt105(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
f32 fn_80011014();

extern const f32 lbl_805DF304;

struct Ene;

void TObjEneMe3SinowZoaReal__vt105(void *arg0) {
    struct Ene *self = (struct Ene *) arg0;
    M2C_FIELD(arg0, s32 *, 0x3FC) = M2C_FIELD(arg0, s32 *, 0x3FC) + 1;
    if ((M2C_FIELD(arg0, s32 *, 0x3FC) >= 2) || (fn_80011014() < lbl_805DF304)) {
        TObjEneDD__sub_800BBA18(self, 9);
        return;
    }
    TObjEneDD__sub_800BBA18(self, 6);
}

}
