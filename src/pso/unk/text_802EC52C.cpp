#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjFish__sub_802F18E8(void *);
void fn_802EC52C(M2C_UNK arg0, s32 arg1);
}

extern "C" {

void fn_802EC52C(M2C_UNK arg0, s32 arg1) {
    TObjFish__sub_802F18E8((void *) (arg1));
}

}
