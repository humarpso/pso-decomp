#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"
#include "pso/misc/TOBarrierEnergy01.h"

extern "C" {

void vfunc_18__17TOBarrierEnergy01Fv(void* p);

void TOBarrierEnergy01::vfunc_18() { ((TUnk_804AFBF8 *)this)->update_anim_phase(); *(int *)&this->unk_AC = 0; ((TOBarrierEnergy01 *)this)->play_ambient_loop_sound(); }

}
