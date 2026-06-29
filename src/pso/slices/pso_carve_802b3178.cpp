#include "types.h"

extern "C" {

int fn_8022675C(void*, void*, void*, void*);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
int TBoss6Type1__sub_802B54F0(void*, void*);
void fn_802B3178(void* p);

void fn_802B3178(void* p) { *(int*)((char*)p + 0x40c) = 123; *(int*)((char*)p + 0x410) = 123; TBoss6Type1__sub_802B54F0(p, (char*)p + 0x420); fn_8022675C((void*)231170, (void*)0, (void*)0, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

}
