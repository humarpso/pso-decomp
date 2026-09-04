#include "pso/TBoss4ZakoDraw.h"

TBoss4ZakoDraw::~TBoss4ZakoDraw() {}

#include "types.h"

extern "C" {

void render__14TBoss4ZakoDrawFv(void);
int TCameraCtrl__sub_8030ABF4(void);
int end_effect_render__13TParticleCtrlFv(void);
int toggle_particle_effect__10TObjPlayerFv(void);

void render__14TBoss4ZakoDrawFv(void) { toggle_particle_effect__10TObjPlayerFv(); TCameraCtrl__sub_8030ABF4(); end_effect_render__13TParticleCtrlFv(); }

}
