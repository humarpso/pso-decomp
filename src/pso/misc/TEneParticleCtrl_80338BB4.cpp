#include "types.h"

extern "C" {

int fn_80338B88(void* p);
void TEneParticleCtrl__sub_80338BB4(void* p);
void TEneParticleCtrl__sub_80338BE0(void* p);
int TBoss4Type2__sub_800875C0(void*);
int TParticleCtrl__sub_80088010(void*);

void TEneParticleCtrl__sub_80338BB4(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) TBoss4Type2__sub_800875C0(m); }
void TEneParticleCtrl__sub_80338BE0(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) TParticleCtrl__sub_80088010(m); }

}
