#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80224B04(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0xA;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 0xC;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 0xC;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x64)) {
        return 0x10;
    }
    if (arg0 >= 0x65) {
        return 0x10;
    }
    return 0;
}

}
