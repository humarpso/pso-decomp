#include "types.h"

extern "C" {

void render_status_box__20TWindowSubStatusDispFPv(u8 *arg0);
s32 set_global_param__8TObjFishFi(void *);
s32 draw_textured_quad_at_depth(void *, f32);
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 set_draw_texture_and_color(int, int);

extern s32 lbl_805D6E88;
extern const f32 lbl_805DFD60;

void render_status_box__20TWindowSubStatusDispFPv(u8 *arg0) {
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D6E88));
    set_draw_texture_and_color((int) (0), (int) ((*(s32 *)((s8 *)arg0 + 0x74) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x54), (f32) (lbl_805DFD60));
    get_player__20TWindowSubStatusDispFv();
}

}
