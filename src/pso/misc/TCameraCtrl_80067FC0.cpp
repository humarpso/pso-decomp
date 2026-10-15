#include "types.h"
#include "pso/misc/TCameraCtrl.h"

struct B_80068018 { u8 pad[0x18]; };

struct O_80068018 : B_80068018 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    u8 pad2[0x38 - 0x1c];
    s32 x38;
    u8 pad3[0x6c - 0x3c];
    void *x6c;
};

struct G_80068018 { u8 pad[0x20]; u8 sub[1]; };

struct Vec_8006835C { f32 x, y, z; };

struct View_8006835C {
    u8 pad0[0x178];
    Vec_8006835C pos;
    Vec_8006835C target;
    u8 f190[4];
    u8 f194[4];
};

struct Flags_8006835C { u8 pad0[8]; u32 flags; };

struct Scissor_8006835C { u8 pad0[8]; f32 x; f32 y; u8 pad10[0x30 - 0x10]; u8 f30[4]; };

struct View_80068530 {
    u8 pad0[0xD4];
    Vec_8006835C eye[4];
    Vec_8006835C look[4];
    u8 pad134[0x178 - 0x134];
    Vec_8006835C pos;
    Vec_8006835C target;
    u8 pad190[0x19C - 0x190];
    s32 f19c;
    Vec_8006835C curPos;
    Vec_8006835C curTarget;
    f32 f1b8;
    f32 f1bc;
};

struct Cam_80068530 {
    u8 pad0[0x3C];
    Vec_8006835C pos;
    Vec_8006835C target;
    s32 f54;
    f32 f58;
    f32 f5c;
};

struct Obj_8006809C { u8 pad0[0x38]; f32 x; f32 y; f32 z; u8 pad44[0x60 - 0x44]; s32 angle; };

struct Hit_8006809C { u8 pad0[4]; void *pos; };

struct Cam_8006809C { u8 pad0[0x1C]; Obj_8006809C *obj; u8 pad20[0x60 - 0x20]; Vec_8006835C out; };

extern "C" {
extern G_80068018 controller_input_state;
extern s32 lbl_80488838[];
O_80068018 *construct_derived__11TCameraCtrlFPv(O_80068018 *self);
Vec_8006835C *get_target__11TCameraCtrlFv(void *);
void direction_to_pitch_yaw(void *, void *, void *);
void set_viewport_scissor__11TCameraCtrlFiPv(s32, void *);
void TCameraCtrl__sub_801E32D8(f32, f32);
void GXSetScissorBoxOffset(s32, s32);
void set_camera_look_at(void *, void *, void *);
f32 vector_length(void *);
void normalize_vector(void *);
extern Vec_8006835C lbl_804FF5E8;
extern Flags_8006835C TCameraCtrl__view_state;
extern Scissor_8006835C TCameraCtrl__data_804FF634;
extern u8 TCameraCtrl__up_vector[];
extern View_8006835C *camera_ctrl_instance;
extern const f32 TCameraCtrl__data_805D8F80;
extern const f32 TCameraCtrl__data_805D8F84;
extern const f32 lbl_805D8F94;
extern const f32 lbl_805D8F98;
extern const f32 lbl_805D8F9C;
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_camera_no__11TCameraCtrlFv(void);
extern Flags_8006835C TCameraCtrl__view_state;
extern View_8006835C *camera_ctrl_instance;
void apply_camera_controller_pose(Cam_80068530 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
f32 fabs_float();
s32 get_camera_mode__11TCameraCtrlFv();
Vec_8006835C *get_position_ptr__10TObjPlayerFv(void *);
Vec_8006835C *get_target_ptr__11TCameraCtrlFv(void *);
Hit_8006809C *csnVector(void *, void *, s32);
s32 matrix_mult_vec(int, void *, void *);
s32 vec3_dot(void *, void *);
f32 vector_length(void *);
s32 rotate_matrix_y(int, s32);
void normalize_vector(void *);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern const Vec_8006835C lbl_80438168;
extern const Vec_8006835C lbl_80438174;
extern u8 identity_matrix[];
extern View_8006835C *camera_ctrl_instance;
extern const f32 TCameraCtrl__data_805D8F80;
extern const f32 TCameraCtrl__data_805D8F84;
extern const f32 lbl_805D8F88;
extern const f32 lbl_805D8F8C;
extern const f32 lbl_805D8F90;
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_80488A28[];
extern const f32 TCameraCtrl__data_805D8F80;
extern const f32 TCameraCtrl__data_805D8F84;
extern const f32 lbl_805D8FA0;
void *TCameraCtrl__sub_80068714(void *arg0);
}

extern "C" {

void *TCameraCtrl__sub_80067FC0(void *arg0, s16 arg1);
void TCameraCtrl__sub_80068354(void);
void TCameraCtrl__sub_80068358(void);
void *TCameraCtrl__sub_800686BC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_80488838[];

void *TCameraCtrl__sub_80067FC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80488838;
        TCameraCtrl__sub_800686BC((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

O_80068018 *construct_derived__11TCameraCtrlFPv(O_80068018 *self) {
    TCameraCtrl__sub_80068714((void *)(self));
    *(void **)((u8 *)self + 0x18) = ((char *)&lbl_80488838);
    self->x38 = 0;
    self->x6c = controller_input_state.sub;
    self->v5();
    return self;
}

void TCameraCtrl::set_target_pos(void* q) { *(f32*)((char*)this + 0x48) = *(f32*)((char*)q + 0x0); *(f32*)((char*)this + 0x4c) = *(f32*)((char*)q + 0x4); *(f32*)((char*)this + 0x50) = *(f32*)((char*)q + 0x8); }

#pragma push
#pragma fp_contract on
s32 TCameraCtrl::predict_obstruction() {
    Cam_8006809C *self = (Cam_8006809C *)this;
    Vec_8006835C dir;
    Vec_8006835C probe;
    Vec_8006835C d;
    Vec_8006835C *tgt;
    Vec_8006835C *pos;
    Vec_8006835C *a;
    Vec_8006835C *b;
    Hit_8006809C *hit;
    f32 len;
    f32 dist;
    if (self->obj == NULL) {
        return 0;
    }
    tgt = get_target_ptr__11TCameraCtrlFv(self->obj);
    pos = get_position_ptr__10TObjPlayerFv(self->obj);
    d.x = pos->x - tgt->x;
    d.y = pos->y - tgt->y;
    d.z = pos->z - tgt->z;
    len = vector_length(&d);
    if (len < TCameraCtrl__data_805D8F80) {
        Vec_8006835C v1 = lbl_80438168;
        Vec_8006835C v2 = lbl_80438174;
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, *(s32 *) camera_ctrl_instance->f194);
        matrix_mult_vec(0, &v1, &v1);
        pop_matrices(1);
        v1.y = TCameraCtrl__data_805D8F84;
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, self->obj->angle);
        matrix_mult_vec(0, &v2, &v2);
        pop_matrices(1);
        vec3_dot(&v1, &v2);
        if (fabs_float() > lbl_805D8F88) {
            dist = TCameraCtrl__data_805D8F84;
        } else {
            dist = len * lbl_805D8F8C;
        }
    } else {
        dist = len * lbl_805D8F8C;
    }
    if (is_split_screen() != 0) {
        s32 mode = get_camera_mode__11TCameraCtrlFv();
        View_80068530 *v = (View_80068530 *) camera_ctrl_instance;
        a = &v->eye[mode];
        b = &v->look[mode];
        probe.y = v->look[mode].y;
    } else {
        a = &camera_ctrl_instance->pos;
        b = &camera_ctrl_instance->target;
        probe.y = camera_ctrl_instance->target.y;
    }
    dir.x = a->x - b->x;
    dir.y = a->y - b->y;
    dir.z = a->z - b->z;
    if (TCameraCtrl__data_805D8F84 != vector_length(&dir)) {
        normalize_vector(&dir);
    }
    probe.x = dist * dir.x + self->obj->x;
    probe.z = dist * dir.z + self->obj->z;
    if (camera_ctrl_instance == NULL) {
        return 0;
    }
    hit = csnVector(a, &probe, 0x100);
    if (hit != NULL) {
        VecCopy__FP3VecPC3Vec(&self->out, hit->pos);
        self->out.x -= lbl_805D8F90 * dir.x;
        self->out.y -= lbl_805D8F90 * dir.y;
        self->out.z -= lbl_805D8F90 * dir.z;
        return 1;
    }
    return 0;
}
#pragma pop

void TCameraCtrl__sub_80068354(void) {  }
void TCameraCtrl__sub_80068358(void) {  }

extern s32 lbl_80488A28[];

void TCameraCtrl::post_update_view() {
    Vec_8006835C e;
    Vec_8006835C d;
    Vec_8006835C *t;
    d.x = camera_ctrl_instance->target.x - camera_ctrl_instance->pos.x;
    d.y = camera_ctrl_instance->target.y - camera_ctrl_instance->pos.y;
    d.z = camera_ctrl_instance->target.z - camera_ctrl_instance->pos.z;
    if (TCameraCtrl__data_805D8F84 == vector_length(&d)) {
        normalize_vector(&d);
        camera_ctrl_instance->target.x = camera_ctrl_instance->pos.x;
        camera_ctrl_instance->target.y = camera_ctrl_instance->pos.y;
        camera_ctrl_instance->target.z = TCameraCtrl__data_805D8F80 + camera_ctrl_instance->pos.z;
    } else if (TCameraCtrl__data_805D8F84 == d.x && TCameraCtrl__data_805D8F84 == d.z) {
        camera_ctrl_instance->target.z += lbl_805D8F94;
        d.z = TCameraCtrl__data_805D8F80;
    }
    direction_to_pitch_yaw(&d, camera_ctrl_instance->f190, camera_ctrl_instance->f194);
    t = get_target__11TCameraCtrlFv(camera_ctrl_instance);
    e.x = camera_ctrl_instance->target.x + t->x;
    e.y = camera_ctrl_instance->target.y + t->y;
    e.z = camera_ctrl_instance->target.z + t->z;
    set_camera_look_at(&camera_ctrl_instance->pos, &e, TCameraCtrl__up_vector);
    lbl_804FF5E8.x = camera_ctrl_instance->pos.x;
    lbl_804FF5E8.y = camera_ctrl_instance->pos.y;
    lbl_804FF5E8.z = camera_ctrl_instance->pos.z;
    if (TCameraCtrl__view_state.flags & 0x200) {
        GXSetScissorBoxOffset((s32)-(TCameraCtrl__data_804FF634.x - lbl_805D8F98), (s32)-(TCameraCtrl__data_804FF634.y - lbl_805D8F9C));
        TCameraCtrl__sub_801E32D8(TCameraCtrl__data_804FF634.x, TCameraCtrl__data_804FF634.y);
        set_viewport_scissor__11TCameraCtrlFiPv(2, TCameraCtrl__data_804FF634.f30);
    }
}

#define V ((View_80068530 *)camera_ctrl_instance)
void apply_camera_controller_pose(Cam_80068530 *arg0) {
    s32 no;
    s32 id;
    if ((TCameraCtrl__view_state.flags & 4) || (TCameraCtrl__view_state.flags & 8)) {
        V->curPos.x = arg0->pos.x;
        V->curPos.y = arg0->pos.y;
        V->curPos.z = arg0->pos.z;
        V->curTarget.x = arg0->target.x;
        V->curTarget.y = arg0->target.y;
        V->curTarget.z = arg0->target.z;
        V->pos.x = V->curPos.x;
        V->pos.y = V->curPos.y;
        V->pos.z = V->curPos.z;
        V->target.x = V->curTarget.x;
        V->target.y = V->curTarget.y;
        V->target.z = V->curTarget.z;
        no = get_camera_no__11TCameraCtrlFv();
        VecCopy__FP3VecPC3Vec(&V->eye[no], &arg0->pos);
        VecCopy__FP3VecPC3Vec(&V->look[no], &arg0->target);
    } else {
        V->curPos.x = arg0->pos.x;
        V->curPos.y = arg0->pos.y;
        V->curPos.z = arg0->pos.z;
        V->curTarget.x = arg0->target.x;
        V->curTarget.y = arg0->target.y;
        V->curTarget.z = arg0->target.z;
    }
    V->f1b8 = arg0->f58;
    V->f1bc = arg0->f5c;
    if (V->f19c != arg0->f54) {
        TCameraCtrl__view_state.flags |= 0x40;
        V->f19c = arg0->f54;
    }
}

void *TCameraCtrl__sub_800686BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80488A28;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TCameraCtrl__sub_80068714(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, 0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_80488A28;
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) TCameraCtrl__data_805D8F84;
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) TCameraCtrl__data_805D8F84;
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) TCameraCtrl__data_805D8F84;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(f32 *)((s8 *)arg0 + 0x48) = (f32) TCameraCtrl__data_805D8F84;
    *(f32 *)((s8 *)arg0 + 0x4C) = (f32) TCameraCtrl__data_805D8F84;
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) TCameraCtrl__data_805D8F80;
    *(f32 *)((s8 *)arg0 + 0x60) = (f32) TCameraCtrl__data_805D8F84;
    *(f32 *)((s8 *)arg0 + 0x64) = (f32) TCameraCtrl__data_805D8F84;
    *(f32 *)((s8 *)arg0 + 0x68) = (f32) TCameraCtrl__data_805D8F84;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) TCameraCtrl__data_805D8F84;
    *(f32 *)((s8 *)arg0 + 0x5C) = (f32) lbl_805D8FA0;
    *(s32 *)((s8 *)arg0 + 0x54) = 0x36C1;
    *(u16 *)((s8 *)arg0 + 0x20) = 0xFFFF;
    return arg0;
}

}
