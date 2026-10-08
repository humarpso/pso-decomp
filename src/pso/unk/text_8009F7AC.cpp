#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_8009F7AC { f32 x, y, z; };

struct Pt_8009F7AC { f32 w; u32 color; Vec_8009F7AC pos; };

struct Vtx_8009F7AC { f32 x, y, z; u32 color; };

struct Quad_8009F7AC { Vtx_8009F7AC a; Vtx_8009F7AC b; };

struct Trail_8009F7AC {
    u8 pad0[0x1C];
    s32 cap;
    s32 count;
    s32 head;
    Quad_8009F7AC *verts;
    Pt_8009F7AC *pts;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void init_xyz_limits__10TObjPlayerFv(void);
void draw_trail_strip__10TObjPlayerFPvPvi(void *, s32, s32);
extern Vec_8009F7AC lbl_804FF61C;
extern const f32 lbl_805D9938;
void TCameraCtrl__sub_8009F7AC(Trail_8009F7AC *o);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TCameraCtrl__sub_8009F7AC(Trail_8009F7AC *o) {
    Vec_8009F7AC up;
    Quad_8009F7AC *v;
    s32 i;
    Pt_8009F7AC *p;
    f32 w;
    u32 c;
    s32 j;
    s32 k;
    s32 last;
    s32 n;
    last = o->count - 1;
    if (o->head == last) {
        return;
    }
    VecCopy__FP3VecPC3Vec(&up, &lbl_804FF61C);
    v = o->verts;
    if (o->head > last) {
        n = o->count + (o->cap - o->head);
        for (i = o->count - 1; i >= 0; i--) {
            p = &o->pts[i];
            w = p->w;
            c = p->color;
            v->a.x = up.x * w + p->pos.x;
            v->a.y = up.y * w + p->pos.y;
            v->a.z = up.z * w + p->pos.z;
            v->a.color = c;
            w *= lbl_805D9938;
            v->b.x = up.x * w + p->pos.x;
            v->b.y = up.y * w + p->pos.y;
            v->b.z = up.z * w + p->pos.z;
            v->b.color = c;
            v++;
        }
        for (j = o->cap - 1; j >= o->head; j--) {
            p = &o->pts[j];
            w = p->w;
            c = p->color;
            v->a.x = up.x * w + p->pos.x;
            v->a.y = up.y * w + p->pos.y;
            v->a.z = up.z * w + p->pos.z;
            v->a.color = c;
            w *= lbl_805D9938;
            v->b.x = up.x * w + p->pos.x;
            v->b.y = up.y * w + p->pos.y;
            v->b.z = up.z * w + p->pos.z;
            v->b.color = c;
            v++;
        }
    } else {
        n = o->count - o->head;
        for (k = o->count - 1; k >= o->head; k--) {
            p = &o->pts[k];
            w = p->w;
            c = p->color;
            v->a.x = up.x * w + p->pos.x;
            v->a.y = up.y * w + p->pos.y;
            v->a.z = up.z * w + p->pos.z;
            v->a.color = c;
            w *= lbl_805D9938;
            v->b.x = up.x * w + p->pos.x;
            v->b.y = up.y * w + p->pos.y;
            v->b.z = up.z * w + p->pos.z;
            v->b.color = c;
            v++;
        }
    }
    init_xyz_limits__10TObjPlayerFv();
    draw_trail_strip__10TObjPlayerFPvPvi(o->verts, n * 2, 1);
}
#pragma pop

}
