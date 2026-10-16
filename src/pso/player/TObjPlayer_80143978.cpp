#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

s32 TPlyPhotonChair__sub_80143930(void* p);

void*TObjPlayer::get_anim_entry(int a1) {  return (char*)(*(int*)((char*)this + 0xd8)) + a1 * 16; }

}
