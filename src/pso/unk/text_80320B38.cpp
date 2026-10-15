#include "types.h"

struct Q_80320B38 { u8 b[0x20]; };

struct W_80320B38 { u8 pad[0x1C]; Q_80320B38 q[5]; s32 tex; };

extern "C" {
s32 set_global_param__8TObjFishFi(void *);
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
extern s32 TAdGameStartShadowGC__texture_list;
extern const f32 lbl_805DF478;
void fn_80320B38(W_80320B38 *arg0);
}

extern "C" {

void fn_80320B38(W_80320B38 *arg0) {
    u32 i;
    begin_screen_draw(1);
    set_global_param__8TObjFishFi((void *)TAdGameStartShadowGC__texture_list);
    set_draw_texture_and_color(0, arg0->tex);
    for (i = 0; i < 5; i++) {
        draw_textured_quad_at_depth(&arg0->q[i], lbl_805DF478);
    }
    get_player__20TWindowSubStatusDispFv();
}

}
