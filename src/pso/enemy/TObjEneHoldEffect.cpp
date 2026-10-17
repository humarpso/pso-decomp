#include "types.h"
#include "pso/enemy/TObjEneHoldEffect.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4Type2.h"

extern "C" {

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);

extern s32 __vt__17TObjEneHoldEffect[];

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjEneHoldEffect;
        if (*(void **)((s8 *)arg0 + 0x90) != NULL) { TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)arg0 + 0x90))); ((TObjEneHoldEffect *)arg0)->m_90 = 0; }
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
