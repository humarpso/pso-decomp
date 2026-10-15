#include "types.h"

extern "C" {

void render_status_value__20TWindowSubStatusDispFPv(u8 *arg0);
s32 set_global_param__8TObjFishFi(void *);
s32 draw_textured_quad_at_depth(void *, f32);
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 set_draw_texture_and_color(int, int);

extern s32 scroll_win_texture_handle;
extern const f32 lbl_805DF698;

void render_status_value__20TWindowSubStatusDispFPv(u8 *arg0) {
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (scroll_win_texture_handle));
    set_draw_texture_and_color((int) (0), (int) ((*(s32 *)((s8 *)arg0 + 0x3C) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x1C), (f32) (lbl_805DF698));
    get_player__20TWindowSubStatusDispFv();
}

}
