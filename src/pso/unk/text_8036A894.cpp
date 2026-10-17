#include "types.h"
#include "pso/TBoss6EffFlowSoul.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss4Type2.h"

struct RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void *create_particle_emitter(void *pos, s32 id);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul __vt__17TBoss6EffFlowSoul;
extern s32 lbl_805D44D0;
u8 *TBoss6EffFlowSoul__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3, s32 arg4);
typedef char RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul_size[sizeof(RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul) == 0x18 ? 1 : -1];
u8 *TBoss6EffFlowSoul__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3, s32 arg4) {
    u8 *particle_emitter;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__17TBoss6EffFlowSoul.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D44D0;
    *(u8 **)((s8 *)arg0 + 0x1C) = arg1;
    VecCopy((Vec *)(arg0 + 0x28), (const Vec *)arg2);
    *(s16 *)((s8 *)arg0 + 0x24) = arg3;
    *(s32 *)((s8 *)arg0 + 0x34) = arg4;
    particle_emitter = (u8 *)(create_particle_emitter((arg0 + 0x28), 0x225));
    *(u8 * *)&((TBoss6EffFlowSoul *)arg0)->m_20 = particle_emitter;
    if (particle_emitter != NULL) {
        ((TBoss4Type2 *)(*(u8 * *)&((TBoss6EffFlowSoul *)arg0)->m_20))->set_flags(0x40);
    }
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    return arg0;
}

}
