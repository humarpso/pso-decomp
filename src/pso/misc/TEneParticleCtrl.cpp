#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TEneParticleCtrlFv(void *arg0, s16 arg1);
int fn_80338D58(void);
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p);
void* get_field_38_ptr__16TEneParticleCtrlFPv(void* p);
void set_param__16TEneParticleCtrlFPv(void* p);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
int TWindowSubStatusDisp__sub_80338B88(void* p);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
int enable__13TParticleCtrlFPv(void*);
void request_destroy__11TBoss4Type2FUi(void *);
int set_param_ptr__11TBoss4Type2FPvi(void*);

void set_param__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) set_param_ptr__11TBoss4Type2FPvi(m); }
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) enable__13TParticleCtrlFPv(m); }

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

void* get_field_38_ptr__16TEneParticleCtrlFPv(void* p) { return (char*)p + 0x38; }

int fn_80338D58(void) { return 0; }

}
