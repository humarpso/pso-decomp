#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOSwitchAttack__sub_80177C20(void);
void TOSwitchAttack__sub_80177C24(void);
void *__dt__14TOSwitchAttackFv(void *arg0, s16 arg1);
void *create__14TOSwitchAttackFPv(void *arg0);
void render__14TOSwitchAttackFv(void);
void *TOSwitchAttack__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__14TOSwitchAttackFv(void) {  }

extern void *tl_05;

void *create__14TOSwitchAttackFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = TOSwitchAttack__ct(o, tl_05, arg0);
    }
    return o;
}

void TOSwitchAttack__sub_80177C20(void) {  }
void TOSwitchAttack__sub_80177C24(void) {  }

extern M2C_UNK __vt__14TOSwitchAttack[];

void *__dt__14TOSwitchAttackFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOSwitchAttack;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
