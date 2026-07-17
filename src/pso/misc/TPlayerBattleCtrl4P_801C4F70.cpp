#include "types.h"

extern "C" {

s32 get_state__19TPlayerBattleCtrl4PFPv(void* p);
void set_battle_mode__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);

s32 get_state__19TPlayerBattleCtrl4PFPv(void* p) { return *(s32*)((char*)p + 0x0); }
void set_battle_mode__19TPlayerBattleCtrl4PFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }

}
