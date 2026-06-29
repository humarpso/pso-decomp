#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801B5790();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TPlayerBattleCtrl4P__sub_803112A4(void* p, s32 v);

int TPlayerBattleCtrl4P__sub_80311294(void) { return 0; }
void TPlayerBattleCtrl4P__sub_803112A4(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }
int TPlayerBattleCtrl4P__sub_803112AC(void) { return 0; }
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
