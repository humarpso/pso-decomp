#include "types.h"
#include "pso/TAdGameStartLineGC.h"
#include "pso/object/TObjFish.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubStatusDisp_803DEE6C.h"

struct Quad_80320DE8 {
    f32 x0, y0, x1, y1;
    f32 u0, v0, u1, v1;
};

struct TAdGameStartLineGC_80320DE8 {
    u8 pad0[0x9C];
    Quad_80320DE8 cur[4];
    u8 pad11C[0x3C];
    s32 f158;
};

extern "C" {
extern void *lbl_805D6C18;
void fn_80320DE8(TAdGameStartLineGC_80320DE8 *self);
}

#pragma push
#pragma fp_contract on
void fn_80320DE8(TAdGameStartLineGC_80320DE8 *self) {
    u32 i;

    begin_screen_draw(1);
    TObjFish::set_global_param((s32)lbl_805D6C18);
    set_draw_texture_and_color(0, self->f158);
    for (i = 0; i < 4; i++) {
        draw_textured_quad_at_depth(&self->cur[i].x0, 0.0001f * i + 0.795f);
    }
    TWindowSubStatusDisp::get_player();
}
#pragma pop
