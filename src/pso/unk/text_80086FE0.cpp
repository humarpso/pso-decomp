#include "types.h"
struct Rec_80086FE0 { u8 pad[0x98]; };

extern "C" {
void *initialize_with_direction__13TParticleCtrlFPvPvPviiiii(void *, void *, void *, void *, s32, s32, s32, s32);
void *__nw__7TObjectFUl(int);
extern s32 particle_pool_limit;
extern Rec_80086FE0 *lbl_805D4EF8;
extern Rec_80086FE0 *lbl_805D4EFC;
void *fn_80086FE0(void *arg0, void *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *fn_80086FE0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void *o;
    if (particle_pool_limit > arg2) {
        o = __nw__7TObjectFUl(0x78);
        if (o != NULL) {
            o = initialize_with_direction__13TParticleCtrlFPvPvPviiiii(o, arg0, arg1, &lbl_805D4EF8[arg2], 0, 0, 0, arg3);
        }
        return o;
    }
    if (particle_pool_limit + 0x40 > arg2) {
        s32 idx = arg2 - 0x200;
        o = __nw__7TObjectFUl(0x78);
        if (o != NULL) {
            o = initialize_with_direction__13TParticleCtrlFPvPvPviiiii(o, arg0, arg1, &lbl_805D4EFC[idx], 0, 0, 0, arg3);
        }
        return o;
    }
    return NULL;
}

}
