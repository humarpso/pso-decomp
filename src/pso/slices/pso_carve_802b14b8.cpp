#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Tube__sub_802B129C();

void TBoss6Tube__sub_802B14B8(s32 arg0) {
    TBoss6Tube__sub_802B129C();
    TOTrapAncient01__sub_80226578(0x40033520, arg0, 0, 0, 0);
}

}
