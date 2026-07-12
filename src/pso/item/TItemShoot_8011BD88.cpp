#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemShoot__sub_8011BD88(void);
M2C_UNK TItemShootParticle__sub_8011B704(s32, M2C_UNK, M2C_UNK);
s32 spawn_shoot_particle__10TObjPlayerFUiiif();

s32 TItemShoot__sub_8011BD88(void) {
    s32 temp_r3;

    temp_r3 = spawn_shoot_particle__10TObjPlayerFUiiif();
    if (temp_r3 != 0) {
        TItemShootParticle__sub_8011B704(temp_r3, 0x12, 0);
    }
    return temp_r3;
}

}
