#include "types.h"

extern "C" {

int fn_80338B88(void* p);
int TEneParticleCtrl__vt7(void* p);
int fn_80338D50(void*);

int fn_80338B88(void* p) { return (*(u16*)((char*)p + 0x0) >> 2) & 0x1; }
int TEneParticleCtrl__vt7(void* p) { return fn_80338D50(p); }
int fn_80338BB4(void) { return 0; }
int fn_80338BE0(void) { return 0; }

}
