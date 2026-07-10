#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__11TOVS2Wall01Fi(s32 arg0);
M2C_UNK TOVS2Wall01__sub_8017BC10(s32, s32);
M2C_UNK fn_80087350(s32, M2C_UNK);
M2C_UNK fn_80154764(s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void init__11TOVS2Wall01Fi(s32 arg0) {
    s32 var_r31;

    fn_80154764(arg0, 0, 1);
    var_r31 = 7;
    do {
        TOVS2Wall01__sub_8017BC10(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 <= 0xF);
    fn_80087350(arg0 + 0x38, 0x45);
    fn_80087350(arg0 + 0x38, 0x46);
    fn_8022675C(0x4004BC05, arg0 + 0x38, 0, 0);
}

}
