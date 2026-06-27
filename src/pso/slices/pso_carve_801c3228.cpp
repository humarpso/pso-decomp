#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801AFFD0();
s32 fn_801BE648();
M2C_UNK fn_801C4F78(s32, s32);

s32 fn_801C3228(void) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3_2 = fn_801BE648();
    if (temp_r3_2 == 0) {
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801AFFD0();
    fn_801C4F78(temp_r3_2 + 0x7AC, temp_r3);
    return temp_r3;
}

}
