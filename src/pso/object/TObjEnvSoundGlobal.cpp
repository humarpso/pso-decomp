#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__18TObjEnvSoundGlobal[];

void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEnvSoundGlobal;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80190278
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjEnvSoundGlobal__create(void *arg0);
void *TObjEnvSoundGlobal__ct(void *, void *, void *);
int is_not_split_screen__13TRaderMapCoreFv(void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void * TObjEnvSoundGlobal__create(void *arg0) {
    void *o;
    if (is_not_split_screen__13TRaderMapCoreFv(arg0) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjEnvSoundGlobal__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019039C
#include "types.h"

extern "C" {

void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q);
void render__18TObjEnvSoundGlobalFv(void);

void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void render__18TObjEnvSoundGlobalFv(void) {  }

}
#endif
#endif
