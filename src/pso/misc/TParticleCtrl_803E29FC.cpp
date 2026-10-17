#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"

#pragma scheduling off

struct Particle_803E2A1C {
    f32 x, y, z;
    f32 u, v;
    u32 color;
};

extern "C" {
void load_camera_view_matrix(void);
void setup_blended_textured_draw(void);
void load_context_texture_obj(void);
s32 GXBegin(int, int, u16);
void TParticleCtrl__sub_803E2A1C(Particle_803E2A1C *p, s32 n);
void TObjPlayer__sub_803E2248(void);

void TParticleCtrl::reset_particles() {
    TObjPlayer__sub_803E2248();
}

#pragma push
#pragma scheduling off
typedef union {
    u8 u8;
    u16 u16;
    u32 u32;
    s32 s32;
    f32 f32;
} WGPipe_803E2A1C;
#define GXWGFifo_803E2A1C (*(volatile WGPipe_803E2A1C *)0xCC008000)
void TParticleCtrl__sub_803E2A1C(Particle_803E2A1C *p, s32 n) {
    s32 i;
    GXBegin(0x98, 4, n);
    for (i = 0; i < n; i++) {
        f32 x;
        f32 y;
        f32 z;
        u32 c;
        f32 u;
        f32 v;
        z = p->z;
        y = p->y;
        x = p->x;
        GXWGFifo_803E2A1C.f32 = x;
        GXWGFifo_803E2A1C.f32 = y;
        GXWGFifo_803E2A1C.f32 = z;
        c = p->color;
        GXWGFifo_803E2A1C.u32 = ((c & 0xFFFFFF) << 8) | ((c & 0xFF000000) >> 24);
        v = p->v;
        u = p->u;
        GXWGFifo_803E2A1C.f32 = u;
        GXWGFifo_803E2A1C.f32 = v;
        p++;
    }
}
#pragma pop

void TParticleCtrl::setup_particle_draw(s32 arg0) {
    load_camera_view_matrix();
    if (arg0 != 0) {
        setup_blended_textured_draw();
    } else {
        TObjPlayer::setup_render();
    }
    load_context_texture_obj();
}

}
