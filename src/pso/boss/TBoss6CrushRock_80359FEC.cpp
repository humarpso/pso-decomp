#include "types.h"

extern "C" {

void render__15TBoss6CrushRockFv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int TObjBoss2Tunnel__sub_803DB470(void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int is_falz_alive__15TBoss6CrushRockFv(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
int set_global_param__8TObjFishFi(void*);

void render__15TBoss6CrushRockFv(void* p) { if (is_falz_alive__15TBoss6CrushRockFv(p) != 0) { TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x24); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x40)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x3c)); TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x44)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x20)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0x1c)); TObjPlayer__sub_803D9B78(); } }

}
