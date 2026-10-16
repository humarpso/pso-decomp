#include "types.h"
#include "pso/misc/TOBarrierEnergy01.h"

extern "C" {

void TOBarrierEnergy01__vt14(void* p);

void TOBarrierEnergy01__vt14(void* p) { ((TOBarrierEnergy01 *)p)->update_anim_phase(); ((TOBarrierEnergy01 *)p)->play_ambient_loop_sound(); *(int*)((char*)p + 0xac) = 2; }

}
