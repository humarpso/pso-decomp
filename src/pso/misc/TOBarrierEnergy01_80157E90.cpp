#include "types.h"

extern "C" {

void TOBarrierEnergy01__vt14(void* p);

int play_ambient_loop_sound__17TOBarrierEnergy01Fv(void*);
int update_anim_phase__17TOBarrierEnergy01Fv(void*);

void TOBarrierEnergy01__vt14(void* p) { update_anim_phase__17TOBarrierEnergy01Fv(p); play_ambient_loop_sound__17TOBarrierEnergy01Fv(p); *(int*)((char*)p + 0xac) = 2; }

}
