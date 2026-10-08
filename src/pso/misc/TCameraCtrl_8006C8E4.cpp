#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_8006C964 { f32 x, y, z; };
struct V_8006CC7C { f32 x, y, z; };
extern "C" const V_8006CC7C lbl_804384E8;

struct Pad_8006C964 { u8 pad0[0x14]; s16 sx; s16 sy; };

struct Ctl_8006C964 { u8 pad0[0xC0]; Pad_8006C964 pad; };

struct Cam_8006C964 {
    u8 pad0[0x2C];
    s32 pitch;
    s32 yaw;
    u8 pad34[8];
    Vec_8006C964 eye;
    Vec_8006C964 center;
    s32 x54;
    u8 pad58[0x6C - 0x58];
    f32 dist;
};

extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_8006CC30(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void set_target_pos__11TCameraCtrlFPvPv(void *, void *);
V_8006CC7C TCameraCtrl__sub_8006CC7C(void);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void debug_printf_at(s32, const char *, ...);
extern Ctl_8006C964 lbl_8050E208;
void update_debug_camera__11TCameraCtrlFPv(Cam_8006C964 *self);
}

extern "C" {

void TCameraCtrl__sub_8006C928(void);
void *__dt_deleting_6__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void *init_subobject__11TCameraCtrlFPv(void *arg0);
void TCameraCtrl__sub_800686BC(void *, int);
int TCameraCtrl__sub_80068714(void);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_80488D70[];

void *init_subobject__11TCameraCtrlFPv(void *arg0) {
    ((void (*)(void *))TCameraCtrl__sub_80068714)(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488D70;
    M2C_FIELD(arg0, u32 *, 0x38) = 4;
    return arg0;
}

void TCameraCtrl__sub_8006C928(void) {  }

extern unsigned char lbl_80488DA0[];

void * TCameraCtrl__vt6(void) {
    void *o;
    o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006CC30(o);
    }
    return o;
}

extern Vec_8006C964 lbl_804384F4;
extern char lbl_80438500[];
extern const f64 lbl_80438510;
extern const f64 lbl_80438518;
#pragma push
#pragma fp_contract on
void update_debug_camera__11TCameraCtrlFPv(Cam_8006C964 *self) {
    Vec_8006C964 target = lbl_804384F4;
    Vec_8006C964 v;
    Pad_8006C964 *pad = &lbl_8050E208.pad;
    s16 sx = lbl_8050E208.pad.sx;
    s16 sy = lbl_8050E208.pad.sy;
    f32 r;
    if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x100) != 0) {
        debug_printf_at(0xC0014, lbl_80438500, (s32)(lbl_80438518 * (f64)self->x54 + lbl_80438510));
        if (TWindowShortListCtrl__check_controller_button(pad, 0x20000) != 0) {
            self->x54 += 0xB6;
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x10000) != 0) {
            self->x54 -= 0xB6;
        }
    }
    ((void (*)(void *))TCameraCtrl__sub_8006CC7C)(&v);
    VecCopy__FP3VecPC3Vec(&target, &v);
    set_target_pos__11TCameraCtrlFPvPv(self, &target);
    if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x200) != 0) {
        if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x10) != 0) {
            self->dist -= (2.0f);
        }
        if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x20) != 0) {
            self->dist += (2.0f);
        }
        if (self->dist < 20.0f) {
            self->dist = 20.0f;
        }
        if (self->dist > 400.0f) {
            self->dist = 400.0f;
        }
    }
    if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x400) != 0) {
        self->yaw += sx * 3;
        self->pitch += sy * 3;
    }
    if (self->pitch > 0x3800) {
        self->pitch = 0x3800;
    }
    if (self->pitch < -0x3800) {
        self->pitch = -0x3800;
    }
    r = self->dist * cos_table_lookup(self->pitch);
    self->eye.x = r * sin_table_lookup(self->yaw) + self->center.x;
    self->eye.y = -(self->dist * sin_table_lookup(self->pitch) - self->center.y);
    self->eye.z = r * cos_table_lookup(self->yaw) + self->center.z;
}
#pragma pop

void *__dt_deleting_6__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)lbl_80488DA0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void* TCameraCtrl__sub_8006CC30(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488DA0; *(float*)((char*)a0 + 0x6c) = (2e+01f); *(int*)((char*)a0 + 0x38) = 0; return a0; }

struct O_8006CC7C { u8 pad[0x1c]; V_8006CC7C pos; };
extern O_8006CC7C *lbl_805005D0[];
extern s16 lbl_805D4EC8;

V_8006CC7C TCameraCtrl__sub_8006CC7C(void) {
    V_8006CC7C def = lbl_804384E8;
    O_8006CC7C *o = lbl_805005D0[lbl_805D4EC8];
    if (o != 0) {
        return o->pos;
    }
    return def;
}

}
