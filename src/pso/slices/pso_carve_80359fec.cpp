#include "types.h"

extern "C" {

int fn_80359FC4(void*);
int fn_803D9214(void*, void*);
int fn_803D929C(void*, void*);
int fn_803D96A8(void*, void*);
int fn_803D9B2C(void);
int fn_803D9B78(void);
int fn_803D9C00(void*);
int fn_803DA798(void*);
int fn_803DB470(void*);
void TBoss6CrushRock__vt2(void* p);

void TBoss6CrushRock__vt2(void* p) { if (fn_80359FC4(p) != 0) { fn_803D9B2C(); fn_803D9C00((char*)p + 0x24); fn_803D9214((void*)0, *(void**)((char*)p + 0x40)); fn_803D96A8((void*)0, *(void**)((char*)p + 0x3c)); fn_803D929C((void*)0, *(void**)((char*)p + 0x44)); fn_803DA798(*(void**)((char*)p + 0x20)); fn_803DB470(*(void**)((char*)p + 0x1c)); fn_803D9B78(); } }

}
