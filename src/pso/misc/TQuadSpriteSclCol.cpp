#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Vec_801E5C24 { f32 x, y, z; } Vec_801E5C24;

typedef struct Col_801E5C24 { f32 r, g, b, a; } Col_801E5C24;

typedef struct Quad_801E5C24 { f32 x0, y0, x1, y1; Col_801E5C24 col; } Quad_801E5C24;

typedef struct Node_801E5C24 {
    struct Node_801E5C24 *next;
    Vec_801E5C24 pos;
    Vec_801E5C24 ofs;
    f32 sx;
    f32 sy;
    s32 tex;
    u8 pad28;
    u8 type;
} Node_801E5C24;

typedef struct List_801E5C24 { Node_801E5C24 *head; u8 pad[0x28]; } List_801E5C24;

typedef struct Desc_801E5C24 {
    u32 flags;
    s32 param4;
    s32 param8;
    s32 count;
    Col_801E5C24 *cols;
    f32 w;
    f32 h;
    s32 param1C;
} Desc_801E5C24;

typedef struct Self_801E5C24 {
    u8 pad0[0x1C];
    List_801E5C24 *lists;
    u8 pad20[0x4];
    s32 active;
    Desc_801E5C24 *desc;
} Self_801E5C24;

typedef struct Cam_801E5C24 { u8 pad0[8]; f32 cx; f32 cy; u8 pad10[8]; f32 sw; f32 aspect; } Cam_801E5C24;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void fn_80141EB4(void);
void setSpriteInverseColorBlend(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
s32 begin_effect_render__13TParticleCtrlFv(void);
s32 end_effect_render__13TParticleCtrlFv(void);
void fn_801E4EB0(void *);
void transform_point_by_current_matrix(void *, void *);
s32 set_global_param__8TObjFishFi(void *);
s32 begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv(void);
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
s32 set_constant_material_color(int);
extern Cam_801E5C24 lbl_8058D4F8;
extern const f32 lbl_805DC480;
extern const f32 lbl_805DC484;
extern const f32 lbl_805DC488;
void render__17TQuadSpriteSclColFv(Self_801E5C24 *self);
}

extern "C" {

void *TQuadSpriteSclCol__ct(void *arg0);
void *__dt__17TQuadSpriteSclColFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_quad_sprite_base(void *, int);
void quad_sprite_base_ct(void *);

extern M2C_UNK __vt__17TQuadSpriteSclCol[];

#pragma push
#pragma fp_contract on
void render__17TQuadSpriteSclColFv(Self_801E5C24 *self) {
    Quad_801E5C24 q;
    Vec_801E5C24 out;
    Vec_801E5C24 pos;
    u32 flags;
    f32 one;
    f32 sw;
    f32 sh;
    f32 cx;
    f32 cy;
    s32 ci;
    s32 li;
    s32 i;
    Node_801E5C24 *n;
    if (self->active == 0) {
        return;
    }
    flags = self->desc->flags;
    if (flags & 2) {
        if (flags & 4) {
            fn_80141EB4();
        } else {
            reset_transform_state__10TObjPlayerFv();
        }
    } else if (flags & 4) {
        setSpriteInverseColorBlend();
    } else {
        init_xyz_limits__10TObjPlayerFv();
    }
    sw = lbl_8058D4F8.sw;
    cx = lbl_8058D4F8.cx;
    cy = lbl_8058D4F8.cy;
    sh = sw * (lbl_805DC480 / (lbl_805DC480 * lbl_8058D4F8.aspect));
    begin_effect_render__13TParticleCtrlFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi((void *)self->desc->param4);
    set_draw_texture_and_color(self->desc->param8, self->desc->param1C);
    one = lbl_805DC484;
    for (i = 0, ci = 0, li = 0; i < self->desc->count; i++, ci += 0x10, li += 0x2C) {
        Col_801E5C24 *c = (Col_801E5C24 *)((u8 *)self->desc->cols + ci);
        n = *(Node_801E5C24 **)((u8 *)self->lists + li);
        q.col.r = c->r;
        q.col.g = c->g;
        q.col.b = c->b;
        q.col.a = c->a;
        while (n != NULL) {
            f32 d, sx, sy, x, y, w, h;
            pos.x = n->pos.x + n->ofs.x;
            pos.y = n->pos.y + n->ofs.y;
            pos.z = n->pos.z + n->ofs.z;
            if ((s32)n->type != 1) {
                transform_point_by_current_matrix(&pos, &out);
                out.y = -out.y;
            } else {
                VecCopy__FP3VecPC3Vec(&out, &pos);
            }
            if (out.z <= one || (s32)n->type == 1) {
                set_constant_material_color(n->tex);
                if ((s32)n->type != 1) {
                    d = lbl_805DC488 / -out.z;
                    sx = sh * d;
                    sy = sw * d;
                    x = out.x * sx + cx;
                    y = out.y * sy + cy;
                    w = sx;
                    h = sy;
                } else {
                    h = w = lbl_805DC488;
                    d = out.z;
                    x = out.x;
                    y = out.y;
                }
                w *= self->desc->w;
                h *= self->desc->h;
                w *= n->sx;
                h *= n->sy;
                q.x0 = x - w;
                q.x1 = x + w;
                q.y0 = y - h;
                q.y1 = y + h;
                draw_textured_quad_at_depth(&q, d);
            }
            n = n->next;
        }
        get_player__20TWindowSubStatusDispFv();
    }
    end_effect_render__13TParticleCtrlFv();
    fn_801E4EB0(self);
    reset_transform_state__10TObjPlayerFv();
}
#pragma pop

void *__dt__17TQuadSpriteSclColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TQuadSpriteSclCol;
        destroy_quad_sprite_base(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TQuadSpriteSclCol[];
extern void *lbl_805D35B8;

void *TQuadSpriteSclCol__ct(void *arg0) {
    quad_sprite_base_ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TQuadSpriteSclCol;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D35B8;
    return arg0;
}

}
