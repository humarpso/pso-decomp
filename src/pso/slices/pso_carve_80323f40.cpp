#include "types.h"

extern "C" {

int TBoss6Mine__sub_80323EAC(void*);
int fn_803D9214(void*, void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int fn_803D9B2C(void*);
int fn_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
void TBoss6Mine__sub_80323F40(void* p);

void TBoss6Mine__sub_80323F40(void* p) { fn_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); fn_803D9214((void*)0, *(void**)((char*)p + 0x390)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x394)); fn_803D9214((void*)0, *(void**)((char*)p + 0x398)); TBoss6Mine__sub_80323EAC(p); fn_803D9B78(); }

}
