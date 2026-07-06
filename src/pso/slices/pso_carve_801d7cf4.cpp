#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801D84CC(s32);
M2C_UNK bswap_32__FPUl();

void bswap__18TPlyDispConfigSmthFv(s32 arg0) {
    s32 var_r31;
    s32 temp_r30;
    s32 var_r29;

    bswap_32__FPUl();
    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r30 = arg0 + var_r31;
        fn_801D84CC(temp_r30 + 4);
        fn_801D84CC(temp_r30 + 0x14);
        var_r29 += 1;
        var_r31 += 4;
    } while (var_r29 < 4);
}

}
