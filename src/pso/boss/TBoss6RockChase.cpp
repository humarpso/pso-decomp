#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TBoss6RockChaseFv(void *arg0, s16 arg1);
void render__15TBoss6RockChaseFv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int TObjBoss2Tunnel__sub_803DB470(void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
int set_global_param__8TObjFishFi(void*);

void render__15TBoss6RockChaseFv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x5c)); TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x64)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0xc4)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0xc0)); TObjPlayer__sub_803D9B78(); }

extern M2C_UNK __vt__15TBoss6RockChase[];

void *__dt__15TBoss6RockChaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6RockChase;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
