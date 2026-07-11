#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt34(u8 *arg0);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt34(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    fn_8022675C(0x40039E21, arg0 + 0x38, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

}
