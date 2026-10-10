#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct E_8006BAC8 { f32 x; f32 y; f32 z; };

struct O_8006BAC8 { u8 pad[0xd4]; E_8006BAC8 arr[1]; };

struct E_8006BAB4 { f32 x; f32 y; f32 z; };

struct O_8006BAB4 { u8 pad[0x104]; E_8006BAB4 arr[1]; };

struct Vec_8006BB1C { f32 x, y, z; };

struct Pad_8006BB1C {
    u8 pad0[0x70];
    u32 buttons;
    u8 pad74[0x84 - 0x74];
    s16 sx;
    s16 sy;
};

struct Obj_8006BB1C {
    u8 pad0[0x2c];
    s32 yaw;
    s32 pitch;
    u8 pad34[0x3c - 0x34];
    Vec_8006BB1C eye;
    Vec_8006BB1C at;
    u8 pad54[0x6c - 0x54];
    f32 dist;
};

extern "C" {
E_8006BAC8 *TCameraCtrl__sub_8006BAC8(O_8006BAC8 *self, s32 i);
E_8006BAB4 *TCameraCtrl__sub_8006BAB4(O_8006BAB4 *self, s32 i);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Pad_8006BB1C controller_input_state;
void update_debug_orbit_camera__11TCameraCtrlFPv(Obj_8006BB1C *arg0);
}

extern "C" {

void* TCameraCtrl__sub_8006BA68(void* a0);
unsigned char TCameraCtrl__sub_8006BADC(void);
void *TCameraCtrl__vt4(void);
void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
int TCameraCtrl__sub_80068714(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void *init_defaults__11TCameraCtrlFPv(void *);

    extern unsigned char lbl_80488B08[];
    extern int TCameraCtrl__fixed_npc_camera_active;
void* TCameraCtrl__sub_8006BA68(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B08; *(int*)((char*)a0 + 0x38) = 4; TCameraCtrl__fixed_npc_camera_active = 0; return a0; }

    extern unsigned char TCameraCtrl__override_flags;

E_8006BAB4 *TCameraCtrl__sub_8006BAB4(O_8006BAB4 *self, s32 i) {
    return &self->arr[i];
}

E_8006BAC8 *TCameraCtrl__sub_8006BAC8(O_8006BAC8 *self, s32 i) {
    return &self->arr[i];
}

unsigned char TCameraCtrl__sub_8006BADC(void) {  return TCameraCtrl__override_flags; }

void *TCameraCtrl__vt4(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = init_defaults__11TCameraCtrlFPv(o);
    }
    return o;
}

extern M2C_UNK lbl_80488B38[];

#pragma push
#pragma fp_contract on
void update_debug_orbit_camera__11TCameraCtrlFPv(Obj_8006BB1C *arg0) {
    Pad_8006BB1C *pad = &controller_input_state;
    u32 btn = pad->buttons;
    s16 sx = pad->sx;
    s16 sy = pad->sy;
    f32 r;
    if (btn & 0x20000) {
        arg0->dist += (2.2f);
    } else if (btn & 0x10000) {
        arg0->dist -= (2.2f);
    }
    if (arg0->dist < 10.0f) {
        arg0->dist = 10.0f;
    }
    if (arg0->dist > 300.0f) {
        arg0->dist = 300.0f;
    }
    arg0->pitch += sx * 3;
    arg0->yaw += sy * 3;
    r = arg0->dist * cos_table_lookup(arg0->yaw);
    arg0->eye.x = r * sin_table_lookup(arg0->pitch) + arg0->at.x;
    arg0->eye.y = arg0->at.y - arg0->dist * sin_table_lookup(arg0->yaw);
    arg0->eye.z = r * cos_table_lookup(arg0->pitch) + arg0->at.z;
}
#pragma pop

void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488B38;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

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

struct RecoveredGlobal_8006C140_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_8006C140_lbl_80488C50 {
    M2C_UNK value;
    u8 remaining[0x11C];
};

struct RecoveredGlobal_8006C140_TCameraCtrl__data_804FF7C0 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

extern "C" {
void direction_to_pitch_yaw(u8 *arg0, s32 *arg1, s32 *arg2);
s32 set_camera_look_at(void *, void *, void *);
extern RecoveredGlobal_8006C03C_lbl_804383E0 lbl_804383E0;
extern RecoveredGlobal_8006C03C_lbl_804FF5E8 lbl_804FF5E8;
extern void *camera_ctrl_instance;
void apply_look_at_from_target__11TCameraCtrlFPv(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
extern void* camera_controller_registry[];
extern RecoveredGlobal_8006C140_lbl_80488C50 camera_path_bank_table;
extern RecoveredGlobal_8006C140_TCameraCtrl__data_804FF7C0 TCameraCtrl__camera_banks;
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
f32 vector_length(const Vec*);
void approach_vector_fixed_distance(const Vec*, const Vec*, Vec*, f32);
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
f32 fabs_float(f32);
extern const f32 lbl_805D901C;
f32 fabs_float(f32);
extern const f32 lbl_805D9018;
s32 approach_camera_scalar(f32 *arg0, f32 *arg1, f32 farg0);
f32 atan2_float(f64, f64);
f32 newton_sqrtf(f32);
extern const f64 lbl_804383D0;
void direction_to_pitch_yaw(u8 *arg0, s32 *arg1, s32 *arg2);
}

extern "C" {

void *TCameraCtrl__vt5(void);
void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1);
s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
void* init_defaults__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_80068714(void);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
void *__nw__7TObjectFUl(int);
void *reset__11TCameraCtrlFPv(void *);

void* init_defaults__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B38; *(float*)((char*)a0 + 0x6c) = 10.0f; *(int*)((char*)a0 + 0x38) = 0; return a0; }

s32 approach_camera_scalar(f32 *arg0, f32 *arg1, f32 farg0) {
  f32 temp_f0;
  f32 new_var;
  f32 temp_f1;
  temp_f1 = fabs_float((*arg0) - (*arg1));
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
    f32 distance = fabs_float(*current - *target);
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

void direction_to_pitch_yaw(u8 *arg0, s32 *arg1, s32 *arg2) {
  f32 new_var;
  f32 temp_f0;
  f32 temp_f1;
  *arg2 = (s32) (lbl_804383D0 * atan2_float(-(*((f32 *) (((s8 *) arg0) + 0))), -(*((f32 *) (((s8 *) arg0) + 8)))));
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0));
  temp_f0 = *((f32 *) (((s8 *) arg0) + 8));
  new_var = newton_sqrtf((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
  *arg1 = (s32) (lbl_804383D0 * atan2_float((f64) (*((f32 *) (((s8 *) arg0) + 4))), new_var));
}

BOOL approach_camera_vector(Vec *current, Vec *target, f32 rate) {
    f32 base_step;
    Vec delta;
    delta.x = current->x - target->x;
    delta.y = current->y - target->y;
    delta.z = current->z - target->z;
    f32 distance = vector_length(&delta);
    base_step = lbl_805D9018 * distance;
    f32 step = base_step * rate;
    if (distance > step) {
        if (step >= lbl_804383D8) {
            step = lbl_805D9020;
        }
        approach_vector_fixed_distance(current, target, current, step);
        return FALSE;
    }
    target->x = current->x;
    target->y = current->y;
    target->z = current->z;
    return TRUE;
}

s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (angle_difference_abs(arg1, arg0) < (s32) (arg2 * 0x7F)) {
        return arg1;
    }
    return approach_angle_limited(arg0, arg1, arg2 * 0x7F);
}

void set_scripted_camera_pose(const Vec* position, const Vec* target, const CameraAngles* angles) {
    ScriptedCameraState* camera = (ScriptedCameraState*)camera_controller_registry[5];
    if (camera != NULL) {
        VecCopy__FP3VecPC3Vec(&camera->position_origin, position);
        VecCopy__FP3VecPC3Vec(&camera->target_origin, target);
        camera->angles.yaw = angles->yaw;
    }
}

extern void *camera_ctrl_instance;
extern s32 TCameraCtrl__saved_projection_angle;
extern s32 scripted_camera_projection_angle;

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
void apply_look_at_from_target__11TCameraCtrlFPv(u8 *arg0) {
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
    direction_to_pitch_yaw((u8 *)((void *) (&stack.sp14)), (s32 *)((void *) ((*(u8 * *)&camera_ctrl_instance) + 0x190)), (s32 *)((void *) ((*(u8 * *)&camera_ctrl_instance) + 0x194)));
    stack.sp20 = ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&camera_ctrl_instance))->field_184;
    stack.sp24 = ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&camera_ctrl_instance))->field_188;
    stack.sp28 = ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&camera_ctrl_instance))->field_18C;
    stack.sp8 = M2C_FIELD(&lbl_804383E0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804383E0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804383E0.value, s32 *, 8);
    set_camera_look_at((void *) ((*(u8 * *)&camera_ctrl_instance) + 0x178), (void *) (&stack.sp20), (void *) (&stack.sp8));
    M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0) = (f32) ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&camera_ctrl_instance))->field_178;
    M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4) = (f32) ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&camera_ctrl_instance))->field_17C;
    M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8) = (f32) ((RecoveredFields_8006C03C_lbl_805D4DF0 *)(*(u8 * *)&camera_ctrl_instance))->field_180;
}
#pragma pop

void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1) {
    if ((void *) camera_ctrl_instance != NULL) {
        TCameraCtrl__saved_projection_angle = M2C_FIELD(camera_ctrl_instance, s32 *, 0x19C);
        scripted_camera_projection_angle = arg1;
    }
    configure_scripted_camera_playback((u8 *)(arg0), (s32)(arg1));
}

typedef char RecoveredGlobal_8006C140_camera_controller_registry_size[sizeof(RecoveredGlobal_8006C140_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_8006C140_lbl_80488C50_size[sizeof(RecoveredGlobal_8006C140_lbl_80488C50) == 0x120 ? 1 : -1];
typedef char RecoveredGlobal_8006C140_TCameraCtrl__data_804FF7C0_size[sizeof(RecoveredGlobal_8006C140_TCameraCtrl__data_804FF7C0) == 0x40 ? 1 : -1];
void configure_scripted_camera_playback(u8* playback_data, s32 unused) {
    struct MotionDirectory { CameraMotionData** entries; };
    struct MotionBank { MotionDirectory* directory; u32 unknown_04; };
    struct PathBank { CameraPathMode* modes; u32 unknown_04; };
    const CameraPlayback* playback = (const CameraPlayback*)playback_data;
    ScriptedCameraState* camera = (ScriptedCameraState*)camera_controller_registry[5];
    if (camera != NULL) {
        camera->playback.index = playback->index;
        camera->playback.bank = playback->bank;
        camera->playback.flags = playback->flags;
        camera->playback.frame = playback->frame;
        camera->playback.frame_step = playback->frame_step;
        const PathBank* paths = (const PathBank*)&camera_path_bank_table.value;
        const MotionBank* motions = (const MotionBank*)&TCameraCtrl__camera_banks.value;
        camera->mode = &paths[get_global_state__14TOKeyMachine01Fv()].modes[camera->playback.bank];
        camera->motion_data = motions[playback->bank].directory->entries[camera->playback.index];
    }
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

#pragma push
#pragma fp_contract on
struct Vec_8006C28C { f32 x, y, z; };
struct Motion_8006C28C { u32 data; u32 frames; };
struct Mode_8006C28C { u32 asset; u32 flags; };
struct Cam_8006C28C {
    u8 pad0[0x3C];
    Vec_8006C28C position;
    Vec_8006C28C target;
    s32 projection;
    u8 pad58[0x6C - 0x58];
    Vec_8006C28C position_origin;
    Vec_8006C28C target_origin;
    s32 pitch;
    s32 yaw;
    s32 roll;
    Motion_8006C28C *motion;
    Mode_8006C28C *mode;
    u8 bank;
    u8 index;
    u16 flags;
    f32 frame;
    f32 step;
};
struct Stack_8006C28C {
    void *ptrs[4];
    Vec_8006C28C p;
    Vec_8006C28C v;
    s32 sp54;
    Vec_8006C28C sp58;
    u8 out[0x2C];
};

void sample_camera_motion(void *, Motion_8006C28C *, void **, f32);
void set_camera_capture_overlay_alpha(int);
f32 vec_squared_length(Vec_8006C28C *);
void normalize_vector(Vec_8006C28C *);
void push_matrix_from(void *);
void rotate_matrix_y(int, s32);
void matrix_mult_vec(int, Vec_8006C28C *, Vec_8006C28C *);
void pop_matrices(int);
extern u8 identity_matrix[];
extern const f32 lbl_805D9028;
extern const f32 lbl_805D902C;
extern const f32 lbl_805D9030;

void update_scripted_camera(Cam_8006C28C *s) {
    Stack_8006C28C st;
    Vec_8006C28C tmp;
    Vec_8006C28C p2;
    Vec_8006C28C v2;
    st.ptrs[0] = &st.p;
    st.ptrs[1] = &st.v;
    st.ptrs[2] = &st.sp54;
    st.ptrs[3] = &st.sp58;
    sample_camera_motion(st.out, s->motion, st.ptrs, s->frame);
    s->projection = scripted_camera_projection_angle;
    set_camera_capture_overlay_alpha(0x8F);
    if (s->mode->flags & 4) {
        if (s->mode->flags & 0x80) {
            s->projection = 0x36C1;
            tmp.x = st.v.x;
            tmp.y = lbl_805D9028;
            tmp.z = st.v.z;
            f32 m = vec_squared_length(&tmp);
            if (m != lbl_805D9028) {
                normalize_vector(&tmp);
            }
            s->position.x = -(lbl_805D902C * tmp.x - st.p.x);
            s->position.y = st.p.y;
            s->position.z = -(lbl_805D902C * tmp.z - st.p.z);
            s->target.x = st.v.x + st.p.x;
            s->target.y = st.v.y + st.p.y;
            s->target.z = st.v.z + st.p.z;
        } else {
            s->position.x = st.p.x;
            s->position.y = st.p.y;
            s->position.z = st.p.z;
            s->target.x = st.v.x + s->position.x;
            s->target.y = st.v.y + s->position.y;
            s->target.z = st.v.z + s->position.z;
        }
    } else {
        p2.x = st.p.x;
        p2.y = st.p.y;
        p2.z = st.p.z;
        v2.x = st.v.x;
        v2.y = st.v.y;
        v2.z = st.v.z;
        if (vec_squared_length(&v2) != lbl_805D9028) {
            normalize_vector(&v2);
        }
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, s->yaw);
        matrix_mult_vec(0, &p2, &p2);
        matrix_mult_vec(0, &v2, &v2);
        pop_matrices(1);
        s->position.x = p2.x + s->position_origin.x;
        s->position.y = p2.y + s->position_origin.y;
        s->position.z = p2.z + s->position_origin.z;
        s->target.x = v2.x + s->position.x;
        s->target.y = v2.y + s->position.y;
        s->target.z = v2.z + s->position.z;
    }
    s->frame += s->step;
    if (s->frame > (f32)(s->motion->frames - 1) || s->frame >= lbl_805D9030) {
        if (s->mode->flags & 0x20) {
            s->frame = lbl_805D9028;
            return;
        }
        s->frame = (f32)(s->motion->frames - 1);
        s->flags |= 1;
    }
}
#pragma pop

}
