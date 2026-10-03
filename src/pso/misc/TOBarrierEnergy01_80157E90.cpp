#include "types.h"

extern "C" {

void TOBarrierEnergy01__vt14(void* p);

int play_ambient_loop_sound__17TOBarrierEnergy01Fi(void*);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

void TOBarrierEnergy01__vt14(void* p) { update_anim_phase__17TOBarrierEnergy01FPv(p); play_ambient_loop_sound__17TOBarrierEnergy01Fi(p); *(int*)((char*)p + 0xac) = 2; }

}
