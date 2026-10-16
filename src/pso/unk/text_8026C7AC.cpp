#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"

typedef struct Vec2_8026C800 { f32 x, y; } Vec2_8026C800;

typedef struct Rect_8026C800 { f32 x, y, w, h; u8 pad10[0x20]; s32 f30; u8 pad34[4]; f32 f38; } Rect_8026C800;

typedef struct Self_8026C800 { s8 page; s8 count; u8 pad2[6]; f32 phase; } Self_8026C800;

extern "C" {
s32 get_shared_text_buffer(void);
u32 calc_text_width(void);
u8 get_font_char_advance(void);
void map_char_to_font_code(s32);
void TWindowSubStatusDisp__sub_80228F5C(s32);
void text_builder_append(void *);
void text_builder_reset(void);
void draw_window_text(void *, s32, s32, s32, f32);
void set_text_draw_params(void *, s32, s32, f32, f32);
void fn_8026C664(void *, f32, f32, f32, f32);
void fn_8026C708(void *, f32, f32, f32, f32);
void begin_screen_draw(s32);
void set_draw_texture_and_color(s32, s32);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DD29C;
extern const f32 lbl_805DD2A0;
extern const f32 lbl_805DD2A4;
extern const f32 lbl_805DD2A8;
extern const f32 lbl_805DD2AC;
extern const f32 lbl_805DD2B0;
extern const f32 lbl_805DD2B4;
extern const f32 lbl_805DD2B8;
extern const f32 lbl_805DD2BC;
extern char lbl_805DD2C0[4];
void draw_list_page_indicator(Self_8026C800 *self, Rect_8026C800 *r);
}

extern "C" {

s32 fn_8026C7AC(void *arg0, s8 arg1) {
    *(s8 *)((s8 *)arg0 + 0) = 0;
    *(s8 *)((s8 *)arg0 + 1) = arg1;
    return 1;
}

extern f32 lbl_805DD294;
extern f32 lbl_805DD298;

s32 fn_8026C7C0(void *arg0, s8 arg1) {
    u8 temp_r0;

    temp_r0 = *(u8 *)((s8 *)arg0 + 0);
    if (arg1 == (s8) temp_r0) {
        return 0;
    }
    if (arg1 > (s8) temp_r0) {
        *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DD294;
    } else {
        *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DD298;
    }
    *(u8 *)((s8 *)arg0 + 0) = (u8) arg1;
    return 1;
}
#pragma push
#pragma fp_contract on
void draw_list_page_indicator(Self_8026C800 *self, Rect_8026C800 *r) {
    Vec2_8026C800 pos;
    f32 scale;
    if (r->f30 < 0) {
        return;
    }
    pos.x = (r->x + r->w) - lbl_805DD29C;
    pos.y = (r->y + r->h) - lbl_805DD2A0;
    scale = lbl_805DD2A4 / (lbl_805DD2A8 + r->f38);
    begin_screen_draw(1);
    TObjFish::set_global_param(lbl_805D63F0);
    set_draw_texture_and_color(0, -1);
    fn_8026C708(r, lbl_805DD2AC + pos.x, lbl_805DD2B0 + pos.y, scale, self->phase);
    fn_8026C664(r, pos.x - lbl_805DD2B4, lbl_805DD2B0 + pos.y, scale, self->phase);
    TWindowSubStatusDisp::get_player();
    set_text_draw_params(r, 0, 1, scale, lbl_805DD2B8);
    text_builder_reset();
    TWindowSubStatusDisp__sub_80228F5C(self->page + 1);
    get_shared_text_buffer();
    pos.x -= (f32)calc_text_width();
    map_char_to_font_code(0x2F);
    { u32 adv = get_font_char_advance(); pos.x -= lbl_805DD2BC * (f32)adv; }
    text_builder_append(lbl_805DD2C0);
    TWindowSubStatusDisp__sub_80228F5C(self->count);
    draw_window_text(&pos, get_shared_text_buffer(), -1, 0, lbl_805DD2B8);
}
#pragma pop

}
