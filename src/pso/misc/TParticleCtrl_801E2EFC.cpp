#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"

typedef struct Color_801E2F44 { u8 r, g, b, a; } Color_801E2F44;

extern "C" {
void GXSetCopyClear(Color_801E2F44 clear_clr, u32 clear_z);
void set_copy_clear_color_argb(u32 argb);
void apply_scene_fog(void);

void TParticleCtrl::begin_effect_render() { TObjPlayer::reset_particle_counter(); apply_scene_fog(); }

void TParticleCtrl::end_effect_render() { TObjPlayer::set_effect_active(); apply_scene_fog(); }
void set_copy_clear_color_argb(u32 argb) {
    Color_801E2F44 c;
    c.a = argb >> 24;
    c.r = argb >> 16;
    c.g = argb >> 8;
    c.b = argb;
    GXSetCopyClear(c, 0xFFFFFF);
}

}
