#include "types.h"

extern "C" {

int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
void fn_802B37D4(void* p);

void fn_802B37D4(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)1); }

}
