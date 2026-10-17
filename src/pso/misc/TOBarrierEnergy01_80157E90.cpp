#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"
#include "pso/misc/TOBarrierEnergy01.h"

extern "C" {

void TOBarrierEnergy01::vfunc_16() { ((TUnk_804AFBF8 *)this)->update_anim_phase(); ((TOBarrierEnergy01 *)this)->play_ambient_loop_sound(); this->m_ac = 2; }

}
