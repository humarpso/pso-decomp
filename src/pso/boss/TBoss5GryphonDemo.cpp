#include "pso/TBoss5GryphonDemo.h"

TBoss5GryphonDemo::~TBoss5GryphonDemo() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss5GryphonDemo__sub_80066268(void);
void TBoss5GryphonDemo__sub_8006626C(void* p);
int TBoss5GryphonDemo__sub_80066304(void*);
int TBoss5GryphonDemo__sub_8006633C(void*);
void *destroy__17TBoss5GryphonDemoFPvs(void *arg0, s16 arg1);
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2);
void render__17TBoss5GryphonDemoFv(void);
int run_task__17TBoss5GryphonDemoFv(void);
int TCameraCtrl__sub_803D8934(void*, void*, void*);
int TOHangerMachine01__sub_803D9C00(void*);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
int TObjPlayer__sub_80154E3C(void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

void TBoss5GryphonDemo__sub_80066268(void) {  }
void TBoss5GryphonDemo__sub_8006626C(void* p) { TBoss5GryphonDemo__sub_80066304((void*)(p)); }
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_803D9B2C(p); TObjPlayer__sub_803D8CD4((void*)0); TOHangerMachine01__sub_803D9C00(a1); TObjPlayer__sub_803D9214((void*)0, a2); TCameraCtrl__sub_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); TObjPlayer__sub_803D9B78(); *(void**)((char*)p + 0x60) = a2; TObjPlayer__sub_80154E3C(p); TBoss5GryphonDemo__sub_8006633C((void*)(p)); }

int TBoss5GryphonDemo__sub_80066304(void*) { return 0; }
int TBoss5GryphonDemo__sub_8006633C(void*) { return 0; }

extern M2C_UNK lbl_804886AC[];

void *destroy__17TBoss5GryphonDemoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804886AC;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__17TBoss5GryphonDemoFv(void) {  }

int run_task__17TBoss5GryphonDemoFv(void) { return 0; }

}
