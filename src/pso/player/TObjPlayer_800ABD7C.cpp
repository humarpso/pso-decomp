#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800ABD7C(void);
M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();

extern s32 lbl_805D50C4;

void TObjPlayer__sub_800ABD7C(void) {
    switch (lbl_805D50C4) {
    case 0x10:
    case 0x1A:
    case 0x20:
        TParticleCtrl__sub_801E2EFC();
        break;
    default:
        TParticleCtrl__sub_801E2F20();
        break;
    }
    lbl_805D50C4 += 1;
}

}
