#include "pso/misc/CameraHelpers.h"
#include <stddef.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8006C03C {
    s32 sp8;
    s32 spC;
    s32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
};

struct RecoveredGlobal_8006C03C_lbl_804383E0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8006C03C_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredFields_8006C03C_arg0 {
    u8 unknown_0[0x3C];
    f32 field_3C;
    f32 field_40;
    f32 field_44;
    f32 field_48;
    f32 field_4C;
    f32 field_50;
};

struct RecoveredFields_8006C03C_lbl_805D4DF0 {
    u8 unknown_0[0x178];
    f32 field_178;
    f32 field_17C;
    f32 field_180;
    f32 field_184;
    f32 field_188;
    f32 field_18C;
};

extern "C" {
void TCameraCtrl__sub_8006BE00(u8 *arg0, s32 *arg1, s32 *arg2);
s32 TCameraCtrl__sub_803D65FC(void *, void *, void *);
extern RecoveredGlobal_8006C03C_lbl_804383E0 lbl_804383E0;
extern RecoveredGlobal_8006C03C_lbl_804FF5E8 lbl_804FF5E8;
extern void *lbl_805D4DF0;
void TCameraCtrl__sub_8006C03C(u8 *arg0);
}

extern "C" {
void* camera_controller_registry[];
}

struct CameraMotionData;
struct CameraPathMode { u32 field_00; u32 flags; };
struct ScriptedCameraState {
    u8 object_state[0x6C];
    Vec position_origin;
    Vec target_origin;
    CameraAngles angles;
    CameraMotionData* motion_data;
    CameraPathMode* mode;
    CameraPlayback playback;
};
typedef char ScriptedCameraSize[(sizeof(ScriptedCameraState) == 0xA4) ? 1 : -1];
typedef char ScriptedCameraPositionOffset[(offsetof(ScriptedCameraState, position_origin) == 0x6C) ? 1 : -1];
typedef char ScriptedCameraTargetOffset[(offsetof(ScriptedCameraState, target_origin) == 0x78) ? 1 : -1];
typedef char ScriptedCameraYawOffset[(offsetof(ScriptedCameraState, angles) + offsetof(CameraAngles, yaw) == 0x88) ? 1 : -1];
typedef char ScriptedCameraPlaybackOffset[(offsetof(ScriptedCameraState, playback) == 0x98) ? 1 : -1];
extern "C" {
f32 TBoss6Kakusan__sub_803D8BD8(const Vec*);
void TEffStarLightChild__sub_80141FBC(const Vec*, const Vec*, Vec*, f32);
extern const f64 lbl_804383D8;
extern const f32 lbl_805D9020;

void VecCopy__FP3VecPC3Vec(Vec*, const Vec*);
u16 TCameraCtrl__sub_8006A5DC();
}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
extern const f32 lbl_805D901C;
f32 get_random_float__8TObjFishFv(f32);
extern const f32 lbl_805D9018;
s32 TCameraCtrl__sub_8006BCD8(f32 *arg0, f32 *arg1, f32 farg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
f32 TObjPlayer__sub_8001978C(f32);
extern const f64 lbl_804383D0;
void TCameraCtrl__sub_8006BE00(u8 *arg0, s32 *arg1, s32 *arg2);
}

extern "C" {

void *TCameraCtrl__vt5(void);
void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1);
s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
void* init_defaults__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_80068714(void);
M2C_UNK TCameraCtrl__sub_8006C140(s32, s32);
s32 TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
void *__nw__7TObjectFUl(int);
void *reset__11TCameraCtrlFPv(void *);

    extern unsigned char lbl_80488B38[];
    extern const float lbl_805D900C;
void* init_defaults__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B38; *(float*)((char*)a0 + 0x6c) = lbl_805D900C; *(int*)((char*)a0 + 0x38) = 0; return a0; }

s32 TCameraCtrl__sub_8006BCD8(f32 *arg0, f32 *arg1, f32 farg0) {
  f32 temp_f0;
  f32 new_var;
  f32 temp_f1;
  temp_f1 = get_random_float__8TObjFishFv((*arg0) - (*arg1));
  temp_f0 = (lbl_805D9018 * temp_f1) * (new_var = farg0);
  if (temp_f1 > temp_f0)
  {
    step_camera_scalar((f32 *)((void *) arg0), (f32 *)((void *) arg1), (f32 *)((void *) arg0), (f32) temp_f0);
    return 0;
  }
  *arg0 = *arg1;
  return 1;
}

void step_camera_scalar(const f32* current, const f32* target, f32* output, f32 step) {
    f32 distance = get_random_float__8TObjFishFv(*current - *target);
    if (lbl_805D901C == distance || distance <= step) {
        *output = *target;
        return;
    }
    f32 value = *current;
    if (value < *target) {
        *output = value + step;
        return;
    }
    *output = value - step;
}

void TCameraCtrl__sub_8006BE00(u8 *arg0, s32 *arg1, s32 *arg2) {
  f32 new_var;
  f32 temp_f0;
  f32 temp_f1;
  *arg2 = (s32) (lbl_804383D0 * get_ad_end_text_start__10TObjPlayerFv(-(*((f32 *) (((s8 *) arg0) + 0))), -(*((f32 *) (((s8 *) arg0) + 8)))));
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0));
  temp_f0 = *((f32 *) (((s8 *) arg0) + 8));
  new_var = TObjPlayer__sub_8001978C((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
  *arg1 = (s32) (lbl_804383D0 * get_ad_end_text_start__10TObjPlayerFv((f64) (*((f32 *) (((s8 *) arg0) + 4))), new_var));
}

BOOL approach_camera_vector(Vec *current, Vec *target, f32 rate) {
    f32 base_step;
    Vec delta;
    delta.x = current->x - target->x;
    delta.y = current->y - target->y;
    delta.z = current->z - target->z;
    f32 distance = TBoss6Kakusan__sub_803D8BD8(&delta);
    base_step = lbl_805D9018 * distance;
    f32 step = base_step * rate;
    if (distance > step) {
        if (step >= lbl_804383D8) {
            step = lbl_805D9020;
        }
        TEffStarLightChild__sub_80141FBC(current, target, current, step);
        return FALSE;
    }
    target->x = current->x;
    target->y = current->y;
    target->z = current->z;
    return TRUE;
}

s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (TObjPlayer__sub_80141F84(arg1, arg0) < (s32) (arg2 * 0x7F)) {
        return arg1;
    }
    return TObjPlayer__sub_801423A4(arg0, arg1, arg2 * 0x7F);
}

void set_scripted_camera_pose(const Vec* position, const Vec* target, const CameraAngles* angles) {
    ScriptedCameraState* camera = (ScriptedCameraState*)camera_controller_registry[5];
    if (camera != NULL) {
        VecCopy__FP3VecPC3Vec(&camera->position_origin, position);
        VecCopy__FP3VecPC3Vec(&camera->target_origin, target);
        camera->angles.yaw = angles->yaw;
    }
}

extern void *lbl_805D4DF0;
extern s32 lbl_805D4E18;
extern s32 lbl_805D4E1C;

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8006C03C_lbl_804383E0_size[sizeof(RecoveredGlobal_8006C03C_lbl_804383E0) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8006C03C_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8006C03C_lbl_804FF5E8) == 0x28 ? 1 : -1];
typedef char RecoveredFields_8006C03C_arg0_3C_offset[offsetof(RecoveredFields_8006C03C_arg0, field_3C) == 0x3C ? 1 : -1];
typedef char RecoveredFields_8006C03C_arg0_40_offset[offsetof(RecoveredFields_8006C03C_arg0, field_40) == 0x40 ? 1 : -1];
typedef char RecoveredFields_8006C03C_arg0_44_offset[offsetof(RecoveredFields_8006C03C_arg0, field_44) == 0x44 ? 1 : -1];
typedef char RecoveredFields_8006C03C_arg0_48_offset[offsetof(RecoveredFields_8006C03C_arg0, field_48) == 0x48 ? 1 : -1];
typedef char RecoveredFields_8006C03C_arg0_4C_offset[offsetof(RecoveredFields_8006C03C_arg0, field_4C) == 0x4C ? 1 : -1];
typedef char RecoveredFields_8006C03C_arg0_50_offset[offsetof(RecoveredFields_8006C03C_arg0, field_50) == 0x50 ? 1 : -1];
typedef char RecoveredFields_8006C03C_lbl_805D4DF0_178_offset[offsetof(RecoveredFields_8006C03C_lbl_805D4DF0, field_178) == 0x178 ? 1 : -1];
typedef char RecoveredFields_8006C03C_lbl_805D4DF0_17C_offset[offsetof(RecoveredFields_8006C03C_lbl_805D4DF0, field_17C) == 0x17C ? 1 : -1];
typedef char RecoveredFields_8006C03C_lbl_805D4DF0_180_offset[offsetof(RecoveredFields_8006C03C_lbl_805D4DF0, field_180) == 0x180 ? 1 : -1];
typedef char RecoveredFields_8006C03C_lbl_805D4DF0_184_offset[offsetof(RecoveredFields_8006C03C_lbl_805D4DF0, field_184) == 0x184 ? 1 : -1];
typedef char RecoveredFields_8006C03C_lbl_805D4DF0_188_offset[offsetof(RecoveredFields_8006C03C_lbl_805D4DF0, field_188) == 0x188 ? 1 : -1];
typedef char RecoveredFields_8006C03C_lbl_805D4DF0_18C_offset[offsetof(RecoveredFields_8006C03C_lbl_805D4DF0, field_18C) == 0x18C ? 1 : -1];
void TCameraCtrl__sub_8006C03C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8006C03C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8006C03C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8006C03C, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8006C03C, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8006C03C, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8006C03C, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_8006C03C, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_8006C03C, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_8006C03C, sp28) == 0x20) ? 1 : -1];
    Stack_8006C03C stack;
    stack.sp14 = ((RecoveredFields_8006C03C_arg0 *)arg0)->field_48 - ((RecoveredFields_8006C03C_arg0 *)arg0)->field_3C;
    stack.sp18 = ((RecoveredFields_8006C03C_arg0 *)arg0)->field_4C - ((RecoveredFields_8006C03C_arg0 *)arg0)->field_40;
    stack.sp1C = ((RecoveredFields_8006C03C_arg0 *)arg0)->field_50 - ((RecoveredFields_8006C03C_arg0 *)arg0)->field_44;
    TCameraCtrl__sub_8006BE00((u8 *)((void *) (&stack.sp14)), (s32 *)((void *) ((*(u8 * *)&lbl_805D4DF0) + 0x190)), (s32 *)((void *) ((*(u8 * *)&lbl_805D4DF0) + 0x194)));
    stack.sp20 = ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&lbl_805D4DF0))->field_184;
    stack.sp24 = ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&lbl_805D4DF0))->field_188;
    stack.sp28 = ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&lbl_805D4DF0))->field_18C;
    stack.sp8 = M2C_FIELD(&lbl_804383E0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804383E0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804383E0.value, s32 *, 8);
    TCameraCtrl__sub_803D65FC((void *) ((*(u8 * *)&lbl_805D4DF0) + 0x178), (void *) (&stack.sp20), (void *) (&stack.sp8));
    M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0) = (f32) ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&lbl_805D4DF0))->field_178;
    M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4) = (f32) ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&lbl_805D4DF0))->field_17C;
    M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8) = (f32) ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&lbl_805D4DF0))->field_180;
}
#pragma pop

void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1) {
    if ((void *) lbl_805D4DF0 != NULL) {
        lbl_805D4E18 = M2C_FIELD(lbl_805D4DF0, s32 *, 0x19C);
        lbl_805D4E1C = arg1;
    }
    TCameraCtrl__sub_8006C140(arg0, arg1);
}

CameraPlayback* get_scripted_camera_playback() {
    ScriptedCameraState* camera = (ScriptedCameraState*)camera_controller_registry[5];
    if (camera != NULL) {
        CameraPlayback* playback = &camera->playback;
        if (TCameraCtrl__sub_8006A5DC() != 5) {
            playback->flags |= 1;
        }
        return playback;
    }
    return NULL;
}

void *TCameraCtrl__vt5(void) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = reset__11TCameraCtrlFPv(o);
    }
    return o;
}

}
