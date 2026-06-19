#include "types.h"
#include "dolphin/mtx.h"

#pragma scheduling off

void VecCopy(Vec* dst, const Vec* src) {
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}
