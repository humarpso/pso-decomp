#include "types.h"

extern "C" {

void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
int TObjPlayer__sub_803E1FB0(void);
int TObjPlayer__sub_803E1FBC(void);
int TParticleCtrl__sub_803E2010(void);

void begin_effect_render__13TParticleCtrlFv(void) { TObjPlayer__sub_803E1FBC(); TParticleCtrl__sub_803E2010(); }

void end_effect_render__13TParticleCtrlFv(void) { TObjPlayer__sub_803E1FB0(); TParticleCtrl__sub_803E2010(); }

}
