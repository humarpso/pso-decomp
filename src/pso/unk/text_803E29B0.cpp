#include "types.h"
extern "C" {
void reset_particles__13TParticleCtrlFv(void);
void TParticleCtrl__sub_803E2A1C(void *, void *);
void TParticleCtrl__sub_803E2B68(void *);
void fn_803E29B0(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void fn_803E29B0(void *arg0, void *arg1, void *arg2) {
    TParticleCtrl__sub_803E2B68(arg2);
    TParticleCtrl__sub_803E2A1C(arg0, arg1);
    reset_particles__13TParticleCtrlFv();
}

}
