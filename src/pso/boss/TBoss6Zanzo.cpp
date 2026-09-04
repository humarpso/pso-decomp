#include "types.h"

extern "C" {

int TBoss6Type1__sub_803204B8(void);
int TBoss6Zanzo__sub_80320534(void);
int TBoss6Zanzo__sub_803205A0(void);
s32 fn_803204B0(void* p);
void render__11TBoss6ZanzoFv(void* p);
int TBoss6Zanzo__sub_803205C4(void*);
int fn_80141A30(void);
int set_depth_buffer_settings_1__Fv(void*);

s32 fn_803204B0(void* p) { return *(s32*)((char*)p + 0x4); }
int TBoss6Type1__sub_803204B8(void) { return 0; }
int TBoss6Zanzo__sub_80320534(void) { return 0; }
int TBoss6Zanzo__sub_803205A0(void) { return 0; }

void render__11TBoss6ZanzoFv(void* p) { set_depth_buffer_settings_1__Fv(p); TBoss6Zanzo__sub_803205C4(p); fn_80141A30(); }

}
