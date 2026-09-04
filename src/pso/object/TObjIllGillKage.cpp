#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TObjIllGillKageFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__15TObjIllGillKage[];

void *__dt__15TObjIllGillKageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjIllGillKage;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80365450
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248();
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
int queue_destruction__15TObjIllGillKageFPv(void* p);
void render__15TObjIllGillKageFv(void);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__15TObjIllGillKageFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803654D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248();
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
int queue_destruction__15TObjIllGillKageFPv(void* p);
void render__15TObjIllGillKageFv(void);
int queue_destruction__7TObjectFv(void*);

void attack_target__15TObjIllGillKageFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x98));
    if ((temp_r3 != 0) && (TObjPlayer__sub_80019248() != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) && (obj_testFlags30(temp_r3, 0x800) == 0)) {
        play_effect__10TObjPlayerFiii(temp_r3, M2C_FIELD(arg0, s32 *, 0x94), 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036559C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248();
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
int queue_destruction__15TObjIllGillKageFPv(void* p);
void render__15TObjIllGillKageFv(void);
int queue_destruction__7TObjectFv(void*);

void render__15TObjIllGillKageFv(void) {  }

}
#endif
#endif
