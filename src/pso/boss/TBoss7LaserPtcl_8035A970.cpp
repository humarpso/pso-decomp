#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7LaserPtcl__sub_8035A970(void *arg0);

extern const f32 lbl_805DE9F0;

void TBoss7LaserPtcl__sub_8035A970(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x4C));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DE9F0 - M2C_FIELD(arg0, f32 *, 0x24));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * M2C_FIELD(arg0, f32 *, 0x4C));
}

}
