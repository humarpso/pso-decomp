#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800B7808 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
};

extern "C" {
s32 TObjEneDellBiter__sub_80087350(s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *);
extern const f32 TObjEneBm5Wolf__data_805D9DE0;
void TObjEneBm5Wolf__sub_800B7808(s32 arg0, u8 *arg1);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
extern const f32 TObjEneBm5Wolf__data_805D9DE8;
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
void TObjEneBm5Wolf__sub_800B7794(u8 *arg0);
}

extern "C" {

void TObjEneBm5Wolf__sub_800B75A8(void *arg0, s32 arg1, s16 arg2);
int get_flag_bit0__14TObjEneBm5WolfFPv(void* p);
void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0);
void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0);
void select_target__14TObjEneBm5WolfFPv(void *arg0);
void set_anim_state__14TObjEneBm5WolfFPv(void *arg0);
void set_attack_flag__14TObjEneBm5WolfFPv(void* p);
void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

void TObjEneBm5Wolf__sub_800B75A8(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x414) = arg1;
    M2C_FIELD(arg0, s16 *, 0x418) = arg2;
}

int get_flag_bit0__14TObjEneBm5WolfFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

extern const f32 lbl_805D9E48;

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, lbl_805D9E48) != 0) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void TObjEneBm5Wolf__sub_800B7794(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DEC) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DE8) != 0)) {
        TBoss3Volopt__sub_8022675C((void *)(((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)))), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm5Wolf__sub_800B7808(s32 arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_800B7808, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B7808, sp10) == 0x8) ? 1 : -1];
    Stack_800B7808 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38), (void *) (arg0));
    stack.sp8 += TObjEneBm5Wolf__data_805D9DE0 * M2C_FIELD(arg1, f32 *, 0);
    stack.sp10 += TObjEneBm5Wolf__data_805D9DE0 * M2C_FIELD(arg1, f32 *, 8);
    TObjEneDellBiter__sub_80087350((s32) &stack.sp8, 0xF3);
}
#pragma pop

void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E4C);
        return;
    }
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E50);
}

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void select_target__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E4C);
        return;
    }
    select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E50);
}

void set_attack_flag__14TObjEneBm5WolfFPv(void* p) { *(u32*)((char*)p + 0x408) |= 0x1; }

void set_anim_state__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(6));
        return;
    }
    TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(5));
}

extern f32 TObjEneBm5Wolf__data_805D9DAC;

void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < TObjEneBm5Wolf__data_805D9DAC) {
        TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(8));
        return;
    }
    TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(9));
}

}
