#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKeyJungleMain__vt20(s32 arg0);

s32 TOKeyMachine01__sub_802034A8(void);
M2C_UNK fn_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TOKeyJungleMain__vt20(s32 arg0) {
    M2C_UNK var_r31;
    s32 temp_r3;

    var_r31 = 0x4AD12;
    temp_r3 = TOKeyMachine01__sub_802034A8();
    switch (temp_r3) {
    case 34:
        var_r31 = 0x4004AD12;
        break;
    case 35:
        var_r31 = 0x4004AD12;
        break;
    }
    fn_8022675C(var_r31, arg0 + 0x38, 0, 0);
}

}
