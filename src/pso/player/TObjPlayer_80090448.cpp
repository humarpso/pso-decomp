#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::set_attack_distance_flag() { *(u32*)((char*)this + 0x388) |= 0x10000; }
int TObjPlayer::get_flag_0x388_b24() { return (*(u32*)((char*)this + 0x388) >> 24) & 0x1; }

}
