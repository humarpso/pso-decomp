#ifndef PSO_MATH_MATRIXVECTOR_H
#define PSO_MATH_MATRIXVECTOR_H

#include "types.h"

extern "C" {
void rotate_matrix_about_axis(u8 *arg0, s32 arg1, s32 arg2);
void rotate_vector_by_matrix(u32 arg0);
void scale_matrix_vec3(u8 *arg0, u8 *arg1);
void set_matrix_identity(u8 *arg0);
void translate_matrix_vec3(u8 *arg0, u8 *arg1);
f32 vec_squared_length(u8 *arg0);
}

#endif
