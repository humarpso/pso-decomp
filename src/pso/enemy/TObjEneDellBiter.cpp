#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneDellBiter__vt103(void* p);

int get_target_info__9TObjEneDDFPv(void*);
int TObjEneDellBiter__sub_80305F58(void*);

void TObjEneDellBiter__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneDellBiter__sub_80305F58(p); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x800BC46C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TObjEneGibbles__sub_80156780(void *, void *, void *);
void TObjPlayer__sub_801569F4(void *);

extern M2C_UNK lbl_804928CC[];

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TObjPlayer__sub_801569F4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804928CC;
    TObjEneGibbles__sub_80156780(arg0, arg3, arg4);
    M2C_FIELD(arg0, void **, 0xAC) = arg2;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803030D4
#include "types.h"

extern "C" {

void TObjEneDellBiter__sub_803030D4(void);

void TObjEneDellBiter__sub_803030D4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803031AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDellBiter__sub_803031AC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804E6B54[];

void *TObjEneDellBiter__sub_803031AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6B54;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803032EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK restore_render_scissor(int);

extern M2C_UNK main_task[];
extern const f32 TObjEneDellBiter__data_805DEFB8;

s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3C8)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            TObjPlayer__sub_803D9B78();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803042B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
s32 TObjBoss2Tunnel__sub_8007E5A0(int, int, int, int, int);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
s32 TObjEneDellBiter__sub_803054FC(void *);
M2C_UNK TObjEneDellBiter__sub_80305B60(void *);
M2C_UNK TObjEneDellBiter__sub_80305E1C(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
M2C_UNK fn_8002B094(int);
s32 objInBand__FP7GameObjf(void *, f32);

extern u8 *TObjEneDellBiter__data_805D6A2C;
extern const f32 TObjEneDellBiter__data_805DEFE4;
extern const f32 lbl_805DEFF0;

struct VObjBase_803042b0 { char pad_[0x18]; };
struct VObj_803042b0 : VObjBase_803042b0 {
#define VS8(n) virtual M2C_UNK m##n##0(); virtual M2C_UNK m##n##1(); virtual M2C_UNK m##n##2(); virtual M2C_UNK m##n##3(); virtual M2C_UNK m##n##4(); virtual M2C_UNK m##n##5(); virtual M2C_UNK m##n##6(); virtual M2C_UNK m##n##7(); virtual M2C_UNK m##n##8(); virtual M2C_UNK m##n##9();
    VS8(0) VS8(1) VS8(2) VS8(3) VS8(4) VS8(5) VS8(6) VS8(7) VS8(8) VS8(9)
    virtual M2C_UNK m100();
};

void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x4A0)));
        reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x4A4)));
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x488) = (s32) (M2C_FIELD(arg0, s32 *, 0x488) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x488) >= 2) {
                M2C_FIELD(arg0, s32 *, 0x488) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
            }
            if (TObjEneDellBiter__sub_803054FC((void *) (arg0)) == 0) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            }
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x484) = TObjBoss2Tunnel__sub_8007E5A0((int) (temp_r3), (int) (M2C_FIELD(arg0, s32 *, 0x484)), (int) (temp_r3), (int) (0x200), (int) (0x2000));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
                TObjEneDellBiter__sub_80305B60((void *) (arg0));
            }
            TObjEneDellBiter__sub_80305E1C((void *) (arg0));
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFF0)) != 0) {
                TBoss3Volopt__sub_8022675C((int) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (void *) (0x40039E16))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) >= (s32) M2C_FIELD(TObjEneDellBiter__data_805D6A2C, s32 *, 0x18)) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        ((VObj_803042b0 *) arg0)->m100();
        ((VObj_803042b0 *) arg0)->m87();
        break;
    case 5:
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80305034
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_80305034 { char pad[0x18]; };
struct VObj_80305034 : VBase_80305034 {
#define VM(i) virtual M2C_UNK m##i();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)
    VM(16)VM(17)VM(18)VM(19)VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)VM(30)
    VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)
    VM(46)VM(47)VM(48)VM(49)VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)VM(60)
    VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)
    VM(76)VM(77)VM(78)VM(79)VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)VM(90)
    VM(91)VM(92)VM(93)VM(94)
#undef VM
};
struct WBase_80305034 { char pad[0x14]; };
struct WObj_80305034 : WBase_80305034 {
#define WM(i) virtual M2C_UNK w##i();
    WM(0)WM(1)WM(2)WM(3)WM(4)WM(5)
#undef WM
};

extern "C" {

void run_task__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800BACE0(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK noop__16TObjEneDellBiterFv(void *);
M2C_UNK TObjEneDellBiter__sub_803058DC(void *);
M2C_UNK TObjEneDellBiter__sub_8030591C(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);

extern const f32 TObjEneDellBiter__data_805DF00C;
extern const f32 lbl_805DF014;

void run_task__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((VObj_80305034 *) arg0)->m93();
        ((WObj_80305034 *) (arg0 + 0x3D4))->w3();
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        M2C_FIELD(arg0, s32 *, 0x488) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039E12)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        update_linked_position__14TObjEneEpsilonFPv((void *) (arg0), (f32) (TObjEneDellBiter__data_805DF00C));
        M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) > 0x14) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039B14)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            TObjEneDellBiter__sub_8030591C((void *) (arg0));
            TObjEneDD__sub_800BACE0((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (lbl_805DF014));
            noop__16TObjEneDellBiterFv((void *) (arg0));
            break;
        case 1:
            TObjEneDellBiter__sub_803058DC((void *) (arg0));
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        if (((WObj_80305034 *) (arg0 + 0x3D4))->w5() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
            ((VObj_80305034 *) arg0)->m94();
            ((VObj_80305034 *) arg0)->m87();
            return;
        }
        break;
    case 5:
        ((VObj_80305034 *) arg0)->m94();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80305268
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_80305268 { char pad[0x18]; };
struct VObj_80305268 : VBase_80305268 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

extern "C" {

void handle_movement_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern const f64 TObjEneDellBiter__data_80475328;
extern const f32 TObjEneDellBiter__data_805DF00C;

void handle_movement_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (1));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 1);
        ((VObj_80305268 *) arg0)->m93();
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
        return;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv((f32) (TObjEneDellBiter__data_805DF00C)) != 0) {
            TObjEneEpsilon__sub_800B96A4((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (TObjEneDellBiter__data_80475328 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8))));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4BC) == 1) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (3));
                return;
            }
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (2));
        } else {
        case 5:
        case 0:
            return;
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030535C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__16TObjEneDellBiterFPvi(void *arg0, s32 arg1);

M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void update_state__16TObjEneDellBiterFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        TObjEneDD__sub_800BBA18(arg0, 1);
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
    case 5:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030561C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8030561C { char pad[0x18]; };
struct VObj_8030561C : Base_8030561C {
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
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
};

extern "C" {

void noop__16TObjEneDellBiterFv(void);
void TObjEneDellBiter__vt102(void *arg0, f32 farg0);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);

void TObjEneDellBiter__vt102(void *arg0, f32 farg0) {
    if (((VObj_8030561C *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

void noop__16TObjEneDellBiterFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80305884
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_active_flag__16TObjEneDellBiterFPv(void *arg0);
s32 TObjEneEpsilon__sub_800B95E0();
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

extern f32 TObjEneDellBiter__data_805DF00C;

void clear_active_flag__16TObjEneDellBiterFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 8)) {
        update_linked_position__14TObjEneEpsilonFPv(TObjEneDellBiter__data_805DF00C);
        return;
    }
    if (TObjEneEpsilon__sub_800B95E0() == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80305BDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_effect__16TObjEneDellBiterFi(s32 arg0);
s32 TObjEneDellBiter__sub_803059BC(s32, s32);
M2C_UNK TObjEneGibbles__sub_800D8988(s32);
s32 copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);

void update_attack_effect__16TObjEneDellBiterFi(s32 arg0) {
    if (TObjEneDellBiter__sub_803059BC(arg0, arg0 + 0x38) != 0) {
        TObjEneGibbles__sub_800D8988(arg0 + 0x38);
        return;
    }
    TBoss3Volopt__sub_8022675C((s32)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x40039E11), arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030610C
#include "types.h"

extern "C" {

void TObjEneDellBiter__vt86(void);

void TObjEneDellBiter__vt86(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80306160
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneDellBiter__vt61(void* p);
void TObjEneDellBiter__vt59(void);
void TObjEneDellBiter__vt26(void);

void TObjEneDellBiter__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803061C0
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneDellBiter__vt61(void* p);
void TObjEneDellBiter__vt59(void);
void TObjEneDellBiter__vt26(void);

void TObjEneDellBiter__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneDellBiter__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80306720
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDellBiter__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDellBiter__sub_80305F58(void *);
void TObjEneDellBiter__sub_80306468(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

extern M2C_UNK __vt__16TObjEneDellBiter[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D4078;

void *TObjEneDellBiter__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneDellBiter;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 980));
    __construct_array((void *)((char *)arg0 + 1008), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4078;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneDellBiter__sub_80305F58(arg0);
    TObjEneDellBiter__sub_80306468(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803067D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__16TObjEneDellBiterFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjEneDellBiter__data_805D6A30;

void destroy_static_instance__16TObjEneDellBiterFv(void) {
    if ((u32) TObjEneDellBiter__data_805D6A30 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDellBiter__data_805D6A30, 1);
        TObjEneDellBiter__data_805D6A30 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030680C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDellBiter__create(void *arg0);
void *TObjEneDellBiter__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *TObjEneDellBiter__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneDellBiter__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#endif
