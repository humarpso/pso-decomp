#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_state_ready__14TBoss4DarkFalzFv(void);
u8 is_active__14TBoss4DarkFalzFv(void);
u32 TBoss4DarkFalz__sub_8004C1B4();
u32 TBoss4DarkFalz__sub_8004C1BC();
s32 TBoss4DarkFalz__sub_8004C1DC();
s32 TBoss4DarkFalz__sub_8004C1E4();

u8 is_state_ready__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1B4() != 0U) {
        TBoss4DarkFalz__sub_8004C1B4();
        if (TBoss4DarkFalz__sub_8004C1DC() != 3) {
            TBoss4DarkFalz__sub_8004C1B4();
            if (TBoss4DarkFalz__sub_8004C1DC() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

u8 is_active__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1BC() != 0U) {
        TBoss4DarkFalz__sub_8004C1BC();
        if (TBoss4DarkFalz__sub_8004C1E4() != 3) {
            TBoss4DarkFalz__sub_8004C1BC();
            if (TBoss4DarkFalz__sub_8004C1E4() != 4) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

}
