#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80101CFC(s32, M2C_UNK *);
M2C_UNK init__9TItemDataFv(M2C_UNK *);
M2C_UNK fn_8010EC88(M2C_UNK *);

void fn_8011E7E4(s32 arg0) {
    M2C_UNK sp8[5];

    init__9TItemDataFv(sp8);
    fn_80101CFC(arg0, sp8);
    fn_8010EC88(sp8);
}

}
