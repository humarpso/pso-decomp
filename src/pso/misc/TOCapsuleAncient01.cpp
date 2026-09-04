#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOCapsuleAncient01__vt13(void *arg0);

void TOCapsuleAncient01__vt13(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE4) = (s32) (M2C_FIELD(arg0, s32 *, 0xE4) + 0x222);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8015A2B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8015a2b8 { char pad[0x18]; };
struct VObj_8015a2b8 : VBase_8015a2b8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

extern "C" {

void render__18TOCapsuleAncient01Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

void render__18TOCapsuleAncient01Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;

    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj_8015a2b8 *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
        TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
            begin_effect_render__13TParticleCtrlFv();
            temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
            TObjPlayer__sub_803D9B2C();
            TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xE4)));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
            TObjPlayer__sub_803D9B78();
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015A394
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__18TOCapsuleAncient01FPv(void *arg0);
void *TOCapsuleAncient01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__18TOCapsuleAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOCapsuleAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015A3E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__18TOCapsuleAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOCapsuleAncient01__data_805D58B8;

void destroy_static_instance__18TOCapsuleAncient01Fv(void) {
    if ((u32) TOCapsuleAncient01__data_805D58B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCapsuleAncient01__data_805D58B8, 1);
        TOCapsuleAncient01__data_805D58B8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015A468
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__18TOCapsuleAncient01Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__18TOCapsuleAncient01[];

void *__dt__18TOCapsuleAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOCapsuleAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
