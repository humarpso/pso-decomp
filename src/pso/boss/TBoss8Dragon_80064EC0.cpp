#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_80064EC0(s32 arg0, s32 arg1);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);

void TBoss8Dragon__sub_80064EC0(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x560, 0, 0);
}

void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    TBoss3Volopt__sub_8022675C(arg1, arg0 + 0x560, 0, 0);
}

}
