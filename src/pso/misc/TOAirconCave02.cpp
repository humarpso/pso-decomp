#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TOAirconCave02FPv(void *arg0);
void *TOAirconCave02__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__14TOAirconCave02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOAirconCave02__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801570D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TOAirconCave02Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern u8 *TOAirconCave02__data_805D5888;

struct VBase570D4_801570d4 { char pad[0x18]; };
struct VObj570D4_801570d4 : VBase570D4_801570d4 {
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

void render__14TOAirconCave02Fv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r4;

    temp_r4 = (unsigned char *) (M2C_FIELD(TOAirconCave02__data_805D5888, void **, 0x42C));
    temp_r31 = M2C_FIELD(temp_r4, s32 *, 8);
    if (((VObj570D4_801570d4 *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjBoss2Tunnel__sub_803DB470((int) (temp_r31));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801571A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__14TOAirconCave02Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOAirconCave02__data_805D5888;

void release_static_resource__14TOAirconCave02Fv(void) {
    if ((u32) TOAirconCave02__data_805D5888 != 0U) {
        TLobby__sub_8001FE7C((void*)TOAirconCave02__data_805D5888, 1);
        TOAirconCave02__data_805D5888 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80157228
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TOAirconCave02Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__14TOAirconCave02[];

void *__dt__14TOAirconCave02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOAirconCave02;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
