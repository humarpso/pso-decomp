#include "types.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/misc/TContainerAncient01.h"

extern "C" {

void TLazerFenceSw__sub_8018A554(void* p, f32 v);

int spawn_particle_effect(void*, void*);

void TUnk_804B6C24::vfunc_81() {  }
void TUnk_804B6C24::vfunc_80() {  }
void TUnk_804B6C24::vfunc_79() {  }
void TLazerFenceSw__sub_8018A554(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
void TContainerAncient01::trigger_spawn(void* p, void* a1, void* a2) { spawn_particle_effect(a1, a2); }

}
