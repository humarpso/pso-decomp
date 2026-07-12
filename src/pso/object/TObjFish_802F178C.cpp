#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_default_particle__8TObjFishFv(void);
M2C_UNK spawn_particle__8TObjFishFiif(f32);

extern const f32 lbl_805DEC90;

void spawn_default_particle__8TObjFishFv(void) {
    spawn_particle__8TObjFishFiif(lbl_805DEC90);
}

}
