#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_rader_map_active();
M2C_UNK TTecRaFoie__sub_80226258(s32, s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void spawn_boss3_volopt_effect(s32 arg0) {
    if (is_rader_map_active() != 0) {
        s32 r = TBoss3Volopt__sub_8022675C(0x42A04, arg0 + 0x38, 0, 0);
        TTecRaFoie__sub_80226258(r, -0x800, 0);
    }
}

}
