#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_with_position_override__10TObjPlayerFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_800F09E8(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();

extern const f32 lbl_805D7D40;
extern const f32 TObjPlayer__data_805D7D44;

void render_with_position_override__10TObjPlayerFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 spC;
    s32 sp8;

    push_matrix();
    direction_to_rotation_xz((void *) (arg0 + 0x248), (void *) (&spC), (void *) (&sp8));
    translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (lbl_805D7D40 + M2C_FIELD(arg0, f32 *, 0x3C)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    rotate_matrix_z((int) (0), (int) (sp8));
    rotate_matrix_x((int) (0), (int) (spC));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (-0x4000));
    if (arg1 != NULL) {
        scale_matrix((int) (0), (f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 8)), (f32) (TObjPlayer__data_805D7D44));
    }
    TObjPlayer__sub_800F09E8((void *) (arg2));
    pop_matrix();
}

}
