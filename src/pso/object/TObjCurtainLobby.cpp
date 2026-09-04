#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjCurtainLobbyFPv(void *arg0);
void *TObjCurtainLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjCurtainLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjCurtainLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8035B8B4
#include "types.h"

extern "C" {

void TObjCurtainLobby__sub_8035B8B4(void);

void TObjCurtainLobby__sub_8035B8B4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B8B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__16TObjCurtainLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

extern const f32 TObjCurtainLobby__data_805E0148;

void render__16TObjCurtainLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, u32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjCurtainLobby__data_805E0148), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035BA94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_dialog_window__16TObjCurtainLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjCurtainLobby__data_805D6F58;

void close_dialog_window__16TObjCurtainLobbyFv(void) {
    if ((u32) TObjCurtainLobby__data_805D6F58 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjCurtainLobby__data_805D6F58, 1);
        TObjCurtainLobby__data_805D6F58 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035BB24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__16TObjCurtainLobby[];

void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCurtainLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035BB7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase8035BB { char pad[0x18]; };
struct TObjCurtainLobby8035BB : TObjBase8035BB {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2);
s32 TObjCurtainLobby__sub_8035B87C(void *);
M2C_UNK init_map_object_base();

extern M2C_UNK __vt__16TObjCurtainLobby[];
extern s32 lbl_805D4424;
extern void *TObjCurtainLobby__data_805D6F58;
extern s32 lbl_805D6F5C;
extern const f32 TObjCurtainLobby__data_805E0148;

void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCurtainLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4424;
    ((TObjCurtainLobby8035BB *)arg0)->ct(arg2);
    if (TObjCurtainLobby__sub_8035B87C(arg0) == 0xC) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjCurtainLobby__data_805E0148;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjCurtainLobby__data_805D6F58, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6F5C;
    return arg0;
}

}
#endif
#endif
