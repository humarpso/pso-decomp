#include "types.h"

extern "C" {

s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
extern s32 player_particle_effect_enabled;

void toggle_particle_effect__10TObjPlayerFv(void) {
    if ((s32) player_particle_effect_enabled != 0) {
        end_effect_render__13TParticleCtrlFv();
        return;
    }
    begin_effect_render__13TParticleCtrlFv();
}

void TObjPlayer__sub_800D8A60(void) { player_particle_effect_enabled = 0; }

void TObjPlayer__sub_800D8A6C(void) { player_particle_effect_enabled = 1; }

}
