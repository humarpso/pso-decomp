#include "types.h"

extern "C" {

void render__15TBoss6RockChaseFv(void* p);

int TObjPlayer__sub_803D9214(void*, void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjFish__sub_803DA798(void*);
int TObjBoss2Tunnel__sub_803DB470(void*);

void render__15TBoss6RockChaseFv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x5c)); TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x64)); TObjFish__sub_803DA798(*(void**)((char*)p + 0xc4)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0xc0)); TObjPlayer__sub_803D9B78(); }

}
