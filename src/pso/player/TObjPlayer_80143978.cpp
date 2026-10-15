#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

f32 get_float_c__15TPlyPhotonChairFv(void* p);
s32 TPlyPhotonChair__sub_80143930(void* p);
s32 get_id__15TPlyPhotonChairFv(void* p);
void activate__15TPlyPhotonChairFv(void* p);

void*TObjPlayer::get_anim_entry(int a1) {  return (char*)(*(int*)((char*)this + 0xd8)) + a1 * 16; }

}
