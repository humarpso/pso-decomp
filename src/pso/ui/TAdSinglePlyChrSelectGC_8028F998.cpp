#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8028F998(s32 arg0);

s32 TAdSinglePlyChrSelectGC__sub_8028F998(s32 arg0) {
    switch (arg0) {
    case 0x29:
        return 3;
    case 0x2C:
        return 4;
    case 0xFF:
        return -1;
    default:
        return -2;
    }
}

}
