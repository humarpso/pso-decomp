#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLiveCamera__create(void *arg0);
void TObjLiveCamera__sub_8030B630(void);
void *__dt__14TObjLiveCameraFv(void *arg0, s16 arg1);
void render__14TObjLiveCameraFv(void);
void run_task__14TObjLiveCameraFv(void);
int TLobby__sub_8001FE7C(void*, void*);
void *TObjLiveCamera__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

    extern int lbl_805D6A80;
void TObjLiveCamera__sub_8030B630(void) { TLobby__sub_8001FE7C((void*)(lbl_805D6A80), (void*)1); }

void render__14TObjLiveCameraFv(void) {  }
void run_task__14TObjLiveCameraFv(void) {  }

extern M2C_UNK __vt__14TObjLiveCamera[];

void *__dt__14TObjLiveCameraFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjLiveCamera;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjLiveCamera__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjLiveCamera__ct(o, tl_05, arg0);
    }
    return o;
}

}
