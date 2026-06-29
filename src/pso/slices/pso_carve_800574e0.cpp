#include "types.h"

extern "C" {

int TBoss4Type2__sub_80057270(void*);
int fn_800D8A2C(void*);
int fn_801E2F20(void);
int fn_803D9214(void*, void*);
int fn_803D9B2C(void);
int fn_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
void TBoss4Type2__sub_800574E0(void* p);

void TBoss4Type2__sub_800574E0(void* p) { fn_800D8A2C(p); fn_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); fn_803D9214((void*)0, *(void**)((char*)p + 0x60)); TBoss4Type2__sub_80057270(p); fn_803D9B78(); fn_801E2F20(); }

}
