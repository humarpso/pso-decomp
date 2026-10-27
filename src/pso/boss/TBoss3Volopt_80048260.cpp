#include "types.h"
#include "pso/math/MatrixVector.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/player/TUnk_80484840.h"
#include "pso/player/TObjPlayer.h"

typedef struct Vec_80048260 {
    f32 x, y, z;
} Vec_80048260;

typedef struct Obj_80048260 {
    u8 pad0[0x1C];
    Vec_80048260 *pos;
    Vec_80048260 *dir;
    s32 timer;
    s32 rotY;
    s32 rotZ;
    u8 pad30[0x40 - 0x30];
    f32 unk40;
} Obj_80048260;

typedef struct Color_80048260 {
    u8 r, g, b, a;
} Color_80048260;

extern "C" {
void draw_line_list(void *, s32, s32);
void vec3_add_to(void *, void *);
void matrix_mult_vec(s32, void *, void *);
void rotate_matrix_y(s32, s32);
void rotate_matrix_x(s32, s32);
void push_matrix(void);
extern Vec_80048260 direction_line_zero_vec;
extern Color_80048260 direction_line_color_pair[];
extern u8 boss3_volopt_direction_line_desc[];
extern Vec_80048260 boss3_volopt_direction_line_points[];

void TUnk_80484840::render() {
    Obj_80048260 *self = (Obj_80048260 *)this;
    Vec_80048260 *dst;
    s32 a;
    if (self->timer < 10) {
        a = (self->timer << 7) / 10;
        direction_line_color_pair[0].a = a;
        direction_line_color_pair[0].a = a;
    }
    VecCopy((Vec *)&boss3_volopt_direction_line_points[0], (const Vec *)self->pos);
    dst = &boss3_volopt_direction_line_points[1];
    VecCopy((Vec *)dst, (const Vec *)self->dir);
    push_matrix();
    set_matrix_identity(0);
    {
        Vec_80048260 v = direction_line_zero_vec;
        v.z = self->unk40;
        rotate_matrix_x(0, self->rotY);
        rotate_matrix_y(0, self->rotZ);
        matrix_mult_vec(0, &v, &v);
        vec3_add_to(dst, &v);
    }
    pop_matrix();
    TObjPlayer::init_xyz_limits();
    draw_line_list(boss3_volopt_direction_line_desc, 1, 5);
    TObjPlayer::reset_transform_state();
}

}
