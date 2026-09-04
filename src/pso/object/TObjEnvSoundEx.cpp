#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__14TObjEnvSoundExFv(void);

void render__14TObjEnvSoundExFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x801904EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjEnvSoundEx__create(void *arg0);
void *TObjEnvSoundEx__ct(void *, void *, void *);
int is_not_split_screen__13TRaderMapCoreFv(void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void * TObjEnvSoundEx__create(void *arg0) {
    void *o;
    if (is_not_split_screen__13TRaderMapCoreFv(arg0) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xA8);
    if (o != NULL) {
        o = TObjEnvSoundEx__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801907B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__14TObjEnvSoundEx[];

void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEnvSoundEx;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
