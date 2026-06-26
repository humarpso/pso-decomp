#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007EB94(M2C_UNK);
M2C_UNK fn_801FC858(s32, M2C_UNK);
s32 fn_801FC900();
M2C_UNK fn_801FCCCC(s32, M2C_UNK);
u32 fn_801FCCD4(s32);
M2C_UNK fn_80200690(s32, s32);
u32 fn_80201204(s32, M2C_UNK);

s32 fn_80201168(s32 arg0) {
    s32 var_r29;
    u32 temp_r30;
    u32 temp_r31;

    var_r29 = fn_8007EB94(0x1156C);
    if (var_r29 != 0) {
        var_r29 = fn_801FC900();
    }
    fn_80200690(var_r29, arg0);
    temp_r30 = fn_801FCCD4(var_r29);
    fn_801FCCCC(var_r29, 0);
    temp_r31 = fn_80201204(var_r29, 0x1156C);
    fn_801FC858(var_r29, 1);
    if (temp_r30 == temp_r31) {
        return 1;
    }
    return 0;
}

}
