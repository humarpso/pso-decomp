#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 set_global_param__8TObjFishFl(s32);
s32 draw_textured_quad_at_depth(s32, f32);
s32 begin_screen_draw(s32);
s32 get_player__20TWindowSubStatusDispFv();
s32 set_draw_texture_and_color(s32, s32);

extern s32 lbl_805D6668;
extern f32 lbl_805DDF88;

void TWindowSubStatusDisp::render_status_pair(s32 arg1) {
    s32 arg0 = (s32)this;
    begin_screen_draw(1);
    set_global_param__8TObjFishFl(lbl_805D6668);
    set_draw_texture_and_color(0, arg1);
    draw_textured_quad_at_depth(arg0 + 0x1C, lbl_805DDF88);
    get_player__20TWindowSubStatusDispFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFl(lbl_805D6668);
    set_draw_texture_and_color(0, arg1);
    draw_textured_quad_at_depth(arg0 + 0x3C, lbl_805DDF88);
    get_player__20TWindowSubStatusDispFv();
}

}
