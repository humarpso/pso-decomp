#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjEneEpsilon__vt28(void);
int TObjEneEpsilon__vt37(void);

int TObjEneEpsilon__vt28(void) { return 0; }
int TObjEneEpsilon__vt37(void) { return 0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x800B9254
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneEpsilon__vt81(void *arg0);

M2C_UNK fn_800B98C0(void *);
s32 TObjEneDD__sub_800BA828(u16);
M2C_UNK TObjEneDD__vt81(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TObjEneEpsilon__vt81(void *arg0) {
    if ((TObjEneDD__sub_800BA828(M2C_FIELD(arg0, u16 *, 0x38C)) != 0) && (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x38C)) == 0U)) {
        fn_800B98C0(arg0);
    }
    TObjEneDD__vt81(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B93C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fire_attack_a__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void fire_attack_b__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void fire_attack_c__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TObjEneDD__sub_800BAF1C(void *, s32, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BB000(void *, s32, f32, f32, f32);
M2C_UNK calc_shot_position__9TObjEneDDFPvPvfff(void *, s32, f32, f32, f32);
M2C_UNK update_angle__14TObjEneEpsilonFPvi(void *, s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

void fire_attack_a__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f30 = farg0;
    update_angle__14TObjEneEpsilonFPvi(arg0, arg2);
    temp_f31 = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    TObjEneDD__sub_800BAF1C(arg0, arg1, TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60)), temp_f31, temp_f30);
}

void fire_attack_b__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f30 = farg0;
    update_angle__14TObjEneEpsilonFPvi(arg0, arg2);
    temp_f31 = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    TObjEneDD__sub_800BB000(arg0, arg1, TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60)), temp_f31, temp_f30);
}

void fire_attack_c__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f30 = farg0;
    update_angle__14TObjEneEpsilonFPvi(arg0, arg2);
    temp_f31 = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    calc_shot_position__9TObjEneDDFPvPvfff(arg0, arg1, TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60)), temp_f31, temp_f30);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9514
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_angle__14TObjEneEpsilonFPvi(void *arg0, s32 arg1);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s16 TObjPlayer__sub_801423A4(s32, s32, s32);

extern const f64 lbl_8043B698;

void update_angle__14TObjEneEpsilonFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), (s32) (lbl_8043B698 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9578
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_death_check__14TObjEneEpsilonFPv(void *arg0);
s32 TObjEneDD__sub_800BA828(u16);
s32 TObjEneEpsilon__sub_800B95E0(void *);
M2C_UNK fn_800B98C0(void *);

struct Base_800B9578 { char pad[0x18]; };
struct VObj_800B9578 : Base_800B9578 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual int m97();
};

s32 update_death_check__14TObjEneEpsilonFPv(void *arg0) {
    if ((((VObj_800B9578 *)arg0)->m97() == 0) && (TObjEneDD__sub_800BA828(M2C_FIELD(arg0, u16 *, 0x38C)) == 0)) {
        fn_800B98C0(arg0);
        return 0;
    }
    return TObjEneEpsilon__sub_800B95E0(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9680
#include "types.h"

extern "C" {

int TObjEneEpsilon__sub_800B96FC(void*, void*, void*);
int copy_position__14TObjEneEpsilonFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int copy_position__14TObjEneEpsilonFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x394); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B96D4
#include "types.h"

extern "C" {

int TObjEneEpsilon__sub_800B96FC(void*, void*, void*);
int copy_position__14TObjEneEpsilonFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

void update_linked_position__14TObjEneEpsilonFPv(void* p) { TObjEneEpsilon__sub_800B96FC(p, (char*)p + 0x3b0, *(void**)((char*)p + 0x3b4)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_part__14TObjEneEpsilonFi(s32 arg0);
M2C_UNK TObjEneEpsilon__sub_800B9848(s32, s32);
s32 TBoss8Dragon__sub_800BB664();

void spawn_part__14TObjEneEpsilonFi(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)TBoss8Dragon__sub_800BB664();
    TObjEneEpsilon__sub_800B9848(arg0, (s32)tmp);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B97B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B97B4 { char pad[0x18]; };
struct VObj_800B97B4 : Base_800B97B4 {
#define V8(b) virtual void b##0(); virtual void b##1(); virtual void b##2(); virtual void b##3(); virtual void b##4(); virtual void b##5(); virtual void b##6(); virtual void b##7();
    V8(a) V8(b) V8(c) V8(d) V8(e) V8(f) V8(g) V8(h) V8(i) V8(j) V8(k) V8(l)
    virtual void p96();
    virtual s32 m97();
};

extern "C" {

void select_and_apply_target__14TObjEneEpsilonFPvf(void *arg0, f32 farg0);
M2C_UNK TObjEneEpsilon__sub_800B9848(void *, u16);
u16 set_squared_value__9TObjEneDDFf(void *, f32);
u16 TBoss8Dragon__sub_800BB664(void *, f32);

void select_and_apply_target__14TObjEneEpsilonFPvf(void *arg0, f32 farg0) {
    u16 temp_r3;
    u16 var_r4;

    if (((VObj_800B97B4 *)arg0)->m97() != 0) {
        temp_r3 = set_squared_value__9TObjEneDDFf(arg0, farg0);
        var_r4 = temp_r3;
        if (temp_r3 == 0xFFFF) {
            var_r4 = TBoss8Dragon__sub_800BB664(arg0, farg0);
        }
    } else {
        var_r4 = TBoss8Dragon__sub_800BB664(arg0, farg0);
    }
    TObjEneEpsilon__sub_800B9848(arg0, var_r4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9884
#include "types.h"

extern "C" {

int TObjEneEpsilon__vt101(void* p);
int spawn_part__14TObjEneEpsilonFi(void*);

int TObjEneEpsilon__vt101(void* p) { return spawn_part__14TObjEneEpsilonFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80362BBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneEpsilon__ct(void *arg0);
void check_state_flag_4__9TObjEneDDFPv(void *);
void init_object__9TObjEneDDFPv(void *);

extern M2C_UNK __vt__14TObjEneEpsilon[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D4468;

void *TObjEneEpsilon__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneEpsilon;
    __construct_array((void *)((char *)arg0 + 960), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4468;
    check_state_flag_4__9TObjEneDDFPv(arg0);
    return arg0;
}

}
#endif
#endif
