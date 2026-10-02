#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    virtual M2C_UNK m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual s32 m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual void m114();
    virtual M2C_UNK m115(void *);
};

struct Base14_8009C178 { char pad[0x14]; };

struct Sub_8009C178 : Base14_8009C178 {
    virtual void s0();
    virtual void s1(s32);
    virtual void s2();
    virtual void s3();
    virtual s32 s4();
};

struct Copy5_8009C2EC { u32 w[5]; };

struct Vec_8009C510 { f32 x, y, z; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK create_timed_particle_emitter(void *, int, int, int);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s32);
u8 *find_entity_by_id(u16);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
void TObjEneMe1Canadin__sub_8009C178(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK play_sound_effect(int, void *, int, int);
void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *);
void TObjEneMe1Canadin__sub_8009EB98(void *, f32);
void TObjEneEpsilon__sub_800B92AC(void *, s32, f32);
void TObjEneEpsilon__sub_800B96A4(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BA5A4(void *, void *, void *);
void transition_enemy_state(void *, s16);
M2C_UNK advance_animation_playback();
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
extern u8 lbl_8043A340[];
extern const f32 TObjEneMe1Canadin__data_805D988C;
extern const f32 lbl_805D98B8;
void TObjEneMe1Canadin__sub_8009C2EC(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void fn_8009E378(void *);
void TObjEneDD__sub_800BACE0(void *, f32, f32, f32);
void clear_attack_receipts();
void transition_enemy_state(void *, s16);
M2C_UNK advance_animation_playback();
extern const f32 lbl_805D9898;
extern const f32 TObjEneMe1Canadin__data_805D98AC;
extern const f32 TObjEneMe1Canadin__data_805D98BC;
extern const f32 lbl_805D98C8;
extern const f32 lbl_805D98D0;
void TObjEneMe1Canadin__sub_8009C510(u8 *arg0, s32 arg1);
}

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
M2C_UNK advance_animation_playback();
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
        advance_animation_playback();
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
void TObjEneMe1Canadin__sub_8009C178(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (int) (0xB));
        ((VObj_18 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, u8 **, 0x3C0) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x4C8));
            temp_r3 = M2C_FIELD(arg0, u8 **, 0x3C0);
            ((VObj_18 *)(temp_r3))->m115(arg0);
        } else {
            send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        }
        create_timed_particle_emitter((void *) (arg0 + 0x2FC), (int) (0x117), (int) (0), (int) (0x19));
        create_timed_particle_emitter((void *) (arg0 + 0x2FC), (int) (0x118), (int) (0x19), (int) (0xF));
        ((Sub_8009C178 *)(arg0 + 0x3CC))->s1(0x19);
        ((Sub_8009C178 *)(arg0 + 0x3CC))->s2();
        play_sound_effect((int) (0x4003AD18), (void *) (arg0 + 0x2FC), (int) (0), (int) (0));
        return;
    case 3:
        if ((((Sub_8009C178 *)(arg0 + 0x3CC))->s4() != 0) && (((VObj_18 *)(arg0))->m107() != 0)) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    case 5:
    case 0:
        return;
    }
}
void TObjEneMe1Canadin__sub_8009C2EC(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        advance_state_4_to_5__17TObjEneMe1CanadinFPv(arg0);
        set_field_378__9TObjEneDDFPvi(arg0, 0xA);
        ((VObj_18 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x3C8) &= 0xFFBFFFFF;
        M2C_FIELD(arg0, s32 *, 0x3C8) |= 0x200000;
        M2C_FIELD(arg0, s32 *, 0x30) |= 0x01000000;
        M2C_FIELD(arg0, s32 *, 0x410) = -0x7F80;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x470) >= 0x96) {
            transition_enemy_state(arg0, 0xD);
            M2C_FIELD(arg0, s16 *, 0x32C) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) |= 0x800;
            play_sound_effect(0x4003AD1F, arg0 + 0x2FC, 0, 0);
        }
        break;
    case 1:
        break;
    case 0: {
        advance_animation_playback();
        if (update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C) != 0) {
            TObjEneEpsilon__sub_800B96A4(arg0);
        }
        update_velocity__9TObjEneDDFPv(arg0);
        TObjEneMe1Canadin__sub_8009EB98(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3EC));
        TObjEneEpsilon__sub_800B92AC(arg0, 0x200, lbl_805D98B8);
        M2C_FIELD(arg0, s32 *, 0x64) += 0x2000;
        M2C_FIELD(arg0, s32 *, 0x470)++;
        if (M2C_FIELD(arg0, s32 *, 0x470) >= 0x96) {
            Copy5_8009C2EC c = *(Copy5_8009C2EC *)lbl_8043A340;
            u8 *t = M2C_FIELD(arg0, u8 **, 0x468);
            *(f32 *)&c.w[1] = M2C_FIELD(t, f32 *, 8);
            TObjEneDD__sub_800BA5A4(arg0, &c, t);
            M2C_FIELD(arg0, s32 *, 0x3C8) |= 0x800000;
        }
        if (M2C_FIELD(arg0, s32 *, 0x470) % 10 < 5) {
            M2C_FIELD(arg0, s32 *, 0x410) = 0xFFFF0000;
        } else {
            M2C_FIELD(arg0, s32 *, 0x410) = 0xFF000000;
        }
        play_persistent_sound(0x4003B71D, arg0, arg0 + 0x2FC, 0, 0);
        ((VObj_18 *)arg0)->m87();
        break;
    }
    case 5:
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        break;
    }
}
#define F_8009C510(off) M2C_FIELD(arg0, f32 *, off)
#define I_8009C510(off) M2C_FIELD(arg0, s32 *, off)
void TObjEneMe1Canadin__sub_8009C510(u8 *arg0, s32 arg1) {
    f32 t;
    Vec_8009C510 v;
    f32 f;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = I_8009C510(0x3FC);
        advance_animation_playback();
        fn_8009E378(arg0);
        I_8009C510(0x3C8) &= 0xFFBFFFFF;
        ((VObj_18 *)arg0)->m94();
        I_8009C510(0x30) &= 0xFEFFFFFF;
        I_8009C510(0x470) = 0;
        if (F_8009C510(0x3F8) > TObjEneMe1Canadin__data_805D98AC + (F_8009C510(0x3C) + F_8009C510(0x3EC))) {
            I_8009C510(0x474) = 0;
        } else {
            I_8009C510(0x474) = 2;
        }
        F_8009C510(0x488) = F_8009C510(0x484) = lbl_805D9898;
        break;
    case 3:
        if (I_8009C510(0x474) == 3) {
            ((void (*)(void *, s32))transition_enemy_state)(arg0, I_8009C510(0x378));
        }
        break;
    case 0:
        advance_animation_playback();
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        f = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        TObjEneDD__sub_800BACE0(arg0, v.x, v.z, f);
        f *= TObjEneMe1Canadin__data_805D98BC;
        F_8009C510(0x308) = v.x * f;
        F_8009C510(0x310) = v.z * f;
        switch (I_8009C510(0x474)) {
        case 0:
            F_8009C510(0x484) -= 0.13f;
            if (F_8009C510(0x484) < -4.0f) {
                F_8009C510(0x484) = -4.0f;
            }
            F_8009C510(0x3F8) += F_8009C510(0x484);
            if (F_8009C510(0x3F8) < lbl_805D98C8 + (F_8009C510(0x3C) + F_8009C510(0x3EC))) {
                I_8009C510(0x474) = 1;
                if (F_8009C510(0x484) > -2.0f) {
                    F_8009C510(0x484) = -2.0f;
                }
                F_8009C510(0x488) = F_8009C510(0x484) * F_8009C510(0x484) / lbl_805D98D0;
            }
            break;
        case 1:
            F_8009C510(0x484) += F_8009C510(0x488);
            F_8009C510(0x3F8) += F_8009C510(0x484);
            if (F_8009C510(0x484) >= lbl_805D9898) {
                if (F_8009C510(0x3F8) > F_8009C510(0x3C) + F_8009C510(0x3EC)) {
                    F_8009C510(0x3F8) = F_8009C510(0x3C) + F_8009C510(0x3EC);
                    I_8009C510(0x470) = 0;
                    I_8009C510(0x474) = 2;
                }
            }
            break;
        case 2:
            I_8009C510(0x470)++;
            if (I_8009C510(0x470) >= M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x468), s32 *, 0x28)) {
                I_8009C510(0x474) = 3;
            }
            break;
        }
        ((VObj_18 *)arg0)->m87();
        break;
    case 5:
        clear_attack_receipts();
        if (I_8009C510(0x3FC) == 5) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        }
        break;
    }
}

}
