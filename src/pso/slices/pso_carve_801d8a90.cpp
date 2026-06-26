#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK init__17TPlyInventoryItemFv(s32);

s32 fn_801D8A90(s32 arg0) {
    s32 var_r30;
    s32 var_r31;

    var_r31 = 0;
    var_r30 = 0;
    do {
        init__17TPlyInventoryItemFv(arg0 + var_r30);
        var_r31 += 1;
        var_r30 += 0x1C;
    } while (var_r31 < 2);
    return arg0;
}

}
