#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_work__12TBoss1DragonFi(s32 arg0);
M2C_UNK alloc_effect_node__12TBoss3VoloptFUisi(s32, M2C_UNK, s32);

void clear_work__12TBoss1DragonFi(s32 arg0) {
    alloc_effect_node__12TBoss3VoloptFUisi(arg0 + 0x38, 0xE0, arg0);
}

}
