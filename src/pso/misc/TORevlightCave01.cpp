#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TORevlightCave01FPv(void *arg0);
void *TORevlightCave01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TORevlightCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TORevlightCave01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80173478
#include "types.h"

extern "C" {

void TORevlightCave01__sub_80173478(void);

void TORevlightCave01__sub_80173478(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801734C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__16TORevlightCave01Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(s32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);

struct TORevlightCave01Base { char pad[0x18]; };
struct TORevlightCave01 : TORevlightCave01Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

void render__16TORevlightCave01Fv(u8 *arg0) {
    if (((TORevlightCave01*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x64));
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TOSignCave03__sub_803DB510(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4));
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xC8));
        TOSignCave03__sub_803DB510(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
        begin_effect_render__13TParticleCtrlFv();
        TOSignCave03__sub_803DB510(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x2C), s32 *, 4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801735DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__16TORevlightCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TORevlightCave01__data_805D5A78;

void release_static_instance__16TORevlightCave01Fv(void) {
    if ((u32) TORevlightCave01__data_805D5A78 != 0U) {
        TLobby__sub_8001FE7C((void*)TORevlightCave01__data_805D5A78, 1);
        TORevlightCave01__data_805D5A78 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80173664
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TORevlightCave01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__16TORevlightCave01[];

void *__dt__16TORevlightCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TORevlightCave01;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801736BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TORevlightCave01Base {
    char pad0[0x18];
};
struct TORevlightCave01 : TORevlightCave01Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32 b);
};

extern "C" {

void *TORevlightCave01__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK init_map_object_base();

extern const M2C_UNK lbl_80442498[];
extern const M2C_UNK __vt__16TORevlightCave01[];
extern s32 lbl_805D30D8;
extern void *TORevlightCave01__data_805D5A78;
extern const f32 lbl_805DB960;
extern const f32 lbl_805DB964;
extern const f32 lbl_805DB968;
extern const f32 lbl_805DB96C;

void *TORevlightCave01__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__16TORevlightCave01;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D30D8;
    ((TORevlightCave01*)arg0)->m5(arg2);
    M2C_FIELD(arg0, void **, 0x34) = (void *) M2C_FIELD(M2C_FIELD(TORevlightCave01__data_805D5A78, void **, 0x42C), void **, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TORevlightCave01__data_805D5A78, void **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, void **, 0xBC) = (void *) M2C_FIELD(M2C_FIELD(TORevlightCave01__data_805D5A78, void **, 0x430), void **, 4);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB960;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u32 *, 4) - lbl_805DB964);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB968;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (lbl_805DB96C * M2C_FIELD(arg0, f32 *, 0x68));
    return arg0;
}

}
#endif
#endif
