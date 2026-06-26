#include "types.h"

extern "C" {

int fn_80121200(void*);
int fn_803D96A8(void*, void*);
void fn_80122680(void* p);
void fn_801225F8(void* p, s16 v);

void fn_801225F8(void* p, s16 v) { *(s16*)((char*)p + 0x1cc) = v; }
int fn_80122600(void) { return 0; }
void fn_80122680(void* p) { if (fn_80121200(p) == 1) { fn_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
