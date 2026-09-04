#include "pso/TBoss8DragonColli.h"

TBoss8DragonColli::~TBoss8DragonColli() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss8DragonColli__sub_802F3070(void);
void TBoss8DragonColli__sub_802F3074(void* p);
int TBoss8DragonColli__sub_802F310C(void*);
int TBoss8DragonColli__sub_802F3144(void*);
void *destroy__17TBoss8DragonColliFPvs(void *arg0, s16 arg1);
void init__17TBoss8DragonColliFPvPvPv(void* p, void* a1, void* a2);
int TCameraCtrl__sub_803D8934(void*, void*, void*);
int TOHangerMachine01__sub_803D9C00(void*);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
int TObjPlayer__sub_80154E3C(void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

void TBoss8DragonColli__sub_802F3070(void) {  }
void TBoss8DragonColli__sub_802F3074(void* p) { TBoss8DragonColli__sub_802F310C((void*)(p)); }
void init__17TBoss8DragonColliFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_803D9B2C(p); TObjPlayer__sub_803D8CD4((void*)0); TOHangerMachine01__sub_803D9C00(a1); TObjPlayer__sub_803D9214((void*)0, a2); TCameraCtrl__sub_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); TObjPlayer__sub_803D9B78(); *(void**)((char*)p + 0x60) = a2; TObjPlayer__sub_80154E3C(p); TBoss8DragonColli__sub_802F3144((void*)(p)); }

int TBoss8DragonColli__sub_802F310C(void*) { return 0; }
int TBoss8DragonColli__sub_802F3144(void*) { return 0; }

extern M2C_UNK lbl_804E4BB4[];

void *destroy__17TBoss8DragonColliFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4BB4;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
