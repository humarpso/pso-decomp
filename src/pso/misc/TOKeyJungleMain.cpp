#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_by_phase__15TOKeyJungleMainFiUs(s32 arg0, u16 arg1);

s32 get_main_phase();
M2C_UNK TLobby__sub_801F3778(int, M2C_UNK, s32);
M2C_UNK fn_801F469C(s32, u16);

void dispatch_by_phase__15TOKeyJungleMainFiUs(s32 arg0, u16 arg1) {
    if (get_main_phase() == 0xF) {
        TLobby__sub_801F3778(arg1, 0, arg0);
        return;
    }
    fn_801F469C(arg0, arg1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8029CEF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKeyJungleMain__vt20(s32 arg0);

s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TOKeyJungleMain__vt20(s32 arg0) {
    M2C_UNK var_r31;
    s32 temp_r3;

    var_r31 = 0x4AD12;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 34:
        var_r31 = 0x4004AD12;
        break;
    case 35:
        var_r31 = 0x4004AD12;
        break;
    }
    TBoss3Volopt__sub_8022675C(var_r31, arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029CF68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TOKeyJungleMainFPv(void *arg0);
void *TOKeyJungleMain__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TOKeyJungleMainFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOKeyJungleMain__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029CFB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__15TOKeyJungleMainFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOKeyJungleMain__data_805D65E0;

void release_static_resource__15TOKeyJungleMainFv(void) {
    if ((u32) TOKeyJungleMain__data_805D65E0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyJungleMain__data_805D65E0, 1);
        TOKeyJungleMain__data_805D65E0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029D0D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TOKeyJungleMainFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern s32 TOKeyJungleMain__data_805D65E0;

struct Base { char pad[0x18]; };
struct VObj : Base {
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

void render__15TOKeyJungleMainFv(u8 *arg0) {
    if (((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) {
        switch (M2C_FIELD(arg0, s32 *, 0xD4)) {
        case 0:
            TObjFish__sub_8001EDB0(TOKeyJungleMain__data_805D65E0, 1);
            set_global_param__8TObjFishFi();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjFish__sub_8001EDC4(TOKeyJungleMain__data_805D65E0, 1);
            TObjBoss2Tunnel__sub_803DB470();
            TObjPlayer__sub_803D9B78();
            return;
        case 1:
            TObjFish__sub_8001EDB0(TOKeyJungleMain__data_805D65E0, 1);
            set_global_param__8TObjFishFi();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TOKeyJungleMain__data_805D65E0, 1), TObjFish__sub_8001ED9C(TOKeyJungleMain__data_805D65E0, 1), M2C_FIELD(arg0, f32 *, 0xE8));
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TOKeyJungleMain__data_805D65E0, 0), TObjFish__sub_8001ED9C(TOKeyJungleMain__data_805D65E0, 0), M2C_FIELD(arg0, f32 *, 0xEC));
            end_effect_render__13TParticleCtrlFv();
            TObjPlayer__sub_803D9B78();
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029D3A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8029D3A4 { char pad[0x18]; };
struct VObj_8029D3A4 : Base_8029D3A4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
};

extern "C" {

void TOKeyJungleMain__vt15(void *arg0);
void *__dt__15TOKeyJungleMainFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

void TOKeyJungleMain__vt15(void *arg0) {
    struct VObj_8029D3A4 *o = (struct VObj_8029D3A4 *)arg0;
    o->m18();
}

extern M2C_UNK __vt__15TOKeyJungleMain[];

void *__dt__15TOKeyJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TOKeyJungleMain;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
