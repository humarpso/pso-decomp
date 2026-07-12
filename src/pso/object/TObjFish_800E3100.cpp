#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFish__sub_800E3100(void *arg0);
M2C_UNK TObjFish__sub_800E3188(void *, M2C_UNK);

void TObjFish__sub_800E3100(void *arg0) {
    TObjFish__sub_800E3188(arg0, 1);
}

}
