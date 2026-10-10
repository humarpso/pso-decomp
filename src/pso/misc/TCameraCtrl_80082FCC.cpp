#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800830B0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
};

struct RecoveredGlobal_800830B0_lbl_80439348 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_800830B0_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct G_80082FCC { s32 value; s32 v4; f32 f8; f32 fC; };

extern "C" {
s32 is_split_screen();
s32 TCameraCtrl__sub_80068EF0();
s32 restore_full_screen_view__11TCameraCtrlFv();
s32 calc_axes_from_angles__11TCameraCtrlFiii(void *, int, int);
s32 calc_rotated_axes__11TCameraCtrlFPv(void *);
s32 setup_default_view__11TCameraCtrlFPvPv(void *, int);
s32 direction_to_pitch_yaw(void *, void *, void *);
s32 TObjPlayer__sub_80084744();
s32 TObjPlayer__sub_80084754();
s32 render_scene_passes__9TMainTaskFv(void *);
s32 GXPixModeSync();
s32 GXSetTexCopySrc(int, int, int, int);
s32 GXSetTexCopyDst(int, int, int, int);
s32 GXSetCopyClear(void *, int);
s32 GXCopyTex(void *, int);
s32 GXSetZMode(int, int, int);
s32 GXSetViewport(f32, f32, f32, f32, f32, f32);
s32 GXSetScissor(int, int, int, int);
s32 set_camera_look_at(void *, void *, void *);
s32 set_perspective_projection_from_fov(int, f32, f32, f32);
extern RecoveredGlobal_800830B0_lbl_80439348 lbl_80439348;
extern RecoveredGlobal_800830B0_main_task main_task;
extern u8 *camera_ctrl_instance;
extern u32 camera_render_target_singleton;
extern const f32 lbl_805D93D0;
extern const f32 lbl_805D93D8;
extern const f32 lbl_805D9404;
extern const f32 lbl_805D9408;
extern const f32 lbl_805D940C;
extern const f32 lbl_805D9410;
extern s32 lbl_805E1210;
void TCameraCtrl__sub_800830B0(u8 *arg0);
extern G_80082FCC TCameraCtrl__data_804FF634;
extern const f32 lbl_805D93EC;
extern const f32 lbl_805D93F0;
extern const f32 lbl_805D93F4;
extern const f32 lbl_805D93F8;
extern const f32 lbl_805D93FC;
extern const f32 lbl_805D9400;
void calc_projection_screen_offset(f32 *arg0, f32 *arg1);
}

extern "C" {

void TCameraCtrl__sub_800830A8(void);
void TCameraCtrl__sub_800830AC(void);
void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2);
void *dt__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void update_single_screen__11TCameraCtrlFv(void);
M2C_UNK load_list_texture(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void VecCopy__FP3VecPC3Vec(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(s32);

void calc_projection_screen_offset(f32 *arg0, f32 *arg1) {
    f32 dx = TCameraCtrl__data_804FF634.f8;
    f32 y = TCameraCtrl__data_804FF634.fC;
    f32 dy;
    dx -= lbl_805D93EC;
    dy = y - lbl_805D93F0;
    *arg0 = (lbl_805D93F4 * dx) / lbl_805D93F8;
    *arg1 = (lbl_805D93FC * dy) / lbl_805D9400;
}

void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32));
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *)((char *)arg0 + 44), arg2);
}

extern u32 camera_render_target_singleton;

void update_single_screen__11TCameraCtrlFv(void) {
    if ((is_split_screen() == 0) && ((u32) camera_render_target_singleton != 0U)) {
        set_global_param__8TObjFishFi(camera_render_target_singleton + 0x1C);
        load_list_texture(0, 0, 0, 0);
    }
}

void TCameraCtrl__sub_800830A8(void) {  }
void TCameraCtrl__sub_800830AC(void) {  }

extern M2C_UNK lbl_8048E5DC[];

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_800830B0_lbl_80439348_size[sizeof(RecoveredGlobal_800830B0_lbl_80439348) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_800830B0_main_task_size[sizeof(RecoveredGlobal_800830B0_main_task) == 0x34 ? 1 : -1];
void TCameraCtrl__sub_800830B0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800830B0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800830B0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800830B0, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800830B0, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800830B0, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_800830B0, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_800830B0, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_800830B0, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_800830B0, sp28) == 0x20) ? 1 : -1];
    Stack_800830B0 stack;
    if (is_split_screen() == 0) {
        restore_full_screen_view__11TCameraCtrlFv();
        GXSetViewport((f32) (lbl_805D93D0), (f32) (lbl_805D93D0), (f32) (lbl_805D9404), (f32) (lbl_805D9408), (f32) (lbl_805D93D0), (f32) (lbl_805D93D8));
        GXSetScissor((int) (0), (int) (0), (int) (0x280), (int) (0x1E0));
        stack.sp20 = M2C_FIELD(&lbl_80439348.value, s32 *, 0);
        stack.sp24 = M2C_FIELD(&lbl_80439348.value, s32 *, 4);
        stack.sp28 = M2C_FIELD(&lbl_80439348.value, s32 *, 8);
        set_perspective_projection_from_fov((int) (M2C_FIELD(camera_ctrl_instance, s32 *, 0x19C)), (f32) (lbl_805D940C), (f32) (lbl_805D93D8), (f32) (lbl_805D9410));
        set_camera_look_at((void *) (arg0 + 0x20), (void *) (arg0 + 0x2C), (void *) (&stack.sp20));
        if ((void *) camera_ctrl_instance != NULL) {
            stack.sp14 = M2C_FIELD(arg0, f32 *, 0x2C) - M2C_FIELD(arg0, f32 *, 0x20);
            stack.sp18 = M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x24);
            stack.sp1C = M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x28);
            direction_to_pitch_yaw((void *) (&stack.sp14), (void *) (&stack.sp10), (void *) (&stack.spC));
            calc_axes_from_angles__11TCameraCtrlFiii((void *) (camera_ctrl_instance), (int) (stack.sp10), (int) (stack.spC));
        }
        TObjPlayer__sub_80084754();
        render_scene_passes__9TMainTaskFv((void *) (&main_task.value));
        TObjPlayer__sub_80084744();
        if ((void *) (*(u8 * *)&camera_render_target_singleton) != NULL) {
            stack.sp8 = lbl_805E1210;
            GXSetCopyClear((void *) (&stack.sp8), (int) (0xFFFFFF));
            GXSetZMode((int) (1U), (int) (7), (int) (1));
            GXSetTexCopySrc((int) (0U), (int) (0), (int) (0x280U), (int) (0x1E0U));
            GXSetTexCopyDst((int) (0x280), (int) (0x1E0), (int) (4), (int) (0));
            GXCopyTex((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD((*(u8 * *)&camera_render_target_singleton), u8 **, 0x1C), void **, 8), void **, 0xC), s32 *, 0x20)), (int) (1U));
            GXPixModeSync();
        }
        GXSetViewport((f32) (lbl_805D93D0), (f32) (lbl_805D93D0), (f32) (lbl_805D9404), (f32) (lbl_805D9408), (f32) (lbl_805D93D0), (f32) (lbl_805D93D8));
        GXSetScissor((int) (0), (int) (0), (int) (0x280), (int) (0x1E0));
        TCameraCtrl__sub_80068EF0();
        calc_rotated_axes__11TCameraCtrlFPv((void *) (camera_ctrl_instance));
        setup_default_view__11TCameraCtrlFPvPv((void *) (camera_ctrl_instance), (int) (0));
    }
}
#pragma pop

void *dt__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E5DC;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
