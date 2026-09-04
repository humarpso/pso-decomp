#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check__10TObjBgmColFPv(void *arg0);

s32 is_within_distance__10TObjBgmColFif(f32);

s32 check__10TObjBgmColFPv(void *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x98);
    if (is_within_distance__10TObjBgmColFif(temp_f0 * temp_f0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0) {
            M2C_FIELD(arg0, s32 *, 0x90) = 0;
            return 1;
        }
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0) {
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    return 3;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017E664
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_within_distance__10TObjBgmColFif(s32 arg0, f32 farg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
f32 fn_801315A0(s32, s32);

extern s32 lbl_805D53A0;

s32 is_within_distance__10TObjBgmColFif(s32 arg0, f32 farg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 != 0U) && (fn_801315A0(temp_r3 + 0x38, arg0 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017E7F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TObjBgmColFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__10TObjBgmCol[];

void *__dt__10TObjBgmColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjBgmCol;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017E848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase8017E8 { char pad[0x18]; };
struct TObjBgmCol8017E8 : TObjBase8017E8 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TPhotonMagicSquare__sub_801A2640();

extern M2C_UNK __vt__10TObjBgmCol[];
extern s32 lbl_805D3228;

void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjBgmCol;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3228;
    ((TObjBgmCol8017E8 *)arg0)->ct(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) % 6);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2CAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBgmCol__create(void *arg0);
void *TObjBgmCol__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjBgmCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = TObjBgmCol__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
