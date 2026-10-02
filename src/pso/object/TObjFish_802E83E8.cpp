#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_802EC468 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_802EC468_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 spawn_particle_effect_with_flags(void *, int, int);
extern RecoveredGlobal_802EC468_lbl_804FF5E8 lbl_804FF5E8;
void TObjFish__sub_802EC468(s32 arg0, f32 farg0, f32 farg1);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2);
s32 TObjFish__sub_802EC7F0(void *);
s32 TObjFish__sub_802ECBDC(void *);
s32 TObjFish__sub_802ED4AC(void *, int);
s32 TObjFish__sub_802ED62C(void *, int);
extern const f32 lbl_805DEA48;
void TObjFish__sub_802E8EEC(u8 *arg0, u32 arg1);
}

extern "C" {

void TObjFish__sub_802EC32C(void);
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2);
void spawn_particle_201__8TObjFishFii(s32 arg1, s32 arg2);
void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2);
void update_projectile_spawns__8TObjFishFPv(u8 *arg0);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
M2C_UNK TBoss4Zako__sub_803D8910(int, void *);
s32 TOTrapAncient01__sub_80226578(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
M2C_UNK TObjEneDD__sub_800B9BEC(void *, void *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK spawn_default_particle__8TObjFishFv(s32, M2C_UNK);

void TObjFish__sub_802E8EEC(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFFFB);
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x100);
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0xE));
        TObjFish__sub_802ECBDC((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x6C0) = 3;
        TObjFish__sub_802ED4AC((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x6C0)));
        break;
    case 2:
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1) {
            TObjFish__sub_802ED62C((void *) (arg0), (int) (2));
            break;
        }
    default:
        break;
    case 9:
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1) {
            TObjFish__sub_802EC7F0((void *) (arg0));
            break;
        }
        break;
    case 0:
        advance_animation_playback((void *) (arg0));
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA48)) != 0) {
            set_effect_target_position__8TObjFishFPvPvPv((void*)((void *) (arg0)), (void*)((int) (0x39906)), (void*)((void *) ((u8 *)(arg0) + 0x50C)));
        }
        break;
    }
}

void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg2, 0, 0);
}
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2) { TBoss3Volopt__sub_8022675C(a1, a2, (void*)0, (void*)0); }
void TObjFish__sub_802EC32C(void) {  }

extern const f32 lbl_805DEA14;
extern const f32 lbl_805DEA30;
extern const f32 lbl_805DEA58;
extern const f32 lbl_805DEB68;

void update_projectile_spawns__8TObjFishFPv(u8 *arg0) {
    u8 *temp_r31;

    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x38), (void *) (arg0 + 0x50C), (f32) (lbl_805DEB68));
    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x4C4), (void *) (arg0 + 0x518), (f32) (lbl_805DEB68));
    temp_r31 = arg0 + 0x524;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x518));
    TBoss4Zako__sub_803D8910((int) (temp_r31), (void *) (arg0 + 0x518));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * lbl_805DEA14);
    if ((M2C_FIELD(arg0, s32 *, 0x628) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA58)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA30)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x6BC) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6BC) <= 0x10) {
        if (M2C_FIELD(arg0, s32 *, 0x628) & 0x400) {
            spawn_via_trap__8TObjFishFiii((s32)((void *) (arg0)), (s32)((int) (0x39704)), (s32)((void *) (arg0 + 0x524)));
        } else {
            spawn_via_trap__8TObjFishFiii((s32)((void *) (arg0)), (s32)((int) (0x3A303)), (s32)((void *) (arg0 + 0x524)));
        }
        M2C_FIELD(arg0, s32 *, 0x6BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6BC) + 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x628) & 0x200) {
        spawn_via_trap__8TObjFishFiii((s32)((void *) (arg0)), (s32)((int) (0x39F08)), (s32)((void *) (arg0 + 0x50C)));
    }
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802EC468_lbl_804FF5E8_size[sizeof(RecoveredGlobal_802EC468_lbl_804FF5E8) == 0x28 ? 1 : -1];
void TObjFish__sub_802EC468(s32 arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_802EC468, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802EC468, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802EC468, sp10) == 0x8) ? 1 : -1];
    Stack_802EC468 stack;
    VecCopy__FP3VecPC3Vec((int)((void *) (&stack.sp8)), (void *)((void *) (arg0)));
    stack.sp8 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC) * farg1) - stack.sp8);
    stack.spC -= (M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10) * farg1) - farg0;
    stack.sp10 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14) * farg1) - stack.sp10);
    spawn_particle_effect_with_flags((void *) (&stack.sp8), (int) (0x127), (int) (0x40));
}
#pragma pop

void spawn_particle_201__8TObjFishFii(s32 arg1, s32 arg2) {
    spawn_default_particle__8TObjFishFv(arg2, 0x201);
}

}
