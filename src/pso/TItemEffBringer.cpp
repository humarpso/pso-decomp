#include "pso/TItemEffBringer.h"

extern "C" void  fn_8011BC48(TItemEffBringer*);
extern "C" void* fn_8011BBDC(TItemEffBringer*, int);
extern "C" void  fn_80086C44(s32);
extern "C" void  fn_8022A5C8(TItemEffBringer*);
extern "C" void  fn_80087350(void*, int);
extern "C" void  fn_803D9370(void*, Vec*);

extern void* __vt__15TItemEffBringer[];

void TItemEffBringer_step(TItemEffBringer* self) {
    Vec local = self->m_vec1;
    for (int i = 0; i < self->m_count; i++) {
        fn_80087350(&local, 0x9c);
        fn_803D9370(&local, &self->m_pos);
    }
}

void* TItemEffBringer_dt(TItemEffBringer* self, int free) {
    if (self != nullptr) {
        self->m_vtable = __vt__15TItemEffBringer;
        for (int i = 0; i < self->m_count; i++) {
            fn_80086C44(self->m_particles[i]);
        }
        fn_8011BBDC(self, 0);
        if ((s16)free > 0) {
            fn_8022A5C8(self);
        }
    }
    return self;
}
