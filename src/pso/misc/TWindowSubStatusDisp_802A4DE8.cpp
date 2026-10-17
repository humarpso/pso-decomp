#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"

extern "C" {

void draw_textured_quad_at_depth(f32 *q, f32 depth);
void begin_screen_draw(s32 arg0);
void set_draw_texture_and_color(s32 idx, s32 arg1);

extern s32 lbl_805D6668;
extern f32 lbl_805DDF88;

void TWindowSubStatusDisp::render_status_pair(s32 arg1) {
    s32 arg0 = (s32)this;
    begin_screen_draw(1);
    TObjFish::set_global_param(lbl_805D6668);
    set_draw_texture_and_color(0, arg1);
    draw_textured_quad_at_depth((f32 *)(arg0 + 0x1C), lbl_805DDF88);
    TWindowSubStatusDisp::get_player();
    begin_screen_draw(1);
    TObjFish::set_global_param(lbl_805D6668);
    set_draw_texture_and_color(0, arg1);
    draw_textured_quad_at_depth((f32 *)(arg0 + 0x3C), lbl_805DDF88);
    TWindowSubStatusDisp::get_player();
}

}
