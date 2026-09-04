#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss6CrushRock.h"

TBoss6CrushRock::~TBoss6CrushRock() {}
#else
#if PSO_CLASS_PACKAGE == 0x80359FC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_falz_alive__15TBoss6CrushRockFv(void);
s32 get_hp__14TBoss6PlotFalzFv();

s32 is_falz_alive__15TBoss6CrushRockFv(void) {
    return get_hp__14TBoss6PlotFalzFv() ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80359FEC
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
#endif
#endif
