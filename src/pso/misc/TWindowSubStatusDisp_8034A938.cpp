#include "types.h"
#include "pso/TAdGameStartShineGC.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"

extern "C" {

s32 draw_textured_quad_at_depth(void *, f32);
void begin_screen_draw(s32 arg0);
void set_draw_texture_and_color(s32 idx, s32 arg1);

extern s32 lbl_805D6E88;
extern const f32 lbl_805DFD60;

void TAdGameStartShineGC::render_status_box() {
    u8 *arg0 = (u8 *)this;
    begin_screen_draw((1));
    TObjFish::set_global_param((s32)((void *) (lbl_805D6E88)));
    set_draw_texture_and_color((0), ((*(s32 *)((s8 *)arg0 + 0x74) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x54), (f32) (lbl_805DFD60));
    TWindowSubStatusDisp::get_player();
}

}
