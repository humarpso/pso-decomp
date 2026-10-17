#include "types.h"
#include "pso/object/TObjBgmCol_8017E7F0.h"
#include "pso/object/TObjBgmCol.h"
#include "pso/TParticleCtrl.h"

extern "C" {

s32 construct_world_actor_base();
void __dl__7TObjectFPv(void *);

extern s32 __vt__10TObjBgmCol[];

void *__dt__10TObjBgmColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjBgmCol;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TObjBgmCol__name;

void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjBgmCol;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjBgmCol__name;
    ((TObjBgmCol *)arg0)->apply_object_set_data((void *)arg2);
    *(s32 *)&((TObjBgmCol *)arg0)->m_90 = 1;
    ((TObjBgmCol *)arg0)->m_98 = (f32) ((TObjBgmCol *)arg0)->scale;
    *(s32 *)&((TObjBgmCol *)arg0)->m_9c = (s32) (((TObjBgmCol *)arg0)->m_84% 6);
    if ((s32) *(s32 *)&((TObjBgmCol *)arg0)->m_9c< 0) {
        *(s32 *)&((TObjBgmCol *)arg0)->m_9c = 0;
    }
    return arg0;
}

extern char lbl_80443870[];
s32 TObjBgmCol__name = (s32)lbl_80443870;
}
