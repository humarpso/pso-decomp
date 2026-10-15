#include "types.h"

extern "C" {

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUl(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern s32 __vt__17TObjEneHoldEffect[];

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjEneHoldEffect;
        if (*(void **)((s8 *)arg0 + 0x90) != NULL) { request_destroy__11TBoss4Type2FUl(*(void **)((s8 *)arg0 + 0x90)); *(s32 *)((s8 *)arg0 + 0x90) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
