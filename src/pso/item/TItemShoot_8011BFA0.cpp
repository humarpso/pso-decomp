#include "types.h"

extern "C" {

void set_particle_flags__10TItemShootFPvs(void* p, s16 v);

void set_particle_flags__10TItemShootFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x60) = v; }

}
