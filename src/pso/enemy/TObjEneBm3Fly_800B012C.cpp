#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBaseB0_800b07d0 { char pad[0x18]; };
struct VObjB0_800b07d0 : VBaseB0_800b07d0 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual s32 v18(void *, f32);
    virtual void v19(); virtual void v20(void *, f32);
    virtual void v21(); virtual void v22(); virtual void v23(void *, f32);
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
    virtual void v92(); virtual void v93(); virtual void v94();
};

struct VBase_18_b7c757 { char pad[0x18]; };

struct VObj_18_b7c757 : VBase_18_b7c757 {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
};

extern "C" {
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
s32 TOTrapAncient01__sub_80226578(void *, void *, void *, int, int);
void TObjEneBm3Fly__sub_800B1574(s32 arg0);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
s32 TOTrapAncient01__sub_80226578(void *, void *, void *, int, int);
void TObjEneBm3Fly__sub_800B15C4(s32 arg0);
f32 calc_scaled_value__15TObjBoss2TunnelFif(int, int, f32, f32);
void TObjEneBm3Fly__sub_800B15C4(s32 arg0);
M2C_UNK TObjEneBm3Fly__sub_800B1634(void *);
f32 approach_value__13TObjEneBm3FlyFff(void *, f32, f32);
M2C_UNK TObjEneBm3Fly__sub_800B1978(void *);
M2C_UNK update_state_flag__13TObjEneBm3FlyFPv(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK TObjEneDD__sub_800BA934(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK advance_animation_playback();
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEneBm3Fly__data_805D9C8C;
extern const f32 TObjEneBm3Fly__data_805D9C90;
extern const f32 TObjEneBm3Fly__data_805D9C94;
void TObjEneBm3Fly__sub_800B02C8(u8 *arg0, s32 arg1);
}

extern "C" {

struct Base_800B150C_800B07D0 { char pad[0x18]; };
struct VObj_800B150C_800B07D0 : Base_800B150C_800B07D0 {
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
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual int m97();
};

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0);
void execute_action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
s32 TObjEneBm3Fly__sub_800B177C(void *);
M2C_UNK TObjEneBm3Fly__sub_800B1978(void *);
M2C_UNK TObjEneDD__sub_800BA3D8(void *, void *);
M2C_UNK transition_enemy_state(void *, int);
f32 approach_value__13TObjEneBm3FlyFff(void *, f32, f32);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 check_v2_mode__9TObjEneDDFv();
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK fn_800B98C0(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK update_collide_flag__13TObjEneBm3FlyFPv(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK update_height_offset__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_state_flag__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern u8 *lbl_805D50EC;
extern const f32 TObjEneBm3Fly__data_805D9C88;
extern const f32 lbl_805D9CAC;
extern const f32 lbl_805D9CB0;
extern const f32 lbl_805D9CB4;
extern const f32 lbl_805D9CB8;

#pragma push
#pragma fp_contract on
void TObjEneBm3Fly__sub_800B02C8(u8 *arg0, s32 arg1) {
    u8 *temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_18_b7c757 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        TObjEneBm3Fly__sub_800B1634((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((TObjEneBm3Fly__data_805D9C90 * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x448)))) + M2C_FIELD(arg0, f32 *, 0x41C));
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x444);
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((TObjEneBm3Fly__data_805D9C90 * TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x448)))) + M2C_FIELD(arg0, f32 *, 0x424));
        temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (TObjEneBm3Fly__data_805D9C94 + calc_scaled_value__15TObjBoss2TunnelFif((int) (M2C_FIELD(temp_r4, s32 *, 8)), (int) (temp_r4), (f32) (M2C_FIELD(temp_r4, f32 *, 4)), (f32) (TObjEneBm3Fly__data_805D9C90)));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv((f32) (TObjEneBm3Fly__data_805D9C8C)) != 0) {
            transition_enemy_state((void *) (arg0), (int) (2));
        } else if (M2C_FIELD(arg0, f32 *, 0x3AC) < M2C_FIELD(arg0, f32 *, 0x3E0)) {
            transition_enemy_state((void *) (arg0), (int) (1));
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x42C)), (f32) (M2C_FIELD(arg0, f32 *, 0x398)));
        update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
        ((VObj_18_b7c757 *)(arg0))->m86();
        TObjEneBm3Fly__sub_800B1978((void *) (arg0));
        TObjEneDD__sub_800BA934((void *) (arg0));
        TObjEneBm3Fly__sub_800B15C4((s32) arg0);
        break;
    }
}
#pragma pop

void execute_action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObjB0_800b07d0 *)arg0)->v94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x454) = 1;
        return;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805D9CAC) {
            transition_enemy_state((void *) (arg0), (int) (5));
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0) {
        case 0:
        case 1:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) == NULL) {
                transition_enemy_state((void *) (arg0), (int) (5));
            }
        case 2:
            return;
        case 3:
            transition_enemy_state((void *) (arg0), (int) (4));
            return;
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_death_check__14TObjEneEpsilonFPv((void *) (arg0)) == 0) {
            fn_800B98C0((void *) (arg0));
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0_2) {
        case 0:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) != NULL) {
                update_height_offset__13TObjEneBm3FlyFPv((void *) (arg0));
            }
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x430) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            M2C_FIELD(arg0, f32 *, 0x438) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x42C)), (f32) (M2C_FIELD(arg0, f32 *, 0x398)));
            TObjEneBm3Fly__sub_800B1978((void *) (arg0));
            if (TObjEneBm3Fly__sub_800B177C((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) >= (s32) M2C_FIELD(lbl_805D50EC, s32 *, 0x1C)) {
                M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 2;
                M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        case 2:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9CB0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x440) = (s32) (M2C_FIELD(arg0, s32 *, 0x440) + 1);
                temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                if ((temp_r3 != NULL) && (((VObjB0_800b07d0 *)temp_r3)->v18(arg0, TObjEneBm3Fly__data_805D9C88) != 0)) {
                    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_2)->v20(arg0, TObjEneBm3Fly__data_805D9C88);
                    temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_3)->v23(arg0, lbl_805D9CB4);
                    if ((check_v2_mode__9TObjEneDDFv() != 0) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D9CB8)) {
                        TObjEneDD__sub_800BA3D8((void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x390)));
                    }
                }
                TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A524)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x440) >= 4) {
                    M2C_FIELD(arg0, s32 *, 0x440) = 0;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 3;
                } else {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                }
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        }
        ((VObjB0_800b07d0 *)arg0)->v87();
        TObjEneBm3Fly__sub_800B15C4((s32)((void *) (arg0)));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x454) = 0;
        break;
    }
}

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0) {
    if (((VObj_800B150C_800B07D0 *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}
void TObjEneBm3Fly__sub_800B1574(s32 arg0) {
    TOTrapAncient01__sub_80226578((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AB23)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
}
void TObjEneBm3Fly__sub_800B15C4(s32 arg0) {
    TOTrapAncient01__sub_80226578((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039E22)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
}

}
