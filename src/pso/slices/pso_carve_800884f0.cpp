#include "types.h"

extern "C" {

int TParticleCtrl__sub_800884F0(void* p);
void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b);
int fn_80020898(void*);

int TParticleCtrl__sub_800884F0(void* p) { return fn_80020898((char*)p + 0x98); }
int TParticleCtrl__sub_80088514(void) { return 0; }
int TParticleCtrl__sub_80088548(void) { return 0; }
void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xa4) = a; *(f32*)((char*)p + 0xa8) = b; }

}
