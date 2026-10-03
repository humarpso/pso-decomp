#include "types.h"
typedef s32 M2C_UNK;
struct Self_8017E900 { u8 pad[0x38]; u8 pos[0x60 - 0x38]; s32 f60; u8 pad64[0xA8 - 0x64]; f32 fa8; };

extern "C" {
M2C_UNK push_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
s32 get_bml_motion(void *, s32);
s32 get_bml_model(void *, s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK pop_matrix();
extern void *lbl_805D5B10;
void draw_model__10TButterflyFPv(Self_8017E900 *self);
}

extern "C" {

void draw_model__10TButterflyFPv(Self_8017E900 *self) {
    push_matrix();
    post_translate_matrix(self->pos);
    rotate_matrix_y(0, self->f60);
    rotate_matrix_x(0, -0x2000);
    draw_ginja_model_with_motion(get_bml_model(lbl_805D5B10, 0), get_bml_motion(lbl_805D5B10, 0), self->fa8);
    pop_matrix();
}

}
