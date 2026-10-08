#include "types.h"
extern "C" {
void reset_particles__13TParticleCtrlFv(void);
void TParticleCtrl__sub_803E2A1C(void *, void *);
void setup_particle_draw__13TParticleCtrlFi(void *);
void draw_particle_strip(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void draw_particle_strip(void *arg0, void *arg1, void *arg2) {
    setup_particle_draw__13TParticleCtrlFi(arg2);
    TParticleCtrl__sub_803E2A1C(arg0, arg1);
    reset_particles__13TParticleCtrlFv();
}

}
