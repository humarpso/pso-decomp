#include "types.h"

extern "C" {

void init_hanger__11TBoss4Type2FPv(void* p);
int TBoss4Type2__sub_80057270(void*);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjPlayer__sub_800D8A2C(void*);
int TParticleCtrl__sub_801E2F20(void);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);

void init_hanger__11TBoss4Type2FPv(void* p) { TObjPlayer__sub_800D8A2C(p); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TBoss4Type2__sub_80057270(p); TObjPlayer__sub_803D9B78(); TParticleCtrl__sub_801E2F20(); }

}
