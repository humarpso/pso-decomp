#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801B5790();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TPlayerBattleCtrl4P__sub_803112A4(void* p, s32 v);

void TPlayerBattleCtrl4P__sub_803112A4(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }

}
