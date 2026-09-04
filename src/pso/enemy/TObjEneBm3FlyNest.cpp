#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__17TObjEneBm3FlyNestFPv(void *arg0);

void init_params__17TObjEneBm3FlyNestFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x38C) = 2;
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x390) = 0;
    } else if (temp_r0 > 6) {
        M2C_FIELD(arg0, s32 *, 0x390) = 6;
    }
    M2C_FIELD(arg0, s32 *, 0x394) = (s32) M2C_FIELD(arg0, f32 *, 0x35C);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0;
        return;
    }
    if (temp_r0_2 > 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0x1E;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800B2A14
#include "types.h"

extern "C" {

int init__17TObjEneBm3FlyNestFPv(void* p);
int copy_target_state__17TObjEneBm3FlyNestFPv(void* p);
void* TObjEneBm3FlyNest__sub_800B2A54(void* p);
int init_params__17TObjEneBm3FlyNestFPv(void*);
int copy_target_state__14TObjEnePanarmsFPvPv(void*);

int init__17TObjEneBm3FlyNestFPv(void* p) { return init_params__17TObjEneBm3FlyNestFPv(p); }
int copy_target_state__17TObjEneBm3FlyNestFPv(void* p) { return copy_target_state__14TObjEnePanarmsFPvPv(p); }
void* TObjEneBm3FlyNest__sub_800B2A54(void* p) { return (char*)p + 0x3d4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B2BAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv();

struct Base_800B2BAC { char pad[0x18]; };
struct VObj_800B2BAC : Base_800B2BAC {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
    virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60();
    virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72();
    virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76();
    virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80();
    virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88();
    virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

void handle_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((struct VObj_800B2BAC *) arg0)->m93();
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3B0) == 0) {
            send_entity_set_flags__6TLobbyFPv();
            queue_destruction__7TObjectFv(arg0);
        }
    case 5:
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B2E8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_motion_event__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss8Dragon__sub_800BB780();
M2C_UNK noop__12TBoss8DragonFv(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);

extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9D04;

struct Base_800b2e8c { char pad[0x18]; };
struct VObj_800b2e8c : Base_800b2e8c {
    virtual void m00(); virtual void m01(); virtual void m02(); virtual void m03();
    virtual void m04(); virtual void m05(); virtual void m06(); virtual void m07();
    virtual void m08(); virtual void m09(); virtual void m0a(); virtual void m0b();
    virtual void m0c(); virtual void m0d(); virtual void m0e(); virtual void m0f();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13();
    virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m1a(); virtual void m1b();
    virtual void m1c(); virtual void m1d(); virtual void m1e(); virtual void m1f();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m2a(); virtual void m2b();
    virtual void m2c(); virtual void m2d(); virtual void m2e(); virtual void m2f();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33();
    virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37();
    virtual void m38(); virtual void m39(); virtual void m3a(); virtual void m3b();
    virtual void m3c(); virtual void m3d(); virtual void m3e(); virtual void m3f();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m4a(); virtual void m4b();
    virtual void m4c(); virtual void m4d(); virtual void m4e(); virtual void m4f();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53();
    virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57();
    virtual void m58(); virtual void m59(); virtual void m5a(); virtual void m5b();
    virtual void m5c(); virtual void m5d();
    virtual void m180();
    virtual void pad1(); virtual void pad2(); virtual void pad3(); virtual void pad4(); virtual void pad5();
    virtual void m198();
};

void handle_motion_event__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_800b2e8c*)arg0)->m180();
        noop__12TBoss8DragonFv(arg0);
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF1);
        TBoss3Volopt__sub_8022675C((void *)(s32)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A829), arg0 + 0x38, 0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 6;
            M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9CF8;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9D04;
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
                TObjEneDD__sub_800BBA18(arg0, 5);
                return;
            }
            if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2)) {
                TObjEneDD__sub_800BBA18(arg0, 4);
                return;
            }
            TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg0, s32 *, 0x378));
            return;
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        ((VObj_800b2e8c*)arg0)->m198();
        return;
    case 5:
        TBoss8Dragon__sub_800BB780();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B2FD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_800b2fd0 { char pad[0x18]; };
struct VObj18_800b2fd0 : VBase18_800b2fd0 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vpad87();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vf198();
};

extern "C" {

void state_spawn__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjEneBm3FlyNest__sub_800B39CC(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(f32);

extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9D30;

void state_spawn__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        ((VObj18_800b2fd0 *) arg0)->vf180();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9CF8;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjEneDD__sub_800BBA18(arg0, 5);
        }
        break;
    case 5:
    case 1:
        break;
    case 0:
        if (objInBand__FP7GameObjf(lbl_805D9D30) != 0) {
            TObjEneBm3FlyNest__sub_800B39CC(arg0);
            M2C_FIELD(arg0, s32 *, 0x4B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B8) - 1);
        }
        TBoss1Dragon__sub_80143504(arg0);
        ((VObj18_800b2fd0 *) arg0)->vf198();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B30B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_800b30b0 { char pad[0x18]; };
struct VObj18_800b30b0 : VBase18_800b30b0 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vpad87();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vf198();
};

extern "C" {

void update_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
s32 TObjEneBm3FlyNest__sub_800B3AC8();
M2C_UNK TObjEneBm3FlyNest__sub_800B3ADC(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

extern const f32 lbl_805D9CF8;

void update_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        ((VObj18_800b30b0 *) arg0)->vf180();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9CF8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 0) {
            M2C_FIELD(arg0, s32 *, 0x3A8) = 1;
            M2C_FIELD(arg0, s32 *, 0x4C0) = 2;
            M2C_FIELD(arg0, s32 *, 0x4C4) = 0x78;
        }
        break;
    case 5:
        break;
    case 3:
        if (TObjEneBm3FlyNest__sub_800B3AC8() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 6);
            return;
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        TObjEneBm3FlyNest__sub_800B3ADC(arg0);
        ((VObj18_800b30b0 *) arg0)->vf198();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B3354
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B3354 { char pad[0x18]; };
struct VObj_800B3354 : Base_800B3354 {
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
    virtual void m92(); virtual void m93();
    virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98();
    virtual void m99();
    virtual void m100();
};
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_800B3428 { char pad[0x18]; };
struct VObj_800B3428 : Base_800B3428 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m94();
VA
VA
VA
VA
VA
    virtual void m100();
};

extern "C" {

void handle_event__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void state_wait__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjEneBm3FlyNest__sub_800B39CC(void *);
s32 TObjEneBm3FlyNest__sub_800B3AC8();
M2C_UNK TObjEneBm3FlyNest__sub_800B3ADC(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805D9D04;
extern const f32 lbl_805D9D30;

void handle_event__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_800B3354 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9D04;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjEneDD__sub_800BBA18(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (objInBand__FP7GameObjf(arg0, lbl_805D9D30) != 0) {
            TObjEneBm3FlyNest__sub_800B39CC(arg0);
            M2C_FIELD(arg0, s32 *, 0x4B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B8) - 1);
        }
        ((VObj_800B3354 *)arg0)->m100();
        break;
    }
}

extern const f32 lbl_805D9D04;

void state_wait__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((struct VObj_800B3428 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9D04;
        M2C_FIELD(arg0, s32 *, 0x4C0) = 1;
        M2C_FIELD(arg0, s32 *, 0x4C4) = 0x96;
        return;
    case 3:
        if (TObjEneBm3FlyNest__sub_800B3AC8() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        TObjEneBm3FlyNest__sub_800B3ADC(arg0);
        ((struct VObj_800B3428 *)arg0)->m100();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B3B94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_v2_mode__9TObjEneDDFv();
s32 TBoss8Dragon__sub_800BB780(void *);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int VecCopy__FP3VecPC3Vec(void*, void*);
int TObjEneDD__sub_800BAAE4(void*, void*, void*);
void TObjEneBm3FlyNest__sub_800B3BE8(void);
void TObjEneBm3FlyNest__sub_800B3CBC(void);

void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p) { TObjEneDD__sub_800BAAE4(p, (char*)p + 0x2fc, (void*)0); }
void copy_pos__17TObjEneBm3FlyNestFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneBm3FlyNest__sub_800B3BE8(void) {  }
void update_state__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) && (check_v2_mode__9TObjEneDDFv() != 0)) {
        TBoss8Dragon__sub_800BB780(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 == 4) {
        TBoss8Dragon__sub_800BB780(arg0);
        return;
    }
    if (temp_r0 != 7) {
        TObjEneDD__sub_800BBA18(arg0, 7);
    }
}
void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 9) && (temp_r0 != 8) && (temp_r0 != 4)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 8);
    }
}
void TObjEneBm3FlyNest__sub_800B3CBC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B4158
#include "types.h"

extern "C" {

int TObjEneBm3FlyNest__sub_800B4158(void);

    extern int lbl_805D5108;
int TObjEneBm3FlyNest__sub_800B4158(void) {  return lbl_805D5108; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B4160
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_fly__17TObjEneBm3FlyNestFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK release_shared_data__13TObjEneBm3FlyFv();

extern u32 lbl_805D5108;

void free_fly__17TObjEneBm3FlyNestFv(void) {
    release_shared_data__13TObjEneBm3FlyFv();
    if ((u32) lbl_805D5108 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5108, 1);
        lbl_805D5108 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B419C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TObjEneBm3FlyNestFPv(void *arg0);
void *TObjEneBm3FlyNest__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__17TObjEneBm3FlyNestFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4DC);
    if (o != NULL) {
        o = TObjEneBm3FlyNest__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B42F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern u8 *lbl_805D5108;

void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 0xC), lbl_805D5108);
    TObjPlayer__sub_803D9B2C();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        TOHangerMachine01__sub_803D9C00(M2C_FIELD(arg0, void **, 0x30));
    } else {
        TOHangerMachine01__sub_803D9C00(M2C_FIELD(arg0, void **, 0x34));
    }
    TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x40));
    set_global_flag__10TObjPlayerFv();
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 8), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x4C));
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B4630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804920B4[];

void *TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804920B4;
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
