#include "types.h"

extern "C" {

int fn_80154E3C(void*);
int fn_803D8934(void*, void*, void*);
int fn_803D8CD4(void*);
int fn_803D9214(void*, void*);
int fn_803D9B2C(void*);
int fn_803D9B78(void);
int fn_803D9C00(void*);
int fn_8002B3F4(void* a0 = 0);
int fn_8002B42C(void* a0 = 0);
void fn_8002B35C(void* p);
void fn_8002B37C(void* p, void* a1, void* a2);
void fn_8002B358(void);

void fn_8002B358(void) {  }
void fn_8002B35C(void* p) { fn_8002B3F4(p); }
void fn_8002B37C(void* p, void* a1, void* a2) { fn_803D9B2C(p); fn_803D8CD4((void*)0); fn_803D9C00(a1); fn_803D9214((void*)0, a2); fn_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); fn_803D9B78(); *(void**)((char*)p + 0x60) = a2; fn_80154E3C(p); fn_8002B42C(p); }
int fn_8002B3F4(void*) { return 0; }
int fn_8002B42C(void*) { return 0; }

}
