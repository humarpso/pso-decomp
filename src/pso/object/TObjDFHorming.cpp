#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_boss_active__13TObjDFHormingFv(void);

u32 TBoss4DarkFalz__sub_8004C1AC();
s32 get_action_state__14TBoss4DarkFalzFPv();

u8 is_boss_active__13TObjDFHormingFv(void) {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1AC() != 0U) {
        TBoss4DarkFalz__sub_8004C1AC();
        if (get_action_state__14TBoss4DarkFalzFPv() != 3) {
            TBoss4DarkFalz__sub_8004C1AC();
            if (get_action_state__14TBoss4DarkFalzFPv() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

}
