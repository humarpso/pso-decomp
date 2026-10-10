#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_heap__13TParticleCtrlFv(void);
void __dt__5THeapFv(void*, int);

extern u32 TParticleCtrl__heap;

void free_heap__13TParticleCtrlFv(void) {
    if ((u32) TParticleCtrl__heap != 0U) {
        __dt__5THeapFv((void*)TParticleCtrl__heap, 1);
        TParticleCtrl__heap = 0U;
    }
}

}
