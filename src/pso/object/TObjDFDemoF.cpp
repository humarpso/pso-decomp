#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__11TObjDFDemoFFPv(void *arg0);
void *TObjDFDemoF__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__11TObjDFDemoFFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjDFDemoF__ct(o, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80050134
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TObjDFDemoFFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_80069DA8();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_80485870[];

void *__dt__11TObjDFDemoFFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80485870;
        TCameraCtrl__sub_80069DA8();
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
