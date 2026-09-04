#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss1DragonColli.h"

extern "C" void queue_destruction__7TObjectFv(void*);

TBoss1DragonColli::~TBoss1DragonColli() {
    for (int i = 0; i < 3; i++) {
        if (m_objs[i] != nullptr) {
            queue_destruction__7TObjectFv(m_objs[i]);
        }
        m_objs[i] = nullptr;
    }
}
#else
#if PSO_CLASS_PACKAGE == 0x8002B358
#include "types.h"

extern "C" {

int TObjPlayer__sub_80154E3C(void*);
int TCameraCtrl__sub_803D8934(void*, void*, void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
int TBoss1DragonColli__sub_8002B3F4(void* a0 = 0);
int TBoss1DragonColli__sub_8002B42C(void* a0 = 0);
void TBoss1DragonColli__sub_8002B35C(void* p);
void draw__17TBoss1DragonColliFPvPvPv(void* p, void* a1, void* a2);
void TBoss1DragonColli__sub_8002B358(void);

void TBoss1DragonColli__sub_8002B358(void) {  }
void TBoss1DragonColli__sub_8002B35C(void* p) { TBoss1DragonColli__sub_8002B3F4(p); }
void draw__17TBoss1DragonColliFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_803D9B2C(p); TObjPlayer__sub_803D8CD4((void*)0); TOHangerMachine01__sub_803D9C00(a1); TObjPlayer__sub_803D9214((void*)0, a2); TCameraCtrl__sub_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); TObjPlayer__sub_803D9B78(); *(void**)((char*)p + 0x60) = a2; TObjPlayer__sub_80154E3C(p); TBoss1DragonColli__sub_8002B42C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002B464
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__17TBoss1DragonColliFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_80481BD4[];

void *destroy__17TBoss1DragonColliFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481BD4;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
