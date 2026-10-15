#include "types.h"
#include "pso/misc/TContainerAncient01.h"

extern "C" {

void TLazerFenceSw__sub_8018A554(void* p, f32 v);
void fn_8018A548(void);
void fn_8018A54C(void);
void fn_8018A550(void);

int spawn_particle_effect(void*, void*);

void fn_8018A548(void) {  }
void fn_8018A54C(void) {  }
void fn_8018A550(void) {  }
void TLazerFenceSw__sub_8018A554(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
void TContainerAncient01::trigger_spawn(void* p, void* a1, void* a2) { spawn_particle_effect(a1, a2); }

}
