#include "types.h"

extern "C" {

int fn_80338B88(void* p);
void fn_80338BB4(void* p);
void fn_80338BE0(void* p);
int fn_800875C0(void*);
int fn_80088010(void*);

int fn_80338B88(void* p) { return (*(u16*)((char*)p + 0x0) >> 2) & 0x1; }
int TEneParticleCtrl__vt7(void) { return 0; }
void fn_80338BB4(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) fn_800875C0(m); }
void fn_80338BE0(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) fn_80088010(m); }

}
