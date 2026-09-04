#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TObjEneBm5WolfFPv(void *arg0);
void *TObjEneBm5Wolf__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__14TObjEneBm5WolfFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x46C);
    if (o != NULL) {
        o = TObjEneBm5Wolf__ct(o, tl_04, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800B4820
#include "types.h"

extern "C" {

void TObjEneBm5Wolf__sub_800B4820(void);

void TObjEneBm5Wolf__sub_800B4820(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B4A64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__14TObjEneBm5WolfFPv(void *arg0);
M2C_UNK TObjEneBm5Wolf__sub_800B7EA0(void *);
M2C_UNK update_collision_center__14TObjEneBm5WolfFPv(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B8570(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B85A0(void *);
s32 get_target_info__9TObjEneDDFPv();

void update_state__14TObjEneBm5WolfFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x3D8);
        TObjEneBm5Wolf__sub_800B7EA0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x3D8)) {
            if (temp_r31 != 0) {
                TObjEneBm5Wolf__sub_800B8570(arg0);
            } else {
                TObjEneBm5Wolf__sub_800B85A0(arg0);
            }
        }
        update_collision_center__14TObjEneBm5WolfFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B4D04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_spawn_timer__14TObjEneBm5WolfFv(void);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

extern s32 TObjEneBm5Wolf__data_805D5124;
extern s32 TObjEneBm5Wolf__data_805D5128;

void advance_spawn_timer__14TObjEneBm5WolfFv(void) {
    if (((s32) TObjEneBm5Wolf__data_805D5124 >= 0x16) && ((s32) TObjEneBm5Wolf__data_805D5124 < 0x18)) {
        TObjPlayer__sub_803D9214(0, TObjEneBm5Wolf__data_805D5128);
    }
    TObjEneBm5Wolf__data_805D5124 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B52BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
M2C_UNK TObjEneBm5Wolf__sub_800B74B8(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B7530(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B7DDC(void *, s32);
M2C_UNK TObjEneBm5Wolf__sub_800B850C(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 TObjEneBm5Wolf__data_805D9DB4;

struct VBase { char pad[0x18]; };
struct VEne : VBase {
#define VPAD(n) virtual M2C_UNK _v##n() { return 0; }
    VPAD(0) VPAD(1) VPAD(2) VPAD(3) VPAD(4) VPAD(5) VPAD(6) VPAD(7) VPAD(8) VPAD(9)
    VPAD(10) VPAD(11) VPAD(12) VPAD(13) VPAD(14) VPAD(15) VPAD(16) VPAD(17) VPAD(18) VPAD(19)
    VPAD(20) VPAD(21) VPAD(22) VPAD(23) VPAD(24) VPAD(25) VPAD(26) VPAD(27) VPAD(28) VPAD(29)
    VPAD(30) VPAD(31) VPAD(32) VPAD(33) VPAD(34) VPAD(35) VPAD(36) VPAD(37) VPAD(38) VPAD(39)
    VPAD(40) VPAD(41) VPAD(42) VPAD(43) VPAD(44) VPAD(45) VPAD(46) VPAD(47) VPAD(48) VPAD(49)
    VPAD(50) VPAD(51) VPAD(52) VPAD(53) VPAD(54) VPAD(55) VPAD(56) VPAD(57) VPAD(58) VPAD(59)
    VPAD(60) VPAD(61) VPAD(62) VPAD(63) VPAD(64) VPAD(65) VPAD(66) VPAD(67) VPAD(68) VPAD(69)
    VPAD(70) VPAD(71) VPAD(72) VPAD(73) VPAD(74) VPAD(75) VPAD(76) VPAD(77) VPAD(78) VPAD(79)
    VPAD(80) VPAD(81) VPAD(82) VPAD(83) VPAD(84) VPAD(85) VPAD(86)
    virtual M2C_UNK m87();
    VPAD(88) VPAD(89) VPAD(90) VPAD(91) VPAD(92) VPAD(93)
    virtual M2C_UNK m94();
#undef VPAD
};

void action__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VEne *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 7);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        TObjEneBm5Wolf__sub_800B850C(M2C_FIELD(arg0, s32 *, 0x3DC));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 7);
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        TObjEneBm5Wolf__sub_800B7DDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DB4) != 0) {
            TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA1A), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x100);
        }
        M2C_FIELD(arg0, s32 *, 0x41C) = (s32) (M2C_FIELD(arg0, s32 *, 0x41C) + 1);
        if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x1E) {
            TObjEneBm5Wolf__sub_800B7530(arg0);
        } else if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x28) {
            TObjEneBm5Wolf__sub_800B74B8(arg0);
        }
        ((VEne *)arg0)->m87();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B6B4C
#include "types.h"

extern "C" {

void TObjEneBm5Wolf__sub_800B6B4C(void);

void TObjEneBm5Wolf__sub_800B6B4C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B72B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B72B4(u8 *arg0, s32 arg1);
u32 TObjEneBm5Wolf__sub_800B850C(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *fn_800B8B00(u32);

s16 obj_getField1c();

struct VBase2 { char pad[0x18]; };
struct VObj2 : VBase2 { virtual void *m0(); virtual void *m1(); virtual void *m2(); virtual void *m3(); virtual void *m4(); virtual void *m5(); virtual void *m6(); virtual void *m7(); virtual void *m8(); virtual void *m9(); virtual void *m10(); virtual void *m11(); virtual void *m12(); virtual void *m13(); virtual void *m14(); virtual void *m15(); virtual void *m16(); virtual void *m17(); virtual void *m18(); virtual void *m19(); virtual void *m20(); virtual void *m21(); virtual void *m22(); virtual void *m23(); virtual void *m24(); virtual void *m25(); virtual void *m26(); virtual void *m27(); virtual void *m28(); virtual void *m29(); virtual void *m30(); virtual void *m31(); virtual void *m32(); virtual void *m33(); virtual void *m34(); virtual void *m35(); virtual void *m36(); virtual void *m37(); virtual void *m38(); virtual void *m39(); virtual void *m40(); virtual void *m41(); virtual void *m42(); virtual void *m43(); virtual void *m44(); virtual void *m45(); virtual void *m46(); virtual void *m47(); virtual void *m48(); virtual void *m49(); virtual void *m50(); virtual void *m51(); virtual void *m52(); virtual void *m53(); virtual void *m54(); virtual void *m55(); virtual void *m56(); virtual void *m57(); virtual void *m58(); virtual void *m59(); virtual void *m60(); virtual void *m61(); virtual void *m62(); virtual void *m63(); virtual void *m64(); virtual void *m65(); virtual void *m66(); virtual void *m67(); virtual void *m68(); virtual void *m69(); virtual void *m70(); virtual void *m71(); virtual void *m72(); virtual void *m73(); virtual void *m74(); virtual void *m75(); virtual void *m76(); virtual void *m77(); virtual void *m78(); virtual void *m79(); virtual void *m80(); virtual void *m81(); virtual void *m82(); virtual void *m83(); virtual void *m84(); virtual void *m85(); virtual void *m86(); virtual void *m87(); virtual void *m88(); virtual void *m89(); virtual void *m90(); virtual void *m91(); virtual void *m92(); virtual M2C_UNK m93(); };
#define VTABLE_ENE ((VObj2 *) arg0)

void TObjEneBm5Wolf__sub_800B72B4(u8 *arg0, s32 arg1) {
    u32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x420) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        VTABLE_ENE->m93();
        M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) | 2);
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x420) > 0) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        temp_r3 = TObjEneBm5Wolf__sub_800B850C(M2C_FIELD(arg0, s32 *, 0x3DC));
        if (temp_r3 != 0U) {
            M2C_FIELD(arg0, s16 *, 0x3E0) = obj_getField1c();
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) || (temp_r3 == 0U)) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3F4, arg0 + 0x3E8);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3F4, fn_800B8B00(temp_r3));
        }
        M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 1);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B75A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B75A8(void *arg0, s32 arg1, s16 arg2);

void TObjEneBm5Wolf__sub_800B75A8(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x414) = arg1;
    M2C_FIELD(arg0, s16 *, 0x418) = arg2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B76D4
#include "types.h"

extern "C" {

int get_flag_bit0__14TObjEneBm5WolfFPv(void* p);

int get_flag_bit0__14TObjEneBm5WolfFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7734
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);

extern const f32 lbl_805D9E48;

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0) {
    if (objInBand__FP7GameObjf((f32) (lbl_805D9E48)) != 0) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7870
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0);
void select_target__14TObjEneBm5WolfFPv(void *arg0);
void set_attack_flag__14TObjEneBm5WolfFPv(void* p);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E4C);
        return;
    }
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E50);
}

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void select_target__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E4C);
        return;
    }
    select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E50);
}

void set_attack_flag__14TObjEneBm5WolfFPv(void* p) { *(u32*)((char*)p + 0x408) |= 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7A84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_anim_state__14TObjEneBm5WolfFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void set_anim_state__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        TObjEneDD__sub_800BBA18(arg0, 6);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 5);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7AC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0);
M2C_UNK TObjEneDD__sub_800BBA18(s32, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 TObjEneBm5Wolf__data_805D9DAC;

void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < TObjEneBm5Wolf__data_805D9DAC) {
        TObjEneDD__sub_800BBA18(arg0, 8);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 9);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7B14
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f64 TObjEneBm5Wolf__data_8043B5B0;

void calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = TBoss8Dragon__sub_803D64C0(arg1);
    temp_f1 = TBoss8Dragon__sub_803D64DC(arg1);
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A8)) - (temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A8)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    *arg3 = (s32) (TObjEneBm5Wolf__data_8043B5B0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7BBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_target__14TObjEneBm5WolfFPvf(void *arg0, f32 farg0);

void approach_target__14TObjEneBm5WolfFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x404);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x400);
    if (temp_f2 != temp_f0) {
        if (temp_f2 > temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x404) = (f32) (temp_f2 - farg0);
            if (M2C_FIELD(arg0, f32 *, 0x404) < M2C_FIELD(arg0, f32 *, 0x400)) {
                M2C_FIELD(arg0, f32 *, 0x404) = M2C_FIELD(arg0, f32 *, 0x400);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x404) = (f32) (temp_f2 + farg0);
            if (M2C_FIELD(arg0, f32 *, 0x404) > M2C_FIELD(arg0, f32 *, 0x400)) {
                M2C_FIELD(arg0, f32 *, 0x404) = M2C_FIELD(arg0, f32 *, 0x400);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7F48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B7F48(void *arg0);

extern f32 TObjEneBm5Wolf__data_805D9DB4;

void TObjEneBm5Wolf__sub_800B7F48(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TObjEneBm5Wolf__data_805D9DB4 + M2C_FIELD(arg0, f32 *, 0x40C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7F60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_collision_center__14TObjEneBm5WolfFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32, f32);

extern const f32 TObjEneBm5Wolf__data_805D9DB4;

void update_collision_center__14TObjEneBm5WolfFPv(u8 *arg0) {
    f32 temp_f2;

    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x40C);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (temp_f2 + (TObjEneBm5Wolf__data_805D9DB4 + M2C_FIELD(arg0, f32 *, 0x3C)));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneBm5Wolf__data_805D9DB4), (f32) (temp_f2));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B7FB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B7FB4(void);
void set_state15__14TObjEneBm5WolfFPv(void* p);
void set_state__14TObjEneBm5WolfFPv(void *arg0);
void TObjEneBm5Wolf__sub_800B8020(void);
int TObjEneDD__sub_800BBA18(void*, void*);

void TObjEneBm5Wolf__sub_800B7FB4(void) {  }
void set_state15__14TObjEneBm5WolfFPv(void* p) { if (*(short*)((char*)p + 0x326) != 15) { TObjEneDD__sub_800BBA18(p, (void*)15); } }
void set_state__14TObjEneBm5WolfFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x10) && (temp_r0 != 0x11)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x10));
    }
}
void TObjEneBm5Wolf__sub_800B8020(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B8630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_global_805D5120__14TObjEneBm5WolfFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjEneBm5Wolf__data_805D5120;

void release_global_805D5120__14TObjEneBm5WolfFv(void) {
    if ((u32) TObjEneBm5Wolf__data_805D5120 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneBm5Wolf__data_805D5120, 1);
        TObjEneBm5Wolf__data_805D5120 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B8838
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPhotonMylla__sub_80154CB4(u16);
s16 obj_getField1c(s32);
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
int __dl__FPv();
s32 destroy__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
int TObjEneBm5Wolf__sub_800B896C(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int TObjEneBm5Wolf__sub_800B89A4(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void update__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void apply_to_position__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void reset_fields__14TObjEneBm5WolfFPv(void* p);

void update__14TObjEneBm5WolfFPvPv(void* p, void* a1) { TObjEneBm5Wolf__sub_800B89A4(a1, p, (char*)p + 0x4); }
void apply_to_position__14TObjEneBm5WolfFPvPv(void* p, void* a1) { TObjEneBm5Wolf__sub_800B896C(a1, p, (char*)p + 0x4); }
void reset_fields__14TObjEneBm5WolfFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* reset__14TObjEneBm5WolfFPv(void* p) { reset_fields__14TObjEneBm5WolfFPv(p); return p; }
void play_sound__14TObjEneBm5WolfFPv(void *arg0) {
    TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 8));
}
void set_field8_from_obj__14TObjEneBm5WolfFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = obj_getField1c(arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B89E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPhotonMylla__sub_80154CB4(u16);
s16 obj_getField1c(s32);
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
int __dl__FPv();
s32 destroy__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
int TObjEneBm5Wolf__sub_800B896C(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int TObjEneBm5Wolf__sub_800B89A4(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void update__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void apply_to_position__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void reset_fields__14TObjEneBm5WolfFPv(void* p);

s32 destroy__14TObjEneBm5WolfFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B8AF8
#include "types.h"

extern "C" {

s32 TObjEneBm5Wolf__sub_800B8AF8(void* p);
void* fn_800B8B00(void* p);

s32 TObjEneBm5Wolf__sub_800B8AF8(void* p) { return *(s32*)((char*)p + 0x3dc); }

}
#endif
#endif
