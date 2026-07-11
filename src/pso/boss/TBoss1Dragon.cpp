#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss1Dragon__sub_80029214(void *arg0);

M2C_UNK TBoss1Dragon__sub_800291F4(void *, M2C_UNK);

void TBoss1Dragon__sub_80029214(void *arg0) {
    TBoss1Dragon__sub_800291F4(arg0, 0);
}

}
