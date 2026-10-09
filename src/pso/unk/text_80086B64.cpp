#include "types.h"
struct Ent_800868C4 { u8 data[0x98]; };

extern "C" {
void *initialize_with_direction__13TParticleCtrlFPvPvPviiiii(void *self, void *pos, void *dir, void *ent, int a, int b, int c, int d);
void *__nw__7TObjectFUl(int);
extern s32 particle_pool_limit;
extern Ent_800868C4 *lbl_805D4EF8;
extern Ent_800868C4 *lbl_805D4EFC;
void *fn_80086B64(void *pos, void *dir, s32 id, s32 a, s32 b);
}

extern "C" {

#pragma push
#pragma opt_propagation off
void *fn_80086B64(void *pos, void *dir, s32 id, s32 a, s32 b) {
    void *p;
    s32 idx = id;
    if (particle_pool_limit > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_direction__13TParticleCtrlFPvPvPviiiii(p, pos, dir, &lbl_805D4EF8[idx], 0, a, b, 0);
        }
        return p;
    }
    if (particle_pool_limit + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_direction__13TParticleCtrlFPvPvPviiiii(p, pos, dir, &lbl_805D4EFC[idx], 0, a, b, 0);
        }
        return p;
    }
    return 0;
}
#pragma pop

}
