#include "types.h"

extern "C" {

int TBoss6MagMine__sub_803689D8(void*);
int fn_803D9214(void*, void*);
int fn_803D9B2C(void*);
int fn_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
void TBoss6MagMine__sub_80368A6C(void* p);

void TBoss6MagMine__sub_80368A6C(void* p) { fn_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); fn_803D9214((void*)0, *(void**)((char*)p + 0x3ac)); TBoss6MagMine__sub_803689D8(p); fn_803D9B78(); }

}
