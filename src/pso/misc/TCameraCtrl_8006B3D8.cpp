#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8006BA08_lbl_80488B08 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_8006B4A0_lbl_804381E0 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct RecoveredGlobal_8006B588_lbl_80488AD8
{
  M2C_UNK value;
  u8 remaining[0x14];
};

struct RecoveredFields_8006B588_arg0
{
  u8 unknown_0[0x18];
  M2C_UNK *field_18;
  u8 unknown_1C[0x18];
  s32 field_34;
};

typedef s32 M2C_UNK;
#define VIEW_8006B798 ((View_8006B798 *)camera_ctrl_instance)
struct V_8006B798 { f32 x, y, z; };

struct View_8006B798 {
    u8 pad0[0x178];
    V_8006B798 pos;
    V_8006B798 tgt;
};

struct Obj_8006B798 {
    u8 pad0[0x18];
    void *vt;
    f32 f1c;
    s16 f20;
    u16 f22;
    s16 f24;
    u8 pad26[2];
    V_8006B798 pos;
    V_8006B798 tgt;
};

struct Vec_8006B6A8 { f32 x, y, z; };

struct Cam_8006B6A8 {
    u8 pad0[0x1C];
    f32 f1C;
    u16 f20;
    u16 f22;
    u16 f24;
    u8 pad26[2];
    Vec_8006B6A8 v28;
    Vec_8006B6A8 v34;
};

extern "C" {
s32 is_split_screen(void);
void *__nw__7TObjectFUl(int);
extern s32 lbl_805D53A0;
extern s32 tl_07;
u8 *create_conversation_camera(s32 arg0);
u8 * TCameraCtrl__sub_800686BC(void *, s16);
void __dl__7TObjectFPv(void *);
extern RecoveredGlobal_8006BA08_lbl_80488B08 lbl_80488B08;
extern s32 TCameraCtrl__data_805D4E10;
u8 *TCameraCtrl__sub_8006BA08(u8 *arg0, s16 arg1);
void set_active_camera_pose(void *, void *);
s32 approach_camera_vector(void *, void *, f32);
extern RecoveredGlobal_8006B4A0_lbl_804381E0 lbl_804381E0;
extern s32 TCameraCtrl__data_805D4E10;
extern const f32 lbl_805D8FF8;
void update_fixed_npc_camera(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen(void);
void set_active_camera_pose(void *, void *);
s32 activate_camera_mode(int);
s32 TCameraCtrl__sub_8006BAB4(void *, void *);
s32 TCameraCtrl__sub_8006BAC8(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern const M2C_UNK lbl_80488AD8[];
extern u32 camera_ctrl_instance;
extern s32 TCameraCtrl__data_805D4E10;
u8 *init_conversation_camera__11TCameraCtrlFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void set_fixed_position_and_target__11TCameraCtrlFPvPv(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 vector_length(void *);
void normalize_vector(void *);
f32 xyz_distance(void *, void *);
extern M2C_UNK lbl_80488AF0[];
extern const f32 lbl_805D8FFC;
M2C_UNK TCameraCtrl__sub_8006B798(void *p, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void queue_destruction__7TObjectFv(void *);
s32 TCameraCtrl__sub_8006BADC(void);
void set_fixed_position_and_target__11TCameraCtrlFPvPv(void *, void *);
void approach_vector_fixed_distance(Vec_8006B6A8 *, Vec_8006B6A8 *, Vec_8006B6A8 *, f32);
extern u32 camera_ctrl_instance;
void TCameraCtrl__sub_8006B6A8(Cam_8006B6A8 *arg0);
}

extern "C" {

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1);
void fixed_view_camera_update(void);
void *TCameraCtrl__vt9(void);
void copy_camera_params__11TCameraCtrlFPv(void *arg0);
void create__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
void *destroy__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void update_active_player__11TCameraCtrlFv(void);
void update_battle_camera__11TCameraCtrlFv(void);
M2C_UNK restore_player_cameras();
void *TCameraCtrl__sub_8006BA68(void *);
void reset_to_local_player__11TCameraCtrlFv();
M2C_UNK activate_body_collision__10TObjPlayerFPv();
M2C_UNK deactivate_body_collision__10TObjPlayerFPv();
u32 get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void *get_params__11TCameraCtrlFPv(u32);

extern s32 lbl_805D53A0;

void update_active_player__11TCameraCtrlFv(void) {
    if (get_player_by_client_id(lbl_805D53A0) != 0U) {
        activate_body_collision__10TObjPlayerFPv();
    }
}

extern s32 lbl_805D53A0;

void update_battle_camera__11TCameraCtrlFv(void) {
    if (get_player_by_client_id(lbl_805D53A0) != 0U) {
        deactivate_body_collision__10TObjPlayerFPv();
    }
}

extern const M2C_UNK lbl_80488AD8[];
extern s32 TCameraCtrl__data_805D4E10;

u8 *create_conversation_camera(s32 arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r31 = lbl_805D53A0;
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x38))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(init_conversation_camera__11TCameraCtrlFPviii((u8 *)(temp_r3), (s32)(temp_r31), (s32)(arg0), (s32)(tl_07)));
    }
    return var_r0;
}

typedef char RecoveredGlobal_8006B4A0_lbl_804381E0_size[sizeof(RecoveredGlobal_8006B4A0_lbl_804381E0) == 0x1E0 ? 1 : -1];
void update_fixed_npc_camera(u8 *arg0) {
    approach_camera_vector(arg0 + 0x1C, (u8 *)&lbl_804381E0.value + (M2C_FIELD(arg0, s32 *, 0x34) * 0x18), lbl_805D8FF8);
    approach_camera_vector(arg0 + 0x28, (u8 *)&lbl_804381E0.value + (M2C_FIELD(arg0, s32 *, 0x34) * 0x18) + 0xC, lbl_805D8FF8);
    TCameraCtrl__data_805D4E10 = 1;
    set_active_camera_pose(arg0 + 0x1C, arg0 + 0x28);
}

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_80488AD8;
        restore_player_cameras();
        TCameraCtrl__data_805D4E10 = 0;
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern s32 tl_07;

typedef struct RecoveredFields_8006B588_arg0 RecoveredFields_8006B588_arg0;
typedef struct RecoveredGlobal_8006B588_lbl_80488AD8 RecoveredGlobal_8006B588_lbl_80488AD8;
u8 *init_conversation_camera__11TCameraCtrlFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
  void *new_var;
  __ct__7TObjectFP7TObject((void *) arg0, (void *) arg3);
  ((RecoveredFields_8006B588_arg0 *) arg0)->field_18 = &(*(RecoveredGlobal_8006B588_lbl_80488AD8 *)&lbl_80488AD8).value;
  ((RecoveredFields_8006B588_arg0 *) arg0)->field_34 = arg2;
  activate_camera_mode((int) 9);
  if (is_split_screen() != 0)
  {
    new_var = (void *) TCameraCtrl__sub_8006BAC8((void *) (*(s32 *)&camera_ctrl_instance), (void *) arg1);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), new_var);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) TCameraCtrl__sub_8006BAB4((void *) (*(s32 *)&camera_ctrl_instance), (void *) arg1));
  }
  else
  {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) ((*(s32 *)&camera_ctrl_instance) + 0x178));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) ((*(s32 *)&camera_ctrl_instance) + 0x184));
  }
  set_active_camera_pose((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
  TCameraCtrl__data_805D4E10 = 0;
  return arg0;
}

void create__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *obj = __nw__7TObjectFUl((int)(0x40));
    if (obj != NULL) {
        TCameraCtrl__sub_8006B798((void *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(tl_07));
    }
}

extern M2C_UNK lbl_80488AF0[];

void TCameraCtrl__sub_8006B6A8(Cam_8006B6A8 *arg0) {
    approach_vector_fixed_distance(&arg0->v34, &arg0->v28, &arg0->v34, arg0->f1C);
    if (TCameraCtrl__sub_8006BADC() == 1) {
        set_fixed_position_and_target__11TCameraCtrlFPvPv((void *)(camera_ctrl_instance + 0x178), &arg0->v34);
    }
    arg0->f20++;
    if (arg0->f20 == arg0->f22 + arg0->f24 || TCameraCtrl__sub_8006BADC() == 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void *destroy__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488AF0;
        reset_to_local_player__11TCameraCtrlFv();
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
M2C_UNK TCameraCtrl__sub_8006B798(void *p, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
#define arg0 ((Obj_8006B798 *)p)
    V_8006B798 d;
    f32 dist;
    __ct__7TObjectFP7TObject(arg0, (void *)arg4);
    arg0->vt = lbl_80488AF0;
    dist = xyz_distance(&VIEW_8006B798->pos, &VIEW_8006B798->tgt);
    VecCopy__FP3VecPC3Vec(&arg0->pos, (void *)arg1);
    VecCopy__FP3VecPC3Vec(&arg0->tgt, &VIEW_8006B798->tgt);
    if (arg2 == 0) {
        arg0->f22 = 1;
    } else {
        arg0->f22 = arg2;
    }
    arg0->f24 = arg3;
    d.x = arg0->pos.x - VIEW_8006B798->pos.x;
    d.y = arg0->pos.y - VIEW_8006B798->pos.y;
    d.z = arg0->pos.z - VIEW_8006B798->pos.z;
    if (lbl_805D8FFC != vector_length(&d)) {
        normalize_vector(&d);
    }
    arg0->pos.x = d.x * dist + VIEW_8006B798->pos.x;
    arg0->pos.y = d.y * dist + VIEW_8006B798->pos.y;
    arg0->pos.z = d.z * dist + VIEW_8006B798->pos.z;
    arg0->f1c = xyz_distance(&arg0->pos, &VIEW_8006B798->tgt) / (f32)arg0->f22;
    arg0->f20 = 0;
    set_fixed_position_and_target__11TCameraCtrlFPvPv(&VIEW_8006B798->pos, &VIEW_8006B798->tgt);
    return (M2C_UNK)arg0;
#undef arg0
}
#pragma pop

void *TCameraCtrl__vt9(void) {
    void *o = __nw__7TObjectFUl((int)(0x6C));
    if (o != NULL) {
        o = TCameraCtrl__sub_8006BA68(o);
    }
    return o;
}

extern const f64 lbl_804383C8;
extern u32 camera_ctrl_instance;
extern const f32 lbl_805D9000;

void copy_camera_params__11TCameraCtrlFPv(void *arg0) {
    void *temp_r3;

    if ((u32) camera_ctrl_instance != 0U) {
        temp_r3 = get_params__11TCameraCtrlFPv(camera_ctrl_instance);
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x2C);
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x30);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r3, f32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r3, f32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (lbl_805D9000 * (f32) M2C_FIELD(temp_r3, s32 *, 0x14));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r3, f32 *, 0x10);
    }
}

void fixed_view_camera_update(void) {  }
typedef char RecoveredGlobal_8006BA08_lbl_80488B08_size[sizeof(RecoveredGlobal_8006BA08_lbl_80488B08) == 0x30 ? 1 : -1];
u8 *TCameraCtrl__sub_8006BA08(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80488B08.value;
        TCameraCtrl__data_805D4E10 = 0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
