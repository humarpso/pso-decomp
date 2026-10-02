#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8006754C___vt__13TObjCollision { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_8006754C___vt__13TObjCollision_size[sizeof(RecoveredGlobal_8006754C___vt__13TObjCollision) == 0x38 ? 1 : -1];

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TObjPlayer__sub_801569F4(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
extern M2C_UNK __vt__13TObjCollision[];
extern s32 lbl_805D2830;
extern const f32 lbl_805D8F20;
extern const f32 lbl_805D8F24;
u8 *TObjCollision__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__13TObjCollisionFv(void *arg0, s16 arg1);
void *create__13TObjCollisionFPv(void *arg0);
void render__13TObjCollisionFv(void);
void run_task__13TObjCollisionFv(void);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

void render__13TObjCollisionFv(void) {  }
void run_task__13TObjCollisionFv(void) {  }

extern void *tl_06;

void *create__13TObjCollisionFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjCollision__ct((u8 *)(o), (M2C_UNK)(tl_06), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__13TObjCollision[];

void *__dt__13TObjCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjCollision;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_80154A00(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjCollision__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r0;
    TObjPlayer__sub_801569F4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8006754C___vt__13TObjCollision *)&__vt__13TObjCollision).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2830;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805D8F20;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805D8F20;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805D8F20;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    if (M2C_FIELD(arg0, f32 *, 0x70) < lbl_805D8F20) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0x10001;
    if (get_random_float__8TObjFishFv(M2C_FIELD(arg0, f32 *, 0x70)) < lbl_805D8F24) {
        M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (M2C_FIELD(arg0, s32 *, 0xC4) & 0xFFFFFEFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (M2C_FIELD(arg0, s32 *, 0xC4) | 0x100);
    }
    init_collision_body_parts(arg0, (s32) (arg0 + 0xAC), 1);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}
