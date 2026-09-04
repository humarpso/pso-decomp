#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_sub__14TOSwitchAttackFiiiif(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);

M2C_UNK TOSwitchAttackSub__ct(void *, s32, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(M2C_UNK);

void create_sub__14TOSwitchAttackFiiiif(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    void *temp_r3;
    temp_r3 = (void *)__nw__7TObjectFUl(0x30);
    if (temp_r3 != (void *)0U) {
        TOSwitchAttackSub__ct(temp_r3, arg0, arg1, arg2, arg3, farg0);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801777C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__14TOSwitchAttackFPv(void *arg0);

extern const f64 lbl_80442C78;
extern s32 lbl_805D5550;
extern const f32 lbl_805DBA00;

void init_params__14TOSwitchAttackFPv(void *arg0) {
    f32 temp_f0;

    M2C_FIELD(arg0, u8 *, 0xA7) = (u8) M2C_FIELD(arg0, s32 *, 0x5C);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) (temp_f0 * temp_f0);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) * (lbl_805DBA00 * (f32) (lbl_805D5550 + 1)));
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
    if ((u8) M2C_FIELD(arg0, u8 *, 0xA7) >= 0x15U) {
        M2C_FIELD(arg0, u8 *, 0xA7) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, u16 *, 0xA0) = (u16) M2C_FIELD(arg0, s32 *, 0x84);
    if ((u16) M2C_FIELD(arg0, u16 *, 0xA0) >= 0x100U) {
        M2C_FIELD(arg0, u16 *, 0xA0) = 0xFFFFU;
    }
    M2C_FIELD(arg0, u16 *, 0xA2) = (u16) M2C_FIELD(arg0, s32 *, 0x88);
    if ((u16) M2C_FIELD(arg0, u16 *, 0xA2) >= 0x100U) {
        M2C_FIELD(arg0, u16 *, 0xA2) = 0xFFFFU;
    }
    M2C_FIELD(arg0, u16 *, 0xA4) = (u16) M2C_FIELD(arg0, s32 *, 0x8C);
    if ((u16) M2C_FIELD(arg0, u16 *, 0xA4) > 1U) {
        M2C_FIELD(arg0, u16 *, 0xA4) = 1U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801778A4
#include "types.h"

extern "C" {

void render__14TOSwitchAttackFv(void);

void render__14TOSwitchAttackFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80177BD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TOSwitchAttackFPv(void *arg0);
void TOSwitchAttack__sub_80177C20(void);
void TOSwitchAttack__sub_80177C24(void);
void *__dt__14TOSwitchAttackFv(void *arg0, s16 arg1);
void *TOSwitchAttack__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

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
#endif
#endif
