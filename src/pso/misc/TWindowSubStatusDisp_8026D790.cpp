#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Scroll_8026D790 { u8 pad0[4]; f32 height; s32 frame; };

struct Ctx_8026D790 {
    f32 x, y, width, height;
    u8 pad10[0x1C - 0x10];
    f32 clip_height;
    u8 pad20[0x30 - 0x20];
    s32 x30;
    u8 pad34[4];
    f32 x38;
};

struct Quad_8026D790 { f32 x, y, r, b, u, v, ur, vb; };

extern "C" {
s32 calc_pulse_flash_color(int, int, int, int, int, int, int, int);
void apply_context_transform_to_rect(void *, Quad_8026D790 *);
void set_global_param__8TObjFishFi(void *);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(Quad_8026D790 *, f32);
void set_draw_texture_and_color(int, u32);
void set_constant_material_color(s32);
extern void *lbl_805D63F0;
extern const f32 lbl_805DD2FC;
extern const f32 lbl_805DD300;
extern const f32 lbl_805DD304;
extern const f32 lbl_805DD308;
extern const f32 lbl_805DD30C;
extern const f32 lbl_805DD310;
extern const f32 lbl_805DD314;
extern const f32 lbl_805DD318;
extern const f32 lbl_805DD31C;
extern const f32 lbl_805DD320;
extern const f32 lbl_805DD324;
extern const f32 lbl_805DD328;
extern const f32 lbl_805DD32C;
extern const f32 lbl_805DD330;
void TWindowSubStatusDisp__sub_8026D790(Scroll_8026D790 *scroll, Ctx_8026D790 *c, f32 *offset);
}

extern "C" {

void TWindowSubStatusDisp__sub_8026D790(Scroll_8026D790 *scroll, Ctx_8026D790 *c, f32 *offset) {
    Quad_8026D790 q;
    f32 depth;
    f32 x;
    f32 y;
    f32 t;
    if (c->x30 < 0) {
        return;
    }
    if (scroll->height <= c->clip_height) {
        return;
    }
    if (c->height < lbl_805DD2FC) {
        return;
    }
    x = c->x + c->width - lbl_805DD300;
    y = lbl_805DD304 + c->y;
    begin_screen_draw(0);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(0, 0xFF646464);
    depth = lbl_805DD308 / (lbl_805DD30C + c->x38);
    q.x = x;
    q.r = lbl_805DD310 + x;
    q.y = y;
    q.b = (y + c->height) - lbl_805DD314;
    q.u = lbl_805DD318;
    q.v = lbl_805DD31C;
    q.ur = lbl_805DD320;
    q.vb = lbl_805DD324;
    apply_context_transform_to_rect(c, &q);
    draw_textured_quad_at_depth(&q, depth);
    set_constant_material_color(calc_pulse_flash_color(0x86, 0xFF, 0x41, scroll->frame, 0x1C2, 0x12C, 0x13B, 0x14A));
    depth = lbl_805DD308 / (lbl_805DD328 + c->x38);
    t = c->height;
    if (t >= lbl_805DD2FC) {
        t -= lbl_805DD314;
        if (scroll->height <= t) {
            q.y = y;
            q.b = y + t;
        } else {
            q.y = y + offset[1] * t / scroll->height;
            q.b = q.y + c->clip_height * t / scroll->height;
        }
    }
    q.x = x;
    q.r = lbl_805DD310 + x;
    q.u = lbl_805DD32C;
    q.v = lbl_805DD31C;
    q.ur = lbl_805DD330;
    q.vb = lbl_805DD324;
    apply_context_transform_to_rect(c, &q);
    draw_textured_quad_at_depth(&q, depth);
    get_player__20TWindowSubStatusDispFv();
}

void increment_counter__20TWindowSubStatusDispFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}

int __dl__FPv();

s32 destroy_allocation__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

M2C_UNK copy_position__11TWindowMenuFPvPv();

void *reset_selection__20TWindowSubStatusDispFPv(void *arg0) {
    copy_position__11TWindowMenuFPvPv();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

}
