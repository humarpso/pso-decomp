#include "types.h"

extern "C" {
void rotate_matrix_y(u32, s32);
s32 push_matrix(void);
s32 pop_matrix(void);
f32 post_translate_matrix(void);
void draw_trail_strip__10TObjPlayerFPvPvi(s32, s32, s32);
extern const f32 lbl_805D9864;
void draw_trail_pair__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void draw_trail_pair__10TObjPlayerFPv(u8 *arg0) {
    push_matrix();
    ((f32 (*)(void *))post_translate_matrix)(arg0 + 0x20);
    rotate_matrix_y(0U, *(s32 *)((s8 *)arg0 + 0x34));
    draw_trail_strip__10TObjPlayerFPvPvi((s32) (arg0 + 0x40), 6, *(f32 *)((s8 *)arg0 + 0x2C) < lbl_805D9864);
    draw_trail_strip__10TObjPlayerFPvPvi((s32) (arg0 + 0xA0), 6, *(f32 *)((s8 *)arg0 + 0x2C) < lbl_805D9864);
    pop_matrix();
}

}
