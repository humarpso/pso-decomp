#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80102C80(s32);
u32 fn_80102C90(s32, s32);
void *fn_8010A768();
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

s16 fn_801011DC(u16 arg0) {
    s32 temp_r3;
    s32 var_acc;
    s32 var_cnt;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    var_acc = 0;
    if (temp_r3 != 0) {
        var_cnt = 9;
        do {
            if (fn_80102C90(temp_r3, var_cnt) != 0U) {
                var_acc += M2C_FIELD(fn_8010A768(), s16 *, 2);
            }
            var_cnt += 1;
        } while (var_cnt != 0xD);
        return (s16) (fn_80102C80(temp_r3) - var_acc);
    }
    return 0;
}

}
