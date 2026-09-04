#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int queue_destruction__12TObjGrassWebFPv(void* p);
M2C_UNK TObjGrassWeb__sub_800BC798();
void apply_to_player__12TObjGrassWebFPv(void *arg0);
void run_task__12TObjGrassWebFv(u8 *arg0);
}

extern "C" {

void *__dt__12TObjGrassWebFv(void *arg0, s16 arg1);
void apply_to_player__12TObjGrassWebFPv(void *arg0);
int queue_destruction__12TObjGrassWebFPv(void* p);
void render__12TObjGrassWebFv(void);
s32 TObjPlayer__sub_80019248();
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void __dl__7TObjectFPv(void *);
s32 __dl__FPv(u32 *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 fn_8002B094(void *);
s32 free__11TOBoss4RockFUi(u32);
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__12TObjGrassWebFPv(void* p) { return queue_destruction__7TObjectFv(p); }

void apply_to_player__12TObjGrassWebFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xA4));
    if ((temp_r3 != 0) && (TObjPlayer__sub_80019248() != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) && (obj_testFlags30(temp_r3, 0x800) == 0)) {
        play_effect__10TObjPlayerFiii(temp_r3, M2C_FIELD(arg0, s32 *, 0x84), 1);
    }
}

void run_task__12TObjGrassWebFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x90);
    switch (temp_r0) {
    case 0:
        apply_to_player__12TObjGrassWebFPv((void *)arg0);
        return;
    case 1:
        TObjGrassWeb__sub_800BC798();
        return;
    default:
        queue_destruction__12TObjGrassWebFPv((void*)arg0);
        return;
    }
}

void render__12TObjGrassWebFv(void) {  }

extern M2C_UNK __vt__12TObjGrassWeb[];

void *__dt__12TObjGrassWebFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjGrassWeb;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
