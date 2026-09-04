#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static__13TObjWarpLobbyFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);

extern s32 TObjWarpLobby__data_805D5CC8;

void release_static__13TObjWarpLobbyFv(void) {
    TLobby__sub_8001FE7C(TObjWarpLobby__data_805D5CC8, 1);
    TObjWarpLobby__data_805D5CC8 = 0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A07F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct WarpLobbyBase { char pad[0x18]; };
struct WarpLobbyVObj : WarpLobbyBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__13TObjWarpLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern u8 *TObjWarpLobby__data_805D5CC8;
extern s32 lbl_805D5CCC;
extern const f32 lbl_805DC060;
extern const f32 lbl_805DC064;

void render__13TObjWarpLobbyFv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) && (((WarpLobbyVObj*)arg0)->m8(lbl_805DC060, lbl_805DC064) != 0)) {
        set_global_param__8TObjFishFi(lbl_805D5CCC);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(TObjWarpLobby__data_805D5CC8, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(TObjWarpLobby__data_805D5CC8, void **, 0x430), s32 *, 4), M2C_FIELD(arg0, f32 *, 0xC8));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A09DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__13TObjWarpLobby[];

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjWarpLobby;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A0A34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjWarpLobby__ct(void *arg0);
M2C_UNK TObjAreaWarp__ct();

extern M2C_UNK __vt__13TObjWarpLobby[];
extern s32 lbl_805D34A0;
extern void *TObjWarpLobby__data_805D5CC8;
extern const f32 lbl_805DC06C;

void *TObjWarpLobby__ct(void *arg0) {
    s32 temp_r0;

    TObjAreaWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjWarpLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D34A0;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DC06C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DC06C;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) M2C_FIELD(M2C_FIELD(TObjWarpLobby__data_805D5CC8, void **, 0x430), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) > 1) {
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        break;
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2924
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjWarpLobby__create(void *arg0);
void *TObjWarpLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjWarpLobby__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjWarpLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
