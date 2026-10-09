#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80354948___vt__10TBoss6Rock {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80354948_TBoss6Rock__data_805437F8 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_803548B4___vt__10TBoss6Rock {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_803548B4_TBoss6Rock__data_80543778 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 construct_collider_proxy__10TObjPlayerFPv(void *);
s32 create__10TBoss6RockFv();
s32 randomize_motion__10TBoss6RockFPv(void *);
extern RecoveredGlobal_80354948___vt__10TBoss6Rock __vt__10TBoss6Rock;
extern RecoveredGlobal_80354948_TBoss6Rock__data_805437F8 TBoss6Rock__rock_point_table;
extern s32 lbl_805D438C;
u8 *TBoss6Rock__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
u8 * destroy_particle_controller__10TObjPlayerFPvs(void *, s16);
void __dl__7TObjectFPv(s32);
void release_object__10TBoss6RockFPv(void *);
void spawn_crush_rocks__10TBoss6RockFPvi(void *, s32);
extern RecoveredGlobal_80354948___vt__10TBoss6Rock __vt__10TBoss6Rock;
extern RecoveredGlobal_803548B4_TBoss6Rock__data_80543778 TBoss6Rock__instance_table;
u8 *__dt__10TBoss6RockFv(u8 *arg0, s16 arg1);
}

extern "C" {

void *create__10TBoss6RockFPv(void *arg0);
void render__10TBoss6RockFv(void* p);
int draw_model__10TBoss6RockFPv(void*);
void *__nw__7TObjectFUl(int);
int is_active__10TBoss6RockFv(void*);

void render__10TBoss6RockFv(void* p) { if (is_active__10TBoss6RockFv(p) != 0) { draw_model__10TBoss6RockFPv(p); } }

extern void *tl_02;

typedef char RecoveredGlobal_80354948___vt__10TBoss6Rock_size[sizeof(RecoveredGlobal_80354948___vt__10TBoss6Rock) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80354948_TBoss6Rock__data_805437F8_size[sizeof(RecoveredGlobal_80354948_TBoss6Rock__data_805437F8) == 0x180 ? 1 : -1];

typedef char RecoveredGlobal_803548B4___vt__10TBoss6Rock_size[sizeof(RecoveredGlobal_803548B4___vt__10TBoss6Rock) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_803548B4_TBoss6Rock__data_80543778_size[sizeof(RecoveredGlobal_803548B4_TBoss6Rock__data_80543778) == 0x80 ? 1 : -1];
u8 *__dt__10TBoss6RockFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803548B4___vt__10TBoss6Rock *)&__vt__10TBoss6Rock).value;
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC4) != 0) {
            spawn_crush_rocks__10TBoss6RockFPvi(arg0 + 0xD4, M2C_FIELD(arg0, s32 *, 0xB4));
        }
        release_object__10TBoss6RockFPv(arg0);
        M2C_FIELD(&TBoss6Rock__instance_table.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0xAC) * 4)) = 0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *TBoss6Rock__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    construct_collider_proxy__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TBoss6Rock.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D438C;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD4), (int) ((u8 *)&TBoss6Rock__rock_point_table.value + (M2C_FIELD(arg0, s32 *, 0xAC) * 0xC)));
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    randomize_motion__10TBoss6RockFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = create__10TBoss6RockFv();
    return arg0;
}

void *create__10TBoss6RockFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TBoss6Rock__ct((u8 *)(o), (M2C_UNK)(tl_02), (s32)(arg0));
    }
    return o;
}

}
