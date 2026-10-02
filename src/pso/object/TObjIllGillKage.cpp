#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803655F8___vt__15TObjIllGillKage { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_803655F8___vt__15TObjIllGillKage_size[sizeof(RecoveredGlobal_803655F8___vt__15TObjIllGillKage) == 0x34 ? 1 : -1];

extern "C" {
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void TObjIllGillKage__sub_80365470(u8 *arg0);
int queue_destruction__15TObjIllGillKageFPv(void* p);
void TObjIllGillKage__sub_80365470(u8 *arg0);
void attack_target__15TObjIllGillKageFPv(void *arg0);
void run_task__15TObjIllGillKageFv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
int queue_destruction__7TObjectFv(void*);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__15TObjIllGillKage[];
extern s32 lbl_805D44AC;
u8 *TObjIllGillKage__ct(u8 *arg0, M2C_UNK arg1, u32 arg2);
}

extern "C" {

void *__dt__15TObjIllGillKageFv(void *arg0, s16 arg1);
void attack_target__15TObjIllGillKageFPv(void *arg0);
int queue_destruction__15TObjIllGillKageFPv(void* p);
void render__15TObjIllGillKageFv(void);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__15TObjIllGillKageFPv(void* p) { return queue_destruction__7TObjectFv(p); }

void TObjIllGillKage__sub_80365470(u8 *arg0) {
    s32 temp_r3;
    TOTrapAncient01__sub_80226578((int) (0x4003A357), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x94);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (temp_r3 - 1);
    if (temp_r3 < 0) {
        M2C_FIELD(arg0, s32 *, 0x90) = 2;
    }
}

void attack_target__15TObjIllGillKageFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x98));
    if ((temp_r3 != 0) && (is_locally_controlled__10TObjPlayerFPv() != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) && (obj_testFlags30(temp_r3, 0x800) == 0)) {
        play_effect__10TObjPlayerFiii(temp_r3, M2C_FIELD(arg0, s32 *, 0x94), 3);
    }
}

void run_task__15TObjIllGillKageFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x90);
    switch (temp_r0) {
    case 0:
        attack_target__15TObjIllGillKageFPv((void *)arg0);
        return;
    case 1:
        TObjIllGillKage__sub_80365470((u8 *)arg0);
        return;
    default:
        queue_destruction__15TObjIllGillKageFPv((void*)arg0);
        return;
    }
}

void render__15TObjIllGillKageFv(void) {  }

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
u8 *TObjIllGillKage__ct(u8 *arg0, M2C_UNK arg1, u32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803655F8___vt__15TObjIllGillKage *)&__vt__15TObjIllGillKage).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D44AC;
    if (arg2 != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0x38));
        M2C_FIELD(arg0, u16 *, 0x98) = obj_getField1c((void *) (arg2));
        M2C_FIELD(arg0, s32 *, 0x94) = 0xB4;
        M2C_FIELD(arg0, s32 *, 0x90) = 0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x98) = 0xFFFFU;
        queue_destruction__7TObjectFv((void*)((void *) (arg0)));
    }
    return arg0;
}

}
