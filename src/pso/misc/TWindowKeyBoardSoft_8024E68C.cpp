#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredFields_8024E754_arg0
{
  u8 unknown_0[0x28];
  f32 field_28;
  f32 field_2C;
};

struct Ctx_8024E6D8 { u8 pad[0x20]; f32 pivot[2]; f32 scale[2]; };

struct Vec2_8024EC34 { f32 x; f32 y; };

struct Ctx_8024E68C { u8 pad[0x20]; f32 pivot[2]; f32 scale[2]; };

struct Box_8024E8E8 { f32 x0, y0, x1, y1; f32 u0, v0, u1, v1; };

struct Win_8024E8E8 { u8 pad[0x3C]; f32 x0, y0, x1, y1; };

struct Win_8024EA50 {
    f32 x, y;
    f32 w, h;
    f32 x10, y14, x18, y1c;
    Vec2_8024EC34 c;
    f32 sx, sy;
    s32 f30;
    s32 f34;
    f32 depth;
    f32 x3c, y40, x44, y48;
};

extern "C" {
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u32 init_layout__19TWindowKeyBoardSoftFPv(void* a0);
extern u32 lbl_805D6420;
u32 TWindowKeyBoardSoft__sub_8024EDF8(void);
s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805DCC84;
extern const f32 lbl_805DCC88;
void set_open_tick__19TWindowKeyBoardSoftFPvi(u8 *arg0, s32 arg1);
extern const float lbl_805DCC78;
extern const f32 lbl_805DCC7C;
extern const f32 lbl_805DCC80;
void apply_window_closing_stretch(u8 *arg0, int arg1);
extern const float lbl_805DCC78;
void apply_context_transform_to_rect(Ctx_8024E6D8 *c, f32 *q);
s32 is_split_screen();
f32 TCameraCtrl__sub_80068A04(s32);
f32 get_split_offset__11TCameraCtrlFi(s32);
f32 get_fov__11TCameraCtrlFv();
f32 get_view_scale__11TCameraCtrlFv();
Vec2_8024EC34 *TWindowKeyBoardSoft__sub_8024ECDC(s32);
void TWindowKeyBoardSoft__sub_8024EC34(Vec2_8024EC34 *arg0, s32 arg1);
s32 get_camera_id__11TCameraCtrlFv();
Vec2_8024EC34 *get_zero_vec2();
extern Vec2_8024EC34 lbl_8044EC70[];
extern Vec2_8024EC34 lbl_8044EC80[];
extern Vec2_8024EC34 lbl_8044EC98[];
extern const float lbl_805DCC78;
void TWindowKeyBoardSoft__sub_8024E68C(Ctx_8024E68C *c, f32 *q);
s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1);
extern const float lbl_805DCC94;
s32 clip_textured_quad__19TWindowKeyBoardSoftFPvPv(Win_8024E8E8 *w, Box_8024E8E8 *b);
s32 is_split_screen();
f32 get_fov__11TCameraCtrlFv();
f32 get_view_scale__11TCameraCtrlFv();
s32 get_camera_no__11TCameraCtrlFv();
void TWindowKeyBoardSoft__sub_8024EC34(Vec2_8024EC34 *arg0, s32 arg1);
extern u32 lbl_805D6420;
extern const float lbl_805DCC94;
extern const f32 lbl_805DCC98;
extern const f32 lbl_805DCC9C;
extern const f32 lbl_805DCCA0;
extern const f32 lbl_805DCCA4;
u32 init_text_window_layout(Win_8024EA50 *win, f32 *pos, f32 *size, f32 *scale, u32 flags, f32 depth);
}

extern "C" {

void shrink_clip_right__19TWindowKeyBoardSoftFPv(void *arg0);
void animate_scale__19TWindowKeyBoardSoftFPv(void *arg0);
u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1);
s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1);
u32 open_singleton__19TWindowKeyBoardSoftFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 _w4, f32 _w5);
void set_bounds__19TWindowKeyBoardSoftFPvffff(void* p, f32 a, f32 b, f32 c, f32 d);
s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1);
M2C_UNK __dl__FPv(u32);

typedef struct RecoveredFields_8024E754_arg0 RecoveredFields_8024E754_arg0;
#pragma fp_contract on

#pragma push
#pragma fp_contract on
void TWindowKeyBoardSoft__sub_8024E68C(Ctx_8024E68C *c, f32 *q) {
    if ((*(const f32 *)&lbl_805DCC78) != c->scale[0]) {
        q[0] = c->scale[0] * (q[0] - c->pivot[0]) + c->pivot[0];
    }
    if ((*(const f32 *)&lbl_805DCC78) != c->scale[1]) {
        q[1] = c->scale[1] * (q[1] - c->pivot[1]) + c->pivot[1];
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void apply_context_transform_to_rect(Ctx_8024E6D8 *c, f32 *q) {
    if ((*(const f32 *)&lbl_805DCC78) != c->scale[0]) {
        q[0] = c->scale[0] * (q[0] - c->pivot[0]) + c->pivot[0];
        q[2] = c->scale[0] * (q[2] - c->pivot[0]) + c->pivot[0];
    }
    if ((*(const f32 *)&lbl_805DCC78) != c->scale[1]) {
        q[1] = c->scale[1] * (q[1] - c->pivot[1]) + c->pivot[1];
        q[3] = c->scale[1] * (q[3] - c->pivot[1]) + c->pivot[1];
    }
}
#pragma pop

void apply_window_closing_stretch(u8 *arg0, int arg1) {
  f32 temp_f2;
  RecoveredFields_8024E754_arg0 *new_var;
  new_var = (RecoveredFields_8024E754_arg0 *) arg0;
  if (arg1 != 0)
  {
    temp_f2 = lbl_805DCC80;
    ;
    new_var->field_28 = (f32) (new_var->field_28 * ((lbl_805DCC7C * (temp_f2 * ((f32) arg1))) + (*(const f32 *)&lbl_805DCC78)));
    new_var->field_2C = (f32) (new_var->field_2C * ((*(const f32 *)&lbl_805DCC78) - (temp_f2 * ((f32) arg1))));
  }
}

#pragma push
#pragma opt_common_subs off
void set_open_tick__19TWindowKeyBoardSoftFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((__cvt_fp2unsigned(lbl_805DCC84 * ((lbl_805DCC88 + (f32) temp_r0) / lbl_805DCC88)) << 0x18) | 0xFF0000 | 0xFFFF);
    }
}
#pragma pop

void set_bounds__19TWindowKeyBoardSoftFPvffff(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x3c) = a; *(f32*)((char*)p + 0x40) = b; *(f32*)((char*)p + 0x44) = c; *(f32*)((char*)p + 0x48) = d; }

extern const f32 lbl_805DCC8C;

void shrink_clip_right__19TWindowKeyBoardSoftFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) - lbl_805DCC8C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) - lbl_805DCC8C);
}

extern const f32 lbl_805DCC90;

void animate_scale__19TWindowKeyBoardSoftFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + lbl_805DCC90);
}

s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg0, f32 *, 0x3C)) || (M2C_FIELD(arg1, f32 *, 0xC) < M2C_FIELD(arg0, f32 *, 0x40)) || (M2C_FIELD(arg1, f32 *, 0) > M2C_FIELD(arg0, f32 *, 0x44)) || (M2C_FIELD(arg1, f32 *, 4) > M2C_FIELD(arg0, f32 *, 0x48))) {
        return 0;
    }
    return 1;
}

#pragma push
#pragma fp_contract on
s32 clip_textured_quad__19TWindowKeyBoardSoftFPvPv(Win_8024E8E8 *w, Box_8024E8E8 *b) {
    f32 sx;
    f32 sy;
    f32 d;
    if (is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(w, b) == 0) {
        return 0;
    }
    sx = (b->u1 - b->u0) / (b->x1 - b->x0);
    sy = (b->v1 - b->v0) / (b->y1 - b->y0);
    d = w->x0 - b->x0;
    if (d > (*(const f32 *)&lbl_805DCC94)) {
        b->x0 = w->x0;
        b->u0 = d * sx + b->u0;
    }
    d = w->y0 - b->y0;
    if (d > (*(const f32 *)&lbl_805DCC94)) {
        b->y0 = w->y0;
        b->v0 = d * sy + b->v0;
    }
    d = b->x1 - w->x1;
    if (d > (*(const f32 *)&lbl_805DCC94)) {
        b->x1 = w->x1;
        b->u1 = -(d * sx - b->u1);
    }
    d = b->y1 - w->y1;
    if (d > (*(const f32 *)&lbl_805DCC94)) {
        b->y1 = w->y1;
        b->v1 = -(d * sy - b->v1);
    }
    return 1;
}
#pragma pop

s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1) {
    if (clip_textured_quad__19TWindowKeyBoardSoftFPvPv((Win_8024E8E8 *)(arg0), (Box_8024E8E8 *)(arg1)) == 0) {
        return 0;
    }
    apply_context_transform_to_rect((Ctx_8024E6D8 *)(arg0), (f32 *)(arg1));
    return 1;
}

extern u32 lbl_805D6420;

#pragma push
#pragma fp_contract on
u32 init_text_window_layout(Win_8024EA50 *win, f32 *pos, f32 *size, f32 *scale, u32 flags, f32 depth) {
    f32 mx;
    f32 my;
    s32 cam;
    f32 t;
    if (flags & 0x800) {
        mx = (*(const f32 *)&lbl_805DCC94);
        my = mx;
    } else {
        mx = lbl_805DCC98;
        my = lbl_805DCC9C;
    }
    win->w = size[0];
    win->h = size[1];
    win->sx = scale[0];
    win->sy = scale[1];
    if (flags & 0x4000) {
        win->c.x = lbl_805DCCA0 * win->w + pos[0];
        win->c.y = lbl_805DCCA0 * win->h + pos[1];
    } else {
        t = lbl_805DCCA0 * win->w;
        win->c.x = t * win->sx + pos[0];
        t = lbl_805DCCA0 * win->h;
        win->c.y = t * win->sy + pos[1];
    }
    win->f30 = 0;
    win->f34 = -1;
    win->depth = depth;
    if (!(flags & 0x1000) && is_split_screen() != 0) {
        cam = get_camera_no__11TCameraCtrlFv();
        if (cam != 100) {
            TWindowKeyBoardSoft__sub_8024EC34(&win->c, cam);
            win->sx = win->sx / get_view_scale__11TCameraCtrlFv();
            win->sy = win->sy / get_fov__11TCameraCtrlFv();
        }
    }
    win->x = win->c.x - lbl_805DCCA0 * win->w;
    win->y = win->c.y - lbl_805DCCA0 * win->h;
    win->x10 = win->x + mx;
    win->y14 = win->y + my;
    win->x18 = win->w - lbl_805DCCA4 * mx;
    win->y1c = win->h - lbl_805DCCA4 * my;
    win->x3c = win->x + mx;
    win->y40 = win->y + my;
    win->x44 = (win->x + win->w) - mx;
    win->y48 = (win->y + win->h) - my;
    return lbl_805D6420;
}
#pragma pop

void TWindowKeyBoardSoft__sub_8024EC34(Vec2_8024EC34 *arg0, s32 arg1) {
    Vec2_8024EC34 *p;
    if (is_split_screen() == 0 || arg1 == 0x64) {
        return;
    }
    p = TWindowKeyBoardSoft__sub_8024ECDC(arg1);
    arg0->x = arg0->x + (p->x + TCameraCtrl__sub_80068A04(arg1));
    arg0->y = arg0->y + (p->y + get_split_offset__11TCameraCtrlFi(arg1));
    arg0->x = arg0->x / get_view_scale__11TCameraCtrlFv();
    arg0->y = arg0->y / get_fov__11TCameraCtrlFv();
}

Vec2_8024EC34 *TWindowKeyBoardSoft__sub_8024ECDC(s32 i) {
    switch (get_camera_id__11TCameraCtrlFv()) {
    case 1:
        break;
    case 2:
        if (i >= 0 && i <= 2) {
            return &lbl_8044EC70[i];
        }
        break;
    case 3:
        if (i >= 0 && i <= 3) {
            return &lbl_8044EC80[i];
        }
        break;
    case 4:
        if (i >= 0 && i <= 4) {
            return &lbl_8044EC98[i];
        }
        break;
    }
    return get_zero_vec2();
}

u32 open_singleton__19TWindowKeyBoardSoftFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 _w4, f32 _w5) {
    if ((u32) lbl_805D6420 == 0U) {
        return 0U;
    }
    init_text_window_layout((Win_8024EA50 *)(lbl_805D6420), (f32 *)(arg0), (f32 *)(arg1), (f32 *)(arg2), (u32)(arg3), _w5);
    return lbl_805D6420;
}

extern u32 lbl_805D6420;

u32 TWindowKeyBoardSoft__sub_8024EDF8(void) {
    u32 temp_r3;
    u32 var_r0;
    if ((u32) lbl_805D6420 != 0U) {
        return lbl_805D6420;
    }
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x4C));
    var_r0 = temp_r3;
    if (var_r0 != 0U) {
        var_r0 = init_layout__19TWindowKeyBoardSoftFPv((void*)((int) (temp_r3)));
    }
    lbl_805D6420 = var_r0;
    return var_r0;
}

u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1) {
    if (arg0 != 0U) {
        if ((u32) lbl_805D6420 == arg0) {
            lbl_805D6420 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DCC78;
    extern const float lbl_805DCC94;
u32 init_layout__19TWindowKeyBoardSoftFPv(void* a0) { *(float*)((char*)a0 + 0x0) = lbl_805DCC94; *(float*)((char*)a0 + 0x4) = lbl_805DCC94; *(float*)((char*)a0 + 0x8) = lbl_805DCC94; *(float*)((char*)a0 + 0xc) = lbl_805DCC94; *(float*)((char*)a0 + 0x10) = lbl_805DCC94; *(float*)((char*)a0 + 0x14) = lbl_805DCC94; *(float*)((char*)a0 + 0x18) = lbl_805DCC94; *(float*)((char*)a0 + 0x1c) = lbl_805DCC94; *(float*)((char*)a0 + 0x3c) = lbl_805DCC94; *(float*)((char*)a0 + 0x40) = lbl_805DCC94; *(float*)((char*)a0 + 0x44) = lbl_805DCC94; *(float*)((char*)a0 + 0x48) = lbl_805DCC94; *(float*)((char*)a0 + 0x20) = lbl_805DCC94; *(float*)((char*)a0 + 0x24) = lbl_805DCC94; *(float*)((char*)a0 + 0x28) = lbl_805DCC78; *(float*)((char*)a0 + 0x2c) = lbl_805DCC78; *(int*)((char*)a0 + 0x30) = 0; *(int*)((char*)a0 + 0x34) = -1; *(float*)((char*)a0 + 0x38) = lbl_805DCC94; }

}
