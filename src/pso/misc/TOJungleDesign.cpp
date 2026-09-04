#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOJungleDesign__create(void *arg0);
void *TOJungleDesign__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TOJungleDesign__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TOJungleDesign__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802FEDE8
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_design_variant__14TOJungleDesignFPv(void *arg0);
s32 fn_802FF028(M2C_UNK);
s32 fn_802FF064(s32);

extern M2C_UNK lbl_80474D60[];

void init_design_variant__14TOJungleDesignFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) < 0) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) > 2) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = fn_802FF064(lbl_80474D60[M2C_FIELD(arg0, s32 *, 0xB0)]);
    M2C_FIELD(arg0, s32 *, 0x24) = fn_802FF028(0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FEEB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct JDBase_802feeb4 { char pad[0x18]; };
struct JDVObj_802feeb4 : JDBase_802feeb4 {
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

void render__14TOJungleDesignFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjChip__sub_803D8AE4(int, int, int, int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern const f32 lbl_805DEF20;
extern const f32 lbl_805DEF24;

void render__14TOJungleDesignFv(u8 *arg0) {
    if (((JDVObj_802feeb4 *)arg0)->m8(lbl_805DEF20, lbl_805DEF24) == 1) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjChip__sub_803D8AE4((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0xAC)));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FEF30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TOJungleDesignFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__14TOJungleDesign[];

void *__dt__14TOJungleDesignFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOJungleDesign;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
