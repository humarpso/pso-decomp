#include "types.h"

extern "C" {

void draw_parts__10TBoss6MineFPv(void* p);
int draw__10TBoss6MineFPv(void*);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int fn_803D9214(void*, void*);
int fn_803D9B2C(void*);
int fn_803D9B78(void);

void draw_parts__10TBoss6MineFPv(void* p) { fn_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); fn_803D9214((void*)0, *(void**)((char*)p + 0x390)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x394)); fn_803D9214((void*)0, *(void**)((char*)p + 0x398)); draw__10TBoss6MineFPv(p); fn_803D9B78(); }

}
