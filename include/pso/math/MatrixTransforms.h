#ifndef PSO_MATH_MATRIXTRANSFORMS_H
#define PSO_MATH_MATRIXTRANSFORMS_H

#include "types.h"

extern "C" {
void euler_yxz_to_quaternion(u8 *arg0, u8 *arg1);
void euler_zyx_to_quaternion(u8 *arg0, u8 *arg1);
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
}

#endif
