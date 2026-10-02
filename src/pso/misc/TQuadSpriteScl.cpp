#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Vec_801E58D8 { f32 x, y, z; } Vec_801E58D8;

typedef struct Col_801E58D8 { f32 r, g, b, a; } Col_801E58D8;

typedef struct Quad_801E58D8 { f32 x0, y0, x1, y1; Col_801E58D8 col; } Quad_801E58D8;

typedef struct Node_801E58D8 {
    struct Node_801E58D8 *next;
    Vec_801E58D8 pos;
    Vec_801E58D8 ofs;
    f32 sx;
    f32 sy;
    s32 tex;
    u8 pad28;
    u8 type;
} Node_801E58D8;

typedef struct List_801E58D8 { Node_801E58D8 *head; u8 pad[0x28]; } List_801E58D8;

typedef struct Desc_801E58D8 {
    u32 flags;
    s32 param4;
    s32 param8;
    s32 count;
    Col_801E58D8 *cols;
    f32 w;
    f32 h;
    s32 param1C;
} Desc_801E58D8;

typedef struct Self_801E58D8 {
    u8 pad0[0x1C];
    List_801E58D8 *lists;
    u8 pad20[0x4];
    s32 active;
    Desc_801E58D8 *desc;
} Self_801E58D8;

typedef struct Cam_801E58D8 { u8 pad0[8]; f32 cx; f32 cy; u8 pad10[8]; f32 sw; f32 aspect; } Cam_801E58D8;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void fn_80141EB4(void);
void setSpriteInverseColorBlend(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
s32 begin_effect_render__13TParticleCtrlFv(void);
s32 end_effect_render__13TParticleCtrlFv(void);
void fn_801E4EB0(void *);
void TObjPlayer__sub_803D9884(void *, void *);
s32 set_global_param__8TObjFishFi(void *);
s32 begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv(void);
s32 draw_textured_quad_at_depth(void *, f32);
s32 TWindowSubStatusDisp__sub_803DF160(int, int);
extern Cam_801E58D8 lbl_8058D4F8;
extern const f32 lbl_805DC470;
extern const f32 lbl_805DC474;
extern const f32 lbl_805DC478;
void render__14TQuadSpriteSclFv(Self_801E58D8 *self);
}

extern "C" {

void *TQuadSpriteScl__ct(void *arg0);
void *__dt__14TQuadSpriteSclFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_quad_sprite_base(void *, int);
void quad_sprite_base_ct(void *);

extern M2C_UNK __vt__14TQuadSpriteScl[];

#pragma push
#pragma fp_contract on
void render__14TQuadSpriteSclFv(Self_801E58D8 *self) {
    Quad_801E58D8 q;
    Vec_801E58D8 out;
    Vec_801E58D8 pos;
    u32 flags;
    f32 sw;
    f32 sh;
    f32 cx;
    f32 cy;
    f32 one;
    s32 ci;
    s32 li;
    s32 i;
    Node_801E58D8 *n;
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
    sh = sw * (lbl_805DC470 / (lbl_805DC470 * lbl_8058D4F8.aspect));
    begin_screen_draw(1);
    set_global_param__8TObjFishFi((void *)self->desc->param4);
    TWindowSubStatusDisp__sub_803DF160(self->desc->param8, self->desc->param1C);
    begin_effect_render__13TParticleCtrlFv();
    one = lbl_805DC474;
    for (i = 0, ci = 0, li = 0; i < self->desc->count; i++, ci += 0x10, li += 0x2C) {
        Col_801E58D8 *c = (Col_801E58D8 *)((u8 *)self->desc->cols + ci);
        n = *(Node_801E58D8 **)((u8 *)self->lists + li);
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
                TObjPlayer__sub_803D9884(&pos, &out);
                out.y = -out.y;
            } else {
                VecCopy__FP3VecPC3Vec(&out, &pos);
            }
            if (out.z <= one || (s32)n->type == 1) {
                if ((s32)n->type != 1) {
                    d = lbl_805DC478 / -out.z;
                    sx = sh * d;
                    sy = sw * d;
                    x = out.x * sx + cx;
                    y = out.y * sy + cy;
                    w = sx;
                    h = sy;
                } else {
                    h = w = lbl_805DC478;
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

void *__dt__14TQuadSpriteSclFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TQuadSpriteScl;
        destroy_quad_sprite_base(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__14TQuadSpriteScl[];
extern void *lbl_805D35B0;

void *TQuadSpriteScl__ct(void *arg0) {
    quad_sprite_base_ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TQuadSpriteScl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D35B0;
    return arg0;
}

}
