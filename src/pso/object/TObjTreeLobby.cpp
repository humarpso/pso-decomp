#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TObjTreeLobbyFPv(void *arg0);
void *TObjTreeLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__13TObjTreeLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjTreeLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80364830
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__13TObjTreeLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

extern const f32 TObjTreeLobby__data_805E0290;

void render__13TObjTreeLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjTreeLobby__data_805E0290), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803649E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__13TObjTreeLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjTreeLobby__data_805D6FC0;

void destroy_static_instance__13TObjTreeLobbyFv(void) {
    if ((u32) TObjTreeLobby__data_805D6FC0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjTreeLobby__data_805D6FC0, 1);
        TObjTreeLobby__data_805D6FC0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364A74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__13TObjTreeLobby[];

void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTreeLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364ACC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase80364A { char pad[0x18]; };
struct TObjTreeLobby80364A : TObjBase80364A {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK init_map_object_base();
s32 is_lobby_event_active();

extern M2C_UNK __vt__13TObjTreeLobby[];
extern s32 lbl_805D4484;
extern void *TObjTreeLobby__data_805D6FC0;
extern s32 lbl_805D6FC4;
extern const f32 TObjTreeLobby__data_805E0290;

void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTreeLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4484;
    ((TObjTreeLobby80364A *)arg0)->ct(arg2);
    if (is_lobby_event_active() != 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjTreeLobby__data_805E0290;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjTreeLobby__data_805D6FC0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6FC4;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364BE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjTreeLobby__sub_80364BE8(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804F2B60[];

void *TObjTreeLobby__sub_80364BE8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F2B60;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
