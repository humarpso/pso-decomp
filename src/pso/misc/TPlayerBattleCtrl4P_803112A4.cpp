#include "types.h"

extern "C" {

s32 release_attached_resource__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);

void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }

}
