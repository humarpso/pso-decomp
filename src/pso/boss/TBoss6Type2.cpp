#include "types.h"

extern "C" {

void render__11TBoss6Type2Fv(void* p);
s32 TBoss6Type2__sub_802B9930(void* p);
int TBoss6Type2__sub_802B97E0(void*);
int TBoss6Type2__sub_802B9858(void*);

void render__11TBoss6Type2Fv(void* p) { TBoss6Type2__sub_802B9858(p); TBoss6Type2__sub_802B97E0(p); }
s32 TBoss6Type2__sub_802B9930(void* p) { return *(s32*)((char*)p + 0x37c); }

}
