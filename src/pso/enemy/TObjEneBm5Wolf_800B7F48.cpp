#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B7F48(void *arg0);

extern f32 TObjEneBm5Wolf__data_805D9DB4;

void TObjEneBm5Wolf__sub_800B7F48(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TObjEneBm5Wolf__data_805D9DB4 + M2C_FIELD(arg0, f32 *, 0x40C));
}

}
