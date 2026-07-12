#include "types.h"

extern "C" {

int TParticleCtrl__sub_800884F0(void* p);
void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b);
int TObjPlayer__sub_80020898(void*);

int TParticleCtrl__sub_800884F0(void* p) { return TObjPlayer__sub_80020898((char*)p + 0x98); }

}
