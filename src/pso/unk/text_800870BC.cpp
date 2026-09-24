#include "types.h"
struct Ent_800870BC { u8 data[0x98]; };

extern "C" {
extern s32 lbl_805D2948;
extern Ent_800870BC *lbl_805D4EF8;
extern Ent_800870BC *lbl_805D4EFC;
void *__nw__7TObjectFUl(int);
void *__ct__13TParticleCtrlFv(void *self, void *pos, void *dir, void *ent, int a, int b, int c, int d, int e);
void *TObjParticle__sub_800870BC(void *pos, void *dir, s32 id, int e);
}

extern "C" {

#pragma push
#pragma opt_propagation off
void *TObjParticle__sub_800870BC(void *pos, void *dir, s32 id, int e) {
    void *p;
    s32 idx = id;
    if (lbl_805D2948 > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = __ct__13TParticleCtrlFv(p, pos, dir, &lbl_805D4EF8[idx], 0, 0, 0, 0, e);
        }
        return p;
    }
    if (lbl_805D2948 + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = __ct__13TParticleCtrlFv(p, pos, dir, &lbl_805D4EFC[idx], 0, 0, 0, 0, e);
        }
        return p;
    }
    return 0;
}
#pragma pop

}
