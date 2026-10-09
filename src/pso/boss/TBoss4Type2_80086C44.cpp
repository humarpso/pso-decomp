#include "types.h"

struct Ent_800868C4 { u8 data[0x98]; };

extern "C" {
void *__ct__13TParticleCtrlFv(void *self, void *pos, void *dir, void *ent, int a, int b, int c, int d, int e);
void *__nw__7TObjectFUl(int);
extern s32 particle_pool_limit;
extern Ent_800868C4 *lbl_805D4EF8;
extern Ent_800868C4 *lbl_805D4EFC;
void *create_oneshot_particle_emitter(void *pos, void *dir, s32 id, s32 flags);
}

extern "C" {

void request_destroy__11TBoss4Type2FUi(u32 arg0);

int queue_destruction__7TObjectFv();

void request_destroy__11TBoss4Type2FUi(u32 arg0) {
    if (arg0 != 0U) {
        queue_destruction__7TObjectFv();
    }
}
#pragma push
#pragma opt_propagation off
void *create_oneshot_particle_emitter(void *pos, void *dir, s32 id, s32 flags) {
    void *p;
    s32 idx = id;
    if (particle_pool_limit > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = __ct__13TParticleCtrlFv(p, pos, dir, &lbl_805D4EF8[idx], 1, 0, 0, 0, flags);
        }
        return p;
    }
    if (particle_pool_limit + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = __ct__13TParticleCtrlFv(p, pos, dir, &lbl_805D4EFC[idx], 1, 0, 0, 0, flags);
        }
        return p;
    }
    return 0;
}
#pragma pop

}
