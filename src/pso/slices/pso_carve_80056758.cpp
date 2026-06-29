#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern f32 lbl_805D8BAC;

void TBoss4Type2__vt0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x3C;
}

}
