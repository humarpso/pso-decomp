#include "types.h"
#include "pso/ui/TAdScrollWinGC.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"

extern "C" {

s32 draw_textured_quad_at_depth(void *, f32);
s32 begin_screen_draw(int);
s32 set_draw_texture_and_color(int, int);

extern s32 scroll_win_texture_handle;
extern const f32 lbl_805DF698;

void TAdScrollWinGC::render_status_value() {
    u8 *arg0 = (u8 *)this;
    begin_screen_draw((int) (1));
    TObjFish::set_global_param((s32)((void *) (scroll_win_texture_handle)));
    set_draw_texture_and_color((int) (0), (int) ((*(s32 *)&this->m_3c << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x1C), (f32) (lbl_805DF698));
    TWindowSubStatusDisp::get_player();
}

}
