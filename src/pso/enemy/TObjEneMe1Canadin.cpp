#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_hover_height__17TObjEneMe1CanadinFPv(void *arg0);
void set_target_speed_z__17TObjEneMe1CanadinFPv(void *arg0);
M2C_UNK TObjEneMe1Canadin__sub_8009EB14(f32);

void update_hover_height__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB14(M2C_FIELD(arg0, f32 *, 0x3E8) + M2C_FIELD(arg0, f32 *, 0x3C));
}

void set_target_speed_z__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB14(M2C_FIELD(arg0, f32 *, 0x3EC) + M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8009B9C8
#include "types.h"

extern "C" {

void update_if_ready__17TObjEneMe1CanadinFPv(void* p);
int get_target_info__9TObjEneDDFPv(void*);
int update_by_field_0x354__17TObjEneMe1CanadinFPv(void*);

void update_if_ready__17TObjEneMe1CanadinFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { update_by_field_0x354__17TObjEneMe1CanadinFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009BDA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_by_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
void update_walk_animation__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
f32 TBoss8Dragon__sub_803D64C0(s32, f32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK TObjEneDD__sub_800BAC14(void *, f32, f32, f32);

extern const f32 lbl_805D98A8;

void update_by_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    f32 temp_f1;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x484) = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60), temp_f1);
        M2C_FIELD(arg0, f32 *, 0x488) = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
        TObjEneDD__sub_800BAC14(arg0, M2C_FIELD(arg0, f32 *, 0x484), M2C_FIELD(arg0, f32 *, 0x488), lbl_805D98A8);
    case 3:
    case 5:
    case 1:
        return;
    }
}

void update_walk_animation__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) > 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x470) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) >= 7) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
        }
    case 3:
    case 5:
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009BFF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1Canadin__sub_8009BFF8(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BAC14(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK TObjEneMe1Canadin__sub_8009EB14(void *, f32);
M2C_UNK update_position_with_offset__17TObjEneMe1CanadinFPv(void *);
M2C_UNK advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *);
M2C_UNK noop__17TObjEneMe1CanadinFv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK update_angle__17TObjEneMe1CanadinFPv(void *);

extern const f32 TObjEneMe1Canadin__data_805D988C;
extern const f32 lbl_805D98B0;
extern const f32 TObjEneMe1Canadin__data_805D98B4;

#define VIRT(n) virtual void m##n() = 0;
struct Base { u8 pad[0x18]; };
struct VObj : Base {
    VIRT(0) VIRT(1) VIRT(2) VIRT(3) VIRT(4) VIRT(5) VIRT(6) VIRT(7) VIRT(8) VIRT(9)
    VIRT(10) VIRT(11) VIRT(12) VIRT(13) VIRT(14) VIRT(15) VIRT(16) VIRT(17) VIRT(18) VIRT(19)
    VIRT(20) VIRT(21) VIRT(22) VIRT(23) VIRT(24) VIRT(25) VIRT(26) VIRT(27) VIRT(28) VIRT(29)
    VIRT(30) VIRT(31) VIRT(32) VIRT(33) VIRT(34) VIRT(35) VIRT(36) VIRT(37) VIRT(38) VIRT(39)
    VIRT(40) VIRT(41) VIRT(42) VIRT(43) VIRT(44) VIRT(45) VIRT(46) VIRT(47) VIRT(48) VIRT(49)
    VIRT(50) VIRT(51) VIRT(52) VIRT(53) VIRT(54) VIRT(55) VIRT(56) VIRT(57) VIRT(58) VIRT(59)
    VIRT(60) VIRT(61) VIRT(62) VIRT(63) VIRT(64) VIRT(65) VIRT(66) VIRT(67) VIRT(68) VIRT(69)
    VIRT(70) VIRT(71) VIRT(72) VIRT(73) VIRT(74) VIRT(75) VIRT(76) VIRT(77) VIRT(78) VIRT(79)
    VIRT(80) VIRT(81) VIRT(82) VIRT(83) VIRT(84) VIRT(85) VIRT(86) VIRT(87) VIRT(88) VIRT(89)
    VIRT(90) VIRT(91) VIRT(92) VIRT(93) VIRT(94) VIRT(95) VIRT(96) VIRT(97) VIRT(98) VIRT(99)
    VIRT(100) VIRT(101) VIRT(102) VIRT(103)
};

void TObjEneMe1Canadin__sub_8009BFF8(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0xE);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) == 2) {
            ((VObj *)arg0)->m103();
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C) != 0) {
            M2C_FIELD(arg0, s32 *, 0x470) = 2;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x470);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x474) = (s32) (M2C_FIELD(arg0, s32 *, 0x474) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x474) >= 0x3C) {
                M2C_FIELD(arg0, s32 *, 0x470) = 1;
                advance_state_5_to_4__17TObjEneMe1CanadinFPv(arg0);
            }
            TObjEneMe1Canadin__sub_8009EB14(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F4));
            break;
        case 1:
            copy_position__14TObjEneEpsilonFPv(arg0, arg0 + 0x50);
            update_velocity__9TObjEneDDFPv(arg0);
            update_angle__17TObjEneMe1CanadinFPv(arg0);
            update_position_with_offset__17TObjEneMe1CanadinFPv(arg0);
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805D98B0) {
                TObjEneDD__sub_800BAC14(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), TObjEneMe1Canadin__data_805D98B4);
            }
            break;
        }
        ((VObj *)arg0)->m87();
        noop__17TObjEneMe1CanadinFv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009C7D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8009c7d8 { char pad[0x18]; };
struct VObj_8009c7d8 : VBase_8009c7d8 {
#define VM(i) virtual M2C_UNK m##i();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)
    VM(16)VM(17)VM(18)VM(19)VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)VM(30)
    VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)
    VM(46)VM(47)VM(48)VM(49)VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)VM(60)
    VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)
    VM(76)VM(77)VM(78)VM(79)VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)VM(90)
    VM(91)VM(92)VM(93)VM(94)VM(95)VM(96)VM(97)VM(98)VM(99)VM(100)VM(101)VM(102)VM(103)VM(104)
    VM(105)VM(106)VM(107)VM(108)
#undef VM
};

extern "C" {

void run_task__17TObjEneMe1CanadinFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjEneDD__sub_800BAC14(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK noop__17TObjEneMe1CanadinFv(void *);
s32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK advance_state_5_to_4__17TObjEneMe1CanadinFPv();
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
M2C_UNK set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(int);
M2C_UNK update_angle__17TObjEneMe1CanadinFPv(void *);
M2C_UNK update_position_with_offset__17TObjEneMe1CanadinFPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern const f32 TObjEneMe1Canadin__data_805D98B4;
extern const f32 lbl_805D98D4;

void run_task__17TObjEneMe1CanadinFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        advance_state_5_to_4__17TObjEneMe1CanadinFPv();
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (9));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj_8009c7d8 *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x4C8)));
            set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv((int) (M2C_FIELD(arg0, s32 *, 0x3C0)));
        }
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        return;
    case 3:
        if ((((VObj_8009c7d8 *) arg0)->m106() == 0) && (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805D98D4)) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        copy_position__14TObjEneEpsilonFPv((void *) (arg0), (void *) (arg0 + 0x50));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        update_angle__17TObjEneMe1CanadinFPv((void *) (arg0));
        update_position_with_offset__17TObjEneMe1CanadinFPv((void *) (arg0));
        TObjEneDD__sub_800BAC14((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (TObjEneMe1Canadin__data_805D98B4));
        ((VObj_8009c7d8 *) arg0)->m86();
        noop__17TObjEneMe1CanadinFv((void *) (arg0));
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009D800
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18D { char pad[0x18]; };
struct VObj18D : VBase18D {
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
    virtual void vpad95(); virtual void vpad96(); virtual void vpad97(); virtual void vpad98();
    virtual void vpad99(); virtual void vpad100(); virtual void vpad101(); virtual void vpad102();
    virtual void vf1A4();
    virtual void vpad104(); virtual void vpad105();
    virtual s32 vf1B0();
};

extern "C" {

void move__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK update_hover_height__17TObjEneMe1CanadinFPv(void *);
M2C_UNK TObjEneMe1Canadin__sub_8009EB14(void *, f32);
M2C_UNK advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *);
M2C_UNK advance_state_5_to_4__17TObjEneMe1CanadinFPv();
s32 TObjEneMe1CanadinLeader__sub_8009E31C(void *, M2C_UNK);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E4AC(void *, M2C_UNK);
M2C_UNK noop__17TObjEneMe1CanadinFv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK update_move__17TObjEneMe1CanadinFPv(void *);

extern const f32 TObjEneMe1Canadin__data_805D988C;

void move__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        advance_state_5_to_4__17TObjEneMe1CanadinFPv();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj18D *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 3:
        if ((((VObj18D *) arg0)->vf1B0() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x470) == 3)) {
            M2C_FIELD(arg0, s32 *, 0x404) = 0;
            ((VObj18D *) arg0)->vf1A4();
        }
    case 5:
    case 1:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x470);
        switch (temp_r0) {
        case 0:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 4) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFB);
                if (TObjEneMe1CanadinLeader__sub_8009E31C(arg0, 0x200) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x470) = 1;
                    TObjEneMe1CanadinLeader__sub_8009E4AC(arg0, 1);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x470) = 2;
                    advance_state_4_to_5__17TObjEneMe1CanadinFPv(arg0);
                    TObjEneMe1CanadinLeader__sub_8009E4AC(arg0, 3);
                }
            }
            update_move__17TObjEneMe1CanadinFPv(arg0);
            update_hover_height__17TObjEneMe1CanadinFPv(arg0);
            break;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4B8) == 0) {
                M2C_FIELD(arg0, s32 *, 0x470) = 3;
            }
            update_move__17TObjEneMe1CanadinFPv(arg0);
            update_hover_height__17TObjEneMe1CanadinFPv(arg0);
            break;
        case 2:
            update_move__17TObjEneMe1CanadinFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4B8) != 0) {
                update_hover_height__17TObjEneMe1CanadinFPv(arg0);
            } else {
                TObjEneMe1Canadin__sub_8009EB14(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F0));
                if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x80000) {
                    M2C_FIELD(arg0, s32 *, 0x470) = 3;
                }
            }
            break;
        }
        ((VObj18D *) arg0)->vf164();
        noop__17TObjEneMe1CanadinFv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009DA18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A { char pad[0x18]; };
struct V_A : public Base_A {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m87();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m94();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m103();
};

extern "C" {

void TObjEneMe1Canadin__vt109(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK advance_state_5_to_4__17TObjEneMe1CanadinFPv();
M2C_UNK update_move__17TObjEneMe1CanadinFPv(void *);
M2C_UNK update_hover_height__17TObjEneMe1CanadinFPv(void *);
M2C_UNK noop__17TObjEneMe1CanadinFv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();

extern const f32 TObjEneMe1Canadin__data_805D988C;

void TObjEneMe1Canadin__vt109(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        advance_state_5_to_4__17TObjEneMe1CanadinFPv();
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((V_A *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x80000) {
            M2C_FIELD(arg0, s32 *, 0x404) = 0;
            ((V_A *) arg0)->m103();
        }
        return;
    case 5:
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        update_move__17TObjEneMe1CanadinFPv(arg0);
        update_hover_height__17TObjEneMe1CanadinFPv(arg0);
        ((V_A *) arg0)->m87();
        noop__17TObjEneMe1CanadinFv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009DD30
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
    virtual void m93();
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
    virtual s32 m106();
};

extern "C" {

void action__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK set_target_speed_z__17TObjEneMe1CanadinFPv(void *);
M2C_UNK TObjEneMe1Canadin__sub_8009EB14(void *, f32);
s32 fn_800B9194(void *);
M2C_UNK TBoss1Dragon__sub_80143504();

extern const f32 TObjEneMe1Canadin__data_805D988C;
extern const f32 lbl_805D9890;

void action__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((F_V *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
        M2C_FIELD(arg0, s32 *, 0x4B8) = 1;
        break;
    case 3:
        if (((F_V *) arg0)->m106() == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 1) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFE);
                TObjEneDD__sub_800BBA18(arg0, 3);
            } else if (fn_800B9194(arg0) != 0) {
                TObjEneDD__sub_800BBA18(arg0, 3);
            }
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) != 1) {
            update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 2) {
            TObjEneMe1Canadin__sub_8009EB14(arg0, lbl_805D9890 + M2C_FIELD(arg0, f32 *, 0x3C));
        } else {
            set_target_speed_z__17TObjEneMe1CanadinFPv(arg0);
        }
        ((F_V *) arg0)->m87();
        break;
    case 5:
    case 1:
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009DFAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_8009dfac { char pad[0x18]; };
struct V_A_8009dfac : Base_A_8009dfac {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual void f31();
    virtual void f32();
    virtual void f33();
    virtual void f34();
    virtual void f35();
    virtual void f36();
    virtual void f37();
    virtual void f38();
    virtual void f39();
    virtual void f40();
    virtual void f41();
    virtual void f42();
    virtual void f43();
    virtual void f44();
    virtual void f45();
    virtual void f46();
    virtual void f47();
    virtual void f48();
    virtual void f49();
    virtual void f50();
    virtual void f51();
    virtual void f52();
    virtual void f53();
    virtual void f54();
    virtual void f55();
    virtual void f56();
    virtual void f57();
    virtual void f58();
    virtual void f59();
    virtual void f60();
    virtual void f61();
    virtual void f62();
    virtual void f63();
    virtual void f64();
    virtual void f65();
    virtual void f66();
    virtual void f67();
    virtual void f68();
    virtual void f69();
    virtual void f70();
    virtual void f71();
    virtual void f72();
    virtual void f73();
    virtual void f74();
    virtual void f75();
    virtual void f76();
    virtual void f77();
    virtual void f78();
    virtual void f79();
    virtual void f80();
    virtual void f81();
    virtual void f82();
    virtual void f83();
    virtual void f84();
    virtual void f85();
    virtual void f86();
    virtual void f87();
    virtual void f88();
    virtual void f89();
    virtual void f90();
    virtual void f91();
    virtual void f92();
    virtual void m93();
    virtual void f94();
    virtual void f95();
    virtual void f96();
    virtual void f97();
    virtual void f98();
    virtual void f99();
    virtual void f100();
    virtual void f101();
    virtual void f102();
    virtual void f103();
    virtual void f104();
    virtual void m105();
};

extern "C" {

void handle_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void handle_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        ((V_A_8009dfac *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x400000);
        M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
        M2C_FIELD(arg0, s32 *, 0x4B8) = 1;
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) >= 4) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100000);
            }
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) == 2) {
            ((V_A_8009dfac *) arg0)->m105();
        }
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFEFFFFFF);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E2F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss2DeRolLe__sub_800B98D8(void *);
s32 TPhotonMylla__sub_80154CB4(u16);
void set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(void* p);
void TObjEneMe1CanadinLeader__sub_8009E27C(void* p);
void set_attack_flag__23TObjEneMe1CanadinLeaderFPv(void* p);
void TObjEneMe1Canadin__vt115(void);
int TObjEneMe1CanadinLeader__sub_8009E36C(void* p);
int TObjEneMe1Canadin__vt107(void);
int TObjEneMe1Canadin__vt114(void);

int TObjEneMe1Canadin__vt114(void) { return 1; }
void TObjEneMe1Canadin__vt115(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E3C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1Canadin__vt111(void *arg0);

extern s32 *lbl_805D4FEC;
extern s32 *lbl_805D4FF0;

void TObjEneMe1Canadin__vt111(void *arg0) {
    *lbl_805D4FEC = M2C_FIELD(arg0, s32 *, 0x4B4);
    *lbl_805D4FF0 = M2C_FIELD(arg0, s32 *, 0x4B4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E474
#include "types.h"

extern "C" {

void reset_map_core__17TObjEneMe1CanadinFPv(void* p);
int TObjEneMe1Canadin__sub_8009E3E4(void*);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

void reset_map_core__17TObjEneMe1CanadinFPv(void* p) { copy_vec4__13TRaderMapCoreFPvPv((char*)p + 0x4a4); TObjEneMe1Canadin__sub_8009E3E4(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
void noop__17TObjEneMe1CanadinFv(void);
void TObjEneMe1Canadin__vt105(void);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E6B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
void noop__17TObjEneMe1CanadinFv(void);
void TObjEneMe1Canadin__vt105(void);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

void noop__17TObjEneMe1CanadinFv(void) {  }
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
        TObjEneDD__sub_800BBA18(arg0, 0xE);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E768
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
void noop__17TObjEneMe1CanadinFv(void);
void TObjEneMe1Canadin__vt105(void);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

void TObjEneMe1Canadin__vt105(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E7C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8009E7C4 { char pad[0x18]; };
struct VObj_8009E7C4 : Base_8009E7C4 {
    virtual void pad_8(); virtual void pad_c(); virtual void pad_10(); virtual void pad_14();
    virtual void pad_18(); virtual void pad_1c(); virtual void pad_20(); virtual void pad_24();
    virtual void pad_28(); virtual void pad_2c(); virtual void pad_30(); virtual void pad_34();
    virtual void pad_38(); virtual void pad_3c(); virtual void pad_40(); virtual void pad_44();
    virtual void pad_48(); virtual void pad_4c(); virtual void pad_50(); virtual void pad_54();
    virtual void pad_58(); virtual void pad_5c(); virtual void pad_60(); virtual void pad_64();
    virtual void pad_68(); virtual void pad_6c(); virtual void pad_70(); virtual void pad_74();
    virtual void pad_78(); virtual void pad_7c(); virtual void pad_80(); virtual void pad_84();
    virtual void pad_88(); virtual void pad_8c(); virtual void pad_90(); virtual void pad_94();
    virtual void pad_98(); virtual void pad_9c(); virtual void pad_a0(); virtual void pad_a4();
    virtual void pad_a8(); virtual void pad_ac(); virtual void pad_b0(); virtual void pad_b4();
    virtual void pad_b8(); virtual void pad_bc(); virtual void pad_c0(); virtual void pad_c4();
    virtual void pad_c8(); virtual void pad_cc(); virtual void pad_d0(); virtual void pad_d4();
    virtual void pad_d8(); virtual void pad_dc(); virtual void pad_e0(); virtual void pad_e4();
    virtual void pad_e8(); virtual void pad_ec(); virtual void pad_f0(); virtual void pad_f4();
    virtual void pad_f8(); virtual void pad_fc(); virtual void pad_100(); virtual void pad_104();
    virtual void pad_108(); virtual void pad_10c(); virtual void pad_110(); virtual void pad_114();
    virtual void pad_118(); virtual void pad_11c(); virtual void pad_120(); virtual void pad_124();
    virtual void pad_128(); virtual void pad_12c(); virtual void pad_130(); virtual void pad_134();
    virtual void pad_138(); virtual void pad_13c(); virtual void pad_140(); virtual void pad_144();
    virtual void pad_148(); virtual void pad_14c(); virtual void pad_150(); virtual void pad_154();
    virtual void pad_158(); virtual void pad_15c(); virtual void pad_160(); virtual void pad_164();
    virtual void pad_168(); virtual void pad_16c(); virtual void pad_170(); virtual void pad_174();
    virtual void pad_178(); virtual void pad_17c(); virtual void pad_180(); virtual void pad_184();
    virtual void pad_188(); virtual void pad_18c(); virtual void pad_190(); virtual void pad_194();
    virtual void pad_198(); virtual void pad_19c(); virtual void pad_1a0(); virtual void pad_1a4();
    virtual void pad_1a8(); virtual void pad_1ac(); virtual void pad_1b0(); virtual void pad_1b4();
    virtual void pad_1b8(); virtual void pad_1bc(); virtual void pad_1c0(); virtual void pad_1c4();
    virtual void pad_1c8(); virtual void pad_1cc();
    virtual s32 m114(s32);
};

extern "C" {

s32 check_target__17TObjEneMe1CanadinFPv(void *arg0);
s32 TObjEneMe1Canadin__sub_8009E860(void *, f32 *, f32);
void *TPhotonMylla__sub_80154CB4(u16);

extern const f32 lbl_805D98E4;
extern const f32 lbl_805D9920;

s32 check_target__17TObjEneMe1CanadinFPv(void *arg0) {
    f32 sp8;
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    if (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805D98E4) {
        var_r31 = 1;
        M2C_FIELD(arg0, void **, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x4C8));
        temp_r3 = M2C_FIELD(arg0, void **, 0x3C0);
        if ((((VObj_8009E7C4 *)temp_r3)->m114(M2C_FIELD(arg0, s32 *, 0x390)) == 0) && (TObjEneMe1Canadin__sub_8009E860(arg0, &sp8, lbl_805D9920) != 0) && (sp8 > lbl_805D98E4)) {
            var_r31 = 0;
        }
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009E95C
#include "types.h"

extern "C" {

int update_angle__17TObjEneMe1CanadinFPv(void*);
int fn_800B9194(void*);
int TObjEneEpsilon__sub_800B96A4(void*);
int update_velocity__9TObjEneDDFPv(void*);
void update_move__17TObjEneMe1CanadinFPv(void* p);
int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p);
int TObjEneDD__vt86(void*);

int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p) { return TObjEneDD__vt86(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EA08
#include "types.h"

extern "C" {

int update_angle__17TObjEneMe1CanadinFPv(void*);
int fn_800B9194(void*);
int TObjEneEpsilon__sub_800B96A4(void*);
int update_velocity__9TObjEneDDFPv(void*);
void update_move__17TObjEneMe1CanadinFPv(void* p);
int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p);
int TObjEneDD__vt86(void*);

void update_move__17TObjEneMe1CanadinFPv(void* p) { if (fn_800B9194(p) != 0) { TObjEneEpsilon__sub_800B96A4(p); update_velocity__9TObjEneDDFPv(p); update_angle__17TObjEneMe1CanadinFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EA54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_angle__17TObjEneMe1CanadinFPv(void *arg0);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);

extern const f64 lbl_8043A3C8;

void update_angle__17TObjEneMe1CanadinFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), (s32) (lbl_8043A3C8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), 0x400);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (s16) M2C_FIELD(arg0, s32 *, 0x60);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EB6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0);
M2C_UNK TObjEneMe1Canadin__sub_8009EB98(f32);

void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB98(M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E8));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EC00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dd_flag__17TObjEneMe1CanadinFPv(void *arg0);
u32 TObjEneDD__vt98();

void update_dd_flag__17TObjEneMe1CanadinFPv(void *arg0) {
    if (TObjEneDD__vt98() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFEFFFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x01000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EC50
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_move_vector__17TObjEneMe1CanadinFiPv(s32 arg0, void *arg1);
M2C_UNK TBoss4Zako__sub_803D8910(void *, s32);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
f32 TBoss8Dragon__sub_803D64C0(s32, f32);
f32 TBoss8Dragon__sub_803D64DC(s32, f32);
s32 get_random_scaled__9TObjEneDDFv();

extern const f32 lbl_805D9898;
extern const f32 lbl_805D989C;
extern const f32 lbl_805D98D0;

void calc_move_vector__17TObjEneMe1CanadinFiPv(s32 arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r31;

    temp_r31 = get_random_scaled__9TObjEneDDFv();
    f32 fv = calc_boss4_scale__10TObjPlayerFi(arg0);
    temp_f31 = (lbl_805D98D0 * fv) + lbl_805D989C;
    temp_f1 = temp_f31 * TBoss8Dragon__sub_803D64C0(temp_r31, fv);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_805D9898;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64DC(temp_r31, temp_f1));
    TBoss4Zako__sub_803D8910(arg1, arg0 + 0x38);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009ECE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *arg0);
void TObjEneMe1Canadin__vt104(void *arg0);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E334(void *);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E350(void *);

extern void *lbl_805D4FD0;

void TObjEneMe1Canadin__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x1C);
}

void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) get_random_float__21TObjEneMe3ShinowaRealFv(M2C_FIELD(arg0, f32 *, 0x354)) == 0) {
        TObjEneMe1CanadinLeader__sub_8009E350(arg0);
        return;
    }
    TObjEneMe1CanadinLeader__sub_8009E334(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009ED5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8009ED5C {
    char pad[0x18];
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
    virtual void m97();
    virtual void m98();
};

extern "C" {

void update__17TObjEneMe1CanadinFPv(void *arg0);

extern const f32 lbl_805D98D0;

void update__17TObjEneMe1CanadinFPv(void *arg0) {
    struct VBase_8009ED5C *o = (struct VBase_8009ED5C *)arg0;
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - M2C_FIELD(arg0, f32 *, 0x3C));
    if (M2C_FIELD(arg0, f32 *, 0x3F4) < lbl_805D98D0) {
        o->m96();
    } else {
        o->m95();
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3F4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EDD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe1Canadin__sub_8009EE18(void);
void TObjEneMe1Canadin__sub_8009EE84(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *);
void set_state_12__17TObjEneMe1CanadinFPv(void* p);

#include "types.h"
extern "C" {

void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EE18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void set_state_12__17TObjEneMe1CanadinFPv(void* p);
void TObjEneMe1Canadin__sub_8009EE18(void);
void TObjEneMe1Canadin__sub_8009EE84(void);

void TObjEneMe1Canadin__sub_8009EE18(void) {  }
void set_state_12__17TObjEneMe1CanadinFPv(void* p) { if (*(short*)((char*)p + 0x326) != 12) { TObjEneDD__sub_800BBA18(p, (void*)12); } }
void set_mode0xD_unless_0xBor0xD__17TObjEneMe1CanadinFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xD) && (temp_r0 != 0xB)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0xD));
    }
}
void TObjEneMe1Canadin__sub_8009EE84(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009EF6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjEneMe1CanadinFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__17TObjEneMe1Canadin[];

void *__dt__17TObjEneMe1CanadinFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe1Canadin;
        if (M2C_FIELD(arg0, void **, 0x4A0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4A0)); M2C_FIELD(arg0, M2C_UNK *, 0x4A0) = 0; }
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x408));
        M2C_FIELD(arg0, M2C_UNK *, 0x408) = 0;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3CC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009F390
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *);
void TObjEneMe1Canadin__sub_8009F004(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__17TObjEneMe1Canadin[];
extern void *lbl_805D29B0;

void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe1Canadin;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 972));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29B0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    M2C_FIELD(arg0, u32 *, 0x3C8) = 0;
    update_by_field_0x354__17TObjEneMe1CanadinFPv(arg0);
    M2C_FIELD(arg0, void **, 0x3C0) = arg0;
    M2C_FIELD(arg0, void **, 0x3C4) = arg3;
    TObjEneMe1Canadin__sub_8009F004(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009F504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TObjEneMe1CanadinFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *init__17TObjEneMe1CanadinFPvPvPvPv(void *, void *, void *, int);

extern void *tl_04;

void *create__17TObjEneMe1CanadinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4CC);
    if (o != NULL) {
        o = init__17TObjEneMe1CanadinFPvPvPvPv(o, tl_04, arg0, 0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009FBC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__17TObjEneMe1CanadinFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_80490410[];

void *destroy__17TObjEneMe1CanadinFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490410;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x28));
        M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009FD2C
#include "types.h"

extern "C" {

void TObjEneMe1Canadin__sub_8009FD2C(void);

void TObjEneMe1Canadin__sub_8009FD2C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009FE60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe1Canadin__sub_8009FE60(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80490428[];

void *TObjEneMe1Canadin__sub_8009FE60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490428;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800A0028
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_periodic_effect__17TObjEneMe1CanadinFPv(u8 *arg0);
void *TObjEneMe1Canadin__sub_800A00A8(void *arg0, s16 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_800A02AC(void *, s32, void *, void *);

void spawn_periodic_effect__17TObjEneMe1CanadinFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x20));
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, M2C_FIELD(arg0, s32 *, 0x24));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 5) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        u32 newp = __nw__7TObjectFUl(0x3C);
        if (newp != 0U) {
            fn_800A02AC((void*)newp, M2C_FIELD(arg0, s32 *, 0x10), arg0 + 0x28, arg0 + 0x34);
        }
    }
}

extern M2C_UNK lbl_80490440[];

void *TObjEneMe1Canadin__sub_800A00A8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490440;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800A0100
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init__17TObjEneMe1CanadinFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 rand__11TOBoss4RockFv(M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK __ct__7TObjectFP7TObject(u8 *, s32);

extern const f64 lbl_8043A460;
extern M2C_UNK lbl_80490440[];
extern s32 lbl_805D29BC;
extern const f32 lbl_805D994C;
extern const f32 lbl_805D9950;

#pragma opt_propagation off
u8 *init__17TObjEneMe1CanadinFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490440;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29BC;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x20));
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, M2C_FIELD(arg0, s32 *, 0x24));
    {
        s32 k = (s32) 0xFFFF0000;
        M2C_FIELD(arg0, s32 *, 0x40) = k + 0x33;
        M2C_FIELD(arg0, s32 *, 0x44) = k + 0x33;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (lbl_805D994C * (lbl_805D9950 * (f32) rand__11TOBoss4RockFv(k)));
    }
    return arg0;
}

}
#endif
#endif
