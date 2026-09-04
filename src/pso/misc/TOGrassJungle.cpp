#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOGrassJungle__create(void *arg0);
void *TOGrassJungle__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TOGrassJungle__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TOGrassJungle__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8029CCB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__13TOGrassJungleFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TOGrassJungle__data_805D65D8;
extern u32 TOGrassJungle__data_805D65DC;

void release_static_instance__13TOGrassJungleFv(void) {
    if ((u32) TOGrassJungle__data_805D65DC != 0U) {
        TLobby__sub_803DA16C((void*)TOGrassJungle__data_805D65DC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TOGrassJungle__data_805D65DC);
        TOGrassJungle__data_805D65DC = 0U;
    }
    if ((u32) TOGrassJungle__data_805D65D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOGrassJungle__data_805D65D8, 1);
        TOGrassJungle__data_805D65D8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029CD90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__13TOGrassJungleFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjFish__sub_8001EDC4(s32, s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 TOGrassJungle__data_805D65D8;
extern s32 TOGrassJungle__data_805D65DC;
extern const f32 lbl_805DDD30;
extern const f32 lbl_805DDD34;

struct Base { char pad[0x18]; };
struct VObj : Base {
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

void render__13TOGrassJungleFv(u8 *arg0) {
    if (((VObj *)arg0)->m8(lbl_805DDD30, lbl_805DDD34) == 1) {
        set_global_param__8TObjFishFi(TOGrassJungle__data_805D65DC);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_8001EDC4(TOGrassJungle__data_805D65D8, M2C_FIELD(arg0, s32 *, 0x90));
        TObjBoss2Tunnel__sub_803DB470();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029CE0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TOGrassJungleFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__13TOGrassJungle[];

void *__dt__13TOGrassJungleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOGrassJungle;
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
