#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TBoss4DarkFalz__sub_8004C1B4();
s32 fn_8004C1DC();

u8 fn_8004ADA8(void) {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1B4() != 0U) {
        TBoss4DarkFalz__sub_8004C1B4();
        if (fn_8004C1DC() != 3) {
            TBoss4DarkFalz__sub_8004C1B4();
            if (fn_8004C1DC() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

}
