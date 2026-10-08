#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
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
