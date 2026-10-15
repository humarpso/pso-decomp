#include "types.h"

#include <stddef.h>
struct Stack_80067AB0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80067AB0_lbl_80438150 { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80067AB0_lbl_80438150_size[sizeof(RecoveredGlobal_80067AB0_lbl_80438150) == 0x18 ? 1 : -1];

struct Stack_8006786C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 predict_obstruction__11TCameraCtrlFPv(void *);
f32 vector_length(void *);
extern RecoveredGlobal_80067AB0_lbl_80438150 camera_ctrl_default_offset_vecs;
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805D8F38;
extern const f32 lbl_805D8F4C;
extern const f32 lbl_805D8F50;
extern const f32 lbl_805D8F54;
extern const f32 lbl_805D8F58;
extern const f32 lbl_805D8F5C;
void TCameraCtrl__sub_80067AB0(u8 *arg0);
u8 *TCameraCtrl__sub_8003CFF4();
f32 vector_length(void *);
void normalize_vector(void *);
extern const f32 lbl_805D8F38;
extern const f32 lbl_805D8F3C;
extern const f32 lbl_805D8F40;
extern const f32 lbl_805D8F44;
extern const f32 lbl_805D8F48;
extern const f32 lbl_805D8F4C;
void update_target_follow__11TCameraCtrlFPv(void *p_);
}

extern "C" {

void *TCameraCtrl__vt12(void);
void *__dt_deleting_2__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void init_state__11TCameraCtrlFPv(void *arg0);
void set_target__11TCameraCtrlFPvUi(void *arg0, u32 arg1);
s32 update_follow_camera__11TCameraCtrlFv(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void deleting_dtor__11TCameraCtrlFPvs(void *, int);
void *init__11TCameraCtrlFPv(void *);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
s16 obj_getField1c(u32);

void set_target__11TCameraCtrlFPvUi(void *arg0, u32 arg1) {
    *(u32 *)((s8 *)arg0 + 0x1C) = arg1;
    if (arg1 != 0U) {
        *(s16 *)((s8 *)arg0 + 0x20) = obj_getField1c(arg1);
    }
}

#pragma push
#pragma fp_contract on
void update_target_follow__11TCameraCtrlFPv(void *p_) {
#define arg0 ((u8 *)p_)
    typedef char sp8_offset[(offsetof(Stack_8006786C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8006786C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8006786C, sp10) == 0x8) ? 1 : -1];
    Stack_8006786C stack;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    s32 temp_r0;
    u8 *temp_r3;
    u8 *temp_r4;
    temp_r3 = (u8 *)(TCameraCtrl__sub_8003CFF4());
    if (temp_r3 != NULL) {
        temp_r4 = *(u8 **)((s8 *)arg0 + 0x1C);
        stack.sp8 = *(f32 *)((s8 *)temp_r4 + 0x38) - *(f32 *)((s8 *)temp_r3 + 0);
        temp_f2 = *(f32 *)((s8 *)temp_r4 + 0x40);
        temp_f1 = temp_f2 - *(f32 *)((s8 *)temp_r3 + 8);
        stack.spC = lbl_805D8F38;
        stack.sp10 = temp_f1;
        temp_f1_2 = vector_length((void *) (&stack.sp8));
        if (lbl_805D8F38 != temp_f1_2) {
            normalize_vector((void *) (&stack.sp8));
        } else {
            return;
        }
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x114);
        switch (temp_r0) {
        case 0:
            *(f32 *)((s8 *)arg0 + 0x48) = (f32) *(f32 *)((s8 *)temp_r3 + 0);
            *(f32 *)((s8 *)arg0 + 0x50) = (f32) *(f32 *)((s8 *)temp_r3 + 8);
            *(f32 *)((s8 *)arg0 + 0x4C) = (f32) *(f32 *)((s8 *)temp_r3 + 4);
            if (*(f32 *)((s8 *)arg0 + 0x4C) >= lbl_805D8F3C) {
                *(f32 *)((s8 *)arg0 + 0x4C) = (f32) lbl_805D8F40;
            }
            *(f32 *)((s8 *)arg0 + 0x3C) = (f32) ((lbl_805D8F44 * stack.sp8) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x38));
            *(f32 *)((s8 *)arg0 + 0x44) = (f32) ((lbl_805D8F44 * stack.sp10) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x40));
            *(f32 *)((s8 *)arg0 + 0x40) = (f32) (lbl_805D8F48 + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x3C));
            if (temp_f1_2 < lbl_805D8F4C) {
                *(s32 *)((s8 *)arg0 + 0x114) = 1;
                *(f32 *)((s8 *)arg0 + 0x118) = (f32) (*(f32 *)((s8 *)arg0 + 0x48) - *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x38));
                *(f32 *)((s8 *)arg0 + 0x11C) = (f32) (*(f32 *)((s8 *)arg0 + 0x4C) - *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x3C));
                *(f32 *)((s8 *)arg0 + 0x120) = (f32) (*(f32 *)((s8 *)arg0 + 0x50) - *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x40));
                *(f32 *)((s8 *)arg0 + 0x124) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) - *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x38));
                *(f32 *)((s8 *)arg0 + 0x128) = (f32) (*(f32 *)((s8 *)arg0 + 0x40) - *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x3C));
                *(f32 *)((s8 *)arg0 + 0x12C) = (f32) (*(f32 *)((s8 *)arg0 + 0x44) - *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x40));
                return;
            }
            break;
        case 1:
            if (temp_f1_2 > lbl_805D8F4C) {
                *(s32 *)((s8 *)arg0 + 0x114) = 0;
            }
            *(f32 *)((s8 *)arg0 + 0x48) = (f32) (*(f32 *)((s8 *)arg0 + 0x118) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x38));
            *(f32 *)((s8 *)arg0 + 0x4C) = (f32) (*(f32 *)((s8 *)arg0 + 0x11C) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x3C));
            *(f32 *)((s8 *)arg0 + 0x50) = (f32) (*(f32 *)((s8 *)arg0 + 0x120) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x40));
            *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x124) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x38));
            *(f32 *)((s8 *)arg0 + 0x40) = (f32) (*(f32 *)((s8 *)arg0 + 0x128) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x3C));
            *(f32 *)((s8 *)arg0 + 0x44) = (f32) (*(f32 *)((s8 *)arg0 + 0x12C) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x40));
            break;
        }
    }
}
#undef arg0
#pragma pop

void TCameraCtrl__sub_80067AB0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80067AB0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80067AB0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80067AB0, sp10) == 0x8) ? 1 : -1];
    Stack_80067AB0 stack;
    *(s32 *)((s8 *)arg0 + 0x38) = 0x15;
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) lbl_805D8F50;
    stack.sp8 = *(f32 *)((s8 *)camera_ctrl_instance + 0x184) - *(f32 *)((s8 *)arg0 + 0x48);
    stack.spC = *(f32 *)((s8 *)camera_ctrl_instance + 0x188) - *(f32 *)((s8 *)arg0 + 0x4C);
    stack.sp10 = *(f32 *)((s8 *)camera_ctrl_instance + 0x18C) - *(f32 *)((s8 *)arg0 + 0x50);
    *(f32 *)((s8 *)arg0 + 0x5C) = (f32) ((lbl_805D8F54 * vector_length((void *) (&stack.sp8))) / lbl_805D8F4C);
    if (predict_obstruction__11TCameraCtrlFPv((void *) (arg0)) != 0) {
        *(s32 *)((s8 *)arg0 + 0xFC) = (s32) (*(s32 *)((s8 *)arg0 + 0xFC) | 1);
    } else {
        *(s32 *)((s8 *)arg0 + 0xFC) = (s32) (*(s32 *)((s8 *)arg0 + 0xFC) & 0xFFFFFFFE);
    }
    *(f32 *)((s8 *)arg0 + 0xE8) = (f32) lbl_805D8F38;
    *(f32 *)((s8 *)arg0 + 0xEC) = (f32) lbl_805D8F58;
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) lbl_805D8F5C;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (&camera_ctrl_default_offset_vecs.value));
}

void *TCameraCtrl__vt12(void) {
    void *o = __nw__7TObjectFUl(0x130);
    if (o != NULL) {
        o = init__11TCameraCtrlFPv(o);
    }
    return o;
}

extern u8 controller_input_state[];

void init_state__11TCameraCtrlFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x38) = 0x15;
    if (is_on_current_screen__11TCameraCtrlFPv(controller_input_state + 0x20, 0x10000) != 0) {
        update_follow_camera__11TCameraCtrlFv(arg0);
    } else {
        update_target_follow__11TCameraCtrlFPv((void *)(arg0));
    }
    *(s32 *)((s8 *)arg0 + 0x38) = (s32) (*(s32 *)((s8 *)arg0 + 0x38) | 0x10);
}

extern s32 lbl_804887F8[];

void *__dt_deleting_2__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804887F8;
        deleting_dtor__11TCameraCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
