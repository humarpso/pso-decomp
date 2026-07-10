#include "types.h"

extern "C" {

void TPlayerBattleCtrl4P__vt21(void* p);
int TPlayerBattleCtrl4P__sub_803101D4(void*);
int TPlayerBattleCtrl4P__sub_803112A4(void*, void*);
int fn_8031012C(void*);
int update_players__19TPlayerBattleCtrl4PFv(void*);

void TPlayerBattleCtrl4P__vt21(void* p) { if (fn_8031012C(p) != 0) { TPlayerBattleCtrl4P__sub_803101D4(p); update_players__19TPlayerBattleCtrl4PFv(p); TPlayerBattleCtrl4P__sub_803112A4(p, (void*)5); } }

}
