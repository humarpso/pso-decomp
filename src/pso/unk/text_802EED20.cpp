#include "types.h"
#include "pso/object/TUnk_804E4788.h"
#include "pso/misc/TNowLoading.h"

struct RecoveredGlobal_80036FC8___vt__11TBoss2Joint {
    s32 value;
    u8 remaining[0x1A4];
};

struct RecoveredGlobal_80036A90_lbl_80435A68 {
    s32 value;
    u8 remaining[0x1C];
};

typedef struct Vec_80037074 {
    f32 x, y, z;
} Vec_80037074;

typedef struct Laser_80037074 {
    u8 pad0[0x1C];
    Vec_80037074 pts[20];
    s32 head;
    s32 cur;
    s32 limit;
    s32 unk118;
    void *ptcl;
    s32 state;
} Laser_80037074;

extern "C" {
void *spawn_continuous_particle_effect_with_flags(Vec_80037074 *, s32, s32);
void enable__13TParticleCtrlFv(void *);
}

extern "C" {

typedef char RecoveredGlobal_80036A90_lbl_80435A68_size[sizeof(RecoveredGlobal_80036A90_lbl_80435A68) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80036FC8___vt__11TBoss2Joint_size[sizeof(RecoveredGlobal_80036FC8___vt__11TBoss2Joint) == 0x1A8 ? 1 : -1];
void TUnk_804E4788::run_task() {
    Laser_80037074 *self = (Laser_80037074 *)this;
    if (self->ptcl == NULL) {
        self->ptcl = spawn_continuous_particle_effect_with_flags(self->pts, self->unk118, 0x40);
        if (self->ptcl != NULL) {
            enable__13TParticleCtrlFv(self->ptcl);
        }
    } else {
        switch (self->state) {
        case 0:
            if (self->head >= self->limit) {
                self->state = 1;
                self->cur = 0;
            }
            enable__13TParticleCtrlFv(self->ptcl);
            break;
        case 1:
            ((TNowLoading *)(self->ptcl))->copy_pos(&self->pts[self->cur]);
            self->cur++;
            if (self->cur >= 20) {
                self->cur = 0;
            }
            if (self->cur == self->head) {
                self->state = 2;
            }
            break;
        case 2:
            enable__13TParticleCtrlFv(self->ptcl);
            break;
        }
    }
}

}
