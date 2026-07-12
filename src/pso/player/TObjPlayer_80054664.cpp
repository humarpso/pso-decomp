#include "types.h"

extern "C" {

void render_effects__10TObjPlayerFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjFish__sub_800543A4(void*);
int toggle_particle_effect__10TObjPlayerFv(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
int TParticleCtrl__sub_801E2F20(void);

void render_effects__10TObjPlayerFPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TObjFish__sub_800543A4(p); TObjPlayer__sub_803D9B78(); TParticleCtrl__sub_801E2F20(); }

}
