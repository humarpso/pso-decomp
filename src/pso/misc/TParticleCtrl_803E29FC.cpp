#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
typedef s32 M2C_UNK;
struct Particle_803E2A1C {
    f32 x, y, z;
    f32 u, v;
    u32 color;
};

extern "C" {
M2C_UNK load_camera_view_matrix();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E2224();
M2C_UNK load_context_texture_obj();
void TParticleCtrl__sub_803E2B68(s32 arg0);
M2C_UNK GXBegin(int, int, u16);
void TParticleCtrl__sub_803E2A1C(Particle_803E2A1C *p, s32 n);
}

extern "C" {

void reset_particles__13TParticleCtrlFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void reset_particles__13TParticleCtrlFv(void) {
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

void TParticleCtrl__sub_803E2B68(s32 arg0) {
    load_camera_view_matrix();
    if (arg0 != 0) {
        TObjPlayer__sub_803E2224();
    } else {
        setup_render__10TObjPlayerFv();
    }
    load_context_texture_obj();
}

}
