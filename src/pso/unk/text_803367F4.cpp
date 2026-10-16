#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"
struct Quad_80336874 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

extern "C" {
void bind_title_texture_list(void);
s32 begin_screen_draw(int);
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
extern const f32 lbl_805DF910;
extern const f32 lbl_805DF914;
extern const f32 lbl_805DF918;
extern const f32 lbl_805DF91C;
extern const f32 lbl_805DF920;
extern const f32 lbl_805DF924;
extern const f32 lbl_805DF928;
extern const f32 lbl_805DF92C;
extern const f32 lbl_805DF934;
extern const f32 lbl_805DF938;
extern const f32 lbl_805DF93C;
extern const f32 lbl_805DF940;
void draw_title_background_pulse(s32 arg0, s32 arg1, f32 farg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void draw_title_background_pulse(s32 arg0, s32 arg1, f32 farg0) {
    Quad_80336874 q;
    f32 t;
    f32 s;
    u8 c;
    s32 n;
    n = arg1 % 300;
    if (n >= 150 && n <= 170) {
        t = (f32)(n - 150) / lbl_805DF910;
        TObjPlayer::init_xyz_limits();
        begin_screen_draw(1);
        bind_title_texture_list();
        c = (s32)(lbl_805DF914 * (lbl_805DF91C * t + lbl_805DF918));
        set_draw_texture_and_color(0xC, 0xFF000000 | (c << 16) | (c << 8) | c);
        s = lbl_805DF924 * (lbl_805DF928 * (lbl_805DF92C * t));
        q.x0 = lbl_805DF920 - s;
        q.y0 = 200.0f - s;
        q.x1 = lbl_805DF920 + s;
        q.y1 = 200.0f + s;
        q.u0 = lbl_805DF934;
        q.v0 = lbl_805DF938;
        q.u1 = lbl_805DF93C;
        q.v1 = lbl_805DF940;
        draw_textured_quad_at_depth(&q, lbl_805DF91C / farg0);
        TWindowSubStatusDisp::get_player();
        TObjPlayer::reset_transform_state();
    }
}
#pragma pop

}
