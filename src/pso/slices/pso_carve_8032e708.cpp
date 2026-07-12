#include "types.h"

extern "C" {

int TBoss6Type2__sub_8032FBF8(void*);
void fn_8032E718(void* p, void* a1, void* a2);
void TBoss6Type2__sub_8032E708(void* p, s32 v);
void fn_8032E710(void* p, s16 v);
void TBoss6Type2__sub_8032E740(void* p, s32 v);

void TBoss6Type2__sub_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void fn_8032E710(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
void fn_8032E718(void* p, void* a1, void* a2) { *(void**)((char*)p + 0x2e4) = a1; *(void**)((char*)p + 0x390) = a2; TBoss6Type2__sub_8032FBF8(p); }
void TBoss6Type2__sub_8032E740(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }
int TBoss6Type2__sub_8032E748(void) { return 0; }
int TBoss6Type2__sub_8032E770(void) { return 0; }

}
