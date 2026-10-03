#include "pso/TItemReverseTech.h"

extern "C" void TLobby__sub_8022743C(void);
extern "C" void request_queued_main_phase(void);

#pragma opt_common_subs off
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8011A00C {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
};
extern "C" {

s32 queue_destruction__7TObjectFv(void *);
s32 set_active_camera_pose(void *, void *);
s32 activate_camera_mode(int);
u32 __ct__21TItemReverseTechPart2Fv(int, void *, int);
void *__nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
struct RecoveredGlobal_8011A00C_lbl_8043E6A4 {
    M2C_UNK value;
    u8 remaining[0x8];
};
typedef char RecoveredGlobal_8011A00C_lbl_8043E6A4_size[sizeof(RecoveredGlobal_8011A00C_lbl_8043E6A4) == 0xC ? 1 : -1];
extern RecoveredGlobal_8011A00C_lbl_8043E6A4 lbl_8043E6A4;
struct RecoveredGlobal_8011A00C_lbl_8043E6B0 {
    M2C_UNK value;
    u8 remaining[0x8];
};
typedef char RecoveredGlobal_8011A00C_lbl_8043E6B0_size[sizeof(RecoveredGlobal_8011A00C_lbl_8043E6B0) == 0xC ? 1 : -1];
extern RecoveredGlobal_8011A00C_lbl_8043E6B0 lbl_8043E6B0;
extern void *TItemReverseTech__data_805D54D0;

}

void TItemReverseTech::run_task() {
    typedef char sp8_offset[(offsetof(Stack_8011A00C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8011A00C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8011A00C, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8011A00C, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8011A00C, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8011A00C, sp1C) == 0x14) ? 1 : -1];
    Stack_8011A00C stack;

    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 var_r0;

    stack.sp14 = M2C_FIELD(&lbl_8043E6A4.value, s32 *, 0);
    stack.sp18 = M2C_FIELD(&lbl_8043E6A4.value, s32 *, 4);
    stack.sp1C = M2C_FIELD(&lbl_8043E6A4.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_8043E6B0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043E6B0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043E6B0.value, s32 *, 8);
    activate_camera_mode((int) (9));
    set_active_camera_pose((void *) (&stack.sp14), (void *) (&stack.sp8));
    temp_r3 = (u32)part_one;
    if ((temp_r3 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((int) (temp_r3)) == 0)) {
        part_one = NULL;
        temp_r3_2 = (u32)__nw__7TObjectFUl((int) (0x158));
        var_r0 = temp_r3_2;
        if (var_r0 != 0U) {
            var_r0 = __ct__21TItemReverseTechPart2Fv((int) (temp_r3_2), (void *) (this), (int) (TItemReverseTech__data_805D54D0));
        }
        part_two = (TObject *)var_r0;
    }
    temp_r3_3 = (u32)part_two;
    if ((temp_r3_3 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((int) (temp_r3_3)) == 0)) {
        part_two = NULL;
        queue_destruction__7TObjectFv((void *) (this));
    }
}
#pragma opt_common_subs reset

TItemReverseTech::~TItemReverseTech() {
    TLobby__sub_8022743C();
    request_queued_main_phase();
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemReverseTech__ct(void *arg0);
void *TItemReverseTechPart1__ct(void *, void *, void *);
void play_area_music(void *);
void *__ct__10TAdEndTextFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__16TItemReverseTech[];
extern void *lbl_805D2C48;
extern void *TItemReverseTech__data_805D54D0;
extern M2C_UNK lbl_8043E708[];

void *TItemReverseTech__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TItemReverseTech;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2C48;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TItemReverseTechPart1__ct(o, arg0, TItemReverseTech__data_805D54D0);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    o2 = __nw__7TObjectFUl(0x197C);
    if (o2 != NULL) {
        __ct__10TAdEndTextFv(o2, arg0);
    }
    play_area_music(lbl_8043E708);
    return arg0;
}

}
