#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80101008(void);
M2C_UNK TAdRicoRing__sub_8001BEE8(M2C_UNK *, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK TParticleCtrl__sub_801E2F20();

extern M2C_UNK lbl_805D53EC;

void TObjPlayer__sub_80101008(void) {
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 2) != 0) {
        TParticleCtrl__sub_801E2F20();
        TAdRicoRing__sub_8001BEE8(&lbl_805D53EC, 2);
    }
}

}
