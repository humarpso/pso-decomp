#include "types.h"

extern "C" {

void init_dice_state__11TBoss6Type1FPv(void* p);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);

void init_dice_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 62; *(int*)((char*)p + 0x410) = 62; TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)1); }

}
