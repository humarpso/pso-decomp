#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TOAirconCave01FPv(void *arg0);
void *TOAirconCave01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__14TOAirconCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOAirconCave01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80156D28
#include "types.h"

extern "C" {

void TOAirconCave01__sub_80156D28(void);
int copy_vec4__13TRaderMapCoreFPvPv(void*, void*);

    extern unsigned char lbl_8050BEC0[];
    extern unsigned char lbl_8058D4C0[];
    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int lbl_805D7780;
    extern int lbl_805D7784;
    extern int some_id_805c6f74;
void TOAirconCave01__sub_80156D28(void) { copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0); lbl_805D7784 = lbl_805D5664; lbl_805D7780 = lbl_805D5668; some_id_805c6f74 = lbl_805D5660; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80156DF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__14TOAirconCave01FPvs(void *arg0, s16 arg1);
M2C_UNK TObjPlayer__sub_800D96D0(M2C_UNK, M2C_UNK *);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804AF8D8[];

void *destroy__14TOAirconCave01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_804AF8D8;
        TObjPlayer__sub_800D96D0((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80156E48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_804AF8D8__14TOAirconCave01FPv(void *arg0);
void TObjPlayer__sub_800D9718(void *);
void fn_80156CEC(void *);

extern M2C_UNK lbl_804AF8D8[];

void *init_vtable_804AF8D8__14TOAirconCave01FPv(void *arg0) {
    TObjPlayer__sub_800D9718(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_804AF8D8;
    fn_80156CEC(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80156E8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TOAirconCave01Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C(int);
M2C_UNK TObjPlayer__sub_803D9B78();

extern u8 *TOAirconCave01__data_805D5880;

struct AirBase_80156e8c { char pad[0x18]; };
struct AirV_80156e8c : AirBase_80156e8c {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2();
    virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5();
    virtual M2C_UNK m6(); virtual M2C_UNK m7();
    virtual M2C_UNK m8(void *a, f32 b, f32 c);
};

void render__14TOAirconCave01Fv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r31;
    u8 *temp_r4;

    temp_r4 = (unsigned char *) (M2C_FIELD(TOAirconCave01__data_805D5880, void **, 0x42C));
    temp_r31 = (unsigned char *) (M2C_FIELD(temp_r4, void **, 8));
    if (((AirV_80156e8c *)arg0)->m8(temp_r4, M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x5C);
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_r3 + 0x106);
        TObjPlayer__sub_803D9B2C((int) (temp_r3));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80156F64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__14TOAirconCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOAirconCave01__data_805D5880;

void release_static_resource__14TOAirconCave01Fv(void) {
    if ((u32) TOAirconCave01__data_805D5880 != 0U) {
        TLobby__sub_8001FE7C((void*)TOAirconCave01__data_805D5880, 1);
        TOAirconCave01__data_805D5880 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80156FEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TOAirconCave01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__14TOAirconCave01[];

void *__dt__14TOAirconCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOAirconCave01;
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
