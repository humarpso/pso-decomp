#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjEnvSoundEx__create(void *arg0);
void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1);
void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q);
void render__18TObjEnvSoundGlobalFv(void);
int run_task__18TObjEnvSoundGlobalFv(void);
void *TObjEnvSoundEx__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
int is_not_split_screen__13TRaderMapCoreFv(void *);

void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void render__18TObjEnvSoundGlobalFv(void) {  }

int run_task__18TObjEnvSoundGlobalFv(void) { return 0; }

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
