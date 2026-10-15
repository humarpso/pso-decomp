#include "types.h"

struct RecoveredGlobal_8006754C___vt__13TObjCollision { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_8006754C___vt__13TObjCollision_size[sizeof(RecoveredGlobal_8006754C___vt__13TObjCollision) == 0x38 ? 1 : -1];

extern "C" {
f32 fabs_float(f32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * construct_collider_proxy__10TObjPlayerFPv(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
extern s32 __vt__13TObjCollision[];
extern s32 lbl_805D2830;
extern const f32 lbl_805D8F20;
extern const f32 lbl_805D8F24;
u8 *TObjCollision__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__13TObjCollisionFv(void *arg0, s16 arg1);
void *create__13TObjCollisionFPv(void *arg0);
void render__13TObjCollisionFv(void);
void run_task__13TObjCollisionFv(void);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

void render__13TObjCollisionFv(void) {  }
void run_task__13TObjCollisionFv(void) {  }

extern void *tl_06;

void *create__13TObjCollisionFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjCollision__ct((u8 *)(o), (s32)(tl_06), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__13TObjCollision[];

void *__dt__13TObjCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjCollision;
        free_collision_body_parts(arg0);
        unregister_object_by_id(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjCollision__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    construct_collider_proxy__10TObjPlayerFPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8006754C___vt__13TObjCollision *)&__vt__13TObjCollision).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2830;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x02000000);
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) lbl_805D8F20;
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805D8F20;
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) lbl_805D8F20;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) *(f32 *)((s8 *)arg0 + 0x68);
    *(f32 *)((s8 *)arg0 + 0xBC) = (f32) *(f32 *)((s8 *)arg0 + 0x6C);
    if (*(f32 *)((s8 *)arg0 + 0x70) < lbl_805D8F20) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    *(s32 *)((s8 *)arg0 + 0xC0) = var_r0;
    *(s32 *)((s8 *)arg0 + 0xC4) = 0x10001;
    if (fabs_float(*(f32 *)((s8 *)arg0 + 0x70)) < lbl_805D8F24) {
        *(s32 *)((s8 *)arg0 + 0xC4) = (s32) (*(s32 *)((s8 *)arg0 + 0xC4) & 0xFFFFFEFF);
    } else {
        *(s32 *)((s8 *)arg0 + 0xC4) = (s32) (*(s32 *)((s8 *)arg0 + 0xC4) | 0x100);
    }
    init_collision_body_parts(arg0, (s32) (arg0 + 0xAC), 1);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}
