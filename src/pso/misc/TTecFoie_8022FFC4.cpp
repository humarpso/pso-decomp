#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecFoie__vt4(s32 arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);

void TTecFoie__vt4(s32 arg0) {
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DC);
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DD);
}

}
