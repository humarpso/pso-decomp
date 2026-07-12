#include "types.h"

extern "C" {

void TBoss6Type1__sub_802B3870(void* p);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);

void TBoss6Type1__sub_802B3870(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

}
