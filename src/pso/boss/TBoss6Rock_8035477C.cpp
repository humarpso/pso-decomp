#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TBoss6Rock.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80354948___vt__10TBoss6Rock {
    s32 value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80354948_TBoss6Rock__data_805437F8 {
    s32 value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_803548B4___vt__10TBoss6Rock {
    s32 value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_803548B4_TBoss6Rock__data_80543778 {
    s32 value;
    u8 remaining[0x7C];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 create__10TBoss6RockFv();
extern RecoveredGlobal_80354948___vt__10TBoss6Rock __vt__10TBoss6Rock;
extern RecoveredGlobal_80354948_TBoss6Rock__data_805437F8 TBoss6Rock__rock_point_table;
extern s32 lbl_805D438C;
u8 *TBoss6Rock__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_803548B4_TBoss6Rock__data_80543778 TBoss6Rock__instance_table;
u8 *__dt__10TBoss6RockFv(u8 *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);
int is_active__10TBoss6RockFv(void*);

void TBoss6Rock::render() { if (is_active__10TBoss6RockFv(this) != 0) { draw_model(); } }

extern void *tl_02;

typedef char RecoveredGlobal_80354948___vt__10TBoss6Rock_size[sizeof(RecoveredGlobal_80354948___vt__10TBoss6Rock) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80354948_TBoss6Rock__data_805437F8_size[sizeof(RecoveredGlobal_80354948_TBoss6Rock__data_805437F8) == 0x180 ? 1 : -1];

typedef char RecoveredGlobal_803548B4___vt__10TBoss6Rock_size[sizeof(RecoveredGlobal_803548B4___vt__10TBoss6Rock) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_803548B4_TBoss6Rock__data_80543778_size[sizeof(RecoveredGlobal_803548B4_TBoss6Rock__data_80543778) == 0x80 ? 1 : -1];
u8 *__dt__10TBoss6RockFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_803548B4___vt__10TBoss6Rock *)&__vt__10TBoss6Rock).value;
        if ((s32) *(s32 *)((s8 *)arg0 + 0xC4) != 0) {
            ((TBoss6Rock *)(arg0 + 0xD4))->spawn_crush_rocks(*(s32 *)((s8 *)arg0 + 0xB4));
        }
        ((TBoss6Rock *)arg0)->release_object();
        *(s32 *)((s8 *)(&TBoss6Rock__instance_table.value) + (*(s32 *)((s8 *)arg0 + 0xAC) * 4)) = 0;
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *TBoss6Rock__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__10TBoss6Rock.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D438C;
    *(s32 *)((s8 *)arg0 + 0xAC) = arg2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD4), (int) ((u8 *)&TBoss6Rock__rock_point_table.value + (*(s32 *)((s8 *)arg0 + 0xAC) * 0xC)));
    *(s32 *)((s8 *)arg0 + 0xB8) = 0;
    *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    *(s32 *)((s8 *)arg0 + 0xC0) = 0;
    *(s32 *)((s8 *)arg0 + 0xBC) = 0;
    *(s32 *)((s8 *)arg0 + 0xB0) = 0;
    ((TBoss6Rock *)arg0)->randomize_motion();
    *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    *(s32 *)((s8 *)arg0 + 0xC4) = 0;
    *(s32 *)((s8 *)arg0 + 0xE4) = create__10TBoss6RockFv();
    return arg0;
}

void *TBoss6Rock::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TBoss6Rock__ct((u8 *)(o), (s32)(tl_02), (s32)(arg0));
    }
    return o;
}

}
