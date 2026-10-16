#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"

extern "C" {

void draw_textured_quad_at_depth(void *, f32);
void begin_screen_draw(int);
void set_draw_texture_and_color(void *, void *);

extern void *status_disp_texture_handle;
extern const f32 lbl_805DDF38;

void TWindowSubStatusDisp::render_status() {
    begin_screen_draw(1);
    TObjFish::set_global_param((s32)status_disp_texture_handle);
    set_draw_texture_and_color(*(void * *)&this->m_20, *(void **)((s8 *)this + 0x80));
    draw_textured_quad_at_depth((void *)((char *)this + 68), lbl_805DDF38);
    TWindowSubStatusDisp::get_player();
}

}
