#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_from_heap__13TParticleCtrlFPv(u8 *arg0);
int heap_free__5THeapFPv(void *, void *);

extern s32 TParticleCtrl__data_805D4EF0;
extern s32 alt_heap;

void free_from_heap__13TParticleCtrlFPv(u8 *arg0) {
    if (arg0) {
        if (arg0[0xAC] != 0) {
            heap_free__5THeapFPv((void *)TParticleCtrl__data_805D4EF0, arg0);
            return;
        }
        heap_free__5THeapFPv((void *)alt_heap, arg0);
    }
}

}
