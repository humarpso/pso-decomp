#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802878B8
{
  f32 sp8;
  f32 spC;
};

typedef struct Entry_802877C8 {
    u8 pad0[0x14];
    u32 color;
    u8 state;
} Entry_802877C8;

typedef struct Rect_80287580 {
    f32 x0, y0, x1, y1;
    f32 u0, v0, u1, v1;
} Rect_80287580;

typedef struct Obj_80287580 {
    u8 pad0[0x34];
    s32 f34;
    f32 f38;
} Obj_80287580;

typedef struct Entry_80287860 {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 width;
    u8 pad10[8];
    u8 state;
} Entry_80287860;

typedef struct UV_80287580 {
    f32 u, v;
} UV_80287580;

extern "C" {
M2C_UNK TWindowSubStatusDisp__sub_8024FD8C(void *, int, int, int, f32);
M2C_UNK set_text_draw_params(void *, int, int, f32, f32, f32, f32, f32, f32);
extern f32 lbl_805DD840;
extern const f32 lbl_805DD844;
extern const f32 lbl_805DD868;
extern const f32 lbl_805DD86C;
extern const f32 lbl_805DD870;
extern const f32 lbl_805DD874;
void TWindowSubStatusDisp__sub_802878B8(u8 *arg0, u8 *arg1);
extern f32 lbl_805DD840;
extern const f32 lbl_805DD860;
extern const f32 lbl_805DD864;
f32 TWindowSubStatusDisp__sub_802877A4(f32 farg0);
f32 TWindowSubStatusDisp__sub_802877A4(f32 farg0);
void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1);
u32 TWindowSubStatusDisp__sub_80144D68(void *);
f32 TWindowSubStatusDisp__sub_801A5228(void *);
extern const f32 lbl_805DD864;
extern const f32 lbl_805DD874;
u8 *TWindowSubStatusDisp__sub_80287A00(u8 *arg0, u8 *arg1, s32 arg2, s8 arg3, s32 arg4);
u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0);
void TWindowSubStatusDisp__sub_802877C8(void *arg0);
void TWindowSubStatusDisp__sub_80287860(void *arg0, void *arg1);
void TWindowKeyBoardSoft__sub_8024E6D8(void *, Rect_80287580 *);
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv(void);
void draw_textured_quad_at_depth(Rect_80287580 *, f32);
void TWindowSubStatusDisp__sub_803DF160(int, s32);
extern const UV_80287580 lbl_8044FC90[];
extern s32 lbl_805D63F0;
extern const f32 lbl_805DD84C;
void TWindowSubStatusDisp__sub_80287580(Obj_80287580 *obj, f32 *pos, u8 idx, f32 width);
}

extern "C" {

f32 TWindowSubStatusDisp__sub_80287570(void *arg0);
void TWindowSubStatusDisp__sub_802879B0(void *arg0);
u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0);
s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1);
f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0);
void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1);
void update__20TWindowSubStatusDispFPvPv(void* p, void* a1);
M2C_UNK __dl__FPv();

extern f32 lbl_805DD840;

f32 TWindowSubStatusDisp__sub_80287570(void *arg0) {
    return lbl_805DD840 + M2C_FIELD(arg0, f32 *, 0xC);
}

extern f32 lbl_805DD840;

void TWindowSubStatusDisp__sub_80287580(Obj_80287580 *obj, f32 *pos, u8 idx, f32 width) {
    Rect_80287580 r3;
    Rect_80287580 r2;
    Rect_80287580 r1;
    f32 scale;
    f32 w;
    scale = -1.0f / (0.0299f + obj->f38);
    w = width + lbl_805DD84C;
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    TWindowSubStatusDisp__sub_803DF160(1, obj->f34);
    r1.x0 = pos[0];
    r1.y0 = pos[1];
    r1.x1 = 40.0f + pos[0];
    r1.y1 = 27.0f + pos[1];
    r1.u0 = lbl_8044FC90[idx].u / 256.0f;
    r1.v0 = lbl_8044FC90[idx].v / 256.0f;
    r1.u1 = (40.0f + lbl_8044FC90[idx].u) / 256.0f;
    r1.v1 = (27.0f + lbl_8044FC90[idx].v) / 256.0f;
    TWindowKeyBoardSoft__sub_8024E6D8(obj, &r1);
    draw_textured_quad_at_depth(&r1, scale);
    r2.x0 = 40.0f + pos[0];
    r2.y0 = pos[1];
    r2.x1 = r2.x0 + w;
    r2.y1 = 27.0f + pos[1];
    r2.u0 = ((40.0f + lbl_8044FC90[idx].u) - 20.0f) / 256.0f;
    r2.v0 = lbl_8044FC90[idx].v / 256.0f;
    r2.u1 = (20.0f + (40.0f + lbl_8044FC90[idx].u)) / 256.0f;
    r2.v1 = (27.0f + lbl_8044FC90[idx].v) / 256.0f;
    TWindowKeyBoardSoft__sub_8024E6D8(obj, &r2);
    draw_textured_quad_at_depth(&r2, scale);
    r3.x0 = 40.0f + (pos[0] + w);
    r3.y0 = pos[1];
    r3.x1 = 40.0f + r3.x0;
    r3.y1 = 27.0f + pos[1];
    r3.u0 = (40.0f + lbl_8044FC90[idx].u) / 256.0f;
    r3.v0 = lbl_8044FC90[idx].v / 256.0f;
    r3.u1 = (80.0f + lbl_8044FC90[idx].u) / 256.0f;
    r3.v1 = (27.0f + lbl_8044FC90[idx].v) / 256.0f;
    TWindowKeyBoardSoft__sub_8024E6D8(obj, &r3);
    draw_textured_quad_at_depth(&r3, scale);
    get_player__20TWindowSubStatusDispFv();
}

f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0) {
    return lbl_805DD840 + farg0;
}

f32 TWindowSubStatusDisp__sub_802877A4(f32 farg0) {
  float new_var;
  f32 temp_f1;
  f32 temp_f2;
  f32 temp_f0;
  temp_f0 = lbl_805DD860;
  temp_f1 = (*(const f32 *)&lbl_805DD840);
  temp_f2 = temp_f1;
  new_var = temp_f0 + farg0;
  temp_f1 = new_var;
  temp_f0 = lbl_805DD864;
  temp_f1 = temp_f1 - temp_f2;
  if (temp_f1 < temp_f0)
  {
    temp_f1 = temp_f0;
  }
  return temp_f1;
}

void TWindowSubStatusDisp__sub_802877C8(void *arg0) {
    Entry_802877C8 *e = (Entry_802877C8 *)arg0;
    switch (e->state) {
    case 0:
        if (((s32 (*)(u8 *))TWindowSubStatusDisp__sub_80287AC4)((u8 *)e) != 0) {
            e->color = 0xFFFFFFFF;
        } else {
            e->color = 0xFF909090;
        }
        break;
    case 1:
    case 2:
        e->color = 0xFF000000;
        break;
    }
}

void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x18) = arg1;
    TWindowSubStatusDisp__sub_802877C8((void *)(arg0));
}

typedef struct Stack_802878B8 Stack_802878B8;
#pragma fp_contract on

void TWindowSubStatusDisp__sub_80287860(void *arg0, void *arg1) {
    Entry_80287860 *e = (Entry_80287860 *)arg0;
    f32 pos[2];
    pos[0] = ((f32 *)arg1)[0] + e->x;
    pos[1] = ((f32 *)arg1)[1] + e->y;
    ((void (*)(f32, Obj_80287580 *, f32 *, u8))TWindowSubStatusDisp__sub_80287580)(e->width, (Obj_80287580 *)arg1, pos, e->state);
}

void TWindowSubStatusDisp__sub_802878B8(u8 *arg0, u8 *arg1) {
  Stack_802878B8 stack;
  f32 new_var;
  f32 temp_f4;
  if (((s32) (*((s32 *) (((s8 *) arg1) + 0x30)))) >= 0)
  {
    if (lbl_805DD868 && lbl_805DD868)
    {
    }
    stack.sp8 = -((lbl_805DD868 * (*((f32 *) (((s8 *) arg0) + 0x10)))) - ((lbl_805DD868 * ((*(const f32 *)&lbl_805DD840) + (*((f32 *) (((s8 *) arg0) + 0xC))))) + ((*((f32 *) (((s8 *) arg1) + 0))) + (*((f32 *) (((s8 *) arg0) + 4))))));
    temp_f4 = *((f32 *) (((s8 *) arg1) + 4));
    stack.spC = lbl_805DD86C + (temp_f4 + (*((f32 *) (((s8 *) arg0) + 8))));
    set_text_draw_params((void *) arg1, (int) 0, (int) 1, (f32) (lbl_805DD844 / (lbl_805DD870 + (*((f32 *) (((s8 *) arg1) + 0x38))))), (f32) lbl_805DD874, (f32) lbl_805DD844, (f32) temp_f4, (f32) lbl_805DD86C, (f32) lbl_805DD868);
    new_var = *((f32 *) (((s8 *) arg0) + 0x1C));
    TWindowSubStatusDisp__sub_8024FD8C((void *) (&stack.sp8), (int) (*((s32 *) (((s8 *) arg0) + 0))), (int) (*((s32 *) (((s8 *) arg0) + 0x14))), (int) 1, (f32) new_var);
  }
}

void update__20TWindowSubStatusDispFPvPv(void* p, void* a1) { TWindowSubStatusDisp__sub_80287860((void *)(p), (void *)(a1)); TWindowSubStatusDisp__sub_802878B8((u8 *)(p), (u8 *)(a1)); }

void TWindowSubStatusDisp__sub_802879B0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x20));
}

s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

u8 *TWindowSubStatusDisp__sub_80287A00(u8 *arg0, u8 *arg1, s32 arg2, s8 arg3, s32 arg4) {
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TWindowSubStatusDisp__sub_80144D68((void *) (arg2));
    M2C_FIELD(arg0, f32 *, 0xC) = TWindowSubStatusDisp__sub_802877A4(M2C_FIELD(arg0, f32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s8 *, 0x19) = 0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DD864;
    set_entry_state__20TWindowSubStatusDispFPvc(arg0, arg3);
    M2C_FIELD(arg0, f32 *, 0x20) = TWindowSubStatusDisp__sub_801A5228((void *) (arg4));
    if (M2C_FIELD(arg0, f32 *, 0x20) <= lbl_805DD864) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DD874;
    }
    return arg0;
}

u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0) {
    return (u8) ((u32) __cntlzw(M2C_FIELD(arg0, u8 *, 0x19) & 1) >> 5);
}

}
