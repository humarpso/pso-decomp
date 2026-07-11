#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2);
M2C_UNK TObjBoss2CeilJunk__sub_8003B07C(s32, M2C_UNK);

void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2) {
    TObjBoss2CeilJunk__sub_8003B07C(arg2, 0x121);
}

}
