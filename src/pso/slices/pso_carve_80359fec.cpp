#include "types.h"

extern "C" {

int fn_80359FC4(void*);
int fn_803D9214(void*, void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int fn_803D9B2C(void);
int fn_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
int fn_803DA798(void*);
int TObjBoss2Tunnel__sub_803DB470(void*);
void TBoss6CrushRock__vt2(void* p);

void TBoss6CrushRock__vt2(void* p) { if (fn_80359FC4(p) != 0) { fn_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x24); fn_803D9214((void*)0, *(void**)((char*)p + 0x40)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x3c)); TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x44)); fn_803DA798(*(void**)((char*)p + 0x20)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0x1c)); fn_803D9B78(); } }

}
