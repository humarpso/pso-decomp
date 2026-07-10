#include "types.h"

extern "C" {

int TBoss6Type1__sub_802B4A70(void* p);
void TBoss6Type1__sub_802B4A90(void* p);

int release_object__11TBoss6Type1FPv(void*);

int TBoss6Type1__sub_802B4A70(void* p) { return release_object__11TBoss6Type1FPv(p); }
void TBoss6Type1__sub_802B4A90(void* p) { *(s32*)((char*)p + 0x680) = 0; }

}
