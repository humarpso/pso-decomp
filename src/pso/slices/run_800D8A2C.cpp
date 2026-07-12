#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();
extern s32 lbl_805D522C;

void TObjPlayer__sub_800D8A2C(void) {
    if ((s32) lbl_805D522C != 0) {
        TParticleCtrl__sub_801E2F20();
        return;
    }
    TParticleCtrl__sub_801E2EFC();
}

void TObjPlayer__sub_800D8A60(void) { lbl_805D522C = 0; }

void TObjPlayer__sub_800D8A6C(void) { lbl_805D522C = 1; }

}
