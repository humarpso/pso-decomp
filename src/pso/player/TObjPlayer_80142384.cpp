#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TObjPlayer__sub_80142384(u16 arg0, u16 arg1);

u16 TObjPlayer__sub_80142384(u16 arg0, u16 arg1) {
    return (u16) (arg0 + ((s16) ((u16) arg1 - arg0) >> 1));
}

}
