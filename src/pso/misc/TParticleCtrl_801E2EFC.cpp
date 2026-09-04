#include "types.h"

extern "C" {

void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
int set_effect_active__10TObjPlayerFv(void);
int reset_particle_counter__10TObjPlayerFv(void);
int TParticleCtrl__sub_803E2010(void);

void begin_effect_render__13TParticleCtrlFv(void) { reset_particle_counter__10TObjPlayerFv(); TParticleCtrl__sub_803E2010(); }

void end_effect_render__13TParticleCtrlFv(void) { set_effect_active__10TObjPlayerFv(); TParticleCtrl__sub_803E2010(); }

}
