#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_linked_effect__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
M2C_UNK post_translate_matrix(void *, f32);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, void *);
M2C_UNK draw_blob_shadow(int);
s32 project_actor_to_ground(void *, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 TObjEnePanarms__data_805DA530;
extern const f32 lbl_805DA58C;
extern const f32 lbl_805DA590;

void update_linked_effect__14TObjEnePanarmsFPv(u8 *arg0) {
    struct { u8 b[0x10]; } sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f1;
    s32 temp_r0;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3A4), (void *) (arg0 + 0x3E0));
    if (project_actor_to_ground((void *) (arg0), (void *) (arg0 + 0x3A4), (void *) (&sp10)) != 0) {
        push_matrix();
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3A8);
        M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (temp_f1 + lbl_805DA58C);
        post_translate_matrix((void *) (arg0 + 0x3A4), (f32) (temp_f1));
        direction_to_rotation_xz((void *) (&sp10), (void *) (&spC), (void *) (&sp8));
        rotate_matrix_z((int) (0), (int) (sp8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        rotate_matrix_x((int) (0), (void *) (spC + 0x4000));
        scale_matrix((int) (0), (f32) (lbl_805DA590), (f32) (lbl_805DA590), (f32) (TObjEnePanarms__data_805DA530));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x378);
        if ((temp_r0 != 7) && (temp_r0 != 8)) {
            draw_blob_shadow((int) (0));
        }
        pop_matrix();
    }
}

}
