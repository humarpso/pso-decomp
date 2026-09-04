#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TShopGeneratorFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__14TShopGenerator[];

void *__dt__14TShopGeneratorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TShopGenerator;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8021E068
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021E068 { char pad[0x18]; };
struct VObj_8021E068 : Base_8021E068 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

extern "C" {

void *TShopGenerator__ct(void *arg0, s32 arg1);
M2C_UNK TPhotonMagicSquare__sub_801A2640(void *, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__14TShopGenerator[];
extern s32 lbl_805D36C0;
extern s32 tl_05;

void *TShopGenerator__ct(void *arg0, s32 arg1) {
    s32 temp_r0;

    TPhotonMagicSquare__sub_801A2640(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TShopGenerator;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36C0;
    ((VObj_8021E068 *)arg0)->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 < 0) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    if (temp_r0 > 6) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021E1B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TShopGenerator__create(void *arg0);
void *TShopGenerator__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *TShopGenerator__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TShopGenerator__ct(o, arg0);
    }
    return o;
}

}
#endif
#endif
