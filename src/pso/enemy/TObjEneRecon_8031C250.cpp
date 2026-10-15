#include "types.h"

struct T_8031C250 { u8 pad[0x326]; s16 state; };

#define F(T, o) (*(T *)((s8 *)(arg0) + (o)))
struct Pair_8031CF30 { s32 a; f32 b; };

struct VB_8031CF30 {
    u8 pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Pair_8031CF30 *, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *, f32);
    virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30();
    virtual s32 m31();
    virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86();
    virtual void m87();
    virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Data_8031CF30 { u8 pad[0x1C]; s32 f1C; };

extern "C" {
extern u8 *TObjEneRecon__data_805D6AFC;
f32 TObjEneRecon__sub_8031C2BC(void);
f32 TObjEneRecon__sub_8031C2C8(void);
f32 TObjEneRecon__sub_8031C2D4(void);
extern u8 *TObjEneRecon__data_805D6AFC;
extern const f32 lbl_805DF3C8;
s32 calc_scaled_value__12TObjEneReconFv(void);
u8 TObjEneRecon__sub_8031C250(T_8031C250 *self);
s16 get_attack_params_atp_min(s32);
u8 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
int get_flag_b4__21TObjEneMe3ShinowaRealFv(void *);
void spawn_particle_effect(void *, int);
f32 get_pos_x__14TObjEneGibblesFPv(s32);
s32 update_death_check__14TObjEneEpsilonFv(void *);
void enemy_clear_target(void *);
void update_velocity__9TObjEneDDFv(void *);
f32 horizontal_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
void play_sound_effect(s32, void *, s32, s32);
s32 is_valid_and_active__10TObjPlayerFUl();
void spawn_trap_a__12TObjEneReconFv(void *);
s32 TObjEneRecon__sub_8031DA90(void *);
f32 approach_value__12TObjEneReconFff(void *, f32, f32);
void update_collide_flag__12TObjEneReconFPv(void *);
s32 update_flag_0x444__12TObjEneReconFPv(void *);
void advance_field398__12TObjEneReconFPv(void *);
s32 remap_area_sound_id__14TObjEneRecoboxFUl(s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 lbl_805D5868;
extern const f32 lbl_805DF3FC;
extern const f32 lbl_805DF400;
extern const f32 lbl_805DF404;
extern const f32 lbl_805DF408;
extern const f32 lbl_805DF40C;
void TObjEneRecon__sub_8031CF30(u8 *arg0, s32 arg1);
}

extern "C" {

u8 TObjEneRecon__sub_8031C250(T_8031C250 *self) {
    return self->state == 8 || self->state == 7;
}

s32 calc_scaled_value__12TObjEneReconFv(void) {
    return (s32) (lbl_805DF3C8 * (f32) *(s32 *)((s8 *)TObjEneRecon__data_805D6AFC + 0x18));
}

f32 TObjEneRecon__sub_8031C2BC(void) {
    return *(f32 *)((s8 *)TObjEneRecon__data_805D6AFC + 0xC);
}
f32 TObjEneRecon__sub_8031C2C8(void) {
    return *(f32 *)((s8 *)TObjEneRecon__data_805D6AFC + 8);
}
f32 TObjEneRecon__sub_8031C2D4(void) {
    return *(f32 *)((s8 *)TObjEneRecon__data_805D6AFC + 4);
}

}

extern "C" {
s32 find_entity_by_id(int);
s32 queue_destruction__7TObjectFv(void *);
void transition_enemy_state(void *, s32);
void advance_animation_playback(void *);
void select_next_target__12TObjEneReconFPv(void *, s32);
void clamp_min_height__12TObjEneReconFv(void *);
void spawn_trap_b__12TObjEneReconFv(s32);
void update_velocity__9TObjEneDDFv(void *);
}

#include "types.h"

extern "C" {

void handle_message__12TObjEneReconFPvi(void *arg0, s32 arg1);

s32 remove_child_entity__12TObjEneReconFPUc(u32, void *);

void handle_message__12TObjEneReconFPvi(void *arg0, s32 arg1) {
    u32 temp;
    switch (arg1) {
    case 4:
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) | 1);
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) & 0xFFFFFFFD);
        if ((temp = ((u32 (*)(u16)) find_entity_by_id)(*(u16 *)((s8 *)arg0 + 0x434))) != 0U) {
            remove_child_entity__12TObjEneReconFPUc(temp, arg0);
        }
        break;
    case 5:
    case 0:
        break;
    case 3:
        ((s32 (*)()) queue_destruction__7TObjectFv)();
        break;
    }
}

}

#include "types.h"

struct VBase_18_414afc { char pad[0x18]; };

struct VObj_18_414afc : VBase_18_414afc {
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
    virtual s32 m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual s32 m102(f32);
};

#define F(T, o) (*(T *)((s8 *)(arg0) + (o)))
struct VBase_18_444bc5 { char pad[0x18]; };

struct VObj_18_444bc5 : VBase_18_444bc5 {
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
    virtual s32 m94();
};

struct Vec_8031C364 { f32 x, y, z; };

extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFv(void *, s32);
void clear_attack_receipts(void);
void noop__12TBoss8DragonFv(void *);
void set_field_378__9TObjEneDDFPvi(void *, s32);
void transition_enemy_state(void *, s32);
void advance_animation_playback(void *);
void play_sound_effect(s32, void *, s32, s32);
void select_next_target__12TObjEneReconFPv(void *, s32);
void clamp_min_height__12TObjEneReconFv(void *);
void set_flag2__12TObjEneReconFPv(void *, f32, f32, f32);
s32 remap_area_sound_id__14TObjEneRecoboxFUl(s32);
extern const f32 TObjEneRecon__data_805DF3E0;
extern const f32 TObjEneRecon__data_805DF3E4;
void TObjEneRecon__sub_8031C624(u8 *arg0, s32 arg1);
f32 clamp_velocity__15TObjBoss2TunnelFv(void *, s32);
void spawn_particle_effect_with_flags(void *, int, int);
void TBoss8Dragon__sub_800BB7D8(void *, int, f32);
void TBoss8Dragon__sub_800BB7DC(void *);
void transition_enemy_state(void *, s32);
void create_breakup_mdl__12TBoss3VoloptFlllll(s32, void *, s32, void *, s32);
void refresh_lobby_state__10TObjPlayerFv(void *);
void advance_animation_playback(void *);
s32 project_actor_to_ground(void *, void *, void *);
void play_sound_effect(s32, void *, s32, s32);
void clamp_min_height__12TObjEneReconFv(void *);
void set_flag2__12TObjEneReconFPv(void *, f32, f32, f32);
s32 remap_area_sound_id__14TObjEneRecoboxFUl(s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u8 recon_breakup_params[];
extern s32 boss3_volopt_instance;
extern const f32 TObjEneRecon__data_805DF3C4;
extern const f32 lbl_805DF3CC;
extern const f32 TObjEneRecon__data_805DF3D0;
extern const f32 TObjEneRecon__data_805DF3D4;
extern const f32 lbl_805DF3D8;
extern const f32 lbl_805DF3DC;
extern const f32 TObjEneRecon__data_805DF3E0;
void TObjEneRecon__sub_8031C364(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneRecon__sub_8031C364(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 5;
        ((VObj_18_444bc5 *)(arg0))->m94();
        F(s32, 0x444) &= ~3;
        F(s32, 0x80) = 0;
        refresh_lobby_state__10TObjPlayerFv(arg0);
        TBoss8Dragon__sub_800BB7DC(arg0);
        TBoss8Dragon__sub_800BB7D8(arg0, 0xF1, lbl_805DF3CC);
        F(s32, 0x3C0) = 0;
        F(f32, 0x3E0) = TObjEneRecon__data_805DF3C4;
        F(f32, 0x44C) = F(f32, 0x308);
        F(f32, 0x454) = F(f32, 0x310);
        F(f32, 0x3E4) = ((f32 (*)(void *))clamp_velocity__15TObjBoss2TunnelFv)(arg0 + 0x44C);
        play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUl(0x4003A80C), arg0 + 0x38, 0, 0);
        break;
    case 3:
        if (F(s32, 0x3C0) == 3) {
            transition_enemy_state(arg0, 8);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (F(s32, 0x3C0)) {
        case 0:
        case 1:
            set_flag2__12TObjEneReconFPv(arg0, F(f32, 0x44C), F(f32, 0x454), F(f32, 0x3E4));
            {
                Vec_8031C364 v = F(Vec_8031C364, 0x38);
                v.y += F(f32, 0x448);
                if (project_actor_to_ground(arg0, &v, arg0 + 0x248) != 0) {
                    F(f32, 0x3C) = v.y;
                }
            }
            F(f32, 0x3E0) -= TObjEneRecon__data_805DF3D0;
            F(f32, 0x448) += F(f32, 0x3E0);
            if (F(f32, 0x448) < TObjEneRecon__data_805DF3D4 + F(f32, 0x3C)) {
                F(f32, 0x448) = TObjEneRecon__data_805DF3D4 + F(f32, 0x3C);
                if (F(s32, 0x3C0) == 0) {
                    F(s32, 0x3C0) = 1;
                    F(f32, 0x3E0) = lbl_805DF3CC;
                    F(f32, 0x3E4) *= lbl_805DF3D8;
                    if (F(f32, 0x44C) * F(f32, 0x44C) + F(f32, 0x454) * F(f32, 0x454) <= lbl_805DF3DC) {
                        F(f32, 0x44C) = TObjEneRecon__data_805DF3E0 * sin_table_lookup(F(s32, 0x60));
                        F(f32, 0x454) = TObjEneRecon__data_805DF3E0 * cos_table_lookup(F(s32, 0x60));
                    }
                } else {
                    F(s32, 0x3C0) = 2;
                }
            }
            F(f32, 0x3E4) *= lbl_805DF3D8;
            clamp_min_height__12TObjEneReconFv(arg0);
            break;
        case 2:
            F(s32, 0x444) |= 1;
            F(s32, 0x3C0) = 3;
            spawn_particle_effect_with_flags(arg0 + 0x38, 0x45, 0x40);
            spawn_particle_effect_with_flags(arg0 + 0x38, 0x46, 0x40);
            play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUl(0x4003A80D), arg0 + 0x38, 0, 0);
            create_breakup_mdl__12TBoss3VoloptFlllll(boss3_volopt_instance, recon_breakup_params, F(s32, 0x24), arg0 + 0x2FC, F(s32, 0x60));
            break;
        }
        break;
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjEneRecon__sub_8031C624(u8 *arg0, s32 arg1) {
    s32 n;
    f32 v;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 4;
        ((VObj_18_414afc *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x444) &= ~1;
        *(s32 *)((s8 *)arg0 + 0x444) |= 2;
        set_field_378__9TObjEneDDFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x326));
        noop__12TBoss8DragonFv(arg0);
        play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUl(0x4003E425), arg0 + 0x38, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
        break;
    case 3:
        if (*(s32 *)((s8 *)arg0 + 0xB0) & 0x10) {
            if (((VObj_18_414afc *)(arg0))->m97() != 0) {
                ((VObj_18_414afc *)(arg0))->m102(TObjEneRecon__data_805DF3E4);
            }
            n = *(s32 *)((s8 *)arg0 + 0x378);
            if (n == 2) {
                select_next_target__12TObjEneReconFPv(arg0, n);
            } else {
                transition_enemy_state(arg0, n);
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        n = *(s32 *)((s8 *)arg0 + 0x3C0);
        *(s32 *)((s8 *)arg0 + 0x3C0) = n + 1;
        *(f32 *)((s8 *)arg0 + 0x44C) = *(f32 *)((s8 *)arg0 + 0x308);
        *(f32 *)((s8 *)arg0 + 0x454) = *(f32 *)((s8 *)arg0 + 0x310);
        v = clamp_velocity__15TObjBoss2TunnelFv(arg0 + 0x44C, n);
        set_flag2__12TObjEneReconFPv(arg0, *(f32 *)((s8 *)arg0 + 0x44C), *(f32 *)((s8 *)arg0 + 0x454), v);
        clamp_min_height__12TObjEneReconFv(arg0);
        *(f32 *)((s8 *)arg0 + 0x308) *= TObjEneRecon__data_805DF3E0;
        *(f32 *)((s8 *)arg0 + 0x310) *= TObjEneRecon__data_805DF3E0;
        ((VObj_18_414afc *)(arg0))->m87();
        break;
    case 5:
        clear_attack_receipts();
        break;
    }
}
#pragma pop

}

#include "types.h"

struct VBase_8031c7bc { char pad[0x18]; };
struct VObj_8031c7bc : VBase_8031c7bc {
#define VM(i) virtual s32 m##i();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)
    VM(16)VM(17)VM(18)VM(19)VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)VM(30)
    VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)
    VM(46)VM(47)VM(48)VM(49)VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)VM(60)
    VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)
    VM(76)VM(77)VM(78)VM(79)VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)VM(90)
    VM(91)VM(92)VM(93)VM(94)
#undef VM
};
struct WBase_8031c7bc { char pad[0x14]; };
struct WObj_8031c7bc : WBase_8031c7bc {
#define WM(i) virtual s32 w##i();
    WM(0)WM(1)WM(2)WM(3)WM(4)
#undef WM
};

extern "C" {

void run_task__12TObjEneReconFPvi(u8 *arg0, s32 arg1);
s32 create_timed_particle_emitter(void *, int, int, int);
s32 transform_part_positions__9TObjEneDDFv(void *);
s32 remove_tracked_target__12TObjEneReconFPvPv(int, void *);
s32 find_entity_by_id(int);
s32 is_anim_6__12TObjEneReconFv();
s32 queue_destruction__7TObjectFv(void *);

void run_task__12TObjEneReconFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r3;

    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        ((VObj_8031c7bc *) arg0)->m94();
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) & 0xFFFFFFFE);
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) | 2);
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x01000000);
        ((WObj_8031c7bc *) (arg0 + 0x480))->w2();
        create_timed_particle_emitter((void *) (arg0 + 0x38), (int) (0x79), (int) (0), (int) (0xF));
        return;
    case 3:
        temp_r3 = find_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0x434)));
        if (temp_r3 == 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if (is_anim_6__12TObjEneReconFv() == 1) {
            transition_enemy_state((void *) (arg0), (int) (7));
            return;
        }
        if (((WObj_8031c7bc *) (arg0 + 0x480))->w4() != 0) {
            *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) | 1);
            remove_tracked_target__12TObjEneReconFPvPv((int) (temp_r3), (void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    case 5:
        return;
    case 0:
        ((s32 (*)()) advance_animation_playback)();
        ((s32 (*)(void *)) update_velocity__9TObjEneDDFv)((void *) (arg0));
        ((VObj_8031c7bc *) arg0)->m86();
        ((s32 (*)(void *)) clamp_min_height__12TObjEneReconFv)((void *) (arg0));
        transform_part_positions__9TObjEneDDFv((void *) (arg0));
        ((s32 (*)(void *)) spawn_trap_b__12TObjEneReconFv)((void *) (arg0));
        break;
    }
}

}

#include "types.h"

struct VBase_18_83f71d
{
  char pad[0x18];
};

struct VObj_18_83f71d : VBase_18_83f71d {
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
    virtual s32 m87(s32);
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual s32 m102(f32);
};

struct VBase_18_aab587 { char pad[0x18]; };

struct VObj_18_aab587 : VBase_18_aab587 {
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
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual s32 m93();
};

struct VB_8031CCFC {
    u8 pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94();
    virtual void m95();
    virtual void m96();
};

#define F(T, o) (*(T *)((s8 *)(arg0) + (o)))
struct VBase_18_2afebf { char pad[0x18]; };

struct VObj_18_2afebf : VBase_18_2afebf {
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
    virtual s32 m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual s32 m102(f32);
};

struct Obj_8031C920 { u8 pad[0x38]; f32 x, y, z; };

struct Prm_8031C920 { f32 f0; f32 f4; };

extern "C" {
s32 update_death_check__14TObjEneEpsilonFv(void *);
void update_velocity__9TObjEneDDFv(void *);
void advance_animation_playback(void *);
void spawn_trap_b__12TObjEneReconFv(s32);
void sync_height__12TObjEneReconFPv(void *);
extern const f32 TObjEneRecon__data_805DF3E4;
void TObjEneRecon__sub_8031D380(u8 *arg0, s32 arg1);
f64 atan2_float(f32, f32);
void enemy_clear_target(void *);
s32 move_with_wall_slide_on_ground__9TObjEneDDFfff(void *, f32, f32, f32);
void advance_animation_playback(void *);
s32 update_flag_0x444__12TObjEneReconFPv(void *);
extern const f64 TObjEneRecon__data_80476110;
extern const f32 TObjEneRecon__data_805DF3D0;
extern const f32 lbl_805DF3DC;
extern const f32 lbl_805DF410;
extern const f32 lbl_805DF414;
extern const f32 lbl_805DF418;
extern const f32 lbl_805DF41C;
void TObjEneRecon__sub_8031D4B0(u8 *arg0, s32 arg1);
f64 atan2_float(f32, f32);
int get_flag_b4__21TObjEneMe3ShinowaRealFv(void *);
s32 update_death_check__14TObjEneEpsilonFv(void *);
void enemy_copy_target_destination(void *);
void enemy_clear_target(void *);
void update_velocity__9TObjEneDDFv(void *);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
void play_sound_effect(s32, void *, s32, s32);
void create_bomb__12TObjEneReconFPvPvPv(void *, void *, void *);
s32 remap_area_sound_id__14TObjEneRecoboxFUl(s32);
extern const f64 TObjEneRecon__data_80476110;
extern const f32 lbl_805DF3F8;
extern const f32 lbl_805DF3FC;
void TObjEneRecon__sub_8031CCFC(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 update_death_check__14TObjEneEpsilonFv(void *);
void update_velocity__9TObjEneDDFv(void *);
void advance_animation_playback(void *);
void spawn_trap_b__12TObjEneReconFv(s32);
void retarget__12TObjEneReconFPv(void *);
f32 approach_value__12TObjEneReconFff(void *, f32, f32);
void set_flag2__12TObjEneReconFPv(void *, f32, f32, f32);
void set_orbit_destination__12TObjEneReconFPvi(void *, s32);
f32 sin_table_lookup(s32);
extern const f64 TObjEneRecon__data_80476110;
extern const f32 TObjEneRecon__data_805DF3C4;
extern const f32 TObjEneRecon__data_805DF3E0;
extern const f32 TObjEneRecon__data_805DF3E4;
extern const f32 lbl_805DF3E8;
extern const f32 lbl_805DF3EC;
extern const f32 lbl_805DF3F0;
extern const f32 lbl_805DF3F4;
extern const f32 lbl_805DF3F8;
void TObjEneRecon__sub_8031C920(u8 *arg0, s32 arg1);
}

extern "C" {

typedef struct VBase_18_83f71d VBase_18_83f71d;
typedef struct VObj_18_83f71d VObj_18_83f71d;
#define PSO_VCALL_VObj_18_83f71d_m94(_self) (((VObj_18_83f71d *)(_self))->m94())
#define PSO_VCALL_VObj_18_83f71d_m102(_self, _arg0) (((VObj_18_83f71d *)(_self))->m102((_arg0)))
#define PSO_VCALL_VObj_18_83f71d_m87(_self, _arg0) (((VObj_18_83f71d *)(_self))->m87((_arg0)))

void TObjEneRecon__sub_8031C920(u8 *arg0, s32 arg1) {
    f32 r;
    f32 h;
    f32 k;
    Obj_8031C920 *t;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 1;
        ((VObj_18_2afebf *)(arg0))->m94();
        F(u32, 0x444) &= ~1;
        F(u32, 0x444) |= 2;
        F(u32, 0x30) |= 0x01000000;
        if (F(s16, 0x326) == 4) {
            F(s32, 0x3C0) = 2;
        } else {
            F(s32, 0x3C0) = 0;
            F(s32, 0x3D0) = F(s32, 0x60) + 0x8000;
            F(s32, 0x3D4) = 0;
            F(s32, 0x3D8) = 0;
        }
        break;
    case 3:
        if (F(u8 *, 0x390) == NULL) {
            ((void (*)(void *, s16)) transition_enemy_state)(arg0, 5);
        } else if (F(s32, 0x46C) > 0x8000 || F(s32, 0x46C) < -0x8000) {
            ((void (*)(void *)) select_next_target__12TObjEneReconFPv)(arg0);
        } else if (F(s32, 0x470) > 0x5000 || F(s32, 0x470) < -0x5000) {
            retarget__12TObjEneReconFPv(arg0);
        }
        break;
    case 1:
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (update_death_check__14TObjEneEpsilonFv(arg0) != 0 || ((VObj_18_2afebf *)(arg0))->m102(TObjEneRecon__data_805DF3E4) != 0) {
            switch (F(s32, 0x3C0)) {
            case 0:
                set_orbit_destination__12TObjEneReconFPvi(arg0, F(s32, 0x3D0));
                update_velocity__9TObjEneDDFv(arg0);
                k = lbl_805DF3E8 * F(f32, 0x468);
                r = F(Prm_8031C920 *, 0x350)->f4;
                h = TObjEneRecon__data_805DF3C4;
                if (F(f32, 0x3AC) < k * k) {
                    if (calc_boss4_scale__10TObjPlayerFi(arg0) > TObjEneRecon__data_805DF3E0) {
                        F(s32, 0x3D4) = (lbl_805DF3EC * r) / (lbl_805DF3F0 * F(f32, 0x468));
                    } else {
                        F(s32, 0x3D4) = (lbl_805DF3F4 * r) / (lbl_805DF3F0 * F(f32, 0x468));
                    }
                    F(s32, 0x3C0) = 1;
                }
                break;
            case 1:
                F(s32, 0x3D0) += F(s32, 0x3D4) / 2;
                F(s32, 0x46C) += F(s32, 0x3D4) / 2;
                F(s32, 0x470) += F(s32, 0x3D4) / 2;
                set_orbit_destination__12TObjEneReconFPvi(arg0, F(s32, 0x3D0));
                update_velocity__9TObjEneDDFv(arg0);
                r = F(Prm_8031C920 *, 0x350)->f4;
                h = TObjEneRecon__data_805DF3C4;
                if (F(f32, 0x3AC) < r) {
                    F(s32, 0x3C0) = 2;
                }
                break;
            case 2:
                F(s32, 0x3D0) += F(s32, 0x3D4);
                F(s32, 0x46C) += F(s32, 0x3D4);
                F(s32, 0x470) += F(s32, 0x3D4);
                set_orbit_destination__12TObjEneReconFPvi(arg0, F(s32, 0x3D0));
                update_velocity__9TObjEneDDFv(arg0);
                r = F(Prm_8031C920 *, 0x350)->f4;
                h = lbl_805DF3F8 * sin_table_lookup(F(s32, 0x3D8));
                F(s32, 0x3D8) += 0x380;
                break;
            }
            VecCopy__FP3VecPC3Vec(arg0 + 0x44C, arg0 + 0x3A0);
            set_flag2__12TObjEneReconFPv(arg0, F(f32, 0x44C), F(f32, 0x454), r);
            F(f32, 0x448) = approach_value__12TObjEneReconFff(arg0, F(f32, 0x448), F(f32, 0x398) + h);
            ((s32 (*)(void *)) clamp_min_height__12TObjEneReconFv)(arg0);
            t = F(Obj_8031C920 *, 0x390);
            F(s32, 0x60) = TObjEneRecon__data_80476110 * atan2_float(t->x - F(f32, 0x38), t->z - F(f32, 0x40));
            ((VObj_18_2afebf *)(arg0))->m87();
            spawn_trap_b__12TObjEneReconFv((s32)arg0);
        }
        break;
    }
}

void TObjEneRecon__sub_8031CCFC(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        ((VB_8031CCFC *)arg0)->m94();
        *(u32 *)((s8 *)arg0 + 0x444) &= ~1;
        *(u32 *)((s8 *)arg0 + 0x444) |= 2;
        *(u32 *)((s8 *)arg0 + 0x30) |= 0x01000000;
        *(s32 *)((s8 *)arg0 + 0x474) = 1;
        *(s32 *)((s8 *)arg0 + 0x3C4) = 0;
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
        break;
    case 3:
        if (*(f32 *)((s8 *)arg0 + 0x3AC) > lbl_805DF3FC) {
            ((void (*)(void *, s16)) transition_enemy_state)(arg0, 1);
            break;
        }
        switch (*(s32 *)((s8 *)arg0 + 0x3C0)) {
        case 0:
            if (*(u32 *)((s8 *)arg0 + 0x390) == 0) {
                ((void (*)(void *, s16)) transition_enemy_state)(arg0, 1);
            }
            break;
        case 1:
            break;
        case 2:
            ((void (*)(void *, s16)) transition_enemy_state)(arg0, 4);
            break;
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        if (update_death_check__14TObjEneEpsilonFv(arg0) == 0) {
            enemy_clear_target(arg0);
        }
        switch (*(s32 *)((s8 *)arg0 + 0x3C0)) {
        case 0:
            enemy_copy_target_destination(arg0);
            update_velocity__9TObjEneDDFv(arg0);
            *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited(*(s32 *)((s8 *)arg0 + 0x60),
                (s32)(TObjEneRecon__data_80476110 * atan2_float(*(f32 *)((s8 *)arg0 + 0x3A0), *(f32 *)((s8 *)arg0 + 0x3A8))),
                0x400);
            (*(s32 *)((s8 *)arg0 + 0x3C4))++;
            if (*(s32 *)((s8 *)arg0 + 0x3C4) > 0xF) {
                *(s32 *)((s8 *)arg0 + 0x3C0) = 1;
                *(s16 *)((s8 *)arg0 + 0xB8) = 3;
                play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUl(0x4003A808), arg0 + 0x38, 0, 0);
            }
            break;
        case 1:
            if (objInBand__FP7GameObjf(arg0, lbl_805DF3F8) != 0) {
                play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUl(0x4003A80A), arg0 + 0x38, 0, 0);
                create_bomb__12TObjEneReconFPvPvPv(arg0, arg0, arg0 + 0x40C);
            } else if (get_flag_b4__21TObjEneMe3ShinowaRealFv(arg0) != 0) {
                *(s32 *)((s8 *)arg0 + 0x3C0) = 2;
            }
            break;
        }
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x474) = 0;
        break;
    }
}

void TObjEneRecon__sub_8031CF30(u8 *arg0, s32 arg1) {
    s32 i;
    u8 *p;
    f32 d;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 1;
        ((VB_8031CF30 *)arg0)->m94();
        F(u32, 0x444) &= ~1;
        F(u32, 0x444) |= 2;
        F(u32, 0x30) &= ~0x01000000;
        F(s32, 0x3C4) = 0;
        F(s32, 0x3C0) = 0;
        F(s32, 0x3C8) = 0;
        F(s32, 0x474) = 1;
        break;
    case 3:
        if (F(f32, 0x3AC) > lbl_805DF3FC) {
            ((void (*)(void *, s16)) transition_enemy_state)(arg0, 1);
            break;
        }
        switch (F(s32, 0x3C0)) {
        case 0:
        case 1:
            if (F(u32, 0x390) == 0) {
                ((void (*)(void *, s16)) transition_enemy_state)(arg0, 1);
            }
            break;
        case 2:
            break;
        case 3:
            ((void (*)(void *, s16)) transition_enemy_state)(arg0, 4);
            break;
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        if (update_death_check__14TObjEneEpsilonFv(arg0) == 0) {
            enemy_clear_target(arg0);
        }
        switch (F(s32, 0x3C0)) {
        case 0:
            if (F(u32, 0x390) != 0) {
                advance_field398__12TObjEneReconFPv(arg0);
            }
            update_velocity__9TObjEneDDFv(arg0);
            F(f32, 0x44C) = sin_table_lookup(F(s32, 0x60));
            F(f32, 0x454) = cos_table_lookup(F(s32, 0x60));
            update_collide_flag__12TObjEneReconFPv(arg0);
            F(f32, 0x448) = approach_value__12TObjEneReconFff(arg0, F(f32, 0x448), F(f32, 0x398));
            ((s32 (*)(void *)) clamp_min_height__12TObjEneReconFv)(arg0);
            if (TObjEneRecon__sub_8031DA90(arg0) != 0) {
                F(s16, 0xB8) = 1;
                F(s32, 0x3C0) = 1;
            }
            break;
        case 1:
            F(s32, 0x3C4)++;
            if (F(s32, 0x3C4) >= ((Data_8031CF30 *)TObjEneRecon__data_805D6AFC)->f1C) {
                F(s32, 0x3C4) = 0;
                F(s32, 0x3C0) = 2;
                F(s16, 0xB8) = 2;
                play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUl(0x4003A808), arg0 + 0x38, 0, 0);
            }
            update_flag_0x444__12TObjEneReconFPv(arg0);
            break;
        case 2:
            if (objInBand__FP7GameObjf(arg0, lbl_805DF400) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DF404) != 0) {
                spawn_particle_effect(arg0 + 0x2FC, 0x218);
            }
            if (objInBand__FP7GameObjf(arg0, lbl_805DF408) != 0) {
                F(s32, 0x3C8) = 1;
                play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUl(0x4003A809), arg0 + 0x38, 0, 0);
            } else if (objInBand__FP7GameObjf(arg0, lbl_805DF40C) != 0) {
                F(s32, 0x3C8) = 0;
            }
            if (F(s32, 0x3C8) == 1) {
                for (i = 0; i < lbl_805D5868; i++) {
                    p = get_player_data__10TObjPlayerFi(i);
                    if (is_valid_and_active__10TObjPlayerFUl() != 0 && p != NULL && obj_getField1c(p) < 0x1000 && ((VB_8031CF30 *)p)->m31() == 0) {
                        d = horizontal_distance_squared(p + 0x2FC, arg0 + 0x40C);
                        if (d <= get_pos_x__14TObjEneGibblesFPv(F(s32, 0x318)) * get_pos_x__14TObjEneGibblesFPv(F(s32, 0x318))) {
                            Pair_8031CF30 t;
                            t.a = 0;
                            t.b = (f32)get_attack_params_atp_min(F(s32, 0x318));
                            {
                                Pair_8031CF30 dmg = t;
                                ((VB_8031CF30 *)p)->m21(arg0, &dmg, 0, -1, -1);
                            }
                            ((VB_8031CF30 *)p)->m23(arg0, lbl_805DF408);
                        }
                    }
                }
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFv(arg0) != 0) {
                F(s32, 0x3C0) = 3;
            }
            update_flag_0x444__12TObjEneReconFPv(arg0);
            break;
        }
        ((VB_8031CF30 *)arg0)->m87();
        spawn_trap_a__12TObjEneReconFv(arg0);
        break;
    case 5:
        F(s32, 0x474) = 0;
        break;
    }
}

void TObjEneRecon__sub_8031D380(u8 *arg0, s32 arg1) {
  s32 temp_r4;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      PSO_VCALL_VObj_18_83f71d_m94(arg0);
      *((s32 *) (((s8 *) arg0) + 0x444)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x444))) & 0xFFFFFFFE);
      *((s32 *) (((s8 *) arg0) + 0x444)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x444))) | 2);
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x01000000);
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3B0)))) >= 0x96)
    {
      ((void (*)(void *, s16)) transition_enemy_state)(arg0, 5);
    }
    case 5:
      return;
    case 0:
      advance_animation_playback(arg0);
      if ((update_death_check__14TObjEneEpsilonFv(arg0) != 0) || (PSO_VCALL_VObj_18_83f71d_m102(arg0, TObjEneRecon__data_805DF3E4) != 0))
    {
      ((void (*)(void *, s16)) transition_enemy_state)(arg0, 4);
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x3B0)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3B0))) + 1);
    }
      sync_height__12TObjEneReconFPv(arg0);
      update_velocity__9TObjEneDDFv(arg0);
      temp_r4 = *((s32 *) (((s8 *) arg0) + 0x60));
      *((s32 *) (((s8 *) arg0) + 0x60)) = (s32) ((u16) (temp_r4 + 0x400));
      PSO_VCALL_VObj_18_83f71d_m87(arg0, temp_r4);
      spawn_trap_b__12TObjEneReconFv((s32) arg0);
      break;
  }
  return;
}
void TObjEneRecon__sub_8031D4B0(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r3;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        ((VObj_18_aab587 *)(arg0))->m93();
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) & 0xFFFFFFFE);
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) | 2);
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x30) | 0x01000000;
        *(s32 *)((s8 *)arg0 + 0x30) = temp_r3;
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (TObjEneRecon__data_80476110 * atan2_float((f32) (*(f32 *)((s8 *)arg0 + 0x428)), (f32) (*(f32 *)((s8 *)arg0 + 0x430))));
        enemy_clear_target((void *) (arg0));
        break;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x3C0) == 2) {
            ((void (*)(void *, s16)) transition_enemy_state)(arg0, 1);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x428);
        temp_f2 = *(f32 *)((s8 *)arg0 + 0x430);
        temp_f31 = (temp_f1 * temp_f1) + (temp_f2 * temp_f2);
        move_with_wall_slide_on_ground__9TObjEneDDFfff((void *) (arg0), (f32) (temp_f1), (f32) (temp_f2), (f32) (temp_f31));
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x3C0);
        switch (temp_r0) {
        case 0:
            *(f32 *)((s8 *)arg0 + 0x448) = (f32) (*(f32 *)((s8 *)arg0 + 0x448) + *(f32 *)((s8 *)arg0 + 0x42C));
            if (*(f32 *)((s8 *)arg0 + 0x448) == *(f32 *)((s8 *)arg0 + 0x460)) {
                *(s32 *)((s8 *)arg0 + 0x3C0) = 1;
            } else {
                *(f32 *)((s8 *)arg0 + 0x428) = (f32) (*(f32 *)((s8 *)arg0 + 0x428) * lbl_805DF410);
                *(f32 *)((s8 *)arg0 + 0x430) = (f32) (*(f32 *)((s8 *)arg0 + 0x430) * lbl_805DF410);
                if (*(f32 *)((s8 *)arg0 + 0x448) > *(f32 *)((s8 *)arg0 + 0x460)) {
                    temp_f2_2 = *(f32 *)((s8 *)arg0 + 0x42C);
                    if (temp_f2_2 > lbl_805DF414) {
                        *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (temp_f2_2 - TObjEneRecon__data_805DF3D0);
                        if (*(f32 *)((s8 *)arg0 + 0x42C) < lbl_805DF414) {
                            *(f32 *)((s8 *)arg0 + 0x42C) = (f32) lbl_805DF414;
                        }
                    } else {
                        *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (temp_f2_2 * lbl_805DF418);
                        if (*(f32 *)((s8 *)arg0 + 0x42C) > lbl_805DF414) {
                            *(f32 *)((s8 *)arg0 + 0x42C) = (f32) lbl_805DF414;
                        }
                    }
                    temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x448);
                    temp_f2_3 = *(f32 *)((s8 *)arg0 + 0x460);
                    if ((temp_f1_2 + *(f32 *)((s8 *)arg0 + 0x42C)) < temp_f2_3) {
                        *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (temp_f2_3 - temp_f1_2);
                    }
                } else {
                    temp_f2_4 = *(f32 *)((s8 *)arg0 + 0x42C);
                    if (temp_f2_4 < lbl_805DF3DC) {
                        *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (temp_f2_4 + TObjEneRecon__data_805DF3D0);
                        if (*(f32 *)((s8 *)arg0 + 0x42C) > lbl_805DF3DC) {
                            *(f32 *)((s8 *)arg0 + 0x42C) = (f32) lbl_805DF3DC;
                        }
                    } else {
                        *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (temp_f2_4 * lbl_805DF418);
                        if (*(f32 *)((s8 *)arg0 + 0x42C) < lbl_805DF3DC) {
                            *(f32 *)((s8 *)arg0 + 0x42C) = (f32) lbl_805DF3DC;
                        }
                    }
                    temp_f1_3 = *(f32 *)((s8 *)arg0 + 0x448);
                    temp_f2_5 = *(f32 *)((s8 *)arg0 + 0x460);
                    if ((temp_f1_3 + *(f32 *)((s8 *)arg0 + 0x42C)) > temp_f2_5) {
                        *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (temp_f2_5 - temp_f1_3);
                    }
                }
            }
            break;
        case 1:
            if (temp_f31 <= lbl_805DF41C) {
                *(s32 *)((s8 *)arg0 + 0x3C0) = 2;
            } else {
                *(f32 *)((s8 *)arg0 + 0x428) = (f32) (*(f32 *)((s8 *)arg0 + 0x428) * lbl_805DF410);
                *(f32 *)((s8 *)arg0 + 0x430) = (f32) (*(f32 *)((s8 *)arg0 + 0x430) * lbl_805DF410);
            }
            break;
        }
        update_flag_0x444__12TObjEneReconFPv((void *) (arg0));
        *(f32 *)((s8 *)arg0 + 0x44) = (f32) *(f32 *)((s8 *)arg0 + 0x2FC);
        *(f32 *)((s8 *)arg0 + 0x4C) = (f32) *(f32 *)((s8 *)arg0 + 0x304);
        ((s32 (*)(void *)) clamp_min_height__12TObjEneReconFv)((void *) (arg0));
        ((VObj_18_aab587 *)(arg0))->m86();
        break;
    }
}

}
