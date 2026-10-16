#include "types.h"
#include "pso/misc/TOBarrierEnergy01.h"

extern "C" {

void vfunc_16__17TOBarrierEnergy01Fv(void* p);

void TOBarrierEnergy01::vfunc_16() { ((TOBarrierEnergy01 *)this)->update_anim_phase(); ((TOBarrierEnergy01 *)this)->play_ambient_loop_sound(); *(int*)((char*)this + 0xac) = 2; }

}
