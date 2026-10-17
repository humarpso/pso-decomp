#include "types.h"
#include "pso/player/TObjPlayer.h"

    extern int player_battle_param_table[];
int TObjPlayer::get_battle_param(int a0) {  return player_battle_param_table[a0]; }
