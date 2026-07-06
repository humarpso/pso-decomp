#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOSwitchAttack__sub_80087278(void *, s32, M2C_UNK);

void fn_800274E4(u8 *arg0) {
    TOSwitchAttack__sub_80087278(arg0 + 0x38, M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 4), 0x40);
}

}
