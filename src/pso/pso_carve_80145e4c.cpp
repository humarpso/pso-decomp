#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_803F517C(u8 *);

s32 fn_80145E4C(void) {
    u8 sp8;

    if ((fn_803F517C(&sp8) == 0) && (sp8 == 0)) {
        return 1;
    }
    return 0;
}

}
