#include "types.h"

extern "C" {

void TParticleCtrl__sub_80088000(void* p);
void TParticleCtrl__sub_80088010(void* p);

void TParticleCtrl__sub_80088000(void* p) { *(u16*)((char*)p + 0x2c) &= 0xfffe; }
void TParticleCtrl__sub_80088010(void* p) { *(u16*)((char*)p + 0x2c) |= 0x1; }

}
