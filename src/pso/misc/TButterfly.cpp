#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TButterflyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__10TButterfly[];

void *__dt__10TButterflyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TButterfly;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017E978
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_motion__10TButterflyFPv(u8 *arg0);
s32 rand__11TOBoss4RockFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK lbl_80443970;
extern const f32 lbl_805DBAD8;
extern const f32 lbl_805DBADC;
extern const f32 lbl_805DBAE0;

void init_motion__10TButterflyFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x90, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) (lbl_805DBADC * (lbl_805DBAE0 * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, s8 *, 0xB8) = 0;
    M2C_FIELD(arg0, s8 *, 0xB9) = 0;
    M2C_FIELD(arg0, s16 *, 0xB4) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xB6) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017EA14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base { char pad[0x18]; };
struct VObj : Base { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

extern "C" {

void render__10TButterflyFv(void *arg0);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK fn_8017E900(void *);
M2C_UNK set_global_param__8TObjFishFi();

extern s32 lbl_805D5B10;
extern const f32 lbl_805DBAE4;
extern const f32 lbl_805DBAE8;

void render__10TButterflyFv(void *arg0) {
    if (((VObj*)arg0)->m8(lbl_805DBAE4, lbl_805DBAE8) != 0) {
        TObjFish__sub_8001EDB0(lbl_805D5B10, 0);
        set_global_param__8TObjFishFi();
        fn_8017E900(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017F364
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TButterfly__ct(void *arg0, void *arg1, void *arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
void init_motion__10TButterflyFPv(void *);
void TPhotonMagicSquare__sub_801A2640(void *);

extern M2C_UNK __vt__10TButterfly[];
extern void *lbl_805D3230;

void *TButterfly__ct(void *arg0, void *arg1, void *arg2) {
    TPhotonMagicSquare__sub_801A2640(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TButterfly;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3230;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 56), (void *)((char *)arg2 + 12));
    copy_xyz__10TObjPlayerFPvPv((void *)((char *)arg0 + 92), (void *)((char *)arg2 + 24));
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 104), (void *)((char *)arg2 + 36));
    init_motion__10TButterflyFPv(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017F3D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TButterfly__create(void *arg0);
void *TButterfly__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TButterfly__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TButterfly__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017F424
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__10TButterflyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D5B10;

void destroy_instance__10TButterflyFv(void) {
    if ((u32) lbl_805D5B10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B10, 1);
        lbl_805D5B10 = 0U;
    }
}

}
#endif
#endif
