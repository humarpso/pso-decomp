#include "types.h"

extern "C" {

void render_status__20TWindowSubStatusDispFPv(void *arg0);
void set_global_param__8TObjFishFi(void *);
void draw_textured_quad_at_depth(void *, f32);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv(void);
void set_draw_texture_and_color(void *, void *);

extern void *lbl_805D6648;
extern const f32 lbl_805DDF38;

void render_status__20TWindowSubStatusDispFPv(void *arg0) {
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D6648);
    set_draw_texture_and_color(*(void **)((s8 *)arg0 + 0x20), *(void **)((s8 *)arg0 + 0x80));
    draw_textured_quad_at_depth((void *)((char *)arg0 + 68), lbl_805DDF38);
    get_player__20TWindowSubStatusDispFv();
}

}
