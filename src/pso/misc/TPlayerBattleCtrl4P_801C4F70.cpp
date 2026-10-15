#include "types.h"
#include "pso/misc/TPlayerBattleCtrl4P.h"

extern "C" {

s32 TPlayerBattleCtrl4P::get_state() { return *(s32*)((char*)this + 0x0); }
void TPlayerBattleCtrl4P::set_battle_mode(s32 v) { *(s32*)((char*)this + 0x14) = v; }

}
