#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8030B658_lbl_804E76C0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030B658_lbl_804E76C0_size[sizeof(RecoveredGlobal_8030B658_lbl_804E76C0) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8030B658_lbl_804E76C0 lbl_804E76C0;
extern int lbl_805D6A80;
void TObjLiveCamera__sub_8030B658(void);
}

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

void TObjLiveCamera__sub_8030B658(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804E76C0.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D6A80) = var_r0;
}

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
