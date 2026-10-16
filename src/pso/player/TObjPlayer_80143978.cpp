#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

s32 TPlyPhotonChair__sub_80143930(void* p);

void*TObjPlayer::get_anim_entry(int a1) {  return (char*)(*(int *)&this->m_d8) + a1 * 16; }

}
