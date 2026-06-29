#include "types.h"

extern "C" {

int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
int TBoss6Type1__sub_802B6504(void*);
void fn_802B22E0(void* p);

void fn_802B22E0(void* p) { *(int*)((char*)p + 0x40c) = 555; *(int*)((char*)p + 0x410) = 555; TBoss6Type1__sub_802B6504(p); TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); TBoss6Type1__sub_802B4BA8(p, (void*)3); }

}
