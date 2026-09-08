#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_8035DD68 { char pad[0x18]; };
struct VObj18_8035DD68 : VBase18_8035DD68 {
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
struct EGPad_8035DD68 { char pad[0x18]; };
#define V1(n) virtual void vpad##n();
#define V10(n) V1(n##0) V1(n##1) V1(n##2) V1(n##3) V1(n##4) V1(n##5) V1(n##6) V1(n##7) V1(n##8) V1(n##9)
struct EG_8035DD68 : EGPad_8035DD68 {
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8)
    V1(90) V1(91) V1(92)
    virtual void slot93();
};

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual M2C_UNK m53();
};

struct RecoveredGlobal_8035E374_lbl_805439E0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8035E374_lbl_805439E0_size[sizeof(RecoveredGlobal_8035E374_lbl_805439E0) == 0x10 ? 1 : -1];

struct VBase_18_6ff2a2 { char pad[0x18]; };

struct VObj_18_6ff2a2 : VBase_18_6ff2a2 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
};

#include <stddef.h>
struct VBase_18_7f4864 { char pad[0x18]; };

struct VObj_18_7f4864 : VBase_18_7f4864 {
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
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
    virtual M2C_UNK m94(s32);
};

struct VBase_14_87d649 { char pad[0x14]; };

struct VObj_14_87d649 : VBase_14_87d649 {
    virtual void m0();
    virtual M2C_UNK m1(M2C_UNK);
    virtual M2C_UNK m2();
    virtual void m3();
    virtual s32 m4();
};

struct RecoveredFields_8035E578_arg0 {
    u8 unknown_0[0xB8];
    s16 field_B8;
    u8 unknown_BA[0x3B2];
    s32 field_46C;
};

extern "C" {
s32 TObjEneEpsilonGuard__sub_8035DD74(u8 *arg0);
s32 TObjEneEpsilonGuard__sub_8035DD94(u8 *arg0);
void TObjEneEpsilonGuard__sub_8035DE48(u8 *arg0);
void TObjEneEpsilonGuard__sub_8035DE88(u8 *arg0);
void TObjEneEpsilonGuard__sub_8035DEC0(u8 *arg0);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
extern RecoveredGlobal_8035E374_lbl_805439E0 lbl_805439E0;
extern s32 lbl_805D6F78;
extern s32 lbl_805D6F7C;
void TObjEneEpsilonGuard__sub_8035E374(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, int, int);
M2C_UNK toggle_flag_9__10TObjPlayerFPv(void *);
void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
M2C_UNK TObjEneEpsilonGuard__sub_8035E018(void *, int);
M2C_UNK TObjPlayer__sub_803626A8(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
extern const f32 lbl_805E01E0;
extern const f32 lbl_805E01E4;
void render__19TObjEneEpsilonGuardFv(u8 *arg0);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
void TObjEneEpsilonGuard__sub_8035E578(u8 *arg0, s32 arg1);
}

extern "C" {

struct GuardBase_8035DD68 { char pad[0x18]; };
struct GuardVObj_8035DD68 : GuardBase_8035DD68 {
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
struct Base_8035E3B8_8035DD68 { char pad[0x18]; };
struct VObj_8035E3B8_8035DD68 : Base_8035E3B8_8035DD68 {
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

int TObjEneEpsilonGuard__sub_8035DD68(void* p);
int TObjEneEpsilonGuard__sub_8035DDC8(void);
int TObjEneEpsilonGuard__sub_8035DE08(void);
void handle_event__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
void handle_message__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
void set_target__19TObjEneEpsilonGuardFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void state_orbit__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BAC14(void *, void *, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneEpsilonGuard__sub_8035EFD8(void *, s32);
s32 TObjEneEpsilonGuard__sub_8035F95C(u32);
s32 TObjEneEpsilonGuard__sub_8035F968();
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(void *);
M2C_UNK clear_global_state__10TObjPlayerFv();
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

int TObjEneEpsilonGuard__sub_8035DD68(void* p) { return (*(u32*)((char*)p + 0x46c) >> 7) & 0x1; }

s32 TObjEneEpsilonGuard__sub_8035DD74(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, u32 *, 0x46C) >> 4U) & 1;
}

s32 TObjEneEpsilonGuard__sub_8035DD94(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 1) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, u32 *, 0x46C) >> 9U) & 1;
}

int TObjEneEpsilonGuard__sub_8035DDC8(void) { return 0; }
int TObjEneEpsilonGuard__sub_8035DE08(void) { return 0; }

void TObjEneEpsilonGuard__sub_8035DE48(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44C) = 0;
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x20);
    ((VObj_18 *)(arg0))->m53();
}

void TObjEneEpsilonGuard__sub_8035DE88(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 8);
    ((VObj_18 *)(arg0))->m53();
}

void TObjEneEpsilonGuard__sub_8035DEC0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 2);
    ((VObj_18 *)(arg0))->m53();
}

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
    ((GuardVObj_8035DD68 *)arg0)->m53();
}

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

#pragma push
#pragma opt_common_subs off
void render__19TObjEneEpsilonGuardFv(u8 *arg0) {
    s32 var_r31;
    if ((check_demo_mode__10TObjPlayerFv() == 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        var_r31 = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x10)) {
            if (is_main_phase_15__9TObjEneDDFv() != 0) {
                var_r31 = ((VObj_18_6ff2a2 *)(arg0))->m9(lbl_805E01E0, lbl_805E01E0, lbl_805E01E4);
            } else if (((VObj_18_6ff2a2 *)(arg0))->m8(lbl_805E01E0, lbl_805E01E4) != 0) {
                var_r31 = 1;
            } else {
                var_r31 = 0;
            }
        }
        if (var_r31 != 0) {
            update_player_state__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (0));
            toggle_flag_9__10TObjPlayerFPv((void *) (arg0));
            TObjEneEpsilonGuard__sub_8035E018((void *) (arg0), (int) (var_r31));
            render_guard_effect__19TObjEneEpsilonGuardFPv((u8 *)((void *) (arg0)));
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x460) = (f32) TObjEneEpsilonGuard__data_805E01D8;
        M2C_FIELD(arg0, f32 *, 0x464) = (f32) TObjEneEpsilonGuard__data_805E01D8;
        M2C_FIELD(arg0, f32 *, 0x468) = (f32) TObjEneEpsilonGuard__data_805E01D8;
        TObjPlayer__sub_803626A8((void *) (arg0), (void *) (arg0 + 0x460), (int) (0));
    }
}
#pragma pop

void TObjEneEpsilonGuard__sub_8035E374(void) {
    if ((s32) lbl_805D6F78 == 0) {
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_805439E0.value, lbl_805D6F7C);
    }
    lbl_805D6F78 += 1;
}

void handle_message__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((struct VObj_8035E3B8_8035DD68 *) arg0)->m93();
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

extern void *TObjEneEpsilonGuard__data_805D6F74;
extern const f32 lbl_805E01E8;
extern const f32 lbl_805E01EC;
extern const f32 lbl_805E01F0;

#pragma push
#pragma opt_common_subs off
typedef char RecoveredFields_8035E578_arg0_B8_offset[offsetof(RecoveredFields_8035E578_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_8035E578_arg0_46C_offset[offsetof(RecoveredFields_8035E578_arg0, field_46C) == 0x46C ? 1 : -1];
void TObjEneEpsilonGuard__sub_8035E578(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    switch (arg1) {
    case 4:
        ((RecoveredFields_8035E578_arg0 *)arg0)->field_B8 = 0;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
        ((VObj_14_87d649 *)((u8 *)(arg0) + (1212)))->m1(0x14);
        ((VObj_14_87d649 *)((u8 *)(arg0) + (1212)))->m2();
        temp_r4 = ((RecoveredFields_8035E578_arg0 *)arg0)->field_46C;
        ((RecoveredFields_8035E578_arg0 *)arg0)->field_46C = (s32) (temp_r4 & ~0x14);
        ((VObj_18_7f4864 *)(arg0))->m94(temp_r4);
        break;
    case 3:
        if (((VObj_14_87d649 *)((u8 *)(arg0) + (1212)))->m4() != 0) {
            TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(0));
            ((RecoveredFields_8035E578_arg0 *)arg0)->field_46C = (s32) (((RecoveredFields_8035E578_arg0 *)arg0)->field_46C | 0x10);
            ((VObj_18_7f4864 *)(arg0))->m93();
            break;
        }
    case 5:
        break;
    case 0:
        TBoss1Dragon__sub_80143504((void *)(arg0));
        ((VObj_18_7f4864 *)(arg0))->m87();
        break;
    }
}
#pragma pop

void state_orbit__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    u32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 4);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFFE7);
        ((VObj18_8035DD68 *) arg0)->vf180();
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
        TBoss1Dragon__sub_80143504((void *)(arg0));
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
        ((VObj18_8035DD68 *) arg0)->vf164();
        break;
    }
}

void handle_event__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        ((EG_8035DD68 *) arg0)->slot93();
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
