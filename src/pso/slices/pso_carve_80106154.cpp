#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80104404();
s32 fn_8030A7B0();

u8 TItemDrop__sub_80106154(void) {
    int var_r31;

    var_r31 = 0;
    if ((fn_8030A7B0() != 1) && (fn_80104404() == 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
