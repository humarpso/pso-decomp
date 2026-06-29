#include "types.h"

extern "C" {

int TBoss6Type1__sub_802B4A70(void* p);
void TBoss6Type1__sub_802B4A90(void* p);

int TBoss6Type1__sub_802B4964(void*);

int TBoss6Type1__sub_802B4A70(void* p) { return TBoss6Type1__sub_802B4964(p); }
void TBoss6Type1__sub_802B4A90(void* p) { *(s32*)((char*)p + 0x680) = 0; }

}
