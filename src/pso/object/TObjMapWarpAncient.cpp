#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjMapWarpAncient__create(void *arg0);
void *TObjMapWarpAncient__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjMapWarpAncient__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x11C);
    if (o != NULL) {
        o = TObjMapWarpAncient__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017CF24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase { char pad[0x18]; };
struct VObj : VObjBase {
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

extern "C" {

void render__18TObjMapWarpAncientFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern const f32 lbl_805DBAB8;
extern const f32 lbl_805DBABC;

void render__18TObjMapWarpAncientFv(u8 *arg0) {
    if (((VObj*)arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) >= 0) {
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x10C));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x100), M2C_FIELD(arg0, s32 *, 0x118), M2C_FIELD(arg0, f32 *, 0xFC));
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x110));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x104));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x114));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x108));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D0DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjMapWarpAncientFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);

extern M2C_UNK __vt__18TObjMapWarpAncient[];

void *__dt__18TObjMapWarpAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjMapWarpAncient;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D134
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjMapWarpAncient__ct(u8 *arg0);
M2C_UNK TObjMapWarp__ct();
s32 register_warp_object__19TObjGoalWarpAncientFPv(int);
s32 register_warp__19TObjGoalWarpAncientFPv(int);
s32 TObjGoalWarpAncient__sub_8017D2D4(int);

extern M2C_UNK __vt__18TObjMapWarpAncient[];
extern s32 lbl_805D31E8;
extern const f32 lbl_805DBAC4;

u8 *TObjMapWarpAncient__ct(u8 *arg0) {
    TObjMapWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjMapWarpAncient;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D31E8;
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) lbl_805DBAC4;
    M2C_FIELD(arg0, s32 *, 0x100) = TObjGoalWarpAncient__sub_8017D2D4(2);
    M2C_FIELD(arg0, s32 *, 0x104) = TObjGoalWarpAncient__sub_8017D2D4(0);
    M2C_FIELD(arg0, s32 *, 0x108) = TObjGoalWarpAncient__sub_8017D2D4(4);
    M2C_FIELD(arg0, s32 *, 0x10C) = register_warp_object__19TObjGoalWarpAncientFPv(2);
    M2C_FIELD(arg0, s32 *, 0x110) = register_warp_object__19TObjGoalWarpAncientFPv(0);
    M2C_FIELD(arg0, s32 *, 0x114) = register_warp_object__19TObjGoalWarpAncientFPv(4);
    M2C_FIELD(arg0, s32 *, 0x118) = register_warp__19TObjGoalWarpAncientFPv(1);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D1D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_globals__18TObjMapWarpAncientFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5AF0;
extern s32 lbl_805D5AF4;

void free_globals__18TObjMapWarpAncientFv(void) {
    free_if_valid__10TObjPlayerFi(lbl_805D5AF4);
    lbl_805D5AF4 = 0;
    if ((u32) lbl_805D5AF0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AF0, 1);
        lbl_805D5AF0 = 0U;
    }
}

}
#endif
#endif
