#include "types.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_80488B08.h"
#include "pso/misc/TUnk_80488AF0.h"
#include "pso/misc/TUnk_80488AD8.h"
#include "pso/misc/TCameraCtrl.h"

struct RecoveredGlobal_8006BA08_lbl_80488B08 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_8006B4A0_lbl_804381E0 {
    s32 value;
    u8 remaining[0x1DC];
};

struct RecoveredGlobal_8006B588_lbl_80488AD8
{
  s32 value;
  u8 remaining[0x14];
};

struct RecoveredFields_8006B588_arg0
{
  u8 unknown_0[0x18];
  s32 *field_18;
  u8 unknown_1C[0x18];
  s32 field_34;
};

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
extern s32 local_client_id;
extern s32 tl_07;
u8 *create_conversation_camera(s32 arg0);
void *__dt__13TUnk_80488A28Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
extern RecoveredGlobal_8006BA08_lbl_80488B08 lbl_80488B08;
extern s32 TCameraCtrl__fixed_npc_camera_active;
u8 *__dt__13TUnk_80488B08Fv(u8 *arg0, s16 arg1);
void set_active_camera_pose(void *, void *);
s32 approach_camera_vector(void *, void *, f32);
extern RecoveredGlobal_8006B4A0_lbl_804381E0 fixed_npc_camera_destination_table;
extern const f32 lbl_805D8FF8;
s32 activate_camera_mode(int);
s32 TCameraCtrl__sub_8006BAB4(void *, void *);
s32 TCameraCtrl__sub_8006BAC8(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern const s32 lbl_80488AD8[];
extern u32 camera_ctrl_instance;
f32 vector_length(void *);
void normalize_vector(void *);
f32 xyz_distance(void *, void *);
extern s32 lbl_80488AF0[];
extern const f32 lbl_805D8FFC;
s32 TCameraCtrl__sub_8006B798(void *p, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void queue_destruction__7TObjectFv(void *);
s32 TCameraCtrl__sub_8006BADC(void);
void approach_vector_fixed_distance(Vec_8006B6A8 *, Vec_8006B6A8 *, Vec_8006B6A8 *, f32);
void *__dt__13TUnk_80488AD8Fv(void *arg0, s16 arg1);
void *TCameraCtrl__vt9(void);
s32 restore_player_cameras();
void *TCameraCtrl__sub_8006BA68(void *);
s32 activate_body_collision__10TObjPlayerFv();
s32 deactivate_body_collision__10TObjPlayerFv();
void *get_player_by_client_id(s32 i);
void __dt__7TObjectFv(void *, int);

void TCameraCtrl::update_active_player() {
    if (get_player_by_client_id(local_client_id) != 0U) {
        activate_body_collision__10TObjPlayerFv();
    }
}

void TCameraCtrl::update_battle_camera() {
    if (get_player_by_client_id(local_client_id) != 0U) {
        deactivate_body_collision__10TObjPlayerFv();
    }
}

u8 *create_conversation_camera(s32 arg0) {
    s32 i;
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    i = local_client_id;
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x38))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(((TCameraCtrl *)temp_r3)->init_conversation_camera((s32)(i), (s32)(arg0), (s32)(tl_07)));
    }
    return var_r0;
}

typedef char RecoveredGlobal_8006B4A0_lbl_804381E0_size[sizeof(RecoveredGlobal_8006B4A0_lbl_804381E0) == 0x1E0 ? 1 : -1];
void TUnk_80488AD8::run_task() {
    u8 *arg0 = (u8 *)this;
    approach_camera_vector((u8 *)&this->unk_1C, (u8 *)&fixed_npc_camera_destination_table.value + (this->m_34 * 0x18), lbl_805D8FF8);
    approach_camera_vector(arg0 + 0x28, (u8 *)&fixed_npc_camera_destination_table.value + (this->m_34 * 0x18) + 0xC, lbl_805D8FF8);
    TCameraCtrl__fixed_npc_camera_active = 1;
    set_active_camera_pose((u8 *)&this->unk_1C, arg0 + 0x28);
}

void *__dt__13TUnk_80488AD8Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(const s32 **)((s8 *)arg0 + 0x18) = lbl_80488AD8;
        restore_player_cameras();
        TCameraCtrl__fixed_npc_camera_active = 0;
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

typedef struct RecoveredFields_8006B588_arg0 RecoveredFields_8006B588_arg0;
typedef struct RecoveredGlobal_8006B588_lbl_80488AD8 RecoveredGlobal_8006B588_lbl_80488AD8;
u8 *TCameraCtrl::init_conversation_camera(s32 i, s32 arg2, s32 arg3) {
  void *new_var;
  __ct__7TObjectFP7TObject((void *) ((u8 *)this), (void *) arg3);
  ((RecoveredFields_8006B588_arg0 *) ((u8 *)this))->field_18 = &(*(RecoveredGlobal_8006B588_lbl_80488AD8 *)&lbl_80488AD8).value;
  ((RecoveredFields_8006B588_arg0 *) ((u8 *)this))->field_34 = arg2;
  activate_camera_mode((int) 9);
  if (is_split_screen() != 0)
  {
    new_var = (void *) TCameraCtrl__sub_8006BAC8((void *) (*(s32 *)&camera_ctrl_instance), (void *) i);
    VecCopy((Vec *)(((u8 *)this) + 0x1C), (const Vec *)new_var);
    VecCopy((Vec *)(((u8 *)this) + 0x28), (const Vec *)((void *) TCameraCtrl__sub_8006BAB4((void *) (*(s32 *)&camera_ctrl_instance), (void *) i)));
  }
  else
  {
    VecCopy((Vec *)(((u8 *)this) + 0x1C), (const Vec *)((*(s32 *)&camera_ctrl_instance) + 0x178));
    VecCopy((Vec *)(((u8 *)this) + 0x28), (const Vec *)((*(s32 *)&camera_ctrl_instance) + 0x184));
  }
  set_active_camera_pose((void *) (((u8 *)this) + 0x1C), (void *) (((u8 *)this) + 0x28));
  TCameraCtrl__fixed_npc_camera_active = 0;
  return ((u8 *)this);
}

void TCameraCtrl::create(s32 arg0, s32 arg1, s32 arg2) {
    void *obj = __nw__7TObjectFUl((int)(0x40));
    if (obj != NULL) {
        TCameraCtrl__sub_8006B798((void *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(tl_07));
    }
}

void TUnk_80488AF0::run_task() {
    Cam_8006B6A8 *arg0 = (Cam_8006B6A8 *)this;
    approach_vector_fixed_distance(&arg0->v34, &arg0->v28, &arg0->v34, arg0->f1C);
    if (TCameraCtrl__sub_8006BADC() == 1) {
        TCameraCtrl::set_fixed_position_and_target((u8 *)(camera_ctrl_instance + 0x178), (u8 *)(&arg0->v34));
    }
    arg0->f20++;
    if (arg0->f20 == arg0->f22 + arg0->f24 || TCameraCtrl__sub_8006BADC() == 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void *TCameraCtrl::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_80488AF0;
        TCameraCtrl::reset_to_local_player();
        __dt__7TObjectFv((void *)(this), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(this));
        }
    }
    return this;
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
s32 TCameraCtrl__sub_8006B798(void *p, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
#define arg0 ((Obj_8006B798 *)p)
    V_8006B798 d;
    f32 dist;
    __ct__7TObjectFP7TObject(arg0, (void *)arg4);
    arg0->vt = lbl_80488AF0;
    dist = xyz_distance(&VIEW_8006B798->pos, &VIEW_8006B798->tgt);
    VecCopy((Vec *)&arg0->pos, (const Vec *)arg1);
    VecCopy((Vec *)&arg0->tgt, (const Vec *)&VIEW_8006B798->tgt);
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
    TCameraCtrl::set_fixed_position_and_target((u8 *)(&VIEW_8006B798->pos), (u8 *)(&VIEW_8006B798->tgt));
    return (s32)arg0;
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

extern const f32 lbl_805D9000;

void TUnk_80488B08::vfunc_6() {
    void *temp_r3;

    if ((u32) camera_ctrl_instance != 0U) {
        temp_r3 = ((TCameraCtrl *)camera_ctrl_instance)->get_params();
        *(f32 *)&this->unk_48 = (f32) *(f32 *)((s8 *)temp_r3 + 0x28);
        this->m_4c = (f32) *(f32 *)((s8 *)temp_r3 + 0x2C);
        *(f32 *)&this->unk_50 = (f32) *(f32 *)((s8 *)temp_r3 + 0x30);
        this->m_3c = (f32) *(f32 *)((s8 *)temp_r3 + 0x1C);
        *(f32 *)&this->unk_40 = (f32) *(f32 *)((s8 *)temp_r3 + 0x20);
        this->m_44 = (f32) *(f32 *)((s8 *)temp_r3 + 0x24);
        this->m_54 = (s32) (lbl_805D9000 * (f32) *(s32 *)((s8 *)temp_r3 + 0x14));
        this->m_58 = (f32) *(f32 *)((s8 *)temp_r3 + 0x10);
    }
}

void TUnk_80488B08::run_task() {  }
typedef char RecoveredGlobal_8006BA08_lbl_80488B08_size[sizeof(RecoveredGlobal_8006BA08_lbl_80488B08) == 0x30 ? 1 : -1];
u8 *__dt__13TUnk_80488B08Fv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &lbl_80488B08.value;
        TCameraCtrl__fixed_npc_camera_active = 0;
        __dt__13TUnk_80488A28Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
