#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801B5790();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TPlayerBattleCtrl4P__sub_803112A4(void* p, s32 v);

void TPlayerBattleCtrl4P__sub_803112BC(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
            TObjPlayer__sub_801B5790();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
