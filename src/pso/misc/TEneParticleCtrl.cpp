#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TEneParticleCtrlFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__16TEneParticleCtrl[];

void *__dt__16TEneParticleCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TEneParticleCtrl;
        if (M2C_FIELD(arg0, void **, 0xC0) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0xC0)); }
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
#else
#if PSO_CLASS_PACKAGE == 0x80338BB4
#include "types.h"

extern "C" {

int TWindowSubStatusDisp__sub_80338B88(void* p);
void set_param__16TEneParticleCtrlFPv(void* p);
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p);
int set_param_ptr__11TBoss4Type2FPvi(void*);
int enable__13TParticleCtrlFPv(void*);

void set_param__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) set_param_ptr__11TBoss4Type2FPvi(m); }
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) enable__13TParticleCtrlFPv(m); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338D50
#include "types.h"

extern "C" {

void* get_field_38_ptr__16TEneParticleCtrlFPv(void* p);

void* get_field_38_ptr__16TEneParticleCtrlFPv(void* p) { return (char*)p + 0x38; }

}
#endif
#endif
