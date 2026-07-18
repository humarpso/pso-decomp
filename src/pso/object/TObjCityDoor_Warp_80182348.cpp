#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCityDoor_Warp__sub_80182348(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK update_technique_slot__10TTecRaFoieFi(M2C_UNK, M2C_UNK, M2C_UNK);

void TObjCityDoor_Warp__sub_80182348(s32 arg0) {
    update_technique_slot__10TTecRaFoieFi(TBoss3Volopt__sub_8022675C(0x42A05, arg0 + 0x38, 0, 0), -0x500, 0);
}

}
