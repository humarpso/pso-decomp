#include "types.h"

extern "C" {

int fn_8022675C(void*, void*, void*, void*);
int fn_8032E770(void*, void*);
void fn_80336F00(void* p);

void fn_80336F00(void* p) { *(int*)((char*)p + 0x3cc) = 0; fn_8022675C((void*)438292, (char*)p + 0x38, (void*)0, (void*)0); fn_8032E770(p, (void*)0); }

}
