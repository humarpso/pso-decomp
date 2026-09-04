#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *arg0, u32 arg1, s32 arg2);

s32 TObjPlayer__sub_80019248(void *);
s32 obj_testFlags30(void *, M2C_UNK);
s32 get_player_count__10TObjPlayerFv();
M2C_UNK create_damage_font__19TObjEneEpsilonGuardFiiii(u32, M2C_UNK, M2C_UNK, s16);

void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *arg0, u32 arg1, s32 arg2) {
    if ((obj_testFlags30(arg0, 0x02000000) == 0) && (TObjPlayer__sub_80019248(arg0) == 0) && (arg1 != 0U) && ((s16) arg2 >= 0) && ((get_player_count__10TObjPlayerFv() == 0) || ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U))) {
        create_damage_font__19TObjEneEpsilonGuardFiiii(arg1, -1, 0x14, (s16) arg2);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800FD37C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_damage_font__19TObjEneEpsilonGuardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 __ct__14TFontSmallTaskFv(s32, s32, s32, s32, M2C_UNK, s32, M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);

s32 create_damage_font__19TObjEneEpsilonGuardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;

    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80228F5C(arg3);
    var_r31 = __nw__7TObjectFUl(0x58);
    if (var_r31 != 0) {
        var_r31 = __ct__14TFontSmallTaskFv(var_r31, arg0, arg1, arg2, 0, TLobby__sub_8001DC24(), 0xFFFF);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035DD68
#include "types.h"

extern "C" {

int TObjEneEpsilonGuard__sub_8035DD68(void* p);

int TObjEneEpsilonGuard__sub_8035DD68(void* p) { return (*(u32*)((char*)p + 0x46c) >> 7) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035DEF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target__19TObjEneEpsilonGuardFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);

struct GuardBase { char pad[0x18]; };
struct GuardVObj : GuardBase {
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
    virtual void m52(); virtual void m53();
};

void set_target__19TObjEneEpsilonGuardFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (void)arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    if (arg3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x100);
    } else {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFEFF);
    }
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 1);
    ((GuardVObj *)arg0)->m53();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035DF78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern M2C_UNK main_task[];
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
extern const f32 TObjEneEpsilonGuard__data_805E01DC;

void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f1;

    if ((M2C_FIELD(arg0, s32 *, 0x46C) & 0x20) && (get_mode__11TCameraCtrlFPv((void *) (main_task)) & 0x200)) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9624((int) (0), (f32) (TObjEneEpsilonGuard__data_805E01D8), (f32) (TObjEneEpsilonGuard__data_805E01DC), (f32) (TObjEneEpsilonGuard__data_805E01D8));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x458);
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
        set_global_flag__10TObjPlayerFv();
        TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 0x444)), (int) (M2C_FIELD(arg0, s32 *, 0x448)), (f32) (M2C_FIELD(arg0, f32 *, 0x454)));
        clear_global_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035E3B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_message__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

struct Base_8035E3B8 { char pad[0x18]; };
struct VObj_8035E3B8 : Base_8035E3B8 {
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

void handle_message__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((struct VObj_8035E3B8 *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x14);
        send_entity_set_flags__6TLobbyFPv(arg0);
        return;
    case 3:
        queue_destruction__7TObjectFv(arg0);
    case 5:
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035E68C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18 { char pad[0x18]; };
struct VObj18 : VBase18 {
    virtual void vpad0(); virtual void vpad1(); virtual void vpad2(); virtual void vpad3();
    virtual void vpad4(); virtual void vpad5(); virtual void vpad6(); virtual void vpad7();
    virtual void vpad8(); virtual void vpad9(); virtual void vpad10(); virtual void vpad11();
    virtual void vpad12(); virtual void vpad13(); virtual void vpad14(); virtual void vpad15();
    virtual void vpad16(); virtual void vpad17(); virtual void vpad18(); virtual void vpad19();
    virtual void vpad20(); virtual void vpad21(); virtual void vpad22(); virtual void vpad23();
    virtual void vpad24(); virtual void vpad25(); virtual void vpad26(); virtual void vpad27();
    virtual void vpad28(); virtual void vpad29(); virtual void vpad30(); virtual void vpad31();
    virtual void vpad32(); virtual void vpad33(); virtual void vpad34(); virtual void vpad35();
    virtual void vpad36(); virtual void vpad37(); virtual void vpad38(); virtual void vpad39();
    virtual void vpad40(); virtual void vpad41(); virtual void vpad42(); virtual void vpad43();
    virtual void vpad44(); virtual void vpad45(); virtual void vpad46(); virtual void vpad47();
    virtual void vpad48(); virtual void vpad49(); virtual void vpad50(); virtual void vpad51();
    virtual void vpad52(); virtual void vpad53(); virtual void vpad54(); virtual void vpad55();
    virtual void vpad56(); virtual void vpad57(); virtual void vpad58(); virtual void vpad59();
    virtual void vpad60(); virtual void vpad61(); virtual void vpad62(); virtual void vpad63();
    virtual void vpad64(); virtual void vpad65(); virtual void vpad66(); virtual void vpad67();
    virtual void vpad68(); virtual void vpad69(); virtual void vpad70(); virtual void vpad71();
    virtual void vpad72(); virtual void vpad73(); virtual void vpad74(); virtual void vpad75();
    virtual void vpad76(); virtual void vpad77(); virtual void vpad78(); virtual void vpad79();
    virtual void vpad80(); virtual void vpad81(); virtual void vpad82(); virtual void vpad83();
    virtual void vpad84(); virtual void vpad85(); virtual void vpad86();
    virtual void vf164();
    virtual void vpad88(); virtual void vpad89(); virtual void vpad90(); virtual void vpad91();
    virtual void vpad92(); virtual void vpad93();
    virtual void vf180();
};

extern "C" {

void state_orbit__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BAC14(void *, void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(void *);
M2C_UNK TObjEneEpsilonGuard__sub_8035EFD8(void *, s32);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();
s32 TObjEneEpsilonGuard__sub_8035F95C(u32);
s32 TObjEneEpsilonGuard__sub_8035F968();

extern void *TObjEneEpsilonGuard__data_805D6F74;
extern const f32 lbl_805E01E8;
extern const f32 lbl_805E01EC;
extern const f32 lbl_805E01F0;

void state_orbit__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    u32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 4);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFFE7);
        ((VObj18 *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x430) = 0;
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x43C) = 0;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 8) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x430);
        switch (temp_r0) {
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x100) {
                M2C_FIELD(arg0, s32 *, 0x43C) = (s32) ((lbl_805E01E8 * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 8)) / (lbl_805E01EC * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 0)));
            } else {
                M2C_FIELD(arg0, s32 *, 0x43C) = (s32) ((lbl_805E01F0 * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 8)) / (lbl_805E01EC * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 0)));
            }
            M2C_FIELD(arg0, s32 *, 0x430) = 1;
            break;
        case 1:
            temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x470));
            if (temp_r3 != 0U) {
                if (TObjEneEpsilonGuard__sub_8035F968() == 1) {
                    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFFFB);
                    M2C_FIELD(arg0, s32 *, 0x430) = 2;
                } else if (TObjEneEpsilonGuard__sub_8035F95C(temp_r3) != 1) {
                    goto block_23;
                }
            } else {
block_23:
                M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) + M2C_FIELD(arg0, s32 *, 0x43C));
                TObjEneEpsilonGuard__sub_8035EFD8(arg0, M2C_FIELD(arg0, s32 *, 0x438));
                update_velocity__9TObjEneDDFPv(arg0);
                TObjEneDD__sub_800BAC14(arg0, TObjEneEpsilonGuard__data_805D6F74, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 8));
            }
            break;
        case 2:
            if ((TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x470)) != 0U) && (TObjEneEpsilonGuard__sub_8035F968() == 0)) {
                M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 4);
                M2C_FIELD(arg0, s32 *, 0x430) = 1;
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = calc_angle_to_target__19TObjEneEpsilonGuardFPv(arg0);
        ((VObj18 *) arg0)->vf164();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035E9DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct EGPad { char pad[0x18]; };
#define V1(n) virtual void vpad##n();
#define V10(n) V1(n##0) V1(n##1) V1(n##2) V1(n##3) V1(n##4) V1(n##5) V1(n##6) V1(n##7) V1(n##8) V1(n##9)
struct EG : EGPad {
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8)
    V1(90) V1(91) V1(92)
    virtual void slot93();
};

extern "C" {

void handle_event__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void handle_event__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        ((EG *) arg0)->slot93();
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & ~5);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 1) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035EDAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_guard_state__19TObjEneEpsilonGuardFPv(u8 *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TObjEneEpsilonGuard__sub_8035EA90(void *);
s32 TObjEneEpsilonGuard__sub_8035F950();
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
s32 TPhotonMylla__sub_80154CB4(int);
s16 obj_getField1c(int);

void update_guard_state__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x40)) {
        temp_r3 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x470)));
        if ((temp_r3 == 0) || (TObjEneEpsilonGuard__sub_8035F950() == 1)) {
            if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x10) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            } else {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (4));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x390) = temp_r3;
            M2C_FIELD(arg0, s16 *, 0x38C) = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x390)));
            TObjEneEpsilon__sub_800B96A4((void *) (arg0));
            TObjEneEpsilonGuard__sub_8035EA90((void *) (arg0));
        }
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x20) {
            TOTrapAncient01__sub_80226578((int) (0x4003A846), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r0 != 4) && (temp_r0 != 5)) {
            TOTrapAncient01__sub_80226578((int) (0x4003AD43), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035EEA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneEpsilonGuard__vt87(void *arg0);

M2C_UNK TObjEneDD__vt86();
M2C_UNK update_center_position__19TObjEneEpsilonGuardFPv(void *);

void TObjEneEpsilonGuard__vt87(void *arg0) {
    TObjEneDD__vt86();
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x400000) {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x80);
    } else {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFF7F);
    }
    update_center_position__19TObjEneEpsilonGuardFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035EF04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_center_position__19TObjEneEpsilonGuardFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

extern const f32 TObjEneEpsilonGuard__data_805E01DC;

void update_center_position__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneEpsilonGuard__data_805E01DC + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneEpsilonGuard__data_805E01DC));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035EF78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0);
M2C_UNK TObjEneEpsilon__sub_800B96A4();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);

extern const f64 lbl_80479C88;

s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f3;

    TObjEneEpsilon__sub_800B96A4();
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x38);
    return (s32) (lbl_80479C88 * get_ad_end_text_start__10TObjPlayerFv((f32) (temp_f3 - M2C_FIELD(arg0, f32 *, 0x394)), (f32) (M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x39C)), (f32) (temp_f3)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035F040
#include "types.h"

extern "C" {

void TObjEneEpsilonGuard__vt59(void);
void TObjEneEpsilonGuard__vt60(void);
void TObjEneEpsilonGuard__vt61(void);
void TObjEneEpsilonGuard__vt26(void);

void TObjEneEpsilonGuard__vt59(void) {  }
void TObjEneEpsilonGuard__vt60(void) {  }
void TObjEneEpsilonGuard__vt61(void) {  }
void TObjEneEpsilonGuard__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035F1C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TObjEneEpsilonGuard__ct(void *, void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneEpsilonGuard__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035F950
#include "types.h"

extern "C" {

int TObjEneEpsilonGuard__sub_8035F950(void* p);
int TObjEneEpsilonGuard__sub_8035F95C(void* p);
int TObjEneEpsilonGuard__sub_8035F968(void);

int TObjEneEpsilonGuard__sub_8035F950(void* p) { return (*(u32*)((char*)p + 0x438) >> 11) & 0x1; }
int TObjEneEpsilonGuard__sub_8035F95C(void* p) { return (*(u32*)((char*)p + 0x438) >> 5) & 0x1; }
int TObjEneEpsilonGuard__sub_8035F968(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80360110
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_guard_state__19TObjEneEpsilonGuardFPv(void *arg0);
void TObjEneEpsilonGuard__sub_803601D0(void);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);

M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D6FA0;

void set_guard_state__19TObjEneEpsilonGuardFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x438) & 2) {
        M2C_FIELD(arg0, s16 *, 0x43C) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(lbl_805D6FA0, 0);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_indexed_flags(arg0, 1, 1);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    } else {
        M2C_FIELD(arg0, s16 *, 0x43C) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(lbl_805D6FA0, 1);
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_indexed_flags(arg0, 0, 1);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 1, 1);
    }
    TBoss1Dragon__sub_80143504(arg0);
}

void TObjEneEpsilonGuard__sub_803601D0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036029C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_body_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjFish__sub_803E46BC();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern M2C_UNK main_task[];
extern s32 lbl_805D6FA0;
extern const f32 lbl_805E0208;
extern const f32 lbl_805E0214;
extern const f32 lbl_805E0218;

void render_body_effect__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f1;

    if (get_mode__11TCameraCtrlFPv(main_task) & 0x200) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9624((int) (0), (f32) (lbl_805E0208), (f32) (lbl_805E0214), (f32) (lbl_805E0208));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4F8);
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (lbl_805E0218), (f32) (temp_f1));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        toggle_particle_effect__10TObjPlayerFv();
        TObjFish__sub_8001EDC4((void *) (lbl_805D6FA0), (int) (4));
        TObjFish__sub_803E46BC();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80360A9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A { char pad[0x18]; };
struct F_V : F_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m87();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m94();
};

extern "C" {

void update_fade__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK set_guard_state__19TObjEneEpsilonGuardFPv(void *, s32);
M2C_UNK TBoss8Dragon__sub_800BB780();
M2C_UNK TBoss1Dragon__sub_80143504();

void update_fade__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        ((F_V *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x10);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r4 & ~0x243);
        set_guard_state__19TObjEneEpsilonGuardFPv(arg0, temp_r4);
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        M2C_FIELD(arg0, u32 *, 0x44C) = -0x22U;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, u32 *, 0x44C) = (u32) (M2C_FIELD(arg0, u32 *, 0x44C) + 0x22);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x44C) > 0xFFU) {
                M2C_FIELD(arg0, u32 *, 0x44C) = 0xFFU;
                M2C_FIELD(arg0, s32 *, 0x4E4) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, u32 *, 0x44C) = (u32) (M2C_FIELD(arg0, u32 *, 0x44C) - 0x22);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x44C) <= 0x22U) {
                M2C_FIELD(arg0, u32 *, 0x44C) = 0U;
                M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
            }
            break;
        default:
            M2C_FIELD(arg0, u32 *, 0x44C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
            break;
        }
        ((F_V *) arg0)->m87();
        return;
    case 5:
        TBoss8Dragon__sub_800BB780();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80361384
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A { char pad[0x18]; };
struct F_V : F_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m87();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m94();
};

extern "C" {

void action__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneEpsilonGuard__sub_8035FFA8(void *);
M2C_UNK set_guard_state__19TObjEneEpsilonGuardFPv(void *, s32);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjEneEpsilonGuard__sub_8035FB44(void *);
s32 TObjEneEpsilonGuard__sub_8035FCEC(void *);
M2C_UNK tick_stun_timer__19TObjEneEpsilonGuardFPv(void *);

extern void *lbl_805D6F8C;

void action__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        ((F_V *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x400);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r4 & ~0x247);
        set_guard_state__19TObjEneEpsilonGuardFPv(arg0, temp_r4);
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 5);
        }
        break;
    case 5:
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        tick_stun_timer__19TObjEneEpsilonGuardFPv(arg0);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
        switch (temp_r0) {
        case 0:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x438);
            if (((temp_r3 & 4) || (temp_r3 & 0x80)) && (TObjEneEpsilonGuard__sub_8035FCEC(arg0) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
                M2C_FIELD(arg0, s32 *, 0x444) = (s32) M2C_FIELD(arg0, s32 *, 0x454);
            } else {
                TObjEneEpsilonGuard__sub_8035FB44(arg0);
                TObjEneEpsilonGuard__sub_8035FFA8(arg0);
                if (M2C_FIELD(arg0, s32 *, 0x438) & 0x10) {
                    M2C_FIELD(arg0, s32 *, 0x4E4) = 1;
                    M2C_FIELD(arg0, s32 *, 0x4E8) = (s32) M2C_FIELD(lbl_805D6F8C, s32 *, 0x24);
                }
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4E8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4E8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFEF);
                M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
            }
            break;
        }
        ((F_V *) arg0)->m87();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80361D4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base { char pad[0x18]; };
struct VObj : Base {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();
    virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();
    virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();
    virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
    virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();
    virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();
    virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();
    virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
    virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();
    virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();
    virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();
    virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
    virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();
    virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();
    virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();
    virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
    virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();
    virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();
    virtual void m90();virtual void m91();virtual void m92();virtual void m93();
};

extern "C" {

void TObjEneEpsilonGuard__sub_80361D4C(u8 *arg0, s32 arg1);
void TObjEneEpsilonGuard__sub_80361E20(void);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK set_guard_state__19TObjEneEpsilonGuardFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void TObjEneEpsilonGuard__sub_80361D4C(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        ((VObj *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x43);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFDFF);
        set_guard_state__19TObjEneEpsilonGuardFPv(arg0);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, s32 *, 0x440) = (s32) M2C_FIELD(arg0, s32 *, 0x450);
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) M2C_FIELD(arg0, s32 *, 0x454);
        return;
    case 3:
        if (!(M2C_FIELD(arg0, s32 *, 0x438) & 0x80)) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
    case 0:
        return;
    }
}

void TObjEneEpsilonGuard__sub_80361E20(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80361E24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_guard_flag__19TObjEneEpsilonGuardFPv(u8 *arg0);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);

extern const f32 lbl_805E0238;

void update_guard_flag__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    if (update_linked_position__14TObjEneEpsilonFPv((f32) (lbl_805E0238)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFF7F);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x80);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80361FB4
#include "types.h"

extern "C" {

void update_step__19TObjEneEpsilonGuardFPv(void* p);
void TObjEneEpsilonGuard__sub_80361FE8(void);
int TObjEneDD__vt86(void*);
int update_position__19TObjEneEpsilonGuardFPv(void*);

void update_step__19TObjEneEpsilonGuardFPv(void* p) { TObjEneDD__vt86(p); update_position__19TObjEneEpsilonGuardFPv(p); }
void TObjEneEpsilonGuard__sub_80361FE8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80361FEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__19TObjEneEpsilonGuardFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

extern const f32 lbl_805E0214;

void update_position__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (lbl_805E0214 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (lbl_805E0214));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80362038
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneEpsilonGuard__sub_80362038(void);
void request_state8__19TObjEneEpsilonGuardFPv(void *arg0);
void set_action_9__19TObjEneEpsilonGuardFPv(void* p);
void TObjEneEpsilonGuard__sub_803620B0(void);
int TObjEneDD__sub_800BBA18(void*, void*);

void TObjEneEpsilonGuard__sub_80362038(void) {  }
void request_state8__19TObjEneEpsilonGuardFPv(void *arg0) {
    s32 temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        if (!(temp_r4 & 2) && !(temp_r4 & 0x40)) {
            TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(8));
        }
    }
}
void set_action_9__19TObjEneEpsilonGuardFPv(void* p) { if (*(short*)((char*)p + 0x326) != 9) { TObjEneDD__sub_800BBA18(p, (void*)9); } }
void TObjEneEpsilonGuard__sub_803620B0(void) {  }

}
#endif
#endif
