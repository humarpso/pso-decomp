#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8032013C(M2C_UNK);

void fn_8031D7E8(s32 arg0) {
    TOTrapAncient01__sub_80226578(fn_8032013C(0x4003AD07), arg0, arg0 + 0x38, 0, 0);
}

}
