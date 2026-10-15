#include "types.h"

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
