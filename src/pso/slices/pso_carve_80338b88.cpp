#include "types.h"

extern "C" {

int fn_80338B88(void* p);
void TEneParticleCtrl__sub_80338BB4(void* p);
void TEneParticleCtrl__sub_80338BE0(void* p);
int TBoss4Type2__sub_800875C0(void*);
int TParticleCtrl__sub_80088010(void*);

int fn_80338B88(void* p) { return (*(u16*)((char*)p + 0x0) >> 2) & 0x1; }
int TEneParticleCtrl__vt7(void) { return 0; }
void TEneParticleCtrl__sub_80338BB4(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) TBoss4Type2__sub_800875C0(m); }
void TEneParticleCtrl__sub_80338BE0(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) TParticleCtrl__sub_80088010(m); }

}
