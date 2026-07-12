#include "types.h"

extern "C" {

void TBoss6Type2__sub_80336F00(void* p);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int TBoss6Type2__sub_8032E770(void*, void*);

void TBoss6Type2__sub_80336F00(void* p) { *(int*)((char*)p + 0x3cc) = 0; TBoss3Volopt__sub_8022675C((void*)438292, (char*)p + 0x38, (void*)0, (void*)0); TBoss6Type2__sub_8032E770(p, (void*)0); }

}
