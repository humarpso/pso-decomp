#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct { f32 x, y, z; } Vec_800F290C;
struct VBase_18_fd6cbb { char pad[0x18]; };

struct VObj_18_fd6cbb : VBase_18_fd6cbb {
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
    virtual M2C_UNK m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Vec_800F26A4 { f32 x, y, z; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(Vec_800F290C *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK clear_attack_receipts(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *, s32);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DA858;
void TObjEneMe3Stelth__sub_800F290C(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK init_zako__15TObjBoss2TunnelFPvPv(void *, void *, int);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(int, void *, int, void *, int);
M2C_UNK spawn_effect_f8__10TObjPlayerFii(void *, int);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *, s32);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern u8 lbl_8043D460[];
extern s32 TObjEneMe3Stelth__data_805D5308;
extern const f32 lbl_805DA818;
extern const f32 TObjEneMe3Stelth__data_805DA824;
extern const f32 lbl_805DA82C;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA844;
extern const f32 TObjEneMe3Stelth__data_805DA850;
extern const f32 lbl_805DA854;
void TObjEneMe3Stelth__sub_800F26A4(u8 *arg0, s32 arg1);
}

extern "C" {

#pragma push
#pragma fp_contract on
#define F(T, o) (*(T *)(arg0 + (o)))
void TObjEneMe3Stelth__sub_800F26A4(u8 *arg0, s32 arg1) {
    Vec_800F26A4 ofs;
    Vec_800F26A4 v;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 5;
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        ((VObj_18 *)(arg0))->m92();
        F(s32, 0x3CC) &= ~0xF;
        F(s32, 0x424) = 0;
        break;
    case 3:
        break;
    case 0:
        switch (F(s32, 0x424)) {
        case 0:
            advance_animation_playback(arg0, arg1);
            if (objInBand__FP7GameObjf(arg0, lbl_805DA854) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DA818) != 0) {
                play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                F(s32, 0x424) = 1;
                F(s32, 0x428) = 0;
                ofs.x = TObjEneMe3Stelth__data_805DA840;
                ofs.y = TObjEneMe3Stelth__data_805DA824;
                ofs.z = TObjEneMe3Stelth__data_805DA844;
                init_zako__15TObjBoss2TunnelFPvPv(&ofs, arg0 + 0x38, F(s32, 0x60));
                spawn_effect_f8__10TObjPlayerFii(&ofs, 0x14);
            } else if (objInBand__FP7GameObjf(arg0, TObjEneMe3Stelth__data_805DA850) != 0) {
                F(s32, 0x3CC) |= 8;
            } else if (objInBand__FP7GameObjf(arg0, lbl_805DA82C) != 0) {
                F(s32, 0x3CC) &= ~8;
                F(s32, 0x3C0) = 0;
            }
            break;
        case 1:
            F(s32, 0x428)++;
            if (F(s32, 0x428) >= 0x14) {
                F(s32, 0x424) = 2;
                F(s32, 0x3CC) |= 2;
                create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneMe3Stelth__data_805D5308, lbl_8043D460, F(s32, 0x24), arg0 + 0x38, F(s32, 0x60));
                VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
                v.x += TObjEneMe3Stelth__data_805DA844 * sin_table_lookup(F(s32, 0x60));
                v.z += TObjEneMe3Stelth__data_805DA844 * cos_table_lookup(F(s32, 0x60));
                trigger_dell_biter_events__10TObjPlayerFPv(&v);
                play_sound_effect(0x3AD3A, arg0 + 0x38, 0, 0);
            }
            ((VObj_18 *)(arg0))->m100();
            break;
        case 2:
            queue_destruction__7TObjectFv(arg0);
            break;
        }
        break;
    case 5:
        F(s32, 0x3CC) &= ~8;
        break;
    }
}
#pragma pop

void TObjEneMe3Stelth__sub_800F290C(u8 *arg0, s32 arg1) {
    Vec_800F290C v;
    f32 c;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        advance_animation_playback(arg0, arg1);
        set_active__9TObjEneDDFPv(arg0);
        play_sound_effect(0x3A839, arg0 + 0x38, 0, 0);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x3C0) == 1 && calc_boss4_scale__10TObjPlayerFi(arg0) <= M2C_FIELD(arg0, f32 *, 0x3E0)) {
                transition_enemy_state(arg0, 0x12);
            } else {
                transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0, arg1);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        c = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        move_clamped_on_ground__9TObjEneDDFPvfff(arg0, v.x, v.z, c);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805DA858;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805DA858;
        ((VObj_18_fd6cbb *) arg0)->m87();
        break;
    case 5:
        clear_attack_receipts(arg0);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

}
