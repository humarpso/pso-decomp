#include "types.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjCollision.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8006754C___vt__13TObjCollision { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_8006754C___vt__13TObjCollision_size[sizeof(RecoveredGlobal_8006754C___vt__13TObjCollision) == 0x38 ? 1 : -1];

extern "C" {
f32 fabs_float(f32);
u32 init_collision_body_parts(void *, s32, s32);
extern s32 __vt__13TObjCollision[];
extern s32 lbl_805D2830;
extern const f32 lbl_805D8F20;
extern const f32 lbl_805D8F24;
u8 *TObjCollision__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__13TObjCollisionFv(void *arg0, s16 arg1);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjCollision::render() {  }
void TObjCollision::run_task() {  }

extern void *tl_06;

void *TObjCollision::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjCollision__ct((u8 *)o, (s32)tl_06, (s32)arg0);
    }
    return o;
}

void *__dt__13TObjCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjCollision;
        free_collision_body_parts(arg0);
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjCollision__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8006754C___vt__13TObjCollision *)&__vt__13TObjCollision).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2830;
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)(arg2 + 0xC));
    ((TObjPlayer *)(arg0 + 0x5C))->copy_xyz((void *)(arg2 + 0x18));
    VecCopy((Vec *)(arg0 + 0x68), (const Vec *)(arg2 + 0x24));
    *(s32 *)&((TObjCollision *)arg0)->actorFlags = (s32) (*(s32 *)&((TObjCollision *)arg0)->actorFlags| 0x02000000);
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) lbl_805D8F20;
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805D8F20;
    ((TObjCollision *)arg0)->m_b4 = (f32) lbl_805D8F20;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) ((TObjCollision *)arg0)->scale;
    ((TObjCollision *)arg0)->m_bc = (f32) ((TObjCollision *)arg0)->target_scale;
    if (*(f32 *)((s8 *)arg0 + 0x70) < lbl_805D8F20) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    *(s32 *)&((TObjCollision *)arg0)->m_c0 = var_r0;
    *(s32 *)&((TObjCollision *)arg0)->m_c4 = 0x10001;
    if (fabs_float(*(f32 *)((s8 *)arg0 + 0x70)) < lbl_805D8F24) {
        *(s32 *)&((TObjCollision *)arg0)->m_c4 = (s32) (*(s32 *)&((TObjCollision *)arg0)->m_c4& 0xFFFFFEFF);
    } else {
        *(s32 *)&((TObjCollision *)arg0)->m_c4 = (s32) (*(s32 *)&((TObjCollision *)arg0)->m_c4| 0x100);
    }
    init_collision_body_parts(arg0, (s32)(arg0 + 0xAC), 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
