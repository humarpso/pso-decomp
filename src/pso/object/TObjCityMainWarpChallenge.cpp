#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__25TObjCityMainWarpChallengeFPv(void *arg0);

M2C_UNK TObjCityMainWarp__sub_80186DA0();
M2C_UNK update_challenge_warp_window();
M2C_UNK update_state__16TObjCityMainWarpFPv();
M2C_UNK TObjCityMainWarp__sub_8018709C();
M2C_UNK TObjCityMainWarp__sub_801871D0();

void update_state__25TObjCityMainWarpChallengeFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        TObjCityMainWarp__sub_801871D0();
        return;
    case 1:
        TObjCityMainWarp__sub_8018709C();
        return;
    case 2:
        update_state__16TObjCityMainWarpFPv();
        return;
    case 3:
        update_challenge_warp_window();
        return;
    case 4:
        TObjCityMainWarp__sub_80186DA0();
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80187930
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct CityMainWarpChalBase { char pad[0x18]; };
struct CityMainWarpChalVObj : CityMainWarpChalBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__25TObjCityMainWarpChallengeFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
f32 fn_8013157C(s32, void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern s32 lbl_805D4DF0;
extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBCB8;
extern const f32 lbl_805DBCBC;
extern const f32 lbl_805DBCC0;

void render__25TObjCityMainWarpChallengeFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (fn_8013157C(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DBCB8) {
            return;
        }
        goto block_4;
    }
    if (((CityMainWarpChalVObj*)arg0)->m8(lbl_805DBCBC, lbl_805DBCC0) != 0) {
block_4:
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xC8));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187AE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__25TObjCityMainWarpChallengeFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__12TObjAreaWarpFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK close_windows__16TObjCityMainWarpFPv(void *);

extern M2C_UNK __vt__25TObjCityMainWarpChallenge[];

void *__dt__25TObjCityMainWarpChallengeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TObjCityMainWarpChallenge;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        close_windows__16TObjCityMainWarpFPv(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2D44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityMainWarpChallenge__create(void *arg0);
void *TObjCityMainWarpChallenge__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjCityMainWarpChallenge__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x180);
    if (o != NULL) {
        o = TObjCityMainWarpChallenge__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
