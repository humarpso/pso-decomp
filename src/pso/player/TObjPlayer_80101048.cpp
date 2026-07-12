#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_particle_effect_once__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_8001BED8(M2C_UNK *, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK TParticleCtrl__sub_801E2EFC();

extern M2C_UNK lbl_805D53EC;

void play_particle_effect_once__10TObjPlayerFv(void) {
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 2) == 0) {
        TParticleCtrl__sub_801E2EFC();
        TObjPlayer__sub_8001BED8(&lbl_805D53EC, 2);
    }
}

}
