#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual M2C_UNK m102(f32);
};

#define F(T, o) M2C_FIELD(arg0, T *, o)
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
    virtual M2C_UNK m94();
};

struct Vec_8031C364 { f32 x, y, z; };

extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, s32);
void clear_attack_receipts(void);
void noop__12TBoss8DragonFv(void *);
void set_field_378__9TObjEneDDFPvi(void *, s32);
void transition_enemy_state(void *, s32);
void advance_animation_playback(void *);
void play_sound_effect(s32, void *, s32, s32);
void TObjEneRecon__sub_8031D994(void *, s32);
void TObjEneRecon__sub_8031DD14(void *);
void set_flag2__12TObjEneReconFPv(void *, f32, f32, f32);
s32 TObjEneRecobox__sub_8032013C(s32);
extern const f32 TObjEneRecon__data_805DF3E0;
extern const f32 TObjEneRecon__data_805DF3E4;
void TObjEneRecon__sub_8031C624(u8 *arg0, s32 arg1);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, s32);
void spawn_particle_effect_with_flags(void *, int, int);
void TBoss8Dragon__sub_800BB7D8(void *, int, f32);
void TBoss8Dragon__sub_800BB7DC(void *);
void transition_enemy_state(void *, s32);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, void *, s32, void *, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
void advance_animation_playback(void *);
s32 project_actor_to_ground(void *, void *, void *);
void play_sound_effect(s32, void *, s32, s32);
void TObjEneRecon__sub_8031DD14(void *);
void set_flag2__12TObjEneReconFPv(void *, f32, f32, f32);
s32 TObjEneRecobox__sub_8032013C(s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u8 lbl_804760C0[];
extern s32 lbl_805D6B04;
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
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        TBoss8Dragon__sub_800BB7DC(arg0);
        TBoss8Dragon__sub_800BB7D8(arg0, 0xF1, lbl_805DF3CC);
        F(s32, 0x3C0) = 0;
        F(f32, 0x3E0) = TObjEneRecon__data_805DF3C4;
        F(f32, 0x44C) = F(f32, 0x308);
        F(f32, 0x454) = F(f32, 0x310);
        F(f32, 0x3E4) = ((f32 (*)(void *))clamp_velocity__15TObjBoss2TunnelFPv)(arg0 + 0x44C);
        play_sound_effect(TObjEneRecobox__sub_8032013C(0x4003A80C), arg0 + 0x38, 0, 0);
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
            TObjEneRecon__sub_8031DD14(arg0);
            break;
        case 2:
            F(s32, 0x444) |= 1;
            F(s32, 0x3C0) = 3;
            spawn_particle_effect_with_flags(arg0 + 0x38, 0x45, 0x40);
            spawn_particle_effect_with_flags(arg0 + 0x38, 0x46, 0x40);
            play_sound_effect(TObjEneRecobox__sub_8032013C(0x4003A80D), arg0 + 0x38, 0, 0);
            create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D6B04, lbl_804760C0, F(s32, 0x24), arg0 + 0x2FC, F(s32, 0x60));
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
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        ((VObj_18_414afc *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x444) &= ~1;
        M2C_FIELD(arg0, s32 *, 0x444) |= 2;
        set_field_378__9TObjEneDDFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x326));
        noop__12TBoss8DragonFv(arg0);
        play_sound_effect(TObjEneRecobox__sub_8032013C(0x4003E425), arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            if (((VObj_18_414afc *)(arg0))->m97() != 0) {
                ((VObj_18_414afc *)(arg0))->m102(TObjEneRecon__data_805DF3E4);
            }
            n = M2C_FIELD(arg0, s32 *, 0x378);
            if (n == 2) {
                TObjEneRecon__sub_8031D994(arg0, n);
            } else {
                transition_enemy_state(arg0, n);
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        n = M2C_FIELD(arg0, s32 *, 0x3C0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = n + 1;
        M2C_FIELD(arg0, f32 *, 0x44C) = M2C_FIELD(arg0, f32 *, 0x308);
        M2C_FIELD(arg0, f32 *, 0x454) = M2C_FIELD(arg0, f32 *, 0x310);
        v = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x44C, n);
        set_flag2__12TObjEneReconFPv(arg0, M2C_FIELD(arg0, f32 *, 0x44C), M2C_FIELD(arg0, f32 *, 0x454), v);
        TObjEneRecon__sub_8031DD14(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneRecon__data_805DF3E0;
        M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneRecon__data_805DF3E0;
        ((VObj_18_414afc *)(arg0))->m87();
        break;
    case 5:
        clear_attack_receipts();
        break;
    }
}
#pragma pop

}
