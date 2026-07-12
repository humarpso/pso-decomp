#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80083FBC(void);
s32 TObjPlayer__sub_80083F9C();
s32 TObjPlayer__sub_80084854();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_main_phase();

s32 TObjPlayer__sub_80083FBC(void) {
    s32 flag;
    s32 counter;

    flag = 1;
    if (TObjPlayer__sub_80083F9C() == 0) {
        return 0;
    }
    if (get_main_phase() == 0xF) {
        counter = 0;
        do {
            if ((TPlayerBattleCtrl4P__sub_801BA74C(counter) != 0U) && (TObjPlayer__sub_80084854() == 0)) {
                flag = 0;
            }
            counter += 1;
        } while (counter < 4);
    }
    return flag;
}

}
