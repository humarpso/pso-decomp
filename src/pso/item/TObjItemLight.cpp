#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjItemLightFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__13TObjItemLight[];

void *__dt__13TObjItemLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjItemLight;
        if (M2C_FIELD(arg0, void **, 0x94) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x94)); M2C_FIELD(arg0, M2C_UNK *, 0x94) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801920D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjItemLight__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 TObjParticle__sub_800870BC(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TPhotonMagicSquare__sub_801A2640();

extern M2C_UNK __vt__13TObjItemLight[];
extern s32 lbl_805D3390;
extern const f32 lbl_805DBE40;
extern const f32 lbl_805DBE44;

struct VObjItemLight {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

u8 *TObjItemLight__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjItemLight;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3390;
    ((VObjItemLight *)arg0)->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    if (M2C_FIELD(arg0, f32 *, 0x90) < lbl_805DBE40) {
        M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DBE44;
    }
    M2C_FIELD(arg0, s32 *, 0x94) = TObjParticle__sub_800870BC(arg0 + 0x38, arg0 + 0x5C, 0x1CA, 0x40);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2CF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjItemLight__create(void *arg0);
void *TObjItemLight__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjItemLight__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjItemLight__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
