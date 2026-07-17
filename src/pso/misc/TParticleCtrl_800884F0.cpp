#include "types.h"

extern "C" {

int TParticleCtrl__sub_800884F0(void* p);
void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b);
int copy_xyz__10TObjPlayerFPvPv(void*);

int TParticleCtrl__sub_800884F0(void* p) { return copy_xyz__10TObjPlayerFPvPv((char*)p + 0x98); }

}
