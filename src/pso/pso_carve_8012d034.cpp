#include "types.h"

extern "C" {

int fn_80121200(void*);
int fn_803D929C(void*, void*);
void fn_8012D040(void* p);
void fn_8012D034(void* p);

void fn_8012D034(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }
void fn_8012D040(void* p) { if (fn_80121200(p) == 0) { fn_803D929C((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
