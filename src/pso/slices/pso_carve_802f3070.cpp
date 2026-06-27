#include "types.h"

extern "C" {

int TObjPlayer__sub_80154E3C(void*);
int fn_803D8934(void*, void*, void*);
int fn_803D8CD4(void*);
int fn_803D9214(void*, void*);
int fn_803D9B2C(void*);
int fn_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
int fn_802F310C(void* a0 = 0);
int fn_802F3144(void* a0 = 0);
void fn_802F3074(void* p);
void fn_802F3094(void* p, void* a1, void* a2);
void fn_802F3070(void);

void fn_802F3070(void) {  }
void fn_802F3074(void* p) { fn_802F310C(p); }
void fn_802F3094(void* p, void* a1, void* a2) { fn_803D9B2C(p); fn_803D8CD4((void*)0); TOHangerMachine01__sub_803D9C00(a1); fn_803D9214((void*)0, a2); fn_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); fn_803D9B78(); *(void**)((char*)p + 0x60) = a2; TObjPlayer__sub_80154E3C(p); fn_802F3144(p); }
int fn_802F310C(void*) { return 0; }
int fn_802F3144(void*) { return 0; }

}
