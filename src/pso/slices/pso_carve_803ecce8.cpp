#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_803ECCE8(u8 arg0) {
    if ((arg0 < 0x81U) || (arg0 > 0xFCU) || ((arg0 >= 0xA0U) && (arg0 < 0xE0U))) {
        return 0;
    }
    return 1;
}

}
