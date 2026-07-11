#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TParticleCtrl__sub_800867AC(void);
void __dt__5THeapFv(void*, int);

extern u32 TParticleCtrl__data_805D4EF0;

void TParticleCtrl__sub_800867AC(void) {
    if ((u32) TParticleCtrl__data_805D4EF0 != 0U) {
        __dt__5THeapFv((void*)TParticleCtrl__data_805D4EF0, 1);
        TParticleCtrl__data_805D4EF0 = 0U;
    }
}

}
