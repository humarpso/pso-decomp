#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjKabochaLobbyFPv(void *arg0);
void *TObjKabochaLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjKabochaLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjKabochaLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8035346C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_8035346c { char pad[0x18]; };
struct VObj18_8035346c : VBase18_8035346c {
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

void render__16TObjKabochaLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

extern u32 TObjKabochaLobby__data_805D6EEC;
extern const f32 TObjKabochaLobby__data_805DFF38;

void render__16TObjKabochaLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) TObjKabochaLobby__data_805D6EEC != 0U) && (((VObj18_8035346c *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjKabochaLobby__data_805DFF38), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035364C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_static_data__16TObjKabochaLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjKabochaLobby__data_805D6EE8;

void unload_static_data__16TObjKabochaLobbyFv(void) {
    if ((u32) TObjKabochaLobby__data_805D6EE8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjKabochaLobby__data_805D6EE8, 1);
        TObjKabochaLobby__data_805D6EE8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803536DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjKabochaLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__16TObjKabochaLobby[];

void *__dt__16TObjKabochaLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjKabochaLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80353734
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase803537 { char pad[0x18]; };
struct TObjKabochaLobby803537 : TObjBase803537 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK init_map_object_base();
s32 TLobby__sub_80351DFC();

extern M2C_UNK __vt__16TObjKabochaLobby[];
extern s32 lbl_805D4384;
extern void *TObjKabochaLobby__data_805D6EE8;
extern s32 TObjKabochaLobby__data_805D6EEC;
extern const f32 TObjKabochaLobby__data_805DFF38;

void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjKabochaLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4384;
    ((TObjKabochaLobby803537 *)arg0)->ct(arg2);
    if (TLobby__sub_80351DFC() == 5) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjKabochaLobby__data_805DFF38;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjKabochaLobby__data_805D6EE8, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) TObjKabochaLobby__data_805D6EEC;
    return arg0;
}

}
#endif
#endif
