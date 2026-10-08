#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    rotate_matrix_y(0U, M2C_FIELD(arg0, s32 *, 0x34));
    draw_trail_strip__10TObjPlayerFPvPvi((s32) (arg0 + 0x40), 6, M2C_FIELD(arg0, f32 *, 0x2C) < lbl_805D9864);
    draw_trail_strip__10TObjPlayerFPvPvi((s32) (arg0 + 0xA0), 6, M2C_FIELD(arg0, f32 *, 0x2C) < lbl_805D9864);
    pop_matrix();
}

}
