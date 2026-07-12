#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcARM00__vt88(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TObjNpcARM00__vt88(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x40003B08, arg0 + 0x38, 0, 0);
}

}
