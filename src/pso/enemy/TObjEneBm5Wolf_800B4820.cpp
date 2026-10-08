#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ang_800B4AD4;
struct Arg_800B74B8;
struct Arg_800B7530;
struct Base_800B53F0;
struct Base_800B74B8;
struct Base_800B7530;
struct Cur_800B76E0;
struct Ent_800B76E0;
struct List_800B4D88;
struct List_800B6B50;
struct Node_800B4D88;
struct Node_800B6B50;
struct Obj_800B7018;
struct Obj_800B74B8;
struct Obj_800B7530;
struct Obj_800B76E0;
struct Obj_800B79E0;
struct Seq_800B76E0;
struct Stack_800B7808;
struct VBase2_800B4820;
struct VBase_18_4225ac;
struct VBase_18_7b3d65;
struct VBase_18_8bca97;
struct VBase_18_a3e1a1;
struct VBase_18_b7c757;
struct VBase_800B4820;
struct VBase_800B4AD4;
struct VEne_800B4820;
struct VObj2_800B4820;
struct VObj_18_4225ac;
struct VObj_18_7b3d65;
struct VObj_18_8bca97;
struct VObj_18_a3e1a1;
struct VObj_18_b7c757;
struct VObj_800B4AD4;
struct VObj_800B53F0;
struct Vec_800B4D88;
struct Vec_800B50CC;
struct Vec_800B53F0;
struct Vec_800B56CC;
struct Vec_800B62AC;
struct Vec_800B7018;
struct Vec_800B78F8;
struct Vec_800B79E0;
struct Wolf_800B78F8;
struct Vec_800B5D4C { f32 x, y, z; };

struct Col_800B5D4C { u8 pad[0x18]; u32 flags; };

struct Wolf_800B5D4C {
    u8 pad0[0x38];
    Vec_800B5D4C pos;
    f32 f44;
    u8 pad48[0x4C - 0x48];
    f32 f4C;
    u8 pad50[0x60 - 0x50];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Col_800B5D4C *col;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0xC8 - 0xBA];
    f32 fC8;
    u8 padCC[0x390 - 0xCC];
    Wolf_800B5D4C *target;
    u8 pad394[0x400 - 0x394];
    f32 f400;
    f32 f404;
    u8 pad408[0x41C - 0x408];
    s32 f41C;
    s32 f420;
    s32 f424;
    s32 f428;
    s32 f42C;
    u8 pad430[0x434 - 0x430];
    f32 f434;
    f32 f438;
    u8 pad43C[0x444 - 0x43C];
    Vec_800B5D4C f444;
    Vec_800B5D4C f450;
};

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 is_vec_xz_cross_negative(void *, void *);
void play_footsteps__14TObjEneBm5WolfFPv(u8 *arg0);
f32 calc_circle_offset__14TObjEneBm5WolfFPvPvPv(Obj_800B79E0 *self, Vec_800B79E0 *target, Vec_800B79E0 *out);
void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0);
void approach_target__14TObjEneBm5WolfFPvf(void *, f32);
void turn_pose_to_target__14TObjEneBm5WolfFv(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
f32 rand_range__9TObjEneDDFff(void *actor, f32 low, f32 high);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
int has_move_failures__9TObjEneDDFPvi(void *, s32);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 approach_angle_limited(int, int, int);
M2C_UNK advance_animation_playback(void *);
f32 sin_table_lookup(s32 angle);
f32 cos_table_lookup(s32 angle);
extern const f64 TObjEneBm5Wolf__data_8043B5B0;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D80;
extern const f32 TObjEneBm5Wolf__data_805D9DAC;
extern const f32 lbl_805D9DCC;
extern const f32 TObjEneBm5Wolf__data_805D9DD0;
extern const f32 lbl_805D9DF8;
extern const f32 lbl_805D9DFC;
extern const f32 lbl_805D9E00;
extern const f32 lbl_805D9E04;
extern const f32 lbl_805D9E08;
extern const f32 lbl_805D9E0C;
void circling_state__14TObjEneBm5WolfFv(u8 *arg0, s32 arg1);
}

extern "C" {
void enemy_copy_target_destination(void *);
void update_velocity__9TObjEneDDFPv(void *);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
void play_footsteps__14TObjEneBm5WolfFPv(u8 *arg0);
void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0);
void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0);
f32 sin_table_lookup(s32 angle);
f32 cos_table_lookup(s32 angle);
void spawn_recoil_dust__14TObjEneBm5WolfFiPv(s32 arg0, u8 *arg1);
void * copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneBm5Wolf__data_805D9DAC;
int get_flag_bit0__14TObjEneBm5WolfFPv(void* p);
void select_target__14TObjEneBm5WolfFPv(void *arg0);
void schedule_pack_reaction__14TObjEneBm5WolfFPvis(void *arg0, s32 arg1, s16 arg2);
f32 calc_death_slide_speed__14TObjEneBm5WolfFPvf(Obj_800B76E0 *arg0, f32 farg0);
s32 select_death_direction__14TObjEneBm5WolfFPvPv(Wolf_800B78F8 *s, s32 *heading);
s32 calc_lunge_aim__14TObjEneBm5WolfFPv(u8 *arg0);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_7b3d65
{
  char pad[0x18];
};

struct VObj_18_7b3d65 : VBase_18_7b3d65 {
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
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase_18_4225ac { char pad[0x18]; };

struct VObj_18_4225ac : VBase_18_4225ac {
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
};

#include "pso/enemy/TObjEneBm5Wolf.h"
struct VBase_18_8bca97 { char pad[0x18]; };

struct VObj_18_8bca97 : VBase_18_8bca97 {
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
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Arg_800B7530 { s32 kind; s32 val; s32 kind2; f32 fval; };

struct Base_800B7530 { u8 pad[0x18]; };

struct Obj_800B7530 : Base_800B7530 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(void *target, Arg_800B7530 *arg, s32, s32, s32);
    u8 pad2[0x3e0 - 0x1c]; u16 target_id;
};

struct Arg_800B74B8 { s32 kind; s32 val; s32 kind2; f32 fval; };

struct Base_800B74B8 { u8 pad[0x18]; };

struct Obj_800B74B8 : Base_800B74B8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(void *target, Arg_800B74B8 *arg, s32, s32, s32);
    u8 pad2[0x3e0 - 0x1c]; u16 target_id;
};

struct Vec_800B50CC { f32 x, y, z; };

struct Vec_800B56CC { f32 x, y, z; };

struct Node_800B6B50 { s32 f0; Node_800B6B50 *next; };

struct List_800B6B50 { Node_800B6B50 *head; u8 pad[8]; };

struct Ang_800B4AD4 { s32 x, y, z; };

struct VBase_800B4AD4 { u8 pad[0x18]; };

struct VObj_800B4AD4 : VBase_800B4AD4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
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
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void m104();
};
struct Vec_800B7018 { f32 x, y, z; };
struct Obj_800B7018 {
    u8 pad0[0x38];
    Vec_800B7018 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xB0 - 0x64];
    s32 fB0;
    u8 padB4[0xB8 - 0xB4];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x3E4 - 0xC4];
    s32 f3E4;
    u8 pad3E8[0x408 - 0x3E8];
    u32 f408;
    f32 f40C;
    u8 pad410[0x434 - 0x410];
    f32 f434;
    f32 f438;
    u8 pad43C[0x444 - 0x43C];
    Vec_800B7018 f444;
};

typedef s32 M2C_UNK;
struct Vec_800B53F0 { f32 x, y, z; };

struct Base_800B53F0 { u8 pad[0x18]; };

struct VObj_800B53F0 : Base_800B53F0 {
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
};

struct Vec_800B62AC { f32 x, y, z; };

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

struct Vec_800B4D88 { f32 x, y, z; };

struct Node_800B4D88 { s32 f0; Node_800B4D88 *next; };

struct List_800B4D88 { Node_800B4D88 *head; u8 pad[8]; };

struct VBase_18_a3e1a1 { char pad[0x18]; };

struct VObj_18_a3e1a1 : VBase_18_a3e1a1 {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
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
};

extern "C" {
void turn_pose_to_target__14TObjEneBm5WolfFv(void *);
s32 enemy_validate_retained_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
void standing_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void set_anim_state__14TObjEneBm5WolfFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D9E38;
void alerted_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void set_attack_flag__14TObjEneBm5WolfFPv(void *);
void set_anim_state__14TObjEneBm5WolfFPv(void *);
void enemy_clear_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
u8 *find_entity_by_id(u16);
void sleeping_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
s32 spawn_particle_effect(s32, s32);
void play_proximity_effect__14TObjEneBm5WolfFi(s32);
void approach_target__14TObjEneBm5WolfFPvf(void *, f32);
void turn_pose_to_target__14TObjEneBm5WolfFv(void *);
void enemy_turn_and_move_on_ground(void *, s32, f32);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
int has_move_failures__9TObjEneDDFPvi(void *, s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
extern const f32 TObjEneBm5Wolf__data_805D9DA4;
extern const f32 TObjEneBm5Wolf__data_805D9DA8;
extern const f32 TObjEneBm5Wolf__data_805D9DB0;
extern const f32 lbl_805D9DC4;
extern const f32 TObjEneBm5Wolf__data_805D9DC8;
extern const f32 TObjEneBm5Wolf__data_805D9DE0;
extern const f32 TObjEneBm5Wolf__data_805D9DF4;
extern const f32 lbl_805D9E10;
void chasing_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
f32 calc_scaled_value__15TObjBoss2TunnelFif(s32 angle, f32 speed);
#define play_footsteps__14TObjEneBm5WolfFPv ((void (*)(void *actor))&play_footsteps__14TObjEneBm5WolfFPv)
#define play_variant_sound__14TObjEneBm5WolfFPv ((s32 (*)(void *))&play_variant_sound__14TObjEneBm5WolfFPv)
#define set_state_by_timer__14TObjEneBm5WolfFi ((void (*)(void *actor))&set_state_by_timer__14TObjEneBm5WolfFi)
void approach_target__14TObjEneBm5WolfFPvf(void *, f32);
void turn_pose_to_target__14TObjEneBm5WolfFv(void *);
M2C_UNK advance_pose_turn__14TObjEneBm5WolfFPvi(void *, s32);
s32 actor_rand_int(void *actor, s32 max);
void enemy_turn_and_move_on_ground(void *, s32, f32);
f32 rand_range__9TObjEneDDFff(void *actor, f32 low, f32 high);
int has_move_failures__9TObjEneDDFPvi(void *, s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D84;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
extern const f32 TObjEneBm5Wolf__data_805D9DA8;
extern const f32 TObjEneBm5Wolf__data_805D9DBC;
extern const f32 TObjEneBm5Wolf__data_805D9DD0;
extern const f32 lbl_805D9DF8;
extern const f32 lbl_805D9E14;
extern const f32 lbl_805D9E18;
extern const f32 lbl_805D9E1C;
extern const f32 lbl_805D9E20;
extern const f32 lbl_805D9E24;
extern const f32 lbl_805D9E28;
extern const f32 lbl_805D9E2C;
extern const f32 lbl_805D9E30;
void queue_destruction__7TObjectFv(void *self);
void despawn_state__14TObjEneBm5WolfFPvi(void *self, s32 msg);
u8 *find_entity_by_id(u16);
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
void apply_mourning_zalure__14TObjEneBm5WolfFPv(Obj_800B7530 *self);
u8 *find_entity_by_id(u16);
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
void apply_mourning_jellen__14TObjEneBm5WolfFPv(Obj_800B74B8 *self);
void anchor_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void appearing_state__14TObjEneBm5WolfFPvi(Obj_800B7018 *o, s32 arg1);
void sleeping_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void empty_state__14TObjEneBm5WolfFv(void);
void alerted_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void standing_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void roaming_state__14TObjEneBm5WolfFi(u8 *arg0, s32 arg1);
void chasing_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void action__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void despawn_state__14TObjEneBm5WolfFPvi(void *self, s32 msg);
void dispatch_state__14TObjEneBm5WolfFPvUii(u8 *arg0, u32 state, s32 event);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
#define spawn_recoil_dust__14TObjEneBm5WolfFiPv ((M2C_UNK (*)(void *, void *))&spawn_recoil_dust__14TObjEneBm5WolfFiPv)
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK clear_attack_receipts(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D9DA0;
extern const f32 TObjEneBm5Wolf__data_805D9DB0;
void hurt_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 calc_scaled_value__15TObjBoss2TunnelFif(s32 angle, f32 speed);
s32 is_vec_xz_cross_negative(void *, void *);
void approach_target__14TObjEneBm5WolfFPvf(void *, f32);
void turn_pose_to_target__14TObjEneBm5WolfFv(void *);
s32 enemy_has_live_target(void *);
void enemy_turn_and_move_on_ground(void *, s32, f32);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 approach_angle_limited(int, int, int);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D9DC4;
extern const f32 TObjEneBm5Wolf__data_805D9DC8;
extern const f32 lbl_805D9DCC;
extern const f32 TObjEneBm5Wolf__data_805D9DD0;
void returning_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
void set_attack_flag__14TObjEneBm5WolfFPv(void *);
void turn_pose_to_target__14TObjEneBm5WolfFv(void *);
void *play_sound__14TObjEneBm5WolfFPv(void *);
s32 get_group_id__14TObjEneBm5WolfFPv();
s32 enemy_validate_retained_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
extern List_800B6B50 TObjEneBm5Wolf__data_80500B8C;
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
extern const f32 lbl_805D9E34;
void howling_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK draw_blob_shadow(M2C_UNK);
M2C_UNK direction_to_rotation_xz(void *, s32 *, s32 *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void advance_spawn_timer__14TObjEneBm5WolfFv(void);
extern s32 TObjEneBm5Wolf__spawn_timer;
extern s32 TObjEneBm5Wolf__data_805D5128;
extern const f32 lbl_805D9D70;
extern const f32 TObjEneBm5Wolf__data_805D9D74;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D7C;
extern const f32 TObjEneBm5Wolf__data_805D9D84;
extern const f32 lbl_805D9D88;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
extern const f32 lbl_805D9D90;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void render__14TObjEneBm5WolfFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
u32 csnVectorUnder(void *, void *, M2C_UNK);
#define get_flag_bit0__14TObjEneBm5WolfFPv ((s32 (*)(void *))&get_flag_bit0__14TObjEneBm5WolfFPv)
void play_proximity_effect__14TObjEneBm5WolfFi(s32);
#define select_target__14TObjEneBm5WolfFPv ((s32 (*)(void *))&select_target__14TObjEneBm5WolfFPv)
M2C_UNK advance_pose_turn__14TObjEneBm5WolfFPvi(void *, s32);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
u32 enemy_probe_wall_ahead(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 approach_angle_limited(int, int, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
extern const f32 lbl_805D9DB8;
extern const f32 TObjEneBm5Wolf__data_805D9DBC;
extern const f32 lbl_805D9DC0;
void repositioning_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect(s32, s32);
void play_proximity_effect__14TObjEneBm5WolfFi(s32);
void calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(void *, s32, void *, void *);
void approach_target__14TObjEneBm5WolfFPvf(void *, f32);
void turn_pose_to_target__14TObjEneBm5WolfFv(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
extern const f32 TObjEneBm5Wolf__data_805D9DB0;
extern const f32 TObjEneBm5Wolf__data_805D9DBC;
extern const f32 TObjEneBm5Wolf__data_805D9DC8;
extern const f32 TObjEneBm5Wolf__data_805D9DE0;
extern const f32 TObjEneBm5Wolf__data_805D9DF4;
void flanking_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
M2C_UNK rotate_xz_pair_by_angle(void *, void *, s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
#define schedule_pack_reaction__14TObjEneBm5WolfFPvis ((M2C_UNK (*)(void *, s32, u16))&schedule_pack_reaction__14TObjEneBm5WolfFPvis)
#define calc_death_slide_speed__14TObjEneBm5WolfFPvf ((f32 (*)(void *, void *, f32))&calc_death_slide_speed__14TObjEneBm5WolfFPvf)
#define select_death_direction__14TObjEneBm5WolfFPvPv ((s32 (*)(void *, void *))&select_death_direction__14TObjEneBm5WolfFPvPv)
M2C_UNK advance_pose_turn__14TObjEneBm5WolfFPvi(void *, s32);
void *play_sound__14TObjEneBm5WolfFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK spawn_effect_at_ground__10TObjPlayerFPvi(void *, int);
M2C_UNK spawn_dead_spot_type2__10TObjPlayerFii(void *, int);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK vec3_add_to(void *, void *);
extern List_800B4D88 TObjEneBm5Wolf__data_80500B78;
extern const f32 TObjEneBm5Wolf__data_805D9D74;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D7C;
extern const f32 TObjEneBm5Wolf__data_805D9D80;
extern const f32 lbl_805D9D94;
extern const f32 lbl_805D9D98;
extern const f32 lbl_805D9D9C;
extern const f32 lbl_805D9DA0;
extern const f32 TObjEneBm5Wolf__data_805D9DA4;
extern const f32 TObjEneBm5Wolf__data_805D9DA8;
void update_dying_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 spawn_particle_effect(s32, s32);
#define calc_lunge_aim__14TObjEneBm5WolfFPv ((s32 (*)(void *, int))&calc_lunge_aim__14TObjEneBm5WolfFPv)
void approach_target__14TObjEneBm5WolfFPvf(void *, f32);
M2C_UNK advance_pose_turn__14TObjEneBm5WolfFPvi(void *, s32);
s32 enemy_validate_retained_target(void *);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK TObjEneDD__sub_800BA318(void *, void *);
M2C_UNK TObjEneDD__sub_800BA378(void *, void *);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
extern const f32 TObjEneBm5Wolf__data_805D9D74;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
extern const f32 TObjEneBm5Wolf__data_805D9DA4;
extern const f32 TObjEneBm5Wolf__data_805D9DA8;
extern const f32 lbl_805D9DD8;
extern const f32 lbl_805D9DDC;
extern const f32 TObjEneBm5Wolf__data_805D9DE0;
extern const f32 lbl_805D9DE4;
extern const f32 TObjEneBm5Wolf__data_805D9DE8;
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
extern const f32 TObjEneBm5Wolf__data_805D9DF0;
extern const f32 TObjEneBm5Wolf__data_805D9DF4;
void update_lunge__14TObjEneBm5WolfFv(u8 *arg0, s32 arg1);
}

extern "C" {

struct VBase_800B4820 { char pad[0x18]; };
struct VEne_800B4820 : VBase_800B4820 {
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
struct VBase2_800B4820 { char pad[0x18]; };
struct VObj2_800B4820 : VBase2_800B4820 { virtual void *m0(); virtual void *m1(); virtual void *m2(); virtual void *m3(); virtual void *m4(); virtual void *m5(); virtual void *m6(); virtual void *m7(); virtual void *m8(); virtual void *m9(); virtual void *m10(); virtual void *m11(); virtual void *m12(); virtual void *m13(); virtual void *m14(); virtual void *m15(); virtual void *m16(); virtual void *m17(); virtual void *m18(); virtual void *m19(); virtual void *m20(); virtual void *m21(); virtual void *m22(); virtual void *m23(); virtual void *m24(); virtual void *m25(); virtual void *m26(); virtual void *m27(); virtual void *m28(); virtual void *m29(); virtual void *m30(); virtual void *m31(); virtual void *m32(); virtual void *m33(); virtual void *m34(); virtual void *m35(); virtual void *m36(); virtual void *m37(); virtual void *m38(); virtual void *m39(); virtual void *m40(); virtual void *m41(); virtual void *m42(); virtual void *m43(); virtual void *m44(); virtual void *m45(); virtual void *m46(); virtual void *m47(); virtual void *m48(); virtual void *m49(); virtual void *m50(); virtual void *m51(); virtual void *m52(); virtual void *m53(); virtual void *m54(); virtual void *m55(); virtual void *m56(); virtual void *m57(); virtual void *m58(); virtual void *m59(); virtual void *m60(); virtual void *m61(); virtual void *m62(); virtual void *m63(); virtual void *m64(); virtual void *m65(); virtual void *m66(); virtual void *m67(); virtual void *m68(); virtual void *m69(); virtual void *m70(); virtual void *m71(); virtual void *m72(); virtual void *m73(); virtual void *m74(); virtual void *m75(); virtual void *m76(); virtual void *m77(); virtual void *m78(); virtual void *m79(); virtual void *m80(); virtual void *m81(); virtual void *m82(); virtual void *m83(); virtual void *m84(); virtual void *m85(); virtual void *m86(); virtual void *m87(); virtual void *m88(); virtual void *m89(); virtual void *m90(); virtual void *m91(); virtual void *m92(); virtual M2C_UNK m93(); };

void render_shadow__17TObjEneBm3FlyNestFv(void);
void empty_state__14TObjEneBm5WolfFv(void);
void anchor_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void action__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void advance_spawn_timer__14TObjEneBm5WolfFv(void);
void update_state__14TObjEneBm5WolfFPv(void *arg0);
M2C_UNK advance_pose_turn__14TObjEneBm5WolfFPvi(void *, s32);
M2C_UNK select_subtype__14TObjEneBm5WolfFPv(void *);
u32 find_pack_leader__14TObjEneBm5WolfFi(s32);
M2C_UNK update_default__14TObjEneBm5WolfFi(void *);
M2C_UNK apply_global_to_position__14TObjEneBm5WolfFi(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *fn_800B8B00(u32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 get_target_info__9TObjEneDDFPv();
s32 objInBand__FP7GameObjf(void *, f32);
s16 obj_getField1c();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_collision_center__14TObjEneBm5WolfFPv(void *);

void render_shadow__17TObjEneBm3FlyNestFv(void) {  }
struct VBase_18_26a62c { char pad[0x18]; };
struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_800B4824 { f32 x, y, z; };
struct Ent16_800B4824 { s32 f0; s32 f4; s32 f8; s32 fC; };
struct Ent8_800B4824 { s32 f0; u8 *f4; };

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_pack_leader__14TObjEneBm5WolfFi(s32);
M2C_UNK update_player_state__9TObjEneDDFPv(void *, int, int);
s32 get_target_info__9TObjEneDDFPv();
s32 TObjEneDD__sub_800BB878(int, int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjMapWarp__sub_80141CB0(void *, void *, int, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK debug_printf_at(s32, const char *, ...);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_model_motion(int, u8 *, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern char lbl_8043B584[];
extern char lbl_8043B590[];
extern char lbl_8043B59C[];
extern const f32 lbl_805D9D70;
extern const f32 TObjEneBm5Wolf__data_805D9D74;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D7C;
extern const f32 TObjEneBm5Wolf__data_805D9D80;

#pragma push
#pragma opt_common_subs off
void render_debug__14TObjEneBm5WolfFPv(u8 *arg0) {
    f32 var_f31;
    s32 idx;
    u32 n;
    u8 *temp_r30;
    u32 temp_r3;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        debug_printf_at(TObjEneDD__sub_800BB878(0, 0), lbl_8043B584, M2C_FIELD(arg0, s32 *, 0x3DC));
        if (M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
            debug_printf_at(TObjEneDD__sub_800BB878(0, 1), lbl_8043B590);
        } else {
            debug_printf_at(TObjEneDD__sub_800BB878(0, 1), lbl_8043B59C);
        }
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805D9D70, TObjEneBm5Wolf__data_805D9D74) != 0) {
        update_player_state__9TObjEneDDFPv((void *) (arg0), 0, 0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        idx = (s32) M2C_FIELD(arg0, f32 *, 0x360);
        if (idx < 0) {
            idx = 0;
        } else if (idx >= 0x13) {
            idx = 0x12;
        }
        temp_r30 = M2C_FIELD(arg0, Ent8_800B4824 **, 0xDC)[M2C_FIELD(arg0, Ent16_800B4824 **, 0xD8)[idx].f4].f4;
        var_f31 = M2C_FIELD(arg0, f32 *, 0x364);
        if (var_f31 < TObjEneBm5Wolf__data_805D9D78) {
            var_f31 = TObjEneBm5Wolf__data_805D9D78;
        } else {
            n = M2C_FIELD(temp_r30, u32 *, 4);
            if (var_f31 > (f32) (n - 1)) {
                var_f31 = (f32) n;
            }
        }
        translate_matrix(0, TObjEneBm5Wolf__data_805D9D78, TObjEneBm5Wolf__data_805D9D78, TObjEneBm5Wolf__data_805D9D7C);
        toggle_particle_effect__10TObjPlayerFv();
        set_global_flag__10TObjPlayerFv();
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), temp_r30, var_f31);
        clear_global_state__10TObjPlayerFv();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
    temp_r3 = find_pack_leader__14TObjEneBm5WolfFi(M2C_FIELD(arg0, s32 *, 0x3DC));
    if (temp_r3 != 0) {
        TObjMapWarp__sub_80141CB0((void *) (arg0 + 0x2FC), (void *) (temp_r3 + 0x2FC), 0xFFC0C0C0, 0xFF6060FF);
        return;
    }
    {
    Vec_800B4824 v;
    VecCopy__FP3VecPC3Vec(&v, (void *) (arg0 + 0x2FC));
    v.y += TObjEneBm5Wolf__data_805D9D80;
    TObjMapWarp__sub_80141CB0((void *) (arg0 + 0x2FC), &v, 0xFFC0C0C0, 0xFF6060FF);
    }
}
#pragma pop

void update_state__14TObjEneBm5WolfFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x3D8);
        select_subtype__14TObjEneBm5WolfFPv(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x3D8)) {
            if (temp_r31 != 0) {
                update_default__14TObjEneBm5WolfFi(arg0);
            } else {
                apply_global_to_position__14TObjEneBm5WolfFi(arg0);
            }
        }
        update_collision_center__14TObjEneBm5WolfFPv(arg0);
    }
}

extern s32 TObjEneBm5Wolf__spawn_timer;
extern s32 TObjEneBm5Wolf__data_805D5128;

void render__14TObjEneBm5WolfFPv(u8 *arg0) {
    Ang_800B4AD4 rot;
    s32 var_r31;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_800B4AD4 *)arg0)->m104();
        return;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x408) & 2) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0x11)) {
        if (is_main_phase_15__9TObjEneDDFv() != 0) {
            var_r31 = ((VObj_800B4AD4 *)arg0)->m9(lbl_805D9E88, lbl_805D9E84, TObjEneBm5Wolf__data_805D9D74);
        } else if (((VObj_800B4AD4 *)arg0)->m8(lbl_805D9D70, TObjEneBm5Wolf__data_805D9D74) != 0) {
            var_r31 = 1;
        } else {
            var_r31 = 0;
        }
        if (var_r31 != 0) {
            if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0x10) {
                direction_to_rotation_xz(arg0 + 0x248, &rot.x, &rot.z);
                push_matrix();
                post_translate_matrix(arg0 + 0x38);
                translate_matrix(0, TObjEneBm5Wolf__data_805D9D78, TObjEneBm5Wolf__data_805D9D84, TObjEneBm5Wolf__data_805D9D78);
                rotate_matrix_z(0, rot.z);
                rotate_matrix_x(0, rot.x);
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                translate_matrix(0, TObjEneBm5Wolf__data_805D9D78, TObjEneBm5Wolf__data_805D9D78, TObjEneBm5Wolf__data_805D9D7C);
                scale_matrix(0, lbl_805D9D88, TObjEneBm5Wolf__data_805D9D8C, lbl_805D9D90);
                rotate_matrix_x(0, -0x4000);
                draw_blob_shadow(0);
                pop_matrix();
            }
            update_secondary_light__9TObjEneDDFPv(arg0);
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            translate_matrix(0, TObjEneBm5Wolf__data_805D9D78, TObjEneBm5Wolf__data_805D9D78, TObjEneBm5Wolf__data_805D9D7C);
            if (M2C_FIELD(arg0, s32 *, 0x408) & 4) {
                translate_matrix(0, TObjEneBm5Wolf__data_805D9D78, M2C_FIELD(arg0, f32 *, 0x40C), TObjEneBm5Wolf__data_805D9D78);
            }
            TObjEneBm5Wolf__spawn_timer = 0;
            TObjEneBm5Wolf__data_805D5128 = -((s32) M2C_FIELD(arg0, s32 *, 0x3E4) / 2);
            set_global_state__16TObjEneRe7BeruraFi((void *)advance_spawn_timer__14TObjEneBm5WolfFv);
            clear_global_flag_400__9TObjEneDDFv();
            toggle_particle_effect__10TObjPlayerFv();
            if (var_r31 == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
            set_global_state__16TObjEneRe7BeruraFi(NULL);
            pop_matrix();
            update_primary_light__9TObjEneDDFPv(arg0);
        }
        end_effect_render__13TParticleCtrlFv();
    }
}

void advance_spawn_timer__14TObjEneBm5WolfFv(void) {
    if (((s32) TObjEneBm5Wolf__spawn_timer >= 0x16) && ((s32) TObjEneBm5Wolf__spawn_timer < 0x18)) {
        rotate_matrix_y(0, TObjEneBm5Wolf__data_805D5128);
    }
    TObjEneBm5Wolf__spawn_timer += 1;
}

extern const f32 TObjEneBm5Wolf__data_805D9DB4;

void despawn_state__14TObjEneBm5WolfFPvi(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        queue_destruction__7TObjectFv(self);
        break;
    }
}

#define F(T, o) M2C_FIELD(arg0, T *, o)
void update_dying_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    s32 *tgt;
    Node_800B4D88 *n;
    u8 *e;
    f32 k;
    Vec_800B4D88 pos;
    Vec_800B4D88 vel;
    f32 c;
    tgt = (s32 *)(arg0 + 0x42C);
    switch (arg1) {
    case 4:
        ((VObj_18_b7c757 *)(arg0))->m94();
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD1D), arg0 + 0x38, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x300);
        if (select_death_direction__14TObjEneBm5WolfFPvPv(arg0, tgt) == 0) {
            F(s16, 0xB8) = 0xF;
        } else {
            F(s16, 0xB8) = 0xE;
        }
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF1);
        F(s32, 0x41C) = 0;
        F(f32, 0x434) = calc_death_slide_speed__14TObjEneBm5WolfFPvf(arg0, F(u8 *, 0xD8), M2C_FIELD(F(u8 *, 0xD8), f32 *, 0x98));
        F(f32, 0x37C) = F(f32, 0x43C) = TObjEneBm5Wolf__data_805D9D78;
        if (F(s32, 0x3D8) != 0) {
            k = TObjEneBm5Wolf__data_805D9D80;
            for (n = TObjEneBm5Wolf__data_80500B78.head; n != NULL; n = n->next) {
                e = (u8 *)play_sound__14TObjEneBm5WolfFPv(n);
                if (e != NULL && M2C_FIELD(e, s32 *, 0x3DC) == F(s32, 0x3DC)) {
                    schedule_pack_reaction__14TObjEneBm5WolfFPvis(e, (s32)(k * calc_boss4_scale__10TObjPlayerFi((s32)arg0)) + 0x14, F(u16, 0x2D4));
                }
            }
        }
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (F(s32, 0x41C) == 2) {
            transition_enemy_state(arg0, 0x11);
        }
        break;
    case 1:
        break;
    case 0:
        switch (F(s32, 0x41C)) {
        case 0:
            advance_animation_playback(arg0);
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFPv)(arg0) != 0) {
                F(s32, 0x41C) = 1;
                pos.y = TObjEneBm5Wolf__data_805D9D78;
                if (F(s16, 0xB8) == 0xE) {
                    pos.x = lbl_805D9D94;
                    pos.z = TObjEneBm5Wolf__data_805D9D7C;
                } else {
                    pos.x = lbl_805D9D98;
                    pos.z = TObjEneBm5Wolf__data_805D9D7C;
                }
                rotate_xz_pair_by_angle(&pos.x, &pos.z, F(s32, 0x60));
                vec3_add_to(&pos, arg0 + 0x38);
                spawn_dead_spot_type2__10TObjPlayerFii(&pos, 0x32);
                spawn_effect_at_ground__10TObjPlayerFPvi(&pos, 0x46);
            }
            F(s32, 0x60) = approach_angle_limited(F(s32, 0x60), *tgt, 0x300);
            F(s32, 0x60) = (s16)F(s32, 0x60);
            if (F(f32, 0x37C) < lbl_805D9D9C) {
                F(f32, 0x37C) = F(f32, 0x37C) + F(f32, 0x434);
            }
            VecCopy__FP3VecPC3Vec(&vel, arg0 + 0x308);
            c = clamp_velocity__15TObjBoss2TunnelFPv(&vel);
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, vel.x, vel.z, c);
            if (objInBand__FP7GameObjf(arg0, lbl_805D9DA0) != 0) {
                spawn_recoil_dust__14TObjEneBm5WolfFiPv(arg0, &vel);
            }
            F(f32, 0x308) = F(f32, 0x308) * TObjEneBm5Wolf__data_805D9DA4;
            F(f32, 0x310) = F(f32, 0x310) * TObjEneBm5Wolf__data_805D9DA4;
            advance_pose_turn__14TObjEneBm5WolfFPvi(arg0, F(s32, 0x60));
            ((VObj_18_b7c757 *)(arg0))->m86();
            break;
        case 1:
            F(f32, 0x3C) = F(f32, 0x3C) - TObjEneBm5Wolf__data_805D9DA8;
            F(f32, 0x43C) = F(f32, 0x43C) + TObjEneBm5Wolf__data_805D9DA8;
            if (F(f32, 0x43C) > TObjEneBm5Wolf__data_805D9D74) {
                F(s32, 0x41C) = 2;
            }
            break;
        }
        break;
    case 5:
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

void hurt_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_18_4225ac *)(arg0))->m94();
        TBoss8Dragon__sub_800BB7D4((void *) (arg0), 0xF1);
        M2C_FIELD(arg0, s32 *, 0x420) = 0;
        M2C_FIELD(arg0, s32 *, 0x42C) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        if (M2C_FIELD(arg0, s16 *, 0x33E) - M2C_FIELD(arg0, s16 *, 0x32C) < 0x14) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), 0x3AB1B), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x500);
        }
        set_active__9TObjEneDDFPv((void *) (arg0));
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            switch (M2C_FIELD(arg0, s32 *, 0x378)) {
            case 11:
                transition_enemy_state((void *) arg0, 0xD);
                break;
            case 2:
                transition_enemy_state((void *) arg0, 7);
                break;
            default:
                transition_enemy_state((void *) arg0, M2C_FIELD(arg0, s32 *, 0x378));
                break;
            }
        }
        break;
    case 0: {
        Vec_800B50CC v;
        advance_animation_playback((void *) arg0);
        VecCopy__FP3VecPC3Vec(&v, (void *) (arg0 + 0x308));
        {
        f32 c = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        move_with_wall_slide_on_ground__9TObjEneDDFPvfff((void *) (arg0), v.x, v.z, c);
        }
        if (M2C_FIELD(arg0, s32 *, 0x41C) == 0) {
            M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm5Wolf__data_805D9DAC;
            M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm5Wolf__data_805D9DAC;
        } else {
            M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm5Wolf__data_805D9DB0;
            M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm5Wolf__data_805D9DB0;
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x42C), 0x300);
            M2C_FIELD(arg0, s32 *, 0x60) = (s16) M2C_FIELD(arg0, s32 *, 0x60);
            if (objInBand__FP7GameObjf((void *) (arg0), lbl_805D9DA0) != 0) {
                spawn_recoil_dust__14TObjEneBm5WolfFiPv((void *) (arg0), &v);
            }
        }
        ((VObj_18_4225ac *)(arg0))->m87();
        break;
    }
    case 5:
        clear_attack_receipts((void *) arg0);
        clear_field_388__9TObjEneDDFPv((void *) (arg0));
        break;
    }
}

void action__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VEne_800B4820 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 7);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        find_pack_leader__14TObjEneBm5WolfFi((s32)(M2C_FIELD(arg0, s32 *, 0x3DC)));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state(arg0, 7);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback((void *)(arg0));
        advance_pose_turn__14TObjEneBm5WolfFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DB4) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA1A), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x100);
        }
        M2C_FIELD(arg0, s32 *, 0x41C) = (s32) (M2C_FIELD(arg0, s32 *, 0x41C) + 1);
        if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x1E) {
            apply_mourning_zalure__14TObjEneBm5WolfFPv((Obj_800B7530 *)(arg0));
        } else if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x28) {
            apply_mourning_jellen__14TObjEneBm5WolfFPv((Obj_800B74B8 *)(arg0));
        }
        ((VEne_800B4820 *)arg0)->m87();
        break;
    }
}

void repositioning_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0xD);
        ((VObj_800B53F0 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        M2C_FIELD(arg0, s32 *, 0x42C) = 0;
        M2C_FIELD(arg0, s32 *, 0x420) = 0;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x41C) == 2) {
            if (M2C_FIELD(arg0, u32 *, 0x390) != 0U) {
                transition_enemy_state(arg0, 0xA);
            } else {
                transition_enemy_state(arg0, 7);
            }
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x41C)) {
        case 0: {
            f32 dx;
            f32 dz;
            M2C_FIELD(arg0, s32 *, 0x42C) = ((M2C_FIELD(arg0, s32 *, 0x420) >> 1) << 0xC) + 0x1800;
            if (M2C_FIELD(arg0, s32 *, 0x420) & 1) {
                M2C_FIELD(arg0, s32 *, 0x42C) = -M2C_FIELD(arg0, s32 *, 0x42C);
            }
            if (get_flag_bit0__14TObjEneBm5WolfFPv(arg0) == 0) {
                M2C_FIELD(arg0, s32 *, 0x42C) = -M2C_FIELD(arg0, s32 *, 0x42C);
            }
            M2C_FIELD(arg0, s32 *, 0x42C) += M2C_FIELD(arg0, s32 *, 0x60);
            M2C_FIELD(arg0, s32 *, 0x420)++;
            if (M2C_FIELD(arg0, s32 *, 0x420) > 8) {
                M2C_FIELD(arg0, s32 *, 0x41C) = 2;
            }
            dx = lbl_805D9DB8 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x42C));
            dz = lbl_805D9DB8 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x42C));
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), f32 *, 0x38) = M2C_FIELD(arg0, f32 *, 0x38) + dx;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), f32 *, 0x3C) = M2C_FIELD(arg0, f32 *, 0x3C);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), f32 *, 0x40) = M2C_FIELD(arg0, f32 *, 0x40) + dz;
            update_collisions__10TObjPlayerFPv(M2C_FIELD(arg0, void **, 0x410));
            if (!(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), void **, 0xA4), s32 *, 0x18) & 0x380000)) {
                dx *= TObjEneBm5Wolf__data_805D9DBC;
                dz *= TObjEneBm5Wolf__data_805D9DBC;
                if (enemy_probe_wall_ahead(arg0, dx, dz, TObjEneBm5Wolf__data_805D9D8C) == 0U) {
                    Vec_800B53F0 v;
                    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x2FC);
                    v.x += dx;
                    v.z += dz;
                    if (csnVectorUnder(&v, arg0 + 0x120, 0x15) != 0U) {
                        M2C_FIELD(arg0, s32 *, 0x41C) = 1;
                        M2C_FIELD(arg0, s16 *, 0xB8) = 0x12;
                        M2C_FIELD(arg0, f32 *, 0x3A0) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x42C));
                        M2C_FIELD(arg0, f32 *, 0x3A4) = TObjEneBm5Wolf__data_805D9D78;
                        M2C_FIELD(arg0, f32 *, 0x3A8) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x42C));
                    }
                }
            }
            break;
        }
        case 1:
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFPv)(arg0) != 0) {
                select_target__14TObjEneBm5WolfFPv(arg0);
                M2C_FIELD(arg0, s32 *, 0x41C) = 2;
            }
            play_proximity_effect__14TObjEneBm5WolfFi((s32)arg0);
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), lbl_805D9DC0);
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x42C), 0xF00);
            advance_pose_turn__14TObjEneBm5WolfFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x42C));
            ((VObj_800B53F0 *)arg0)->m87();
            break;
        }
        break;
    }
}

#pragma push
#pragma fp_contract on
void returning_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    Vec_800B56CC *home = (Vec_800B56CC *)(arg0 + 0x450);
    f32 lim = M2C_FIELD(arg0, f32 *, 0x434);
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi((void *) arg0, 0xC);
        ((VObj_18_4225ac *)(arg0))->m94();
        M2C_FIELD(arg0, f32 *, 0x400) = lbl_805D9DC4;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        VecCopy__FP3VecPC3Vec(home, (void *) (arg0 + 0x38));
        calc_scaled_value__15TObjBoss2TunnelFif((s32)(0x200), lbl_805D9DC4);
        M2C_FIELD(arg0, s32 *, 0x430) = M2C_FIELD(arg0, s32 *, 0x60);
        if (enemy_has_live_target((void *) (arg0)) != 0) {
            Vec_800B56CC a;
            Vec_800B56CC d;
            u8 *t;
            a.x = sin_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x60)));
            a.z = cos_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x60)));
            t = M2C_FIELD(arg0, u8 **, 0x390);
            d.x = M2C_FIELD(t, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x38);
            d.z = M2C_FIELD(t, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40);
            if (is_vec_xz_cross_negative(&a, &d) != 0) {
                M2C_FIELD(arg0, s32 *, 0x42C) = 0x5000;
            } else {
                M2C_FIELD(arg0, s32 *, 0x42C) = -0x5000;
            }
        } else if (((f32 (*)(void *)) calc_boss4_scale__10TObjPlayerFi)((void *) (arg0)) < TObjEneBm5Wolf__data_805D9DAC) {
            M2C_FIELD(arg0, s32 *, 0x42C) = 0x5000;
        } else {
            M2C_FIELD(arg0, s32 *, 0x42C) = -0x5000;
        }
        M2C_FIELD(arg0, s32 *, 0x42C) = M2C_FIELD(arg0, s32 *, 0x42C) + M2C_FIELD(arg0, s32 *, 0x430);
        break;
    case 3:
        if (M2C_FIELD(arg0, u8 **, 0x390) == NULL || M2C_FIELD(arg0, s32 *, 0x41C) > 0x96) {
            transition_enemy_state((void *) (arg0), 7);
        } else if (M2C_FIELD(arg0, f32 *, 0x3AC) < lim) {
            transition_enemy_state((void *) (arg0), 0xA);
        }
        break;
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x41C)++;
        advance_animation_playback((void *) arg0);
        if (update_death_check__14TObjEneEpsilonFPv((void *) (arg0)) != 0) {
            play_footsteps__14TObjEneBm5WolfFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x42C) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x42C), M2C_FIELD(arg0, s32 *, 0x430), 0x100);
            M2C_FIELD(arg0, f32 *, 0x394) = TObjEneBm5Wolf__data_805D9DC8 * sin_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x42C))) + home->x;
            M2C_FIELD(arg0, f32 *, 0x39C) = TObjEneBm5Wolf__data_805D9DC8 * cos_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x42C))) + home->z;
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            approach_target__14TObjEneBm5WolfFPvf((void *) (arg0), lbl_805D9DCC);
            M2C_FIELD(arg0, f32 *, 0xC8) = TObjEneBm5Wolf__data_805D9DD0 * M2C_FIELD(arg0, f32 *, 0x404);
            enemy_turn_and_move_on_ground((void *) (arg0), 0x500, M2C_FIELD(arg0, f32 *, 0x404));
            turn_pose_to_target__14TObjEneBm5WolfFv((void *) (arg0));
            ((VObj_18_4225ac *)(arg0))->m87();
        }
        break;
    }
}
#pragma pop

__declspec(section ".sdata2") extern const f32 lbl_805D9D70 = 400.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9D74 = 20.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9D78 = 0.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9D7C = -10.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9D80 = 50.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9D84 = 0.30000001192092896f;
__declspec(section ".sdata2") extern const f32 lbl_805D9D88 = 1.2000000476837158f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9D8C = 1.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9D90 = 3.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9D94 = 12.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9D98 = -12.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9D9C = 28.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DA0 = 22.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DA4 = 0.800000011920929f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DA8 = 0.10000000149011612f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DAC = 0.5f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DB0 = 0.8999999761581421f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DB4 = 10.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DB8 = 16.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DBC = 2.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DC0 = 1.7999999523162842f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DC4 = 1.600000023841858f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DC8 = 90.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DCC = 0.20000000298023224f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DD0 = 1.100000023841858f;
#define lbl_805D9D70 (*(f32 *)&lbl_805D9D70)
#define TObjEneBm5Wolf__data_805D9D74 (*(f32 *)&TObjEneBm5Wolf__data_805D9D74)
#define TObjEneBm5Wolf__data_805D9D78 (*(f32 *)&TObjEneBm5Wolf__data_805D9D78)
#define TObjEneBm5Wolf__data_805D9D7C (*(f32 *)&TObjEneBm5Wolf__data_805D9D7C)
#define TObjEneBm5Wolf__data_805D9D80 (*(f32 *)&TObjEneBm5Wolf__data_805D9D80)
#define TObjEneBm5Wolf__data_805D9D84 (*(f32 *)&TObjEneBm5Wolf__data_805D9D84)
#define lbl_805D9D88 (*(f32 *)&lbl_805D9D88)
#define TObjEneBm5Wolf__data_805D9D8C (*(f32 *)&TObjEneBm5Wolf__data_805D9D8C)
#define lbl_805D9D90 (*(f32 *)&lbl_805D9D90)
#define lbl_805D9D94 (*(f32 *)&lbl_805D9D94)
#define lbl_805D9D98 (*(f32 *)&lbl_805D9D98)
#define lbl_805D9D9C (*(f32 *)&lbl_805D9D9C)
#define lbl_805D9DA0 (*(f32 *)&lbl_805D9DA0)
#define TObjEneBm5Wolf__data_805D9DA4 (*(f32 *)&TObjEneBm5Wolf__data_805D9DA4)
#define TObjEneBm5Wolf__data_805D9DA8 (*(f32 *)&TObjEneBm5Wolf__data_805D9DA8)
#define TObjEneBm5Wolf__data_805D9DAC (*(f32 *)&TObjEneBm5Wolf__data_805D9DAC)
#define TObjEneBm5Wolf__data_805D9DB0 (*(f32 *)&TObjEneBm5Wolf__data_805D9DB0)
#define TObjEneBm5Wolf__data_805D9DB4 (*(f32 *)&TObjEneBm5Wolf__data_805D9DB4)
#define lbl_805D9DB8 (*(f32 *)&lbl_805D9DB8)
#define TObjEneBm5Wolf__data_805D9DBC (*(f32 *)&TObjEneBm5Wolf__data_805D9DBC)
#define lbl_805D9DC0 (*(f32 *)&lbl_805D9DC0)
#define lbl_805D9DC4 (*(f32 *)&lbl_805D9DC4)
#define TObjEneBm5Wolf__data_805D9DC8 (*(f32 *)&TObjEneBm5Wolf__data_805D9DC8)
#define lbl_805D9DCC (*(f32 *)&lbl_805D9DCC)
#define TObjEneBm5Wolf__data_805D9DD0 (*(f32 *)&TObjEneBm5Wolf__data_805D9DD0)
#pragma push
#pragma fp_contract on
void update_lunge__14TObjEneBm5WolfFv(u8 *arg0, s32 arg1) {
    f32 temp_f2;
    f32 temp_f3;
    s32 temp_r0;
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 0xD);
        ((VObj_18_a3e1a1 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) & 0xFFFFFFFD);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x408) | 4;
        M2C_FIELD(arg0, s32 *, 0x408) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        M2C_FIELD(arg0, s32 *, 0x420) = 0;
        M2C_FIELD(arg0, s32 *, 0x42C) = calc_lunge_aim__14TObjEneBm5WolfFPv((void *) (arg0), (int) (temp_r4));
        M2C_FIELD(arg0, s32 *, 0x430) = 0;
        if (M2C_FIELD(arg0, f32 *, 0x3AC) > 40.0f) {
            M2C_FIELD(arg0, f32 *, 0x3AC) = 40.0f;
        }
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x3AC) / lbl_805D9DD8;
        M2C_FIELD(arg0, f32 *, 0x400) = temp_f3;
        M2C_FIELD(arg0, f32 *, 0x404) = temp_f3;
        M2C_FIELD(arg0, s32 *, 0x468) = 0;
        M2C_FIELD(arg0, f32 *, 0x40C) = (f32) TObjEneBm5Wolf__data_805D9D78;
        M2C_FIELD(arg0, f32 *, 0x434) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x43C) = (f32) TObjEneBm5Wolf__data_805D9D74;
        M2C_FIELD(arg0, f32 *, 0x438) = (f32) lbl_805D9DDC;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x41C) == 2) {
            transition_enemy_state(arg0, 0xD);
        }
        break;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x41C);
        switch (temp_r0) {
        case 0:
            advance_animation_playback(arg0);
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFPv)((void *) (arg0)) != 0) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x468) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x41C) = 2;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x41C) = 1;
                    M2C_FIELD(arg0, s32 *, 0x420) = 0;
                }
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneBm5Wolf__data_805D9DE0)) != 0) {
                spawn_particle_effect((s32) (arg0 + 0x38), 0xF3);
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9DE4)) != 0) {
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3E420)), (void *) (arg0 + 0x38), 0, 0);
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneBm5Wolf__data_805D9DE8)) != 0) {
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A821)), (void *) (arg0 + 0x38), 0, 0);
                play_effect_if_v2__10TObjPlayerFi((int) (-0x500));
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneBm5Wolf__data_805D9D74)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x468) = 0;
                if (enemy_validate_retained_target((void *) (arg0)) != 0) {
                    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                    if (((VObj_18_a3e1a1 *)(temp_r3))->m18(arg0, TObjEneBm5Wolf__data_805D9D8C) != 0) {
                        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                        ((VObj_18_a3e1a1 *)(temp_r3_2))->m20(arg0, TObjEneBm5Wolf__data_805D9D8C);
                        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                        ((VObj_18_a3e1a1 *)(temp_r3_3))->m23(arg0, TObjEneBm5Wolf__data_805D9DEC);
                        M2C_FIELD(arg0, s32 *, 0x468) = 1;
                        if ((check_v2_mode__9TObjEneDDFv() != 0) && (calc_boss4_scale__10TObjPlayerFi((s32) (arg0)) <= TObjEneBm5Wolf__data_805D9DA8)) {
                            if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
                                TObjEneDD__sub_800BA378((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x390)));
                            } else {
                                TObjEneDD__sub_800BA318((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x390)));
                            }
                        }
                    }
                }
            }
            approach_target__14TObjEneBm5WolfFPvf((void *) (arg0), (f32) (TObjEneBm5Wolf__data_805D9DA8));
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x42C)), (int) (0x1000));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (s16) M2C_FIELD(arg0, s32 *, 0x60);
            advance_pose_turn__14TObjEneBm5WolfFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            if (M2C_FIELD(arg0, f32 *, 0xC0) <= TObjEneBm5Wolf__data_805D9DF0) {
                move_with_wall_slide_on_ground__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (M2C_FIELD(arg0, f32 *, 0x404)));
                temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0) - TObjEneBm5Wolf__data_805D9DF4;
                M2C_FIELD(arg0, f32 *, 0x40C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x434) + ((M2C_FIELD(arg0, f32 *, 0x438) * (temp_f2 * temp_f2)) + TObjEneBm5Wolf__data_805D9D74)) - M2C_FIELD(arg0, f32 *, 0x3C));
            } else {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x468) == 0) {
                    M2C_FIELD(arg0, f32 *, 0x404) = (f32) (M2C_FIELD(arg0, f32 *, 0x404) * TObjEneBm5Wolf__data_805D9DA4);
                    move_with_wall_slide_on_ground__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (M2C_FIELD(arg0, f32 *, 0x404)));
                }
                M2C_FIELD(arg0, f32 *, 0x40C) = (f32) TObjEneBm5Wolf__data_805D9D78;
            }
            break;
        case 1:
            advance_animation_playback(arg0);
            M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x420) >= 0xA) {
                M2C_FIELD(arg0, s32 *, 0x41C) = 2;
            }
            advance_pose_turn__14TObjEneBm5WolfFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x468) == 0) {
                M2C_FIELD(arg0, f32 *, 0x404) = (f32) (M2C_FIELD(arg0, f32 *, 0x404) * TObjEneBm5Wolf__data_805D9DA4);
                move_with_wall_slide_on_ground__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (M2C_FIELD(arg0, f32 *, 0x404)));
            }
            break;
        }
        ((VObj_18_a3e1a1 *)(arg0))->m87();
        return;
    case 5:
        M2C_FIELD(arg0, f32 *, 0x40C) = (f32) TObjEneBm5Wolf__data_805D9D78;
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void circling_state__14TObjEneBm5WolfFv(u8 *arg0, s32 arg1) {
    Vec_800B5D4C *b;
    Wolf_800B5D4C *self = (Wolf_800B5D4C *)arg0;
    Vec_800B5D4C *a;
    f32 vx;
    f32 vz;
    a = &self->f444;
    b = &self->f450;
    switch (arg1) {
    case 4:
        self->fB8 = 1;
        set_field_378__9TObjEneDDFPvi(self, 10);
        ((VObj_18_4225ac *)self)->m94();
        self->f400 = lbl_805D9DF8;
        self->f41C = 0;
        self->f420 = 0;
        self->f424 = 0;
        self->f428 = 0;
        self->f42C = 0;
        self->f434 = TObjEneBm5Wolf__data_805D9D78;
        self->f438 = TObjEneBm5Wolf__data_805D9D78;
        a->x = TObjEneBm5Wolf__data_805D9D78;
        a->y = TObjEneBm5Wolf__data_805D9D78;
        a->z = TObjEneBm5Wolf__data_805D9D78;
        b->x = TObjEneBm5Wolf__data_805D9D78;
        b->y = TObjEneBm5Wolf__data_805D9D78;
        b->z = TObjEneBm5Wolf__data_805D9D78;
        set_active__9TObjEneDDFPv(self);
        break;
    case 3:
        if (self->target == NULL) {
            transition_enemy_state(self, 7);
            break;
        }
        if (self->f41C > 450) {
            self->f41C = 0;
            if (((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)() < TObjEneBm5Wolf__data_805D9DAC) {
                transition_enemy_state(self, 11);
            }
        } else if (self->f41C > 45) {
            f32 dz = self->pos.z - self->target->pos.z;
            f32 dx = self->pos.x - self->target->pos.x;
            f32 d = dx * dx + dz * dz;
            if (d >= lbl_805D9DFC) {
                ((void (*)(void *))set_state_by_timer__14TObjEneBm5WolfFi)(self);
            } else if (d < lbl_805D9E00) {
                transition_enemy_state(self, 11);
            } else {
                f32 c;
                vx = sin_table_lookup(self->target->angle);
                c = cos_table_lookup(self->target->angle);
                vz = vx * b->x + c * b->z;
                if (vz < cos_table_lookup(0x6AAA)) {
                    transition_enemy_state(self, 11);
                }
            }
        }
        break;
    case 0:
        advance_animation_playback(self);
        if (update_death_check__14TObjEneEpsilonFPv(self) != 0) {
            if (self->f424 == 0) {
                Vec_800B5D4C fwd;
                Vec_800B5D4C to;
                self->f424 = 1;
                VecCopy__FP3VecPC3Vec(a, &self->target->pos);
                self->f434 = calc_circle_offset__14TObjEneBm5WolfFPvPvPv((Obj_800B79E0 *)self, (Vec_800B79E0 *)a, (Vec_800B79E0 *)b);
                self->f438 = rand_range__9TObjEneDDFff(self, TObjEneBm5Wolf__data_805D9D80, lbl_805D9E04);
                fwd.x = sin_table_lookup(self->angle);
                fwd.y = TObjEneBm5Wolf__data_805D9D78;
                fwd.z = cos_table_lookup(self->angle);
                to.x = self->target->pos.x - self->pos.x;
                to.y = TObjEneBm5Wolf__data_805D9D78;
                to.z = self->target->pos.z - self->pos.z;
                if (is_vec_xz_cross_negative(&fwd, &to) != 0) {
                    self->f42C = -1;
                } else {
                    self->f42C = 1;
                }
            }
            self->f41C++;
            play_footsteps__14TObjEneBm5WolfFPv((u8 *)self);
            if (self->f428 > 0) {
                self->f428--;
                if (self->f42C > 0) {
                    self->f434 -= TObjEneBm5Wolf__data_805D9DAC;
                } else {
                    self->f434 += TObjEneBm5Wolf__data_805D9DAC;
                }
            } else {
                f32 cur = self->f434;
                f32 tgt = self->f438;
                f32 diff = cur - tgt;
                if (diff > lbl_805D9DCC) {
                    self->f434 = cur - lbl_805D9DCC;
                } else if (diff < lbl_805D9E08) {
                    self->f434 = cur + lbl_805D9DCC;
                } else {
                    self->f434 = tgt;
                }
            }
            switch (self->f424) {
            case 1: {
                self->f400 = lbl_805D9DF8;
                approach_target__14TObjEneBm5WolfFPvf(self, lbl_805D9E0C);
                calc_circle_offset__14TObjEneBm5WolfFPvPvPv((Obj_800B79E0 *)self, (Vec_800B79E0 *)a, (Vec_800B79E0 *)b);
                if (self->f42C >= 0) {
                    vx = b->z;
                    vz = -b->x;
                } else {
                    vz = b->x;
                    vx = -b->z;
                }
                if (has_move_failures__9TObjEneDDFPvi(self, 1) != 0) {
                    set_active__9TObjEneDDFPv(self);
                } else {
                    clear_field_388__9TObjEneDDFPv(self);
                }
                move_with_wall_slide_on_ground__9TObjEneDDFPvfff(self, vx, vz, self->f404);
                if (has_move_failures__9TObjEneDDFPvi(self, 10) != 0) {
                    self->f420 = 0;
                    self->f424 = 2;
                }
                break;
            }
            case 2: {
                s32 ang;
                f32 sx;
                f32 cz;
                self->f400 = TObjEneBm5Wolf__data_805D9DAC;
                approach_target__14TObjEneBm5WolfFPvf(self, lbl_805D9E0C);
                self->f420++;
                if (self->f420 >= 40) {
                    ang = self->angle;
                } else {
                    ang = self->angle + (self->f42C << 11);
                }
                sx = sin_table_lookup(ang);
                cz = cos_table_lookup(ang);
                if (has_move_failures__9TObjEneDDFPvi(self, 2) != 0) {
                    self->f420 = 0;
                    set_active__9TObjEneDDFPv(self);
                } else {
                    clear_field_388__9TObjEneDDFPv(self);
                }
                move_with_wall_slide_on_ground__9TObjEneDDFPvfff(self, sx, cz, self->f404);
                if (self->f420 >= 80) {
                    self->f424 = 0;
                }
                break;
            }
            }
            self->angle = approach_angle_limited(self->angle,
                (s32)(TObjEneBm5Wolf__data_8043B5B0 * get_ad_end_text_start__10TObjPlayerFv(self->pos.x - self->f44, self->pos.z - self->f4C)),
                0x200);
            self->angle = (s16)self->angle;
            self->fC8 = TObjEneBm5Wolf__data_805D9DD0 * self->f404;
            turn_pose_to_target__14TObjEneBm5WolfFv(self);
            ((VObj_18_4225ac *)self)->m87();
            if (self->col->flags & 0x380000) {
                self->f428 = 20;
            }
        }
        break;
    case 5:
        clear_field_388__9TObjEneDDFPv(self);
        break;
    }
}
#pragma pop

void flanking_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    s32 *ang = (s32 *)(arg0 + 0x42C);
    Vec_800B62AC *dst = (Vec_800B62AC *)(arg0 + 0x444);
    Vec_800B62AC *src = (Vec_800B62AC *)(arg0 + 0x450);
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        set_field_378__9TObjEneDDFPvi(arg0, 9);
        ((VObj_18_4225ac *)(arg0))->m94();
        M2C_FIELD(arg0, f32 *, 0x400) = TObjEneBm5Wolf__data_805D9DBC;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        M2C_FIELD(arg0, s32 *, 0x420) = 0;
        calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(arg0, 0x1C71, src, ang);
        VecCopy__FP3VecPC3Vec(dst, src);
        M2C_FIELD(arg0, s32 *, 0x430) = *ang;
        break;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            transition_enemy_state(arg0, 7);
        } else if (objInBand__FP7GameObjf(arg0, M2C_FIELD(arg0, f32 *, 0xC4) - TObjEneBm5Wolf__data_805D9D8C) != 0 && M2C_FIELD(arg0, f32 *, 0x3AC) < TObjEneBm5Wolf__data_805D9DC8) {
            transition_enemy_state(arg0, 0xA);
        }
        break;
    case 5:
    case 1:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (update_death_check__14TObjEneEpsilonFPv(arg0) != 0) {
            if (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DE0) != 0) {
                spawn_particle_effect((s32)(arg0 + 0x38), 0xF3);
            }
            play_proximity_effect__14TObjEneBm5WolfFi((s32)arg0);
            if (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DF4) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
                if (M2C_FIELD(arg0, s32 *, 0x420) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x420) = 1;
                    calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(arg0, -0x1C71, src, ang);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x420) = 0;
                    calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(arg0, 0x1C71, src, ang);
                }
            }
            if (objInBand__FP7GameObjf(arg0, M2C_FIELD(arg0, f32 *, 0xC4) - TObjEneBm5Wolf__data_805D9D8C) != 0) {
                VecCopy__FP3VecPC3Vec(dst, src);
                M2C_FIELD(arg0, s32 *, 0x430) = *ang;
            }
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x430), 0x800);
            M2C_FIELD(arg0, s32 *, 0x60) = (s16)M2C_FIELD(arg0, s32 *, 0x60);
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEneBm5Wolf__data_805D9DF4) {
                M2C_FIELD(arg0, f32 *, 0x404) *= TObjEneBm5Wolf__data_805D9DB0;
                M2C_FIELD(arg0, f32 *, 0xC8) = TObjEneBm5Wolf__data_805D9DAC * M2C_FIELD(arg0, f32 *, 0x404);
                move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, dst->x, dst->z, M2C_FIELD(arg0, f32 *, 0x404));
            } else {
                approach_target__14TObjEneBm5WolfFPvf(arg0, TObjEneBm5Wolf__data_805D9D8C);
                M2C_FIELD(arg0, f32 *, 0xC8) = TObjEneBm5Wolf__data_805D9DAC * M2C_FIELD(arg0, f32 *, 0x404);
                move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, dst->x, dst->z, M2C_FIELD(arg0, f32 *, 0x404));
            }
            turn_pose_to_target__14TObjEneBm5WolfFv(arg0);
            ((VObj_18_4225ac *)(arg0))->m87();
        }
        break;
    }
}

void chasing_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(8));
        ((VObj_18_4225ac *)(arg0))->m94();
        M2C_FIELD(arg0, f32 *, 0x400) = (f32) lbl_805D9DC4;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        break;
    case 3:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(7));
            break;
        }
        if (has_move_failures__9TObjEneDDFPvi(arg0, 0xA) != 0) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(9));
            break;
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x41C) == 0) && (objInBand__FP7GameObjf(arg0, M2C_FIELD(arg0, f32 *, 0xC4) - TObjEneBm5Wolf__data_805D9D8C) != 0) && (M2C_FIELD(arg0, f32 *, 0x3AC) < TObjEneBm5Wolf__data_805D9DC8)) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(0xA));
            break;
        }
    case 5:
    case 1:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DE0) != 0) {
            spawn_particle_effect((s32) ((u8 *)(arg0) + 0x38), 0xF3);
        }
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 2) {
            play_proximity_effect__14TObjEneBm5WolfFi((s32) arg0);
        }
        if (update_death_check__14TObjEneEpsilonFPv(arg0) != 0) {
            enemy_copy_target_destination(arg0);
            update_velocity__9TObjEneDDFPv(arg0);
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEneBm5Wolf__data_805D9DF4) {
                M2C_FIELD(arg0, f32 *, 0x404) = (f32) (M2C_FIELD(arg0, f32 *, 0x404) * TObjEneBm5Wolf__data_805D9DB0);
                M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (TObjEneBm5Wolf__data_805D9DA4 * M2C_FIELD(arg0, f32 *, 0x404));
                temp_f1 = M2C_FIELD(arg0, f32 *, 0x404);
                enemy_turn_and_move_on_ground(arg0, (s32) (lbl_805D9E10 * temp_f1), temp_f1);
            } else {
                approach_target__14TObjEneBm5WolfFPvf(arg0, TObjEneBm5Wolf__data_805D9DA8);
                M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (TObjEneBm5Wolf__data_805D9DA4 * M2C_FIELD(arg0, f32 *, 0x404));
                temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x404);
                enemy_turn_and_move_on_ground(arg0, (s32) (lbl_805D9E10 * temp_f1_2), temp_f1_2);
            }
            turn_pose_to_target__14TObjEneBm5WolfFv(arg0);
            ((VObj_18_4225ac *)(arg0))->m87();
        }
        break;
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm5Wolf::roaming_state(int event) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f31;
    f32 temp_f3;
    f32 square;
    s32 temp_r0;
    s32 temp_r30;
    u8 *temp_r3;
    switch (event) {
    case 4:
        this->requestedAction = 1;
        set_field_378__9TObjEneDDFPvi((void *)(this), (M2C_UNK)(7));
        ((VObj_18_8bca97 *)(this))->m94();
        this->roamingTimer = 0;
        this->roamingSubstate = 0;
        this->randomPhase = actor_rand_int(this, 0x14);
        this->nearTarget = 0;
        temp_r30 = (s32) (lbl_805D9E14 * calc_boss4_scale__10TObjPlayerFi((s32)(this)));
        temp_f31 = lbl_805D9E18 * calc_boss4_scale__10TObjPlayerFi((s32)(this));
        this->destination[0] = (f32) ((temp_f31 * sin_table_lookup(temp_r30)) + this->groupAnchor[0]);
        this->destination[2] = (f32) ((temp_f31 * cos_table_lookup(temp_r30)) + this->groupAnchor[2]);
        this->desiredSpeed = (f32) ((lbl_805D9DF8 * calc_boss4_scale__10TObjPlayerFi((s32)(this))) + TObjEneBm5Wolf__data_805D9D84);
        this->currentSpeed = (f32) TObjEneBm5Wolf__data_805D9D78;
        this->stoppingDistance = (f32) (TObjEneBm5Wolf__data_805D9DBC + calc_scaled_value__15TObjBoss2TunnelFif(0x200, this->desiredSpeed));
        update_velocity__9TObjEneDDFPv(this);
        return;
    case 3:
        if ((s32) this->nearTarget != 0) {
            set_state_by_timer__14TObjEneBm5WolfFi(this);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(this);
        if (play_variant_sound__14TObjEneBm5WolfFPv(this) != 0) {
            temp_r3 = (u8 *)(this->target);
            temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38) - this->position[0];
            temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x40) - this->position[2];
            square = temp_f3 * temp_f3;
            square = (temp_f1 * temp_f1) + square;
            if (square < lbl_805D9E1C) {
                this->nearTarget = 1;
            }
            turn_pose_to_target__14TObjEneBm5WolfFv(this);
        } else {
            advance_pose_turn__14TObjEneBm5WolfFPvi(this, this->facing);
        }
        temp_r0 = this->roamingSubstate;
        switch (temp_r0) {
        case 0:
            play_footsteps__14TObjEneBm5WolfFPv(this);
            update_velocity__9TObjEneDDFPv(this);
            approach_target__14TObjEneBm5WolfFPvf(this, lbl_805D9E20);
            this->roamingTimer = (s32) (this->roamingTimer + 1);
            if ((this->destinationDistance < this->stoppingDistance) || ((s32) this->roamingTimer > 0x64)) {
                this->roamingSubstate = 1;
                this->desiredSpeed = (f32) TObjEneBm5Wolf__data_805D9D78;
            } else if (((s32)has_move_failures__9TObjEneDDFPvi(this, 0x14)) != 0) {
                this->roamingTimer = 0;
                choose_roaming_destination();
                this->desiredSpeed = rand_range__9TObjEneDDFff(this, TObjEneBm5Wolf__data_805D9D84, TObjEneBm5Wolf__data_805D9D8C);
                this->stoppingDistance = (f32) (TObjEneBm5Wolf__data_805D9DBC + calc_scaled_value__15TObjBoss2TunnelFif(0x200, this->desiredSpeed));
            }
            this->playbackSpeed = (f32) (TObjEneBm5Wolf__data_805D9DD0 * this->currentSpeed);
            temp_f1_2 = this->currentSpeed;
            enemy_turn_and_move_on_ground(this, (s32) (lbl_805D9E24 * temp_f1_2), temp_f1_2);
            break;
        case 1:
            play_footsteps__14TObjEneBm5WolfFPv(this);
            update_velocity__9TObjEneDDFPv(this);
            approach_target__14TObjEneBm5WolfFPvf(this, lbl_805D9E28);
            if (this->currentSpeed <= TObjEneBm5Wolf__data_805D9DA8) {
                this->roamingSubstate = 2;
                this->roamingTimer = (s32) rand_range__9TObjEneDDFff(this, lbl_805D9E2C, lbl_805D9E30);
                this->requestedAction = 0;
            }
            this->playbackSpeed = (f32) (TObjEneBm5Wolf__data_805D9DD0 * this->currentSpeed);
            temp_f1_3 = this->currentSpeed;
            enemy_turn_and_move_on_ground(this, (s32) (lbl_805D9E24 * temp_f1_3), temp_f1_3);
            break;
        case 2:
            this->requestedAction = 0;
            this->roamingTimer = (s32) (this->roamingTimer - 1);
            if ((s32) this->roamingTimer <= 0) {
                choose_roaming_destination();
                this->desiredSpeed = rand_range__9TObjEneDDFff(this, TObjEneBm5Wolf__data_805D9D84, TObjEneBm5Wolf__data_805D9D8C);
                this->currentSpeed = (f32) TObjEneBm5Wolf__data_805D9D78;
                this->stoppingDistance = (f32) (TObjEneBm5Wolf__data_805D9DBC + calc_scaled_value__15TObjBoss2TunnelFif(0x200, this->desiredSpeed));
                this->roamingSubstate = 0;
                this->requestedAction = 1;
            }
            ((VObj_18_8bca97 *)(this))->m100();
            break;
        }
        ((VObj_18_8bca97 *)(this))->m87();
        break;
    }
}
#pragma pop

void empty_state__14TObjEneBm5WolfFv(void) {  }

#define VTABLE_ENE ((VObj2_800B4820 *) arg0)

typedef struct VBase_18_7b3d65 VBase_18_7b3d65;
typedef struct VObj_18_7b3d65 VObj_18_7b3d65;
#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())

void howling_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    Node_800B6B50 *p;
    void *r;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0x10;
        set_field_378__9TObjEneDDFPvi((void *) arg0, 7);
        ((VObj_18_7b3d65 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state((void *) (arg0), 7);
        }
        break;
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x41C)++;
        advance_animation_playback((void *) arg0);
        if (M2C_FIELD(arg0, s16 *, 0xB8) == 0x10) {
            objInBand__FP7GameObjf((void *) (arg0), TObjEneBm5Wolf__data_805D9DEC);
        } else if (M2C_FIELD(arg0, s16 *, 0xB8) == 0xB && objInBand__FP7GameObjf((void *) (arg0), lbl_805D9E34) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), 0x3A819), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x200);
        }
        if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x3C) {
            for (p = TObjEneBm5Wolf__data_80500B8C.head; p != NULL; p = p->next) {
                r = play_sound__14TObjEneBm5WolfFPv(p);
                if (M2C_FIELD(arg0, s32 *, 0x3DC) == get_group_id__14TObjEneBm5WolfFPv()) {
                    set_attack_flag__14TObjEneBm5WolfFPv(r);
                }
            }
        }
        if (enemy_validate_retained_target((void *) (arg0)) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0xB8) == 0x10) {
                turn_pose_to_target__14TObjEneBm5WolfFv((void *) (arg0));
            } else {
                M2C_FIELD(arg0, s32 *, 0x3E4) = 0;
            }
        } else {
            play_variant_sound__14TObjEneBm5WolfFPv((void *) (arg0));
        }
        ((VObj_18_7b3d65 *)(arg0))->m100();
        ((VObj_18_7b3d65 *)(arg0))->m86();
        break;
    }
}

void standing_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 5;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(7));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x41C)) = 0;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x41C)))) > 0x3C)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(7));
    }
    case 5:
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x41C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x41C))) + 1);
      advance_animation_playback((void *)(arg0));
      objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DEC);
      if (enemy_validate_retained_target(arg0) != 0)
    {
      enemy_copy_target_destination(arg0);
      update_velocity__9TObjEneDDFPv(arg0);
      turn_pose_to_target__14TObjEneBm5WolfFv(arg0);
    }
    else
    {
      play_variant_sound__14TObjEneBm5WolfFPv(arg0);
    }
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      break;
  }
  return;
}

#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())
void alerted_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
  s32 new_var;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(4));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      new_var = (s32) (((s32) (lbl_805D9E38 * calc_boss4_scale__10TObjPlayerFi((s32) arg0))) + 0xA);
      *((s32 *) (((s8 *) arg0) + 0x41C)) = new_var;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x41C)))) <= 0)
    {
      set_anim_state__14TObjEneBm5WolfFPv(arg0);
    }
    case 5:
      return;
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x41C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x41C))) - 1);
      play_variant_sound__14TObjEneBm5WolfFPv(arg0);
      advance_animation_playback((void *) arg0);
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      break;
  }
}

#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())
void sleeping_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
  u8 *temp_r3;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(2));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      enemy_clear_target(arg0);
      *((s32 *) (((s8 *) arg0) + 0x3E4)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x408)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x408))) & 0xFFFFFFFE);
      return;
    case 3:
      if ((*((s32 *) (((s8 *) arg0) + 0x408))) & 1)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(4));
      return;
      return;
    }
      if (((u32) (*((u32 *) (((s8 *) arg0) + 0x390)))) != 0U)
    {
      enemy_copy_target_destination(arg0);
      set_anim_state__14TObjEneBm5WolfFPv(arg0);
      temp_r3 = (u8 *) find_entity_by_id(*((u16 *) (((s8 *) arg0) + 0x3E0)));
      if (temp_r3 != 0)
      {
        set_attack_flag__14TObjEneBm5WolfFPv(temp_r3);
      }
    }
      return;
    case 0:
      play_variant_sound__14TObjEneBm5WolfFPv(arg0);
      advance_animation_playback(arg0);
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x408)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x408))) & 0xFFFFFFFE);
      break;
  }
}

extern const f32 lbl_805D9DDC;
extern const f32 lbl_805D9DE4;
extern const f32 TObjEneBm5Wolf__data_805D9DE8;
extern const f32 TObjEneBm5Wolf__data_805D9DF0;
extern const f32 lbl_805D9E3C;
extern const f32 lbl_805D9E40;
#pragma push
#pragma fp_contract on
void appearing_state__14TObjEneBm5WolfFPvi(Obj_800B7018 *o, s32 arg1) {
    Vec_800B7018 *home = &o->f444;
    f32 t;

    switch (arg1) {
    case 4:
        o->fB8 = 0x11;
        set_field_378__9TObjEneDDFPvi(o, 7);
        ((VObj_18_7b3d65 *)o)->m93();
        o->f408 &= ~3;
        o->f408 |= 4;
        enemy_clear_target(o);
        o->f3E4 = 0;
        VecCopy__FP3VecPC3Vec(home, &o->pos);
        o->pos.x -= lbl_805D9E3C * sin_table_lookup(o->angle);
        o->pos.z -= lbl_805D9E3C * cos_table_lookup(o->angle);
        o->f434 = lbl_805D9E40;
        o->f40C = TObjEneBm5Wolf__data_805D9D78;
        o->f438 = o->pos.y;
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            if (select_target__14TObjEneBm5WolfFPv(o) != 0) {
                transition_enemy_state(o, 7);
            } else {
                transition_enemy_state(o, 2);
            }
        }
        break;
    case 0:
        ((M2C_UNK (*)())advance_animation_playback)();
        if (!(o->fB0 & 4)) {
            if (objInBand__FP7GameObjf(o, TObjEneBm5Wolf__data_805D9DE0) != 0 ||
                objInBand__FP7GameObjf(o, TObjEneBm5Wolf__data_805D9DF0) != 0) {
                spawn_particle_effect((s32)&o->pos, 0xF3);
            }
            if (objInBand__FP7GameObjf(o, lbl_805D9DE4) != 0) {
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(o, 0x3E420), &o->pos, 0, 0);
            }
            if (objInBand__FP7GameObjf(o, TObjEneBm5Wolf__data_805D9DE8) != 0) {
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(o, 0x4003A821), &o->pos, 0, 0);
                play_effect_if_v2__10TObjPlayerFi(-0x500);
            }
            if (o->fC0 <= TObjEneBm5Wolf__data_805D9DF0) {
                t = o->fC0 - TObjEneBm5Wolf__data_805D9DF4;
                o->f40C = (o->f438 + (lbl_805D9DDC * (t * t) + TObjEneBm5Wolf__data_805D9D74)) - o->pos.y;
            } else {
                o->f434 *= TObjEneBm5Wolf__data_805D9DA4;
            }
            o->pos.x += o->f434 * sin_table_lookup(o->angle);
            o->pos.z += o->f434 * cos_table_lookup(o->angle);
        }
        ((VObj_18_7b3d65 *)o)->m100();
        ((VObj_18_7b3d65 *)o)->m86();
        break;
    case 5:
        o->f40C = TObjEneBm5Wolf__data_805D9D78;
        break;
    }
}

#pragma pop
void anchor_state__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
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
            transition_enemy_state(arg0, 1);
        }
    case 5:
        return;
    case 0:
        temp_r3 = find_pack_leader__14TObjEneBm5WolfFi((s32)(M2C_FIELD(arg0, s32 *, 0x3DC)));
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

extern "C" {
void TObjEneBm5Wolf__sub_800B8174(void);
void run_task__14TObjEneBm5WolfFPv(void);
void render_actor_shadows_default(void);
void TLobby__sub_801A1FD8(void);
void apply_object_set_data(void);
void reset_actor_action_state(void);
void get_actor_body_center(void);
void update_object_view_visibility(void);
void classify_actor_view_detail(void);
void get_enemy_name__14TObjEnePanarmsFPv(void);
void TObjPlayer__sub_80019568(void);
void add_actor_exp(void);
void TObjPlayer__sub_800111D8(void);
void get_actor_level_index(void);
void update_actor_ground_y(void);
void TObjPlayer__sub_80018E6C(void);
void is_actor_cadence_frame(void);
void select_melee_contact_body__10TObjPlayerFv(void);
void calc_distance_accuracy_penalty__10TObjPlayerFv(void);
void receive_physical_attack__10TObjPlayerFv(void);
void receive_direct_attack__10TObjPlayerFv(void);
void receive_weapon_special_attack__10TObjPlayerFv(void);
void apply_knockback_from_attacker(void);
void try_start_action__10TObjPlayerFPvii(void);
void roll_physical_accuracy__10TObjPlayerFv(void);
void TObjEneBm5Wolf__sub_800B8020(void);
void TObjPlayer__sub_8000FF3C(void);
void is_target_in_attack_range__10TObjPlayerFv(void);
void test_flag_256__10TObjPlayerFPv(void);
void test_flag30_512__10TObjPlayerFPv(void);
void has_flag_0x800__10TObjPlayerFPv(void);
void test_flag_1000__10TObjPlayerFPv(void);
void update_poison_status__10TObjPlayerFv(void);
void update_action_hold_status__10TObjPlayerFv(void);
void update_action_timer__10TObjPlayerFPv(void);
void update_flag30_timer__10TObjPlayerFPv(void);
void update_movement_status__10TObjPlayerFv(void);
void update_shock_clock__10TObjPlayerFPv(void);
void update_attack_stat_status(void);
void update_defense_stat_status(void);
void TObjPlayer__sub_800172CC(void);
void apply_poison_status__10TObjPlayerFv(void);
void apply_paralysis__10TObjPlayerFv(void);
void apply_slow_status__10TObjPlayerFPv(void);
void apply_confusion_status__10TObjPlayerFv(void);
void apply_movement_ailment__10TObjPlayerFv(void);
void apply_shock_status__10TObjPlayerFv(void);
void clear_harmful_statuses__10TObjPlayerFv(void);
void apply_attack_stat_status__10TObjPlayerFv(void);
void apply_defense_stat_status__10TObjPlayerFv(void);
void cure_poison_ailment(void);
void cure_paralysis__10TObjPlayerFv(void);
void clear_all_status_effects(void);
void apply_action_hold_status(void);
void apply_anti_technique__10TObjPlayerFv(void);
void TObjPlayer__sub_80014898(void);
void TObjPlayer__sub_80014894(void);
void TObjPlayer__sub_80014890(void);
void TObjEneBm5Wolf__sub_800B7FB4(void);
void set_state15__14TObjEneBm5WolfFPv(void);
void set_state__14TObjEneBm5WolfFPv(void);
void reset_pose__10TObjPlayerFPv(void);
void TObjPlayer__sub_80014840(void);
void TObjPlayer__sub_80014838(void);
void TObjPlayer__sub_80014830(void);
void get_pos__10TObjPlayerFii(void);
void apply_switch_attack__10TObjPlayerFi(void);
void enemy_spawn_jellen_effect(void);
void trigger_switch_attack__10TObjPlayerFi(void);
void enemy_spawn_zalure_effect(void);
void TObjPlayer__sub_80010A80(void);
void TObjPlayer__sub_800F65D0(void);
void fn_80010EC8(void);
void fn_80010EC4(void);
void fn_80010EC0(void);
void fn_80010EBC(void);
void TObjEneDD__vt77(void);
void apply_hit_message_flags__10TObjPlayerFPvPv(void);
void apply_set_data__9TObjEnemyFPvPv(void);
void fn_800F5D80(void);
void TObjEneEpsilon__vt81(void);
void TObjEneDD__vt82(void);
void TObjEneDD__vt83(void);
void TObjEneDD__vt84(void);
void update_colliders__14TObjEneBm5WolfFPv(void);
void TObjEneDD__vt86(void);
void TObjEneDD__vt87(void);
void TObjEneDD__vt88(void);
void TObjEneDD__vt89(void);
void TObjEneDD__vt90(void);
void TObjEneDD__vt91(void);
void TObjEneDD__vt92(void);
void TObjEneDD__vt93(void);
void TObjEneDD__vt94(void);
void TObjEneDD__vt95(void);
void TObjEneDD__vt96(void);
void TObjEneDD__vt97(void);
void TObjEneDD__vt98(void);
void TObjEneDD__vt99(void);
void TObjEneDD__vt100(void);
void TObjEneEpsilon__vt101(void);
void *lbl_804922F8[107] = {
    0,
    0,
    (void *)TObjEneBm5Wolf__sub_800B8174,
    (void *)run_task__14TObjEneBm5WolfFPv,
    (void *)render__14TObjEneBm5WolfFPv,
    (void *)render_actor_shadows_default,
    (void *)TLobby__sub_801A1FD8,
    (void *)apply_object_set_data,
    (void *)reset_actor_action_state,
    (void *)get_actor_body_center,
    (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail,
    (void *)get_enemy_name__14TObjEnePanarmsFPv,
    (void *)TObjPlayer__sub_80019568,
    (void *)add_actor_exp,
    (void *)TObjPlayer__sub_800111D8,
    (void *)get_actor_level_index,
    (void *)update_actor_ground_y,
    (void *)TObjPlayer__sub_80018E6C,
    (void *)is_actor_cadence_frame,
    (void *)select_melee_contact_body__10TObjPlayerFv,
    (void *)calc_distance_accuracy_penalty__10TObjPlayerFv,
    (void *)receive_physical_attack__10TObjPlayerFv,
    (void *)receive_direct_attack__10TObjPlayerFv,
    (void *)receive_weapon_special_attack__10TObjPlayerFv,
    (void *)apply_knockback_from_attacker,
    (void *)try_start_action__10TObjPlayerFPvii,
    (void *)roll_physical_accuracy__10TObjPlayerFv,
    (void *)TObjEneBm5Wolf__sub_800B8020,
    (void *)TObjPlayer__sub_8000FF3C,
    (void *)is_target_in_attack_range__10TObjPlayerFv,
    (void *)test_flag_256__10TObjPlayerFPv,
    (void *)test_flag30_512__10TObjPlayerFPv,
    (void *)has_flag_0x800__10TObjPlayerFPv,
    (void *)test_flag_1000__10TObjPlayerFPv,
    (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv,
    (void *)update_action_timer__10TObjPlayerFPv,
    (void *)update_flag30_timer__10TObjPlayerFPv,
    (void *)update_movement_status__10TObjPlayerFv,
    (void *)update_shock_clock__10TObjPlayerFPv,
    (void *)update_attack_stat_status,
    (void *)update_defense_stat_status,
    (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv,
    (void *)apply_paralysis__10TObjPlayerFv,
    (void *)apply_slow_status__10TObjPlayerFPv,
    (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv,
    (void *)apply_shock_status__10TObjPlayerFv,
    (void *)clear_harmful_statuses__10TObjPlayerFv,
    (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)apply_defense_stat_status__10TObjPlayerFv,
    (void *)cure_poison_ailment,
    (void *)cure_paralysis__10TObjPlayerFv,
    (void *)clear_all_status_effects,
    (void *)apply_action_hold_status,
    (void *)apply_anti_technique__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80014898,
    (void *)TObjPlayer__sub_80014894,
    (void *)TObjPlayer__sub_80014890,
    (void *)TObjEneBm5Wolf__sub_800B7FB4,
    (void *)set_state15__14TObjEneBm5WolfFPv,
    (void *)set_state__14TObjEneBm5WolfFPv,
    (void *)reset_pose__10TObjPlayerFPv,
    (void *)TObjPlayer__sub_80014840,
    (void *)TObjPlayer__sub_80014838,
    (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)TObjPlayer__sub_80010A80,
    (void *)TObjPlayer__sub_800F65D0,
    (void *)fn_80010EC8,
    (void *)fn_80010EC4,
    (void *)fn_80010EC0,
    (void *)fn_80010EBC,
    (void *)TObjEneDD__vt77,
    (void *)apply_hit_message_flags__10TObjPlayerFPvPv,
    (void *)apply_set_data__9TObjEnemyFPvPv,
    (void *)fn_800F5D80,
    (void *)TObjEneEpsilon__vt81,
    (void *)TObjEneDD__vt82,
    (void *)TObjEneDD__vt83,
    (void *)TObjEneDD__vt84,
    (void *)dispatch_state__14TObjEneBm5WolfFPvUii,
    (void *)update_colliders__14TObjEneBm5WolfFPv,
    (void *)TObjEneDD__vt86,
    (void *)TObjEneDD__vt87,
    (void *)TObjEneDD__vt88,
    (void *)TObjEneDD__vt89,
    (void *)TObjEneDD__vt90,
    (void *)TObjEneDD__vt91,
    (void *)TObjEneDD__vt92,
    (void *)TObjEneDD__vt93,
    (void *)TObjEneDD__vt94,
    (void *)TObjEneDD__vt95,
    (void *)TObjEneDD__vt96,
    (void *)TObjEneDD__vt97,
    (void *)TObjEneDD__vt98,
    (void *)TObjEneDD__vt99,
    (void *)TObjEneDD__vt100,
    (void *)TObjEneEpsilon__vt101,
    (void *)update_state__14TObjEneBm5WolfFPv,
    (void *)render_debug__14TObjEneBm5WolfFPv,
};
}
typedef void (*State_800B73A8)(u8 *, s32);
void dispatch_state__14TObjEneBm5WolfFPvUii(u8 *arg0, u32 state, s32 event) {
    switch (state) {
    case 0:
        anchor_state__14TObjEneBm5WolfFPvi(arg0, event);
        break;
    case 1:
        appearing_state__14TObjEneBm5WolfFPvi((Obj_800B7018 *)arg0, event);
        break;
    case 2:
        sleeping_state__14TObjEneBm5WolfFPvi(arg0, event);
        break;
    case 3:
        ((State_800B73A8)empty_state__14TObjEneBm5WolfFv)(arg0, event);
        break;
    case 4:
        alerted_state__14TObjEneBm5WolfFPvi(arg0, event);
        break;
    case 5:
        standing_state__14TObjEneBm5WolfFPvi(arg0, event);
        break;
    case 6:
        howling_state__14TObjEneBm5WolfFPvi((u8 *)(arg0), (s32)(event));
        break;
    case 7:
        roaming_state__14TObjEneBm5WolfFi(arg0, event);
        break;
    case 8:
        chasing_state__14TObjEneBm5WolfFPvi(arg0, event);
        break;
    case 9:
        flanking_state__14TObjEneBm5WolfFPvi((u8 *)(arg0), (s32)(event));
        break;
    case 10:
        circling_state__14TObjEneBm5WolfFv((u8 *)(arg0), (s32)(event));
        break;
    case 11:
        update_lunge__14TObjEneBm5WolfFv((u8 *)(arg0), (s32)(event));
        break;
    case 12:
        returning_state__14TObjEneBm5WolfFPvi((u8 *)(arg0), (s32)(event));
        break;
    case 13:
        repositioning_state__14TObjEneBm5WolfFPvi((u8 *)(arg0), (s32)(event));
        break;
    case 14:
        action__14TObjEneBm5WolfFPvi(arg0, event);
        break;
    case 15:
        hurt_state__14TObjEneBm5WolfFPvi((u8 *)(arg0), (s32)(event));
        break;
    case 16:
        update_dying_state__14TObjEneBm5WolfFPvi((u8 *)(arg0), (s32)(event));
        break;
    case 17:
        despawn_state__14TObjEneBm5WolfFPvi(arg0, event);
        break;
    }
}

void apply_mourning_jellen__14TObjEneBm5WolfFPv(Obj_800B74B8 *self) {
    u8 *target = find_entity_by_id(self->target_id);
    if (target != 0) {
        Arg_800B74B8 arg;
        arg.kind = 0xb;
        arg.fval = TObjEneBm5Wolf__data_805D9D8C;
        arg.val = *(s32 *)&arg.fval;
        arg.kind2 = 0xb;
        self->m21(target, &arg, 0, -1, -1);
    }
}

void apply_mourning_zalure__14TObjEneBm5WolfFPv(Obj_800B7530 *self) {
    u8 *target = find_entity_by_id(self->target_id);
    if (target != 0) {
        Arg_800B7530 arg;
        arg.kind = 0xc;
        arg.fval = TObjEneBm5Wolf__data_805D9D8C;
        arg.val = *(s32 *)&arg.fval;
        arg.kind2 = 0xc;
        self->m21(target, &arg, 0, -1, -1);
    }
}

}

#undef play_footsteps__14TObjEneBm5WolfFPv
#undef play_variant_sound__14TObjEneBm5WolfFPv
#undef set_state_by_timer__14TObjEneBm5WolfFi
#undef spawn_recoil_dust__14TObjEneBm5WolfFiPv
#undef get_flag_bit0__14TObjEneBm5WolfFPv
#undef select_target__14TObjEneBm5WolfFPv
#undef schedule_pack_reaction__14TObjEneBm5WolfFPvis
#undef calc_death_slide_speed__14TObjEneBm5WolfFPvf
#undef select_death_direction__14TObjEneBm5WolfFPvPv
#undef calc_lunge_aim__14TObjEneBm5WolfFPv

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800B7808 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
};

struct Seq_800B76E0 { u8 pad0[4]; u32 count; };

struct Ent_800B76E0 { s32 w0; Seq_800B76E0 *seq; };

struct Cur_800B76E0 { u8 pad0[0x94]; s32 idx; };

struct Obj_800B76E0 { u8 pad0[0xD8]; Cur_800B76E0 *cur; Ent_800B76E0 *ents; };

typedef s32 M2C_UNK;
typedef struct Vec_800B78F8 {
    f32 x, y, z;
} Vec_800B78F8;

typedef struct Wolf_800B78F8 {
    u8 pad0[0x60];
    s32 facing;
    u8 pad64[0x308 - 0x64];
    Vec_800B78F8 knockback;
} Wolf_800B78F8;

struct Vec_800B79E0 { f32 x, y, z; };

struct Obj_800B79E0 { u8 pad[0x38]; Vec_800B79E0 pos; };

extern "C" {
s32 spawn_particle_effect(s32, s32);
extern const f32 TObjEneBm5Wolf__data_805D9DE0;
s32 objInBand__FP7GameObjf(void *, f32);
#define play_sound_effect ((M2C_UNK (*)(void *, void *, int, int))&play_sound_effect)
#define copy_target_state__14TObjEnePanarmsFPvPv ((void * (*)(void *, int))&copy_target_state__14TObjEnePanarmsFPvPv)
#define play_effect_if_v2__10TObjPlayerFi ((M2C_UNK (*)(int))&play_effect_if_v2__10TObjPlayerFi)
extern const f32 TObjEneBm5Wolf__data_805D9DE8;
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
#define enemy_copy_target_destination ((s32 (*)(void *))&enemy_copy_target_destination)
#define update_velocity__9TObjEneDDFPv ((s32 (*)(void *))&update_velocity__9TObjEneDDFPv)
s32 transform_relative_position__9TObjEneDDFPvPv(void *, int);
#define sin_table_lookup ((f32 (*)(int))&sin_table_lookup)
#define cos_table_lookup ((f32 (*)(int))&cos_table_lookup)
extern const f64 TObjEneBm5Wolf__data_8043B5B0;
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
extern const f32 TObjEneBm5Wolf__data_805D9DF0;
extern const f32 lbl_805D9E44;
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 is_vec_xz_cross_negative(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
extern const f64 TObjEneBm5Wolf__data_8043B5B0;
f32 newton_sqrtf(f32);
f32 calc_circle_offset__14TObjEneBm5WolfFPvPvPv(Obj_800B79E0 *self, Vec_800B79E0 *target, Vec_800B79E0 *out);
}

extern "C" {

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0);
void set_anim_state__14TObjEneBm5WolfFPv(void *arg0);
void set_attack_flag__14TObjEneBm5WolfFPv(void* p);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
#define calc_boss4_scale__10TObjPlayerFi ((f32 (*)())&calc_boss4_scale__10TObjPlayerFi)
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

void schedule_pack_reaction__14TObjEneBm5WolfFPvis(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x414) = arg1;
    M2C_FIELD(arg0, s16 *, 0x418) = arg2;
}

#pragma push
#pragma fp_contract on
s32 calc_lunge_aim__14TObjEneBm5WolfFPv(u8 *arg0) {
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f0;
    if (transform_relative_position__9TObjEneDDFPvPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x390))) != 0) {
        enemy_copy_target_destination((void *) (arg0));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        if (((s32)get_flag_bit0__14TObjEneBm5WolfFPv((void*)((void *) (arg0)))) != 0) {
            var_f0 = TObjEneBm5Wolf__data_805D9DEC;
        } else {
            var_f0 = lbl_805D9E44;
        }
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x3A8);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x3A0);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + ((TObjEneBm5Wolf__data_805D9DBC * temp_f4) + (temp_f5 * var_f0)));
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (M2C_FIELD(arg0, f32 *, 0x39C) + ((TObjEneBm5Wolf__data_805D9DBC * temp_f5) - (temp_f4 * var_f0)));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        return (s32) (TObjEneBm5Wolf__data_8043B5B0 * get_ad_end_text_start__10TObjPlayerFv((f64) M2C_FIELD(arg0, f32 *, 0x3A0), (f64) M2C_FIELD(arg0, f32 *, 0x3A8)));
    }
    M2C_FIELD(arg0, f32 *, 0x3A0) = sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneBm5Wolf__data_805D9D78;
    M2C_FIELD(arg0, f32 *, 0x3A8) = cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x394)), (void *)((void *) (arg0 + 0x38)));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((TObjEneBm5Wolf__data_805D9DF0 * M2C_FIELD(arg0, f32 *, 0x3A0)) + M2C_FIELD(arg0, f32 *, 0x394));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((TObjEneBm5Wolf__data_805D9DF0 * M2C_FIELD(arg0, f32 *, 0x3A8)) + M2C_FIELD(arg0, f32 *, 0x39C));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) TObjEneBm5Wolf__data_805D9DF0;
    return M2C_FIELD(arg0, s32 *, 0x60);
}
#pragma pop

int get_flag_bit0__14TObjEneBm5WolfFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

extern const f32 lbl_805D9E48;

f32 calc_death_slide_speed__14TObjEneBm5WolfFPvf(Obj_800B76E0 *arg0, f32 farg0) {
    return lbl_805D9D9C / ((f32)(arg0->ents[arg0->cur->idx].seq->count - 1) / farg0);
}

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, lbl_805D9E48) != 0) {
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void play_footsteps__14TObjEneBm5WolfFPv(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DEC) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DE8) != 0)) {
        play_sound_effect((void *)(((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)))), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

#pragma push
#pragma fp_contract on
void spawn_recoil_dust__14TObjEneBm5WolfFiPv(s32 arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_800B7808, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B7808, sp10) == 0x8) ? 1 : -1];
    Stack_800B7808 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    stack.sp8 += TObjEneBm5Wolf__data_805D9DE0 * M2C_FIELD(arg1, f32 *, 0);
    stack.sp10 += TObjEneBm5Wolf__data_805D9DE0 * M2C_FIELD(arg1, f32 *, 8);
    spawn_particle_effect((s32) &stack.sp8, 0xF3);
}
#pragma pop

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

s32 select_death_direction__14TObjEneBm5WolfFPvPv(Wolf_800B78F8 *s, s32 *heading) {
    Vec_800B78F8 v;
    Vec_800B78F8 side;
    s32 ret;
    VecCopy__FP3VecPC3Vec(&v, &s->knockback);
    v.y = TObjEneBm5Wolf__data_805D9D78;
    if (TObjEneBm5Wolf__data_805D9D78 != clamp_velocity__15TObjBoss2TunnelFPv(&v)) {
        *heading = (s32)(TObjEneBm5Wolf__data_8043B5B0 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z));
        side.x = sin_table_lookup(s->facing);
        side.z = cos_table_lookup(s->facing);
        if (is_vec_xz_cross_negative(&side, &v) != 0) {
            ret = 0;
            *heading += 0x4000;
        } else {
            ret = 1;
            *heading -= 0x4000;
        }
    } else {
        ret = 0;
        *heading = s->facing;
    }
    *heading = (s16)*heading;
    return ret;
}

#pragma push
#pragma fp_contract on
f32 calc_circle_offset__14TObjEneBm5WolfFPvPvPv(Obj_800B79E0 *self, Vec_800B79E0 *target, Vec_800B79E0 *out) {
    f32 dx;
    f32 dz;
    dz = self->pos.z - target->z;
    dx = self->pos.x - target->x;
    f32 distSq = dx * dx + dz * dz;
    f32 inv = TObjEneBm5Wolf__data_805D9D8C / ((f32 (*)(f32, f32))newton_sqrtf)(distSq, self->pos.x);
    out->x = dx * inv;
    out->y = TObjEneBm5Wolf__data_805D9D78;
    out->z = dz * inv;
    return distSq * inv;
}
#pragma pop

void set_anim_state__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        transition_enemy_state((void *)(arg0), (M2C_UNK)(6));
        return;
    }
    transition_enemy_state((void *)(arg0), (M2C_UNK)(5));
}

void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < TObjEneBm5Wolf__data_805D9DAC) {
        transition_enemy_state((void *)(arg0), (M2C_UNK)(8));
        return;
    }
    transition_enemy_state((void *)(arg0), (M2C_UNK)(9));
}

}

#undef enemy_copy_target_destination
#undef update_velocity__9TObjEneDDFPv
#undef calc_boss4_scale__10TObjPlayerFi
#undef sin_table_lookup
#undef cos_table_lookup
#undef copy_target_state__14TObjEnePanarmsFPvPv
#undef play_effect_if_v2__10TObjPlayerFi
#undef play_sound_effect
#undef lbl_805D9D70
#undef TObjEneBm5Wolf__data_805D9D74
#undef TObjEneBm5Wolf__data_805D9D78
#undef TObjEneBm5Wolf__data_805D9D7C
#undef TObjEneBm5Wolf__data_805D9D80
#undef TObjEneBm5Wolf__data_805D9D84
#undef lbl_805D9D88
#undef TObjEneBm5Wolf__data_805D9D8C
#undef lbl_805D9D90
#undef lbl_805D9D94
#undef lbl_805D9D98
#undef lbl_805D9D9C
#undef lbl_805D9DA0
#undef TObjEneBm5Wolf__data_805D9DA4
#undef TObjEneBm5Wolf__data_805D9DA8
#undef TObjEneBm5Wolf__data_805D9DAC
#undef TObjEneBm5Wolf__data_805D9DB0
#undef TObjEneBm5Wolf__data_805D9DB4
#undef lbl_805D9DB8
#undef TObjEneBm5Wolf__data_805D9DBC
#undef lbl_805D9DC0
#undef lbl_805D9DC4
#undef TObjEneBm5Wolf__data_805D9DC8
#undef lbl_805D9DCC
#undef TObjEneBm5Wolf__data_805D9DD0
__declspec(section ".sdata2") extern const f32 lbl_805D9DD8 = 13.333333015441895f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DDC = -0.08888889104127884f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DE0 = 5.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DE4 = 6.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DE8 = 24.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DEC = 7.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DF0 = 30.0f;
__declspec(section ".sdata2") extern const f32 TObjEneBm5Wolf__data_805D9DF4 = 15.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DF8 = 0.699999988079071f;
__declspec(section ".sdata2") extern const f32 lbl_805D9DFC = 10000.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E00 = 900.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E04 = 80.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E08 = -0.20000000298023224f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E0C = 0.11999999731779099f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E10 = 768.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E14 = 65536.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E18 = 120.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E1C = 22500.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E20 = 0.05000000074505806f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E24 = 512.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E28 = 0.020000001415610313f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E2C = 240.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E30 = 360.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E34 = 9.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E38 = 60.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E3C = 100.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E40 = 3.3333332538604736f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E44 = -7.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E48 = 18.0f;
__declspec(section ".sdata2") f32 lbl_805D9E4C = 350.0f;
__declspec(section ".sdata2") f32 lbl_805D9E50 = 250.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E54 = 32768.0f;
__declspec(section ".sdata2") extern const f32 lbl_805D9E58 = 25.0f;
