#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Part_8008673C { u8 pad[0xAC]; u8 from_backup; };

extern "C" {
extern s32 TParticleCtrl__heap;
extern s32 alt_heap;
void *heap_alloc__5THeapFUl(void *heap, u32 size);
Part_8008673C *alloc_particle_memory(u32 size);
}

extern "C" {

void free_from_heap__13TParticleCtrlFPv(u8 *arg0);
int heap_free__5THeapFPv(void *, void *);

extern s32 TParticleCtrl__heap;
extern s32 alt_heap;

void free_from_heap__13TParticleCtrlFPv(u8 *arg0) {
    if (arg0) {
        if (arg0[0xAC] != 0) {
            heap_free__5THeapFPv((void *)TParticleCtrl__heap, arg0);
            return;
        }
        heap_free__5THeapFPv((void *)alt_heap, arg0);
    }
}
Part_8008673C *alloc_particle_memory(u32 size) {
    Part_8008673C *p = (Part_8008673C *)heap_alloc__5THeapFUl((void *)alt_heap, size);
    if (p == NULL) {
        if ((void *)TParticleCtrl__heap != NULL) {
            p = (Part_8008673C *)heap_alloc__5THeapFUl((void *)TParticleCtrl__heap, size);
            if (p != NULL) {
                p->from_backup = 1;
            }
        }
    } else {
        p->from_backup = 0;
    }
    return p;
}

}
