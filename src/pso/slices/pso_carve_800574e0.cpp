#include "types.h"

extern "C" {

int fn_80057270(void*);
int fn_800D8A2C(void*);
int fn_801E2F20(void);
int fn_803D9214(void*, void*);
int fn_803D9B2C(void);
int fn_803D9B78(void);
int fn_803D9C00(void*);
void fn_800574E0(void* p);

void fn_800574E0(void* p) { fn_800D8A2C(p); fn_803D9B2C(); fn_803D9C00((char*)p + 0x38); fn_803D9214((void*)0, *(void**)((char*)p + 0x60)); fn_80057270(p); fn_803D9B78(); fn_801E2F20(); }

}
