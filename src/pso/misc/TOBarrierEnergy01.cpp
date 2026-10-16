#include "types.h"
#include "pso/misc/TOBarrierEnergy01.h"

extern "C" {

void TOBarrierEnergy01__vt16(void* p);

void TOBarrierEnergy01__vt16(void* p) { ((TOBarrierEnergy01 *)p)->update_anim_phase(); *(int*)((char*)p + 0xac) = 0; ((TOBarrierEnergy01 *)p)->play_ambient_loop_sound(); }

}
