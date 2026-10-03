#include "types.h"
struct Ent_80086D50 { u8 data[0x98]; };

extern "C" {
extern s32 lbl_805D2948;
extern Ent_80086D50 *lbl_805D4EF8;
extern Ent_80086D50 *lbl_805D4EFC;
void *__nw__7TObjectFUl(int);
void *initialize_with_direction__13TParticleCtrlFPvPvPviiiii(void *self, void *pos, void *dir, void *ent, int a, int b, int c, int d);
void *spawn_continuous_particle_with_direction(void *pos, void *dir, s32 id);
}

extern "C" {

#pragma push
#pragma opt_propagation off
void *spawn_continuous_particle_with_direction(void *pos, void *dir, s32 id) {
    void *p;
    s32 idx = id;
    if (lbl_805D2948 > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_direction__13TParticleCtrlFPvPvPviiiii(p, pos, dir, &lbl_805D4EF8[idx], 0x0, 0, 0, 0);
        }
        return p;
    }
    if (lbl_805D2948 + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_direction__13TParticleCtrlFPvPvPviiiii(p, pos, dir, &lbl_805D4EFC[idx], 0x0, 0, 0, 0);
        }
        return p;
    }
    return 0;
}
#pragma pop

}
