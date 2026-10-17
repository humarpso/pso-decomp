#include "pso/TItemReverseTech.h"
#include "pso/misc/TLobby.h"

extern "C" void request_queued_main_phase(void);

#pragma opt_common_subs off
#include "types.h"

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
struct RecoveredGlobal_8011A00C_lbl_8043E6A4 {
    s32 value;
    u8 remaining[0x8];
};
typedef char RecoveredGlobal_8011A00C_lbl_8043E6A4_size[sizeof(RecoveredGlobal_8011A00C_lbl_8043E6A4) == 0xC ? 1 : -1];
extern RecoveredGlobal_8011A00C_lbl_8043E6A4 lbl_8043E6A4;
struct RecoveredGlobal_8011A00C_lbl_8043E6B0 {
    s32 value;
    u8 remaining[0x8];
};
typedef char RecoveredGlobal_8011A00C_lbl_8043E6B0_size[sizeof(RecoveredGlobal_8011A00C_lbl_8043E6B0) == 0xC ? 1 : -1];
extern RecoveredGlobal_8011A00C_lbl_8043E6B0 lbl_8043E6B0;
extern void *TItemReverseTech__texture_archive;

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

    stack.sp14 = *(s32 *)((s8 *)(&lbl_8043E6A4.value) + 0);
    stack.sp18 = *(s32 *)((s8 *)(&lbl_8043E6A4.value) + 4);
    stack.sp1C = *(s32 *)((s8 *)(&lbl_8043E6A4.value) + 8);
    stack.sp8 = *(s32 *)((s8 *)(&lbl_8043E6B0.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_8043E6B0.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_8043E6B0.value) + 8);
    activate_camera_mode((int) (9));
    set_active_camera_pose((void *) (&stack.sp14), (void *) (&stack.sp8));
    temp_r3 = (u32)part_one;
    if ((temp_r3 != 0U) && (((TObject *)temp_r3)->all_parents_unqueued_for_destruction() == 0)) {
        part_one = NULL;
        temp_r3_2 = (u32)__nw__7TObjectFUl((int) (0x158));
        var_r0 = temp_r3_2;
        if (var_r0 != 0U) {
            var_r0 = __ct__21TItemReverseTechPart2Fv((int) (temp_r3_2), (void *) (this), (int) (TItemReverseTech__texture_archive));
        }
        part_two = (TObject *)var_r0;
    }
    temp_r3_3 = (u32)part_two;
    if ((temp_r3_3 != 0U) && (((TObject *)temp_r3_3)->all_parents_unqueued_for_destruction() == 0)) {
        part_two = NULL;
        queue_destruction__7TObjectFv((void *) (this));
    }
}
#pragma opt_common_subs reset

TItemReverseTech::~TItemReverseTech() {
    TLobby::stop_audio_streams();
    request_queued_main_phase();
}

#include "pso/TObject.h"

extern "C" {

void *TItemReverseTech__ct(void *arg0);
void *TItemReverseTechPart1__ct(void *, void *, void *);
void play_area_music(void *);
void *__ct__10TAdEndTextFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__16TItemReverseTech[];
extern void *lbl_805D2C48;
extern s32 lbl_8043E708[];

void *TItemReverseTech__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TItemReverseTech;
    *(void * *)&((TItemReverseTech *)arg0)->m_name = lbl_805D2C48;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TItemReverseTechPart1__ct(o, arg0, TItemReverseTech__texture_archive);
    }
    *(void * *)&((TItemReverseTech *)arg0)->part_one = o;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    o2 = __nw__7TObjectFUl(0x197C);
    if (o2 != NULL) {
        __ct__10TAdEndTextFv(o2, arg0);
    }
    play_area_music(lbl_8043E708);
    return arg0;
}

}
