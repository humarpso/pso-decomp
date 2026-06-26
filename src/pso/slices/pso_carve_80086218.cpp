#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803280C8(M2C_UNK);

void TParticleCtrl__sub_80086218(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x2000);
    fn_803280C8(0x1F);
}

}
