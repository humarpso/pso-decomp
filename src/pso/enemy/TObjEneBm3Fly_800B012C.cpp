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

struct VBase_800B0B20 { char pad[0x18]; };
struct VObj_800B0B20 : VBase_800B0B20 {
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
    virtual s32 m102(f32);
};

struct Vec_800B0B20 { f32 x, y, z; };
extern "C" {
M2C_UNK update__13TObjEneBm3FlyFPv(void *);
M2C_UNK vec3_add_to(void *, void *);
f32 vec3_dot(void *, void *);
M2C_UNK subtract_vector(void *, void *);
extern const f32 lbl_805D9CBC;
extern const f32 lbl_805D9CC0;
extern const f32 lbl_805D9CC4;
extern const f32 TObjEneBm3Fly__data_805D9CC8;
extern const f32 lbl_805D9CCC;
}

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

typedef s32 M2C_UNK;
struct Base_800B012C { u8 pad[0x18]; };

struct Ene_800B012C : Base_800B012C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void m87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void m94();
    virtual void v95();
    virtual void v96();
    virtual s32 m97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void m102(f32);
};

struct V3_800B012C { f32 x, y, z; };

struct P_800B012C { u8 pad[0x430]; V3_800B012C v; };

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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct VBase_800B044C { char pad[0x18]; };

struct VObj_800B044C : VBase_800B044C {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct Vec_800B0F70 { f32 x, y, z; };

extern "C" {
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
s32 play_persistent_sound(void *, void *, void *, int, int);
void TObjEneBm3Fly__sub_800B1574(s32 arg0);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
s32 play_persistent_sound(void *, void *, void *, int, int);
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0);
f32 calc_scaled_value__15TObjBoss2TunnelFif(int, int, f32, f32);
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0);
M2C_UNK TObjEneBm3Fly__sub_800B1634(void *);
f32 approach_value__13TObjEneBm3FlyFff(void *, f32, f32);
M2C_UNK clamp_flight_height__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_state_flag__13TObjEneBm3FlyFPv(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK transform_part_positions__9TObjEneDDFPv(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK advance_animation_playback();
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEneBm3Fly__data_805D9C8C;
extern const f32 TObjEneBm3Fly__data_805D9C90;
extern const f32 TObjEneBm3Fly__data_805D9C94;
void TObjEneBm3Fly__sub_800B02C8(u8 *arg0, s32 arg1);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, s32);
M2C_UNK choose_attack__13TObjEneBm3FlyFPv(void *);
M2C_UNK clamp_flight_height__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_dd_flag__13TObjEneBm3FlyFPv(void *, f32, f32, f32);
M2C_UNK clear_attack_receipts();
M2C_UNK noop__12TBoss8DragonFv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s16);
M2C_UNK transition_enemy_state(void *, int);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK advance_animation_playback();
M2C_UNK play_sound_effect(void *, void *, int, int);
extern const f32 TObjEneBm3Fly__data_805D9C80;
extern const f32 TObjEneBm3Fly__data_805D9C8C;
void update_recoil_state__13TObjEneBm3FlyFv(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK TObjEneBm3Fly__sub_800B1634(void *);
M2C_UNK clamp_flight_height__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_collide_flag__13TObjEneBm3FlyFPv(void *);
M2C_UNK enemy_clear_target(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK advance_animation_playback();
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f64 TObjEneBm3Fly__data_8043B118[];
extern const f32 TObjEneBm3Fly__data_805D9C70;
extern const f32 TObjEneBm3Fly__data_805D9C78;
extern const f32 TObjEneBm3Fly__data_805D9C90;
extern const f32 TObjEneBm3Fly__data_805D9C94;
extern const f32 lbl_805D9CD4;
extern const f32 lbl_805D9E80;
void TObjEneBm3Fly__sub_800B1214(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0);
M2C_UNK choose_attack__13TObjEneBm3FlyFPv(void *);
f32 approach_value__13TObjEneBm3FlyFff(void *, f32, f32);
M2C_UNK clamp_flight_height__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_dd_flag__13TObjEneBm3FlyFPv(void *, f32, f32, f32);
M2C_UNK circle_destination__13TObjEneBm3FlyFPvi(void *, int);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK advance_animation_playback();
f32 sin_table_lookup(int);
extern const f64 TObjEneBm3Fly__data_8043B118[];
extern const f32 TObjEneBm3Fly__data_805D9C70;
extern const f32 TObjEneBm3Fly__data_805D9C80;
extern const f32 TObjEneBm3Fly__data_805D9C8C;
extern const f32 lbl_805D9C98;
extern const f32 lbl_805D9C9C;
extern const f32 lbl_805D9CA0;
extern const f32 lbl_805D9CA4;
extern const f32 lbl_805D9CA8;
void state_circle_target__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
s32 is_vec_xz_cross_negative(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void TObjEneBm3Fly__sub_800B1574(s32 arg0);
M2C_UNK update_collide_flag__13TObjEneBm3FlyFPv(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK enemy_clear_target(void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK advance_animation_playback();
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEneBm3Fly__data_805D9C70;
extern const f32 TObjEneBm3Fly__data_805D9C8C;
extern const f32 TObjEneBm3Fly__data_805D9C90;
extern const f32 lbl_805D9CA8;
extern const f32 lbl_805D9CD0;
void TObjEneBm3Fly__sub_800B0F70(u8 *arg0, s32 arg1);
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
M2C_UNK play_sound_effect(void *, void *, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
s32 can_attack_target__13TObjEneBm3FlyFPv(void *);
M2C_UNK clamp_flight_height__13TObjEneBm3FlyFPv(void *);
M2C_UNK inflict_poison__9TObjEneDDFiPv(void *, void *);
M2C_UNK transition_enemy_state(void *, int);
f32 approach_value__13TObjEneBm3FlyFff(void *, f32, f32);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 check_v2_mode__9TObjEneDDFv();
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK enemy_clear_target(void *);
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
#pragma opt_common_subs off
typedef void (*Fv_800B012C)(void *);
typedef s32 (*Fi_800B012C)(void *);
typedef void (*Ff_800B012C)(void *, f32);
#define VT(o, off, T) (*(T *)(*(u8 **)((u8 *)(o) + 0x18) + (off)))
void update_recoil_state__13TObjEneBm3FlyFv(u8 *arg0, s32 arg1) {
    s32 t;
    f32 v;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((Ene_800B012C *)arg0)->m94();
        M2C_FIELD(arg0, u32 *, 0x428) &= ~1;
        M2C_FIELD(arg0, u32 *, 0x428) |= 2;
        set_field_378__9TObjEneDDFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x326));
        noop__12TBoss8DragonFv(arg0);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003E425), arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0xB0) & 0x10) {
            if (((Ene_800B012C *)arg0)->m97() != 0) {
                ((Ene_800B012C *)arg0)->m102(TObjEneBm3Fly__data_805D9C8C);
            }
            if (M2C_FIELD(arg0, s32 *, 0x378) == 3) {
                choose_attack__13TObjEneBm3FlyFPv(arg0);
            } else {
                transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
            }
        }
        break;
    case 0:
        advance_animation_playback();
        t = M2C_FIELD(arg0, s32 *, 0x3C0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = t + 1;
        ((P_800B012C *)arg0)->v.x = M2C_FIELD(arg0, f32 *, 0x308);
        ((P_800B012C *)arg0)->v.z = M2C_FIELD(arg0, f32 *, 0x310);
        v = clamp_velocity__15TObjBoss2TunnelFPv(&((P_800B012C *)arg0)->v, t);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, ((P_800B012C *)arg0)->v.x, ((P_800B012C *)arg0)->v.z, v);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm3Fly__data_805D9C80;
        M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm3Fly__data_805D9C80;
        ((Ene_800B012C *)arg0)->m87();
        break;
    case 5:
        clear_attack_receipts();
        break;
    }
}
#pragma pop

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
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((TObjEneBm3Fly__data_805D9C90 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x448)))) + M2C_FIELD(arg0, f32 *, 0x41C));
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x444);
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((TObjEneBm3Fly__data_805D9C90 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x448)))) + M2C_FIELD(arg0, f32 *, 0x424));
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
        clamp_flight_height__13TObjEneBm3FlyFPv((void *) (arg0));
        transform_part_positions__9TObjEneDDFPv((void *) (arg0));
        play_pitched_cue__13TObjEneBm3FlyFi((s32) arg0);
        break;
    }
}
#pragma pop

#define I(o) M2C_FIELD(arg0, s32 *, o)
#define R(o) M2C_FIELD(arg0, f32 *, o)
#define P(o) M2C_FIELD(arg0, u8 **, o)
#define V ((VObj_800B044C *)(arg0))
void state_circle_target__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    f32 speed;
    f32 vertical;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        V->m94();
        I(0x428) &= ~1;
        I(0x428) |= 2;
        I(0x30) |= 0x01000000;
        if (M2C_FIELD(arg0, s16 *, 0x326) == 4) {
            I(0x3C0) = 2;
            I(0x3CC) = 0;
        } else {
            I(0x3C0) = 0;
            I(0x3D0) = I(0x60) + 0x8000;
            I(0x3D4) = 0;
            I(0x3CC) = 0;
            I(0x3D8) = 0;
        }
        break;
    case 3:
        if (P(0x390) == NULL) {
            transition_enemy_state(arg0, 5);
        } else if (I(0x3CC) > 0x8000 || I(0x3CC) < -0x8000) {
            choose_attack__13TObjEneBm3FlyFPv(arg0);
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_death_check__14TObjEneEpsilonFPv(arg0) == 0 && V->m102(TObjEneBm3Fly__data_805D9C8C) == 0) {
            break;
        }
        switch (I(0x3C0)) {
        case 0:
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFPv(arg0);
            vertical = TObjEneBm3Fly__data_805D9C70;
            speed = M2C_FIELD(P(0x350), f32 *, 4);
            if (R(0x3AC) < lbl_805D9C98) {
                if (calc_boss4_scale__10TObjPlayerFi(arg0) > TObjEneBm3Fly__data_805D9C80) {
                    I(0x3D4) = (s32)((lbl_805D9C9C * speed) / lbl_805D9CA0);
                } else {
                    I(0x3D4) = (s32)((lbl_805D9CA4 * speed) / lbl_805D9CA0);
                }
                I(0x3C0) = 1;
            }
            break;
        case 1:
            I(0x3D0) += I(0x3D4) / 2;
            I(0x3CC) += I(0x3D4) / 2;
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFPv(arg0);
            speed = M2C_FIELD(P(0x350), f32 *, 4);
            vertical = TObjEneBm3Fly__data_805D9C70;
            if (R(0x3AC) < speed) {
                I(0x3C0) = 2;
            }
            break;
        case 2:
            I(0x3D0) += I(0x3D4);
            I(0x3CC) += I(0x3D4);
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFPv(arg0);
            speed = M2C_FIELD(P(0x350), f32 *, 4);
            vertical = lbl_805D9CA8 * sin_table_lookup(I(0x3D8));
            I(0x3D8) += 0x380;
            break;
        }
        VecCopy__FP3VecPC3Vec(arg0 + 0x430, arg0 + 0x3A0);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, R(0x430), R(0x438), speed);
        R(0x42C) = approach_value__13TObjEneBm3FlyFff(arg0, R(0x42C), R(0x398) + vertical);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        I(0x60) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(
            M2C_FIELD(P(0x390), f32 *, 0x38) - R(0x38), M2C_FIELD(P(0x390), f32 *, 0x40) - R(0x40)));
        V->m87();
        play_pitched_cue__13TObjEneBm3FlyFi((s32)arg0);
        break;
    case 1:
        break;
    case 5:
        break;
    }
}

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
            enemy_clear_target((void *) (arg0));
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0_2) {
        case 0:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) != NULL) {
                update_height_offset__13TObjEneBm3FlyFPv((void *) (arg0));
            }
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x430) = sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            M2C_FIELD(arg0, f32 *, 0x438) = cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x42C)), (f32) (M2C_FIELD(arg0, f32 *, 0x398)));
            clamp_flight_height__13TObjEneBm3FlyFPv((void *) (arg0));
            if (can_attack_target__13TObjEneBm3FlyFPv((void *) (arg0)) != 0) {
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
                        inflict_poison__9TObjEneDDFiPv((void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x390)));
                    }
                }
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A524)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
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
        play_pitched_cue__13TObjEneBm3FlyFi((s32)((void *) (arg0)));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x454) = 0;
        break;
    }
}

#pragma push
#pragma fp_contract on
#undef I
#undef R
#undef P
#undef V
#define I(o) M2C_FIELD(arg0, s32 *, o)
#define R(o) M2C_FIELD(arg0, f32 *, o)
#define P(o) M2C_FIELD(arg0, u8 **, o)
#define V ((VObj_800B0B20 *)(arg0))

void TObjEneBm3Fly__sub_800B0B20(u8 *arg0, s32 arg1) {
    Vec_800B0B20 *pos;
    Vec_800B0B20 *off;
    Vec_800B0B20 *vel;
    Vec_800B0B20 p;
    Vec_800B0B20 d;
    f32 z;
    f32 x;
    f32 s;
    f32 len;

    vel = (Vec_800B0B20 *)(arg0 + 0x3E8);
    pos = (Vec_800B0B20 *)(arg0 + 0x3F4);
    off = (Vec_800B0B20 *)(arg0 + 0x400);

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        V->m94();
        I(0x428) &= ~1;
        I(0x428) |= 2;
        I(0x30) |= 0x01000000;
        vel->x = R(0x430) * R(0x43C);
        vel->y = TObjEneBm3Fly__data_805D9C70;
        vel->z = R(0x438) * R(0x43C);
        if (is_vec_xz_cross_negative(arg0 + 0x430, arg0 + 0x3A0) != 0) {
            I(0x3CC) = 0x8000;
        } else {
            I(0x3CC) = 0;
        }
        I(0x3C4) = 0;
        off->x = TObjEneBm3Fly__data_805D9C70;
        off->y = TObjEneBm3Fly__data_805D9C70;
        off->z = TObjEneBm3Fly__data_805D9C70;
        pos->x = TObjEneBm3Fly__data_805D9C70;
        pos->y = R(0x42C) - R(0x3C);
        pos->z = TObjEneBm3Fly__data_805D9C70;
        break;
    case 3:
        if (R(0x3AC) > lbl_805D9CAC || P(0x390) == NULL) {
            transition_enemy_state(arg0, 5);
        } else if (R(0x3AC) < lbl_805D9CBC) {
            ((M2C_UNK (*)())choose_attack__13TObjEneBm3FlyFPv)();
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_death_check__14TObjEneEpsilonFPv(arg0) == 0 && V->m102(TObjEneBm3Fly__data_805D9C8C) == 0) {
            break;
        }
        update__13TObjEneBm3FlyFPv(arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        VecCopy__FP3VecPC3Vec(pos, arg0 + 0x2FC);
        subtract_vector(pos, off);
        if (I(0x3C4) == 0) {
            if (TObjEneBm3Fly__data_805D9C70 == R(0x430) && TObjEneBm3Fly__data_805D9C70 == R(0x438)) {
                R(0x430) = sin_table_lookup(I(0x60));
                R(0x438) = cos_table_lookup(I(0x60));
            }
            if (vec3_dot(arg0 + 0x430, arg0 + 0x3A0) < lbl_805D9CC0) {
                if (is_vec_xz_cross_negative(arg0 + 0x430, arg0 + 0x3A0) != 0) {
                    x = -R(0x438);
                    z = R(0x430);
                } else {
                    x = R(0x438);
                    z = -R(0x430);
                }
                vel->x = lbl_805D9CC4 * x + vel->x;
                vel->y = TObjEneBm3Fly__data_805D9C70;
                vel->z = lbl_805D9CC4 * z + vel->z;
                VecCopy__FP3VecPC3Vec(arg0 + 0x430, vel);
                update_scale__15TObjBoss2TunnelFPv(arg0 + 0x430);
            } else {
                I(0x3C4) = 1;
                VecCopy__FP3VecPC3Vec(arg0 + 0x430, arg0 + 0x3A0);
            }
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x430, arg0 + 0x3A0);
            s = TObjEneBm3Fly__data_805D9CC8 * sin_table_lookup(I(0x3CC));
            I(0x3CC) += 0x600;
            off->x = R(0x3A8) * s;
            off->y = TObjEneBm3Fly__data_805D9C70;
            off->z = -R(0x3A0) * s;
        }
        if (R(0x43C) > M2C_FIELD(P(0x350), f32 *, 4)) {
            R(0x43C) *= lbl_805D9CCC;
        } else {
            R(0x43C) = M2C_FIELD(P(0x350), f32 *, 4);
        }
        vel->x = R(0x430) * R(0x43C);
        vel->y = TObjEneBm3Fly__data_805D9C70;
        vel->z = R(0x438) * R(0x43C);
        pos->x += vel->x;
        pos->z += vel->z;
        VecCopy__FP3VecPC3Vec(&p, pos);
        vec3_add_to(&p, off);
        VecCopy__FP3VecPC3Vec(&d, &p);
        subtract_vector(&d, arg0 + 0x38);
        d.y = TObjEneBm3Fly__data_805D9C70;
        len = ((f32 (*)(void *))clamp_velocity__15TObjBoss2TunnelFPv)(&d);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, d.x, d.z, len);
        R(0x42C) = approach_value__13TObjEneBm3FlyFff(arg0, pos->y, R(0x398));
        pos->y = R(0x42C);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        I(0x60) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(R(0x430), R(0x438)));
        V->m87();
        pos->x -= R(0x38);
        pos->y -= R(0x42C);
        pos->z -= R(0x40);
        play_pitched_cue__13TObjEneBm3FlyFi((s32)arg0);
        break;
    case 5:
        R(0x43C) = M2C_FIELD(P(0x350), f32 *, 4);
        break;
    }
}

#pragma pop
#undef I
#undef R
#undef P
#undef V

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
#define F_800B(off, T) M2C_FIELD(arg0, T *, off)

#pragma push
#pragma fp_contract on
#define I(o) M2C_FIELD(arg0, s32 *, o)
#define R(o) M2C_FIELD(arg0, f32 *, o)
void TObjEneBm3Fly__sub_800B0F70(u8 *arg0, s32 arg1) {
    Vec_800B0F70 d;
    f32 radius;
    s32 a;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_18_aab587 *)(arg0))->m93();
        I(0x428) &= ~1;
        I(0x428) |= 2;
        I(0x30) |= 0x01000000;
        I(0x3CC) = 0;
        I(0x3D0) = (s32)(lbl_805D9CD0 * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0x800;
        I(0x3D4) = I(0x448);
        I(0x3D8) = (s32)(lbl_805D9CD0 * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0xA00;
        d.x = R(0x38) - R(0x41C);
        d.y = TObjEneBm3Fly__data_805D9C70;
        d.z = R(0x40) - R(0x424);
        if (is_vec_xz_cross_negative(&d, arg0 + 0x430) != 0) {
            I(0x3D8) *= -1;
        }
        enemy_clear_target(arg0);
        I(0x3C8) = -1;
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv(TObjEneBm3Fly__data_805D9C8C) != 0) {
            transition_enemy_state(arg0, 2);
        }
        break;
    case 0:
        advance_animation_playback();
        I(0x3C4)++;
        if (I(0x3C4) > 300) {
            I(0x3C4) = 0;
            I(0x3D8) = (s32)(lbl_805D9CD0 * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0xA00;
        }
        I(0x3CC) += I(0x3D0);
        radius = TObjEneBm3Fly__data_805D9C90 * cos_table_lookup(I(0x3CC) / 2);
        I(0x3D4) += I(0x3D8);
        a = I(0x3D4);
        R(0x38) = radius * sin_table_lookup(a) + R(0x41C);
        R(0x42C) = lbl_805D9CA8 * sin_table_lookup(I(0x3D4)) + R(0x444);
        R(0x40) = radius * cos_table_lookup(a) + R(0x424);
        I(0x60) = a - 0x4000;
        update_collide_flag__13TObjEneBm3FlyFPv(arg0);
        R(0x44) = R(0x2FC);
        R(0x4C) = R(0x304);
        ((VObj_18_aab587 *)(arg0))->m86();
        TObjEneBm3Fly__sub_800B1574((s32)arg0);
        break;
    case 5:
        R(0x430) = R(0x38) - R(0x44);
        R(0x434) = TObjEneBm3Fly__data_805D9C70;
        R(0x438) = R(0x40) - R(0x4C);
        R(0x43C) = update_scale__15TObjBoss2TunnelFPv(arg0 + 0x430);
        break;
    }
}
#pragma pop

void TObjEneBm3Fly__sub_800B1214(u8 *arg0, s32 arg1) {
    f32 *p = (f32 *)(arg0 + 0x3E8);
    switch (arg1) {
    case 4:
        F_800B(0xB8, s16) = 1;
        ((VObj_18 *)(arg0))->m93();
        F_800B(0x428, s32) &= ~1;
        F_800B(0x428, s32) |= 2;
        F_800B(0x30, s32) |= 0x01000000;
        TObjEneBm3Fly__sub_800B1634(arg0);
        F_800B(0x3C0, s32) = 0;
        F_800B(0x3C4, s32) = 0;
        p[0] = TObjEneBm3Fly__data_805D9C90 * sin_table_lookup(F_800B(0x448, s32)) + F_800B(0x41C, f32);
        p[1] = F_800B(0x444, f32);
        p[2] = TObjEneBm3Fly__data_805D9C90 * cos_table_lookup(F_800B(0x448, s32)) + F_800B(0x424, f32);
        F_800B(0x60, s32) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(F_800B(0x40C, f32), F_800B(0x414, f32)));
        enemy_clear_target(arg0);
        break;
    case 3:
        if (F_800B(0x3C4, s32) == 2) {
            transition_enemy_state(arg0, 1);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        switch (F_800B(0x3C4, s32)) {
        case 0:
            F_800B(0x38, f32) += F_800B(0x40C, f32);
            F_800B(0x42C, f32) += F_800B(0x410, f32);
            F_800B(0x40, f32) += F_800B(0x414, f32);
            F_800B(0x40C, f32) *= lbl_805D9CD4;
            F_800B(0x410, f32) += lbl_805D9E80;
            F_800B(0x414, f32) *= lbl_805D9CD4;
            F_800B(0x3C0, s32)++;
            if (F_800B(0x3C0, s32) > 40) {
                F_800B(0x3C4, s32) = 1;
                F_800B(0x3C0, s32) = 0;
                F_800B(0x43C, f32) = TObjEneBm3Fly__data_805D9C70;
            }
            break;
        case 1:
            VecCopy__FP3VecPC3Vec(arg0 + 0x430, p);
            F_800B(0x430, f32) -= F_800B(0x38, f32);
            F_800B(0x434, f32) -= F_800B(0x42C, f32);
            F_800B(0x438, f32) -= F_800B(0x40, f32);
            F_800B(0x3E0, f32) = update_scale__15TObjBoss2TunnelFPv(arg0 + 0x430);
            if (F_800B(0x43C, f32) < TObjEneBm3Fly__data_805D9C94) {
                F_800B(0x43C, f32) += TObjEneBm3Fly__data_805D9C78;
            }
            if (F_800B(0x3E0, f32) < TObjEneBm3Fly__data_805D9C94) {
                VecCopy__FP3VecPC3Vec(arg0 + 0x38, p);
                F_800B(0x3C4, s32) = 2;
            } else {
                F_800B(0x38, f32) = F_800B(0x430, f32) * F_800B(0x43C, f32) + F_800B(0x38, f32);
                F_800B(0x42C, f32) = F_800B(0x434, f32) * F_800B(0x43C, f32) + F_800B(0x42C, f32);
                F_800B(0x40, f32) = F_800B(0x438, f32) * F_800B(0x43C, f32) + F_800B(0x40, f32);
            }
            F_800B(0x60, s32) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(F_800B(0x430, f32), F_800B(0x438, f32)));
            break;
        }
        update_collide_flag__13TObjEneBm3FlyFPv(arg0);
        F_800B(0x44, f32) = F_800B(0x2FC, f32);
        F_800B(0x4C, f32) = F_800B(0x304, f32);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        ((VObj_18 *)(arg0))->m86();
        break;
    }
}
#pragma pop

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0) {
    if (((VObj_800B150C_800B07D0 *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}
void TObjEneBm3Fly__sub_800B1574(s32 arg0) {
    play_persistent_sound((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AB23)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
}
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0) {
    play_persistent_sound((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039E22)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
}

}
