#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801B5408(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TPlayerBattleCtrl4P__sub_803112A4(void *, M2C_UNK);

void TPlayerBattleCtrl4P__vt30(void *arg0) {
    s32 var_r31;
    u32 ret;

    var_r31 = 0;
    do {
        ret = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (ret != 0U) {
            TObjPlayer__sub_801B5408(ret, -1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    M2C_FIELD(arg0, s32 *, 0x240) = 0xF;
    TPlayerBattleCtrl4P__sub_803112A4(arg0, 1);
}

}
