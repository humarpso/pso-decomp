#include "types.h"

extern "C" {

void render__11TBoss6Type2Fv(void* p);
s32 TBoss6Type2__sub_802B9930(void* p);
int draw__11TBoss6Type2FPv(void*);
int render_body_effects__11TBoss6Type2FPv(void*);

void render__11TBoss6Type2Fv(void* p) { render_body_effects__11TBoss6Type2FPv(p); draw__11TBoss6Type2FPv(p); }
s32 TBoss6Type2__sub_802B9930(void* p) { return *(s32*)((char*)p + 0x37c); }

}
