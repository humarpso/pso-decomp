#include "pso/system/vector.h"

void copy_xyz(void *dst, void *src) {
    ((u32 *)dst)[0] = ((u32 *)src)[0];
    ((u32 *)dst)[1] = ((u32 *)src)[1];
    ((u32 *)dst)[2] = ((u32 *)src)[2];
}
