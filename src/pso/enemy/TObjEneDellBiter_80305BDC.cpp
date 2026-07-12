#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_effect__16TObjEneDellBiterFi(s32 arg0);
s32 TObjEneDellBiter__sub_803059BC(s32, s32);
M2C_UNK TObjEneGibbles__sub_800D8988(s32);
s32 TObjEnePanarms__sub_800F5EB4(s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);

void update_attack_effect__16TObjEneDellBiterFi(s32 arg0) {
    if (TObjEneDellBiter__sub_803059BC(arg0, arg0 + 0x38) != 0) {
        TObjEneGibbles__sub_800D8988(arg0 + 0x38);
        return;
    }
    TBoss3Volopt__sub_8022675C((s32)TObjEnePanarms__sub_800F5EB4(arg0, 0x40039E11), arg0 + 0x38, 0, 0);
}

}
