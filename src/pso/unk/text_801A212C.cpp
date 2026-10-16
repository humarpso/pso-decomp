#include "types.h"

#include <stddef.h>
#include "pso/TMainTask.h"
struct Stack_801A2340 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    f32 sp18;
};

struct RecoveredGlobal_801A2340_lbl_804FF610 {
    s32 value;
    u8 remaining[0x8];
};

extern "C" {
s32 is_in_shadow_range(f32, void *);
s32 project_world_to_screen(int, void *, void *);
f32 transform_point_by_current_matrix(void *, void *);
extern RecoveredGlobal_801A2340_lbl_804FF610 lbl_804FF610;
extern const f32 lbl_805DC098;
extern const f32 lbl_805DC09C;
s16 update_object_view_visibility(u8 *arg0, f32 farg0, f32 farg1);
s32 is_in_shadow_range(f32, void *);
s32 project_world_to_screen(int, void *, void *);
f32 transform_point_by_current_matrix(void *, void *);
extern RecoveredGlobal_801A2340_lbl_804FF610 lbl_804FF610;
extern const f32 lbl_805DC098;
extern const f32 lbl_805DC09C;
s16 classify_actor_view_detail(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
typedef char RecoveredGlobal_801A2340_lbl_804FF610_size[sizeof(RecoveredGlobal_801A2340_lbl_804FF610) == 0xC ? 1 : -1];

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
s16 classify_actor_view_detail(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    Stack_801A2340 stack;
    f32 z;
    if (*(u16 *)((s8 *)arg0 + 4) & 0x400) {
        if (is_in_shadow_range(farg2, (void *) (arg0 + 0x38)) != 0) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 1;
            return 1;
        }
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (TMainTask::get_state_flag() == 1) {
        return *(s16 *)((s8 *)arg0 + 0x1E);
    }
    transform_point_by_current_matrix((void *) (arg0 + 0x38), (void *) (&stack.sp10));
    z = stack.sp18;
    if (z > lbl_805DC098) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (z < -farg1) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (stack.sp10 < lbl_805DC098) {
        stack.sp10 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 0) * farg2) + *(f32 *)((s8 *)arg0 + 0x38);
        stack.sp14 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 4) * farg2) + *(f32 *)((s8 *)arg0 + 0x3C);
        stack.sp18 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 8) * farg2) + *(f32 *)((s8 *)arg0 + 0x40);
        project_world_to_screen(0, (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 < lbl_805DC098) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 0;
            return 0;
        }
    } else {
        stack.sp10 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 0) * farg2) - *(f32 *)((s8 *)arg0 + 0x38));
        stack.sp14 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 4) * farg2) - *(f32 *)((s8 *)arg0 + 0x3C));
        stack.sp18 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 8) * farg2) - *(f32 *)((s8 *)arg0 + 0x40));
        project_world_to_screen(0, (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 > lbl_805DC09C) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 0;
            return 0;
        }
    }
    if (z < -farg0) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 2;
        return 2;
    }
    *(s16 *)((s8 *)arg0 + 0x1E) = 1;
    return 1;
}
#pragma pop

s16 update_object_view_visibility(u8 *arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_801A2340, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801A2340, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801A2340, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801A2340, sp18) == 0x10) ? 1 : -1];
    Stack_801A2340 stack;
    if (*(u16 *)((s8 *)arg0 + 4) & 0x400) {
        if (is_in_shadow_range((f32) (farg1), (void *) (arg0 + 0x38)) != 0) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 1;
            return 1;
        }
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (TMainTask::get_state_flag() == 1) {
        return *(s16 *)((s8 *)arg0 + 0x1E);
    }
    transform_point_by_current_matrix((void *) (arg0 + 0x38), (void *) (&stack.sp10));
    if (stack.sp18 > lbl_805DC098) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (stack.sp18 < -farg0) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (stack.sp10 < lbl_805DC098) {
        stack.sp10 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 0) * farg1) + *(f32 *)((s8 *)arg0 + 0x38);
        stack.sp14 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 4) * farg1) + *(f32 *)((s8 *)arg0 + 0x3C);
        stack.sp18 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 8) * farg1) + *(f32 *)((s8 *)arg0 + 0x40);
        project_world_to_screen((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 < lbl_805DC098) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 0;
            return 0;
        }
        goto block_15;
    }
    stack.sp10 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 0) * farg1) - *(f32 *)((s8 *)arg0 + 0x38));
    stack.sp14 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 4) * farg1) - *(f32 *)((s8 *)arg0 + 0x3C));
    stack.sp18 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 8) * farg1) - *(f32 *)((s8 *)arg0 + 0x40));
    project_world_to_screen((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
    if (stack.sp8 > lbl_805DC09C) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
block_15:
    *(s16 *)((s8 *)arg0 + 0x1E) = 1;
    return 1;
}
#pragma pop

}
