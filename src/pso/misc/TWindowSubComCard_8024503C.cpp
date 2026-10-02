#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Quad_802455CC { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

struct Rect_802455CC { f32 x, y, w, h; u8 pad10[0x20 - 0x10]; f32 px, py, sx, sy; u8 pad30[0x38 - 0x30]; f32 depth; };

extern "C" {
M2C_UNK draw_textured_quad_at_depth(void *, f32);
extern const f32 lbl_805DCAD4;
extern const f32 lbl_805DCAE4;
extern const f32 lbl_805DCAF4;
extern const f32 lbl_805DCAFC;
extern const f32 lbl_805DCB0C;
extern const f32 lbl_805DCB10;
extern const f32 lbl_805DCB14;
extern const f32 lbl_805DCB18;
extern const f32 lbl_805DCB1C;
extern const f32 lbl_805DCB20;
extern const f32 lbl_805DCB24;
void TWindowSubComCard__sub_802455CC(u8 *a, Quad_802455CC *q, Rect_802455CC *r);
}

extern "C" {

void update_fade__17TWindowSubComCardFPv(void *arg0);
M2C_UNK save_position__17TWindowSubComCardFPv();

extern M2C_UNK lbl_8044E680;

#pragma push
#pragma fp_contract on
void TWindowSubComCard__sub_802455CC(u8 *a, Quad_802455CC *q, Rect_802455CC *r) {
    f32 rem;
    f32 t;
    f32 z;
    f32 w;
    if (M2C_FIELD(a, f32 *, 0x48) < lbl_805DCB10) {
        w = lbl_805DCB0C * M2C_FIELD(a, f32 *, 0x48);
    } else {
        w = lbl_805DCAFC;
    }
    z = lbl_805DCAE4 / r->depth;
    q->x0 = r->x;
    q->x1 = r->x + w;
    q->u0 = lbl_805DCB14;
    q->u1 = lbl_805DCB18;
    q->x0 = r->sx * (q->x0 - r->px) + r->px;
    q->x1 = r->sx * (q->x1 - r->px) + r->px;
    draw_textured_quad_at_depth(q, z);
    q->x0 = (r->x + M2C_FIELD(a, f32 *, 0x48)) - w;
    q->x1 = r->x + M2C_FIELD(a, f32 *, 0x48);
    q->u0 = lbl_805DCB1C;
    q->u1 = lbl_805DCB20;
    q->x0 = r->sx * (q->x0 - r->px) + r->px;
    q->x1 = r->sx * (q->x1 - r->px) + r->px;
    draw_textured_quad_at_depth(q, z);
    q->x0 = lbl_805DCAFC + r->x;
    q->u0 = lbl_805DCB18;
    q->u1 = lbl_805DCB1C;
    rem = r->sx * (M2C_FIELD(a, f32 *, 0x48) - lbl_805DCB10);
    q->x0 = r->sx * (q->x0 - r->px) + r->px;
    while (rem >= lbl_805DCAD4) {
        if (rem < lbl_805DCAFC) {
            q->x1 = q->x0 + rem;
            t = lbl_805DCB24 + rem;
            q->u1 = t * lbl_805DCAF4;
        } else {
            q->x1 = lbl_805DCAFC + q->x0;
        }
        draw_textured_quad_at_depth(q, z);
        rem -= lbl_805DCAFC;
        q->x0 = q->x0 + lbl_805DCAFC;
    }
}
#pragma pop

void update_fade__17TWindowSubComCardFPv(void *arg0) {
    u32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x50);
    if (temp_r5 == 0) {
        save_position__17TWindowSubComCardFPv();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x40) += (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x40)) / (f32) temp_r5;
    M2C_FIELD(arg0, f32 *, 0x44) += (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x44)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x48) += (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x48)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x4C) += (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x4C)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, u32 *, 0x50) = (u32) (M2C_FIELD(arg0, u32 *, 0x50) - 1);
}

}
