#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8009E7C4_8009E474 { char pad[0x18]; };
struct VObj_8009E7C4_8009E474 : Base_8009E7C4_8009E474 {
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

struct RecoveredGlobal_8009E4AC_lbl_8043A2A0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct TargetBase_8009E860 { char pad[0x18]; };

struct Target_8009E860 : TargetBase_8009E860 {
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
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual s32 m114(u32);
};

struct Entry_8009E860 { u16 id; u8 pad2[2]; f32 dist; };

struct Canadin_8009E860 {
    u8 pad0[0x390];
    u32 owner;
    u8 pad394[0x3C0 - 0x394];
    Target_8009E860 *target;
    u8 pad3C4[0x4C8 - 0x3C4];
    u16 target_id;
};

extern "C" {
void TObjEneMe1Canadin__sub_8009E930(u8 *arg0);
void TObjEneMe1Canadin__sub_8009E948(u8 *arg0);
s32 transition_enemy_state(void * a0, s32 a1);
s32 TObjEneMe1Canadin__vt106(u8 *arg0);
s32 transition_enemy_state(void * a0, s32 a1);
void TObjEneMe1Canadin__vt103(u8 *arg0);
extern const f32 lbl_805D991C;
s32 TObjEneMe1Canadin__sub_8009E76C(u8 *arg0);
void reset_map_core__17TObjEneMe1CanadinFPv(void *, void *);
extern RecoveredGlobal_8009E4AC_lbl_8043A2A0 lbl_8043A2A0;
void TObjEneMe1CanadinLeader__sub_8009E4AC(u8 *arg0, s32 arg1);
f32 newton_sqrtf(f32);
void TBoss2DeRolLe__sub_800B98D8(void *, u32);
s32 TObjEneDD__sub_800BB484(void *, Entry_8009E860 *);
void *find_entity_by_id(u16);
u32 get_player_by_client_id(u16);
extern const f32 lbl_805D98F4;
s32 TObjEneMe1Canadin__sub_8009E860(Canadin_8009E860 *self, f32 *out, f32 _w2);
}

extern "C" {

void TObjEneMe1Canadin__vt105(void);
void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0);
void advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *arg0);
int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p);
s32 check_target__17TObjEneMe1CanadinFPv(void *arg0);
void noop__17TObjEneMe1CanadinFv(void);
int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0);
void update_move__17TObjEneMe1CanadinFPv(void* p);
s32 transition_enemy_state(void * a0 = 0, s32 a1 = 0);
int TObjEneDD__vt86(void*);
int TObjEneEpsilon__sub_800B96A4(void*);
int TObjEneMe1Canadin__sub_8009E3E4(void*);
void *find_entity_by_id(u16);
int copy_vec4__13TRaderMapCoreFPvPv(void*);
int enemy_has_live_target(void*);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
int update_angle__17TObjEneMe1CanadinFPv(void*);
int update_velocity__9TObjEneDDFPv(void*);

void reset_map_core__17TObjEneMe1CanadinFPv(void* p, void * _w1) { copy_vec4__13TRaderMapCoreFPvPv((char*)p + 0x4a4); TObjEneMe1Canadin__sub_8009E3E4(p); }

typedef char RecoveredGlobal_8009E4AC_lbl_8043A2A0_size[sizeof(RecoveredGlobal_8009E4AC_lbl_8043A2A0) == 0x10 ? 1 : -1];
void TObjEneMe1CanadinLeader__sub_8009E4AC(u8 *arg0, s32 arg1) {
    reset_map_core__17TObjEneMe1CanadinFPv((void *)((void *) (arg0)), (void *)((void *) (&lbl_8043A2A0.value)));
    M2C_FIELD(arg0, s32 *, 0x4B8) = 3;
    M2C_FIELD(arg0, s32 *, 0x4BC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 2;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
}

int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

void noop__17TObjEneMe1CanadinFv(void) {  }
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
        transition_enemy_state(arg0, 0xE);
        return 1;
    }
    return 0;
}

s32 TObjEneMe1Canadin__vt106(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C8);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r4 & 0xFFFFFFDF);
        transition_enemy_state((void *)((void *)(arg0)), (s32)((int) (0xA)));
        M2C_FIELD(arg0, s32 *, 0x40C) = 0;
        return 1;
    }
    if (temp_r4 & 0x40) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r4 & 0xFFFFFFBF);
        transition_enemy_state((void *)((void *)(arg0)), (s32)((int) (0xB)));
        return 1;
    }
    return 0;
}

void TObjEneMe1Canadin__vt105(void) {  }

s32 TObjEneMe1Canadin__sub_8009E76C(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3F4) < lbl_805D991C;
}

void advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3FC) == 5) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
    }
}

void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3FC) == 4) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 5;
    }
}

extern const f32 lbl_805D98E4;
extern const f32 lbl_805D9920;

s32 check_target__17TObjEneMe1CanadinFPv(void *arg0) {
    f32 sp8;
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    if (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805D98E4) {
        var_r31 = 1;
        M2C_FIELD(arg0, void **, 0x3C0) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x4C8));
        temp_r3 = M2C_FIELD(arg0, void **, 0x3C0);
        if ((((VObj_8009E7C4_8009E474 *)temp_r3)->m114(M2C_FIELD(arg0, s32 *, 0x390)) == 0) && (TObjEneMe1Canadin__sub_8009E860((Canadin_8009E860 *)(arg0), (f32 *)(&sp8), lbl_805D9920) != 0) && (sp8 > lbl_805D98E4)) {
            var_r31 = 0;
        }
    }
    return var_r31;
}

s32 TObjEneMe1Canadin__sub_8009E860(Canadin_8009E860 *self, f32 *out, f32 _w2) {
    Entry_8009E860 list[5];
    s32 found;
    s32 count;
    u32 id;
    s32 i;
    found = 0;
    *out = lbl_805D98F4;
    count = TObjEneDD__sub_800BB484(self, list);
    for (i = 0; i < count; i++) {
        id = get_player_by_client_id(list[i].id);
        if (id != self->owner) {
            self->target = (Target_8009E860 *)find_entity_by_id(self->target_id);
            if (self->target->m114(id) != 0) {
                *out = newton_sqrtf(list[i].dist);
                found = 1;
                TBoss2DeRolLe__sub_800B98D8(self, id);
                break;
            }
        }
    }
    return found;
}

void TObjEneMe1Canadin__sub_8009E930(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & ~0x28);
}

void TObjEneMe1Canadin__sub_8009E948(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 0x28);
}

int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p) { return TObjEneDD__vt86(p); }

void TObjEneMe1Canadin__vt103(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x100) {
        transition_enemy_state((void *)((void *)(arg0)), (s32)((int) (7)));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) < 2) {
            transition_enemy_state((void *)((void *)(arg0)), (s32)((int) (6)));
            M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) + 1);
            return;
        }
        transition_enemy_state((void *)((void *)(arg0)), (s32)((int) (7)));
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        return;
    }
    transition_enemy_state((void *)((void *)(arg0)), (s32)((int) (6)));
}

void update_move__17TObjEneMe1CanadinFPv(void* p) { if (enemy_has_live_target(p) != 0) { TObjEneEpsilon__sub_800B96A4(p); update_velocity__9TObjEneDDFPv(p); update_angle__17TObjEneMe1CanadinFPv(p); } }

}
