#include "types.h"

extern "C" {

void TOBarrierEnergy01__vt16(void* p);

int TOBarrierEnergy01__sub_80157D28(void*);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

void TOBarrierEnergy01__vt16(void* p) { update_anim_phase__17TOBarrierEnergy01FPv(p); *(int*)((char*)p + 0xac) = 0; TOBarrierEnergy01__sub_80157D28(p); }

}
