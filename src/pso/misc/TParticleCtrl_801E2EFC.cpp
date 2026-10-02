#include "types.h"

typedef struct Color_801E2F44 { u8 r, g, b, a; } Color_801E2F44;

extern "C" {
void GXSetCopyClear(Color_801E2F44 clear_clr, u32 clear_z);
void TLobby__sub_801E2F44(u32 argb);
}

extern "C" {

void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
int set_effect_active__10TObjPlayerFv(void);
int reset_particle_counter__10TObjPlayerFv(void);
int apply_scene_fog(void);

void begin_effect_render__13TParticleCtrlFv(void) { reset_particle_counter__10TObjPlayerFv(); apply_scene_fog(); }

void end_effect_render__13TParticleCtrlFv(void) { set_effect_active__10TObjPlayerFv(); apply_scene_fog(); }
void TLobby__sub_801E2F44(u32 argb) {
    Color_801E2F44 c;
    c.a = argb >> 24;
    c.r = argb >> 16;
    c.g = argb >> 8;
    c.b = argb;
    GXSetCopyClear(c, 0xFFFFFF);
}

}
