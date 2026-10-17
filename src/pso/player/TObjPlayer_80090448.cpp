#include "types.h"
#include "pso/enemy/TObjEneBalClaw.h"
#include "pso/player/TObjPlayer.h"

void TObjEneBalClaw::set_attack_distance_flag() { this->m_388 |= 0x10000; }
int TObjPlayer::get_flag_0x388_b24() { return (*(u32 *)&this->unk_388 >> 24) & 0x1; }
