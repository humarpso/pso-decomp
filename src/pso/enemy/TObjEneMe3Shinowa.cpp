#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PSO_VCALL_VObj_18_4a41ce_m93(_self) (((VObj_18_4a41ce *)(_self))->m93())
#define PSO_VCALL_VObj_14_763762_m2(_self) (((VObj_14_763762 *)(_self))->m2())
#define PSO_VCALL_VObj_14_763762_m4(_self) (((VObj_14_763762 *)(_self))->m4())
#define PSO_VCALL_VObj_18_4a41ce_m100(_self) (((VObj_18_4a41ce *)(_self))->m100())
#define PAD_VIRT virtual void CAT(pv, __LINE__)();
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

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

struct VBase_18_2add4a { char pad[0x18]; };

struct VObj_18_2add4a : VBase_18_2add4a {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK *, M2C_UNK *);
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
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual void m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual u32 m100();
};

struct VBase_18_a1ce10 { char pad[0x18]; };
struct VObj_18_a1ce10 : VBase_18_a1ce10 {
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
    virtual u32 m16(void *);
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
    virtual M2C_UNK m91();
    virtual M2C_UNK m92();
    virtual void m93();
    virtual M2C_UNK m94();
};

struct Vec_800E5F64 { f32 x, y, z; };

struct VBase_18_dc3190 { char pad[0x18]; };

struct VObj_18_dc3190 : VBase_18_dc3190 {
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
    virtual M2C_UNK m87();
    virtual void m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
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
    virtual void m101();
    virtual s32 m102(f32);
};

struct VBase_18_4f5f2e { char pad[0x18]; };

struct VObj_18_4f5f2e : VBase_18_4f5f2e {
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
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
    virtual void m104();
    virtual M2C_UNK m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual M2C_UNK m110();
};

struct Info_800E5CE4 { u8 pad[0x8]; f32 f8; u8 pad2[0x14]; s32 f20; };

extern "C" const u32 TObjEneMe3ShinowaMirage__data_805DA5E8[1];
extern "C" const u32 TObjEneMe3ShinowaMirage__data_805DA5EC[1];
extern "C" const u32 lbl_805DA5F0[1];
extern "C" const u32 TObjEneMe3ShinowaMirage__data_805DA5F4[1];
extern "C" const u32 lbl_805DA5F8[1];
extern "C" const u32 lbl_805DA5FC[1];
extern "C" const u32 lbl_805DA600[1];
extern "C" const u32 lbl_805DA604[1];
extern "C" const u32 TObjEneMe3ShinowaMirage__data_805DA608[1];
extern "C" const u32 lbl_805DA60C[1];
extern "C" const u32 lbl_805DA610[1];
extern "C" const u32 lbl_805DA614[1];
extern "C" const u32 lbl_805DA618[1];
extern "C" const u32 lbl_805DA61C[1];
extern "C" const u32 lbl_805DA620[1];
extern "C" const u32 lbl_805DA624[1];
#define TObjEneMe3ShinowaMirage__data_805DA5E8 (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA5E8)
#define TObjEneMe3ShinowaMirage__data_805DA5EC (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA5EC)
#define lbl_805DA5F0 (*(const f32 *)lbl_805DA5F0)
#define TObjEneMe3ShinowaMirage__data_805DA5F4 (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA5F4)
#define lbl_805DA5F8 (*(const f32 *)lbl_805DA5F8)
#define lbl_805DA5FC (*(const f32 *)lbl_805DA5FC)
#define lbl_805DA600 (*(const f32 *)lbl_805DA600)
#define lbl_805DA604 (*(const f32 *)lbl_805DA604)
#define TObjEneMe3ShinowaMirage__data_805DA608 (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA608)
#define lbl_805DA60C (*(const f32 *)lbl_805DA60C)
#define lbl_805DA610 (*(const f32 *)lbl_805DA610)
#define lbl_805DA614 (*(const f32 *)lbl_805DA614)
#define lbl_805DA618 (*(const f32 *)lbl_805DA618)
#define lbl_805DA61C (*(const f32 *)lbl_805DA61C)
#define lbl_805DA620 (*(const f32 *)lbl_805DA620)
#define lbl_805DA624 (*(const f32 *)lbl_805DA624)

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
u32 csnVecterUnder(void *, int);
M2C_UNK spawn_particle_effect(void *, int);
s32 enemy_check_target_valid(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK reset_timer__11TBoss4Type3FPv(void *);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *, s32);
M2C_UNK play_sound_effect(void *, void *, int, int);
M2C_UNK mult_vec_array__10TObjPlayerFUii(int, int, void *, int);
M2C_UNK set_matrix_identity(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern const f64 TObjEneMe3ShinowaMirage__data_8043CFE0;
extern s32 TObjEneMe3ShinowaMirage__data_805D52AC;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5E4;
void TObjEneMe3ShinowaMirage__sub_800E5F64(u8 *arg0, s32 arg1);
struct Tgt_800E54E8 { u16 id; u8 pad[6]; };
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32, f32);
M2C_UNK rotate_xz_pair_by_angle(void *, void *, s32);
void *create_particle_emitter(void *, s32);
M2C_UNK copy_vec3__11TBoss4Type2FPvPv(void *, void *);
M2C_UNK set_flags__11TBoss4Type2FPvUi(void *, u32);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);
M2C_UNK enemy_set_target_id(void *, u16);
s32 transform_relative_position__9TObjEneDDFPvPv(void *, void *);
M2C_UNK calc_wall_clamped_destination(void *, void *, f32, f32, f32);
s32 collect_target_candidates__9TObjEneDDFif(void *, f32);
M2C_UNK subtract_vector(void *, void *);
extern Tgt_800E54E8 lbl_80500B98[];
f64 atan2_float(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0);
s32 TObjEneMe3ShinowaMirage__sub_800E701C(u8 *arg0);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 approach_angle_limited(int, int, int);
M2C_UNK advance_animation_playback(void *, s32);
M2C_UNK play_sound_effect(void *, void *, int, int);
extern const f64 TObjEneMe3ShinowaMirage__data_8043CFE0;
extern const f32 lbl_805DA5BC;
extern const f32 TObjEneMe3ShinowaReal__data_805DA5CC;
void TObjEneMe3ShinowaReal__sub_800E5950(u8 *arg0, s32 arg1);
f64 atan2_float(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK move_to_shot_position__9TObjEneDDFPvfff(void *, void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK reset_timer__11TBoss4Type3FPv(void *);
s32 approach_angle_limited(int, int, int);
M2C_UNK advance_animation_playback(void *, s32);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f64 TObjEneMe3ShinowaMirage__data_8043CFE0;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 lbl_805DA5D4;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5E4;
void TObjEneMe3ShinowaMirage__sub_800E5CE4(u8 *arg0, s32 arg1);
}

extern "C" {

struct Base_A_800E47DC { char pad[0x18]; };

struct V_A_800E47DC : Base_A_800E47DC {
    virtual void m0();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m93();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m100();
};

struct Base_VT_800E47DC { char pad[0x18]; };

struct VObj_DD_800E47DC : Base_VT_800E47DC {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    virtual void m93();
    PADV4
    PADV
    PADV
    virtual void m100();
};

struct Base_800E7034_800E47DC { char pad[0x18]; };

struct VObj_800E7034_800E47DC : Base_800E7034_800E47DC {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
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
    virtual void m84(); virtual void m85(); virtual void m86();
};

struct Base_800E707C_800E47DC { char pad[0x18]; };

struct VObj_800E707C_800E47DC : Base_800E707C_800E47DC {
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

struct RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_800E4D7C_lbl_80500FF4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800F4758_lbl_8050110C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct VBase_18_599a64 { char pad[0x18]; };

struct VObj_18_599a64 : VBase_18_599a64 {
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
};

struct Stack_800E6BB8 {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_14_948132 { char pad[0x14]; };

struct VObj_14_948132 : VBase_14_948132 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct VBase_18_4a41ce
{
  char pad[0x18];
};

struct VObj_18_4a41ce : VBase_18_4a41ce {
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
    virtual M2C_UNK m100();
};

struct VBase_14_763762
{
  char pad[0x14];
};

struct VObj_14_763762 : VBase_14_763762 {
    virtual void m0();
    virtual void m1();
    virtual M2C_UNK m2();
    virtual void m3();
    virtual s32 m4();
};

struct RecoveredFields_800E50D8_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0x30A];
  s32 field_3C4;
  u8 unknown_3C8[0x3C];
  s32 field_404;
};

struct Info_800E6F0C { u8 pad[0x18]; s32 frame; s32 frame_1C; };

struct VBase_18_800E530C { char pad[0x18]; };
struct VObj_18_800E530C : VBase_18_800E530C {
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
};

struct Obj_800E6F0C { u8 pad[0x38]; u8 pos[0x3c0 - 0x38]; s32 kind; };

typedef struct { f32 x, y, z; } Vec_800E4FE8;

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

struct Base_800E6DD8 { u8 pad[0x18]; };

struct Obj_800E6DD8 : Base_800E6DD8 {
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual void p14();
    virtual void p15();
    virtual void p16();
    virtual void p17();
    virtual void p18();
    virtual void p19();
    virtual void p20();
    virtual void p21();
    virtual void p22();
    virtual void p23();
    virtual void p24();
    virtual void p25();
    virtual void p26();
    virtual void p27();
    virtual void p28();
    virtual void p29();
    virtual void p30();
    virtual void p31();
    virtual void p32();
    virtual void p33();
    virtual void p34();
    virtual void p35();
    virtual void p36();
    virtual void p37();
    virtual void p38();
    virtual void p39();
    virtual void p40();
    virtual void p41();
    virtual void p42();
    virtual void p43();
    virtual void p44();
    virtual void p45();
    virtual void p46();
    virtual void p47();
    virtual void p48();
    virtual void p49();
    virtual void p50();
    virtual void p51();
    virtual void p52();
    virtual void p53();
    virtual void p54();
    virtual void p55();
    virtual void p56();
    virtual void p57();
    virtual void p58();
    virtual void p59();
    virtual void p60();
    virtual void p61();
    virtual void p62();
    virtual void p63();
    virtual void p64();
    virtual void p65();
    virtual void p66();
    virtual void p67();
    virtual void p68();
    virtual void p69();
    virtual void p70();
    virtual void p71();
    virtual void p72();
    virtual void p73();
    virtual void p74();
    virtual void p75();
    virtual void p76();
    virtual void p77();
    virtual void p78();
    virtual void p79();
    virtual void p80();
    virtual void p81();
    virtual void p82();
    virtual void p83();
    virtual void p84();
    virtual void p85();
    virtual void p86();
    virtual void p87();
    virtual void p88();
    virtual void p89();
    virtual void p90();
    virtual void p91();
    virtual void p92();
    virtual void p93();
    virtual void p94();
    virtual void p95();
    virtual void p96();
    virtual void p97();
    virtual void p98();
    virtual void p99();
    virtual void p100();
    virtual void p101();
    virtual void p102();
    virtual void p103();
    virtual void p104();
    virtual void p105();
    virtual void p106();
    virtual void p107();
    virtual void p108();
    virtual void p109();
    virtual void p110();
    virtual void v111(s32);
    virtual void v112(s32);
    virtual void v113(s32);
    virtual void v114(s32);
};

struct VBase_18_82072c { char pad[0x18]; };

struct VObj_18_82072c : VBase_18_82072c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
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
    virtual M2C_UNK m106();
    virtual s32 m107();
    virtual M2C_UNK m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual void m114();
    virtual void m115();
    virtual M2C_UNK m116();
};

struct VBase_18_64d9d3 { char pad[0x18]; };

struct VObj_18_64d9d3 : VBase_18_64d9d3 {
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

struct Vec_800E4DD0 { f32 x, y, z; };

struct VBase_18_e66632 { char pad[0x18]; };

struct VObj_18_e66632 : VBase_18_e66632 {
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
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual s32 m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual M2C_UNK m109();
};

struct VBase_18_fd404c { char pad[0x18]; };

struct VObj_18_fd404c : VBase_18_fd404c {
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
    virtual M2C_UNK m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase18b_800e70d4_800E47DC { char pad[0x18]; };

struct VObj18b_800e70d4_800E47DC : VBase18b_800e70d4_800E47DC {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4(void *, void *);
};

typedef char RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0_size[sizeof(RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0) == 0x24 ? 1 : -1];

typedef char RecoveredGlobal_800E4D7C_lbl_80500FF4_size[sizeof(RecoveredGlobal_800E4D7C_lbl_80500FF4) == 0xC ? 1 : -1];

struct RecoveredGlobal_800E4D7C_lbl_80500FF4;

typedef struct RecoveredFields_800E50D8_arg0 RecoveredFields_800E50D8_arg0;

typedef struct VBase_14_763762 VBase_14_763762;

typedef struct VBase_18_4a41ce VBase_18_4a41ce;

typedef struct VObj_14_763762 VObj_14_763762;

typedef struct VObj_18_4a41ce VObj_18_4a41ce;

struct Info_800E6F0C;

typedef char RecoveredGlobal_800F4758_lbl_8050110C_size[sizeof(RecoveredGlobal_800F4758_lbl_8050110C) == 0x14 ? 1 : -1];

struct E71ACBase_800e71ac_800E71A8 { char pad[0x14]; };

struct E71ACObj_800e71ac_800E71A8 : E71ACBase_800e71ac_800E71A8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct E71FCBase_800e71fc_800E71A8 { char pad[0x14]; };

struct E71FCObj_800e71fc_800E71A8 : E71FCBase_800e71fc_800E71A8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct VBase_18_c44252 { char pad[0x18]; };

struct VObj_18_c44252 : VBase_18_c44252 {
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
};

struct Stack_800E7324 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800E7324_lbl_8043CF94 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec_800E75AC { f32 x; f32 y; f32 z; };

struct Node_800E75AC { u8 pad[0x2c]; void *child; };

struct Obj_800E75AC { u8 pad[0x34]; Node_800E75AC *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

struct Sub_800E750C { f32 f0; u8 pad4[4]; f32 f8; f32 fC; f32 f10; s32 f14; s32 f18; };

struct Obj_800E750C { u8 pad0[0x60]; s32 f60; u8 pad1[0xA4 - 0x64]; Sub_800E750C *fA4; };

struct Obj_800E750C;

struct E_800E728C { u8 pad[0x60]; s32 f60; u8 pad64[0x390 - 0x64]; s32 f390; u8 pad394[0x3AC - 0x394]; f32 f3ac; u8 pad3b0[0x3C4 - 0x3B0]; s32 f3c4; };

typedef char RecoveredGlobal_800E7324_lbl_8043CF94_size[sizeof(RecoveredGlobal_800E7324_lbl_8043CF94) == 0xC ? 1 : -1];

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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual M2C_UNK m98();
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
    virtual void m114();
    virtual M2C_UNK m115();
};

struct VBase_800E7884 { u8 pad[0x14]; };

struct VObj_800E7884 : VBase_800E7884 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    u8 pad18[4];
};

struct Tbl_800E7884 { u8 pad[0xC]; s32 t[3][2]; };

struct Mirage_800E7884 {
    u8 pad0[0x34];
    s32 f34;
    u8 pad38[0x3C - 0x38];
    f32 f3C;
    u8 pad40[0xB0 - 0x40];
    s32 fB0;
    u8 padB4[0xB8 - 0xB4];
    s16 fB8;
    u8 padBA[0x2CC - 0xBA];
    s16 f2CC;
    u8 pad2CE[0x350 - 0x2CE];
    void *f350;
    u8 pad354[0x37C - 0x354];
    f32 f37C;
    u8 pad380[0x3C0 - 0x380];
    s32 f3C0;
    s32 f3C4;
    f32 f3C8;
    f32 f3CC;
    s32 f3D0;
    s32 f3D4;
    s32 f3D8;
    s16 f3DC;
    void *f3E0;
    void *f3E4;
    VObj_800E7884 sub;
    s32 f404;
    s32 f408;
    s32 f40C;
    f32 f410;
    f32 f414;
    f32 f418;
    f32 f41C;
    f32 f420;
    s32 f424;
    s32 f428;
};

struct Game_800E7884 { u8 pad[0x42C]; u8 *mdl; s32 f430; };

s32 get_main_phase();
f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
void set_field_b8__14TObjEnePanarmsFPvs(void *p, s16 v);
void set_field_dc__10TObjPlayerFPvi(void *p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void fn_8002B630(void *, void *, s32);
M2C_UNK init_zako__15TObjBoss2TunnelFPvPv(void *, void *, int);
f32 clamp_velocity__15TObjBoss2TunnelFPv(Vec_800E4FE8 *);
s32 check_demo_mode__10TObjPlayerFv();
s32 enemy_check_target_valid(void *);
M2C_UNK enemy_turn_and_move_on_ground(void *, int, f32);
M2C_UNK update_angle__14TObjEneEpsilonFPvi(void *, int);
s32 enemy_validate_retained_target(void *, int);
void enemy_init_validate_period(void *, s32);
M2C_UNK enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
void enemy_init_acquire_period(void *, s32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void init_object__9TObjEneDDFPv(void *);
s32 clamp_frame_index__9TObjEneDDFi(s32);
s32 check_v2_mode__9TObjEneDDFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 reset_hp__9TObjEneDDFPv(void *, int, int, int);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
void check_state_flag_4__9TObjEneDDFPv(void *);
M2C_UNK TObjEneDD__sub_800BA438(void *, void *);
void init_model__9TObjEneDDFPv(void *, void *, s32);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK clear_attack_receipts(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
int get_target_info__9TObjEneDDFPv(void*);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void init_position_vectors__9TObjEneDDFPv(u8 *arg0);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
void * create__12TObjEneSaverFPvPv(void *arg0, void *arg1);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(int, void *, int, void *, int);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *, f32);
M2C_UNK spawn_effect_f8__10TObjPlayerFii(void *, int);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
void update_mirage__23TObjEneMe3ShinowaMirageFPv(void* p);
void draw_model__23TObjEneMe3ShinowaMirageFPv(u8 *arg0);
void advance_camera_ctrl_step__23TObjEneMe3ShinowaMirageFv(void);
void TObjEneMe3ShinowaMirage__sub_800E4DC4(void);
void TObjEneMe3ShinowaMirage__sub_800E4DC8(void);
void TObjEneMe3ShinowaMirage__sub_800E4DCC(void);
void state_break_apart__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E4FE8(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E50D8(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1);
void state_cast_support__23TObjEneMe3ShinowaMirageFPvi(void *, s32);
void TObjEneMe3ShinowaMirage__sub_800E54E8(void *, s32);
void state_chase_target__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E66FC(u8 *, s32);
s32 enemy_has_live_target(void *);
void TObjEneMe3ShinowaMirage__sub_800E69F0(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E6BB8(u8 *arg0, s32 arg1);
void action__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1);
void dispatch_action__23TObjEneMe3ShinowaMirageFPvUii(Obj_800E6DD8 *arg0, u32 arg1, s32 arg2);
void TObjEneMe3ShinowaMirage__sub_800E6F0C(Obj_800E6F0C *self);
void TObjEneMe3ShinowaMirage__sub_800E6F64(u8 *arg0);
s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0);
int select_and_apply_target__23TObjEneMe3ShinowaMirageFPv(void* p);
s32 TObjEneMe3ShinowaMirage__sub_800E701C(u8 *arg0);
void update_collision__23TObjEneMe3ShinowaMirageFPv(void *arg0);
void update_by_distance__23TObjEneMe3ShinowaMirageFPv(void *arg0);
void apply_effect_pair__23TObjEneMe3ShinowaMirageFPv(u8 *arg0);
void TObjEneMe3Shinowa__sub_800E71A8(void);
void dispatch_if_active__17TObjEneMe3ShinowaFPv(u8 *arg0);
s32 update_effect__17TObjEneMe3ShinowaFPv(u8 *arg0);
void TObjEneMe3Shinowa__sub_800E7250(u8 *arg0);
void TObjEneMe3Shinowa__sub_800E7268(u8 *arg0);
void TObjEneMe3Shinowa__vt105(void);
u8 can_hit_same_target__23TObjEneMe3ShinowaMirageFPv(E_800E728C *arg0);
void update_player_state_default__23TObjEneMe3ShinowaMirageFPv(u8 *arg0);
void TObjEneMe3ShinowaMirage__sub_800E7378(u8 *arg0);
s32 check_in_range__23TObjEneMe3ShinowaMirageFPv(void *arg0);
u8 check_body_collision_at__23TObjEneMe3ShinowaMirageFPvif(Obj_800E750C *arg0, s32 arg1, f32 farg0);
f32 get_node_world_y__23TObjEneMe3ShinowaMirageFPv(Obj_800E75AC *self);
void fn_800E762C(void);
void TObjEneMe3Shinowa__sub_800E7630(u8 *arg0);
void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p);
void TObjEneMe3Shinowa__sub_800E767C(void);
void TObjEneMe3Shinowa__vt60(u8 *arg0);
void TObjEneMe3Shinowa__vt61(void* p);
void TObjEneMe3Shinowa__sub_800E7720(void);
void TObjEneMe3Shinowa__sub_800E7724(u8 *arg0);
void * __dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1);
void * TObjEneMe3Shinowa__ct(void *arg0);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK advance_animation_playback(void *, s32);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
void free_collision_body_parts(void *);
s32 get_stat_by_key_state__10TObjPlayerFPv(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK play_sound_effect(void *, void *, int, int);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
M2C_UNK create__10TTecDebandFiii(void *, void *, s32);
M2C_UNK create__9TTecSiftaFPvPvPv(void *, void *, s32);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void bind_motion_context(s32, f32);
s32 compose_motion_node_matrix(void *);
s32 matrix_mult_vec(int, void *, void *);
M2C_UNK mult_vec_array__10TObjPlayerFUii(int, int, void *, int);
M2C_UNK set_matrix_identity(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
s32 push_matrix_from(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);

extern RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0 TObjEneMe3ShinowaMirage__data_80500FC0;
extern Info_800E6F0C *TObjEneMe3ShinowaMirage__mirage_info_table[];
extern u8 *TObjEneMe3ShinowaMirage__data_805D5298;
extern s32 TObjEneMe3ShinowaMirage__data_805D52A0;
extern s32 TObjEneMe3ShinowaMirage__data_805D52A4;
extern s32 TObjEneMe3ShinowaMirage__data_805D52A8;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5E4;
extern const f32 TObjEneMe3ShinowaReal__data_805DA5CC;
extern M2C_UNK __vt__17TObjEneMe3Shinowa[];
extern u8 lbl_8043CE00[];
extern RecoveredGlobal_800E7324_lbl_8043CF94 lbl_8043CF94;
extern RecoveredGlobal_800F4758_lbl_8050110C lbl_80500FEC;
extern RecoveredGlobal_800E4D7C_lbl_80500FF4 lbl_80500FF4;
extern s32 *lbl_80501000[];
extern u8 identity_matrix[];
extern void *lbl_805D2AC8;
extern s32 TObjEneMe3ShinowaMirage__render_node_index;
extern s32 lbl_805D5660;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805DA5D8;
extern const f32 lbl_805DA5E0;
extern s32 lbl_805DA634;
extern const f32 lbl_805DA638;
extern const f32 lbl_805DA63C;
extern const f32 lbl_805DA640;
extern const f32 lbl_805DA644;
extern const f32 lbl_805DA648;
extern const f32 lbl_805DA64C;
extern const f32 lbl_805DA650;
extern s32 some_id_805c6f74;

#define PAD_VIRT virtual void CAT(pv, __LINE__)();
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjEneDD__vt100();
}
extern "C" {
void TObjEneDD__vt77();
}
extern "C" {
void TObjEneDD__vt82();
}
extern "C" {
void TObjEneDD__vt83();
}
extern "C" {
void TObjEneDD__vt84();
}
extern "C" {
void TObjEneDD__vt87();
}
extern "C" {
void TObjEneDD__vt88();
}
extern "C" {
void TObjEneDD__vt89();
}
extern "C" {
void TObjEneDD__vt90();
}
extern "C" {
void TObjEneDD__vt91();
}
extern "C" {
void TObjEneDD__vt92();
}
extern "C" {
void TObjEneDD__vt93();
}
extern "C" {
void TObjEneDD__vt94();
}
extern "C" {
void TObjEneDD__vt95();
}
extern "C" {
void TObjEneDD__vt96();
}
extern "C" {
void TObjEneDD__vt97();
}
extern "C" {
void TObjEneDD__vt98();
}
extern "C" {
void TObjEneDD__vt99();
}
extern "C" {
void TObjEneEpsilon__vt81();
}
extern "C" {
void TObjEneMe3ShinowaMirage__sub_800E47DC();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt103();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt104();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt105();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt106();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt107();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt108();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt110();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt113();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt60();
}
extern "C" {
void TObjEneMe3ShinowaMirage__vt61();
}
extern "C" {
void TObjPlayer__sub_8000FF3C();
}
extern "C" {
void TObjPlayer__sub_80010A80();
}
extern "C" {
void consume_timer_field__10TObjPlayerFPvi();
}
extern "C" {
void TObjPlayer__sub_80014830();
}
extern "C" {
void TObjPlayer__sub_80014838();
}
extern "C" {
void TObjPlayer__sub_80014840();
}
extern "C" {
void TObjPlayer__sub_80014890();
}
extern "C" {
void TObjPlayer__sub_80014894();
}
extern "C" {
void TObjPlayer__sub_80014898();
}
extern "C" {
void apply_slow_status__10TObjPlayerFPv();
}
extern "C" {
void update_shock_clock__10TObjPlayerFPv();
}
extern "C" {
void TObjPlayer__sub_800172CC();
}
extern "C" {
void TObjPlayer__sub_80018E6C();
}
extern "C" {
void TObjPlayer__sub_80019568();
}
extern "C" {
void TObjPlayer__sub_800F65D0();
}
extern "C" {
void apply_hit_message_flags__10TObjPlayerFPvPv();
}
extern "C" {
void __dt__23TObjEneMe3ShinowaMirageFv();
}
extern "C" {
void add_actor_exp();
}
extern "C" {
void apply_action_hold_status();
}
extern "C" {
void apply_anti_technique__10TObjPlayerFv();
}
extern "C" {
void apply_attack_stat_status__10TObjPlayerFv();
}
extern "C" {
void apply_confusion_status__10TObjPlayerFv();
}
extern "C" {
void apply_defense_stat_status__10TObjPlayerFv();
}
extern "C" {
void apply_knockback_from_attacker();
}
extern "C" {
void apply_movement_ailment__10TObjPlayerFv();
}
extern "C" {
void apply_object_set_data();
}
extern "C" {
void apply_paralysis__10TObjPlayerFv();
}
extern "C" {
void apply_poison_status__10TObjPlayerFv();
}
extern "C" {
void apply_set_data__9TObjEnemyFPvPv();
}
extern "C" {
void apply_shock_status__10TObjPlayerFv();
}
extern "C" {
void apply_switch_attack__10TObjPlayerFi();
}
extern "C" {
void calc_distance_accuracy_penalty__10TObjPlayerFv();
}
extern "C" {
void classify_actor_view_detail();
}
extern "C" {
void clear_all_status_effects();
}
extern "C" {
void clear_harmful_statuses__10TObjPlayerFv();
}
extern "C" {
void cure_paralysis__10TObjPlayerFv();
}
extern "C" {
void cure_poison_ailment();
}
extern "C" {
void enemy_spawn_jellen_effect();
}
extern "C" {
void enemy_spawn_zalure_effect();
}
extern "C" {
void fn_80010EBC();
}
extern "C" {
void fn_80010EC0();
}
extern "C" {
void fn_80010EC4();
}
extern "C" {
void fn_80010EC8();
}
extern "C" {
void clear_lobby_object_state();
}
extern "C" {
void get_actor_body_center();
}
extern "C" {
void get_actor_level_index();
}
extern "C" {
void get_enemy_name__14TObjEnePanarmsFPv();
}
extern "C" {
void get_pos__10TObjPlayerFii();
}
extern "C" {
void has_flag_0x800__10TObjPlayerFPv();
}
extern "C" {
void is_actor_cadence_frame();
}
extern "C" {
void is_target_in_attack_range__10TObjPlayerFv();
}
extern "C" {
extern u8 lbl_8043CE3C[];
}
extern "C" {
extern u8 lbl_8043CE4C[];
}
extern "C" {
extern u8 lbl_8043CE60[];
}
extern "C" {
extern u8 lbl_8043CE78[];
}
extern "C" {
extern u8 lbl_8043CE90[];
}
extern "C" {
extern u8 lbl_8043CEA4[];
}
extern "C" {
extern u8 lbl_8043CEBC[];
}
extern "C" {
extern u8 lbl_8043CED0[];
}
extern "C" {
extern u8 lbl_8043CEE8[];
}
extern "C" {
extern u8 lbl_8043CF00[];
}
extern "C" {
extern u8 lbl_8043CF14[];
}
extern "C" {
extern u8 lbl_8043CF28[];
}
extern "C" {
void receive_direct_attack__10TObjPlayerFv();
}
extern "C" {
void receive_physical_attack__10TObjPlayerFv();
}
extern "C" {
void receive_weapon_special_attack__10TObjPlayerFv();
}
extern "C" {
void render__23TObjEneMe3ShinowaMirageFv();
}
extern "C" {
void render_actor_shadows_default();
}
extern "C" {
void reset_actor_action_state();
}
extern "C" {
void reset_pose__10TObjPlayerFPv();
}
extern "C" {
void roll_physical_accuracy__10TObjPlayerFv();
}
extern "C" {
void run_task__23TObjEneMe3ShinowaMirageFv();
}
extern "C" {
void select_melee_contact_body__10TObjPlayerFv();
}
extern "C" {
void test_flag30_512__10TObjPlayerFPv();
}
extern "C" {
void test_flag_1000__10TObjPlayerFPv();
}
extern "C" {
void test_flag_256__10TObjPlayerFPv();
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_start_action__10TObjPlayerFPvii();
}
extern "C" {
void update_action_hold_status__10TObjPlayerFv();
}
extern "C" {
void update_action_timer__10TObjPlayerFPv();
}
extern "C" {
void update_actor_ground_y();
}
extern "C" {
void update_attack_stat_status();
}
extern "C" {
void update_defense_stat_status();
}
extern "C" {
void update_flag30_timer__10TObjPlayerFPv();
}
extern "C" {
void update_movement_status__10TObjPlayerFv();
}
extern "C" {
void update_object_view_visibility();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
extern void *lbl_80495C28[2];
extern void *lbl_80495C30[11];
void *TObjEneMe3ShinowaMirage__init_params[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *shinowa_mirage_model_init_data[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
__declspec(section ".data") void *lbl_80495C28[2] = {
    (void *)&lbl_8043CE3C, (void *)0x0,
};
void *lbl_80495C30[11] = {
    (void *)&lbl_8043CE4C, (void *)&lbl_8043CE60, (void *)&lbl_8043CE78, (void *)&lbl_8043CE90,
    (void *)&lbl_8043CEA4, (void *)&lbl_8043CEBC, (void *)&lbl_8043CED0, (void *)&lbl_8043CEE8,
    (void *)&lbl_8043CF00, (void *)&lbl_8043CF14, (void *)0x0,
};
void *shinowa_mirage_resource_descriptor[4] = {
    (void *)&lbl_8043CF28, (void *)&lbl_80495C28, (void *)&lbl_80495C30, (void *)0x1000a,
};
void *shinowa_mirage_motion_param_table[44] = {
    (void *)0x10000, (void *)0x7, (void *)0x3f000000, (void *)0x80000000,
    (void *)0x30000, (void *)0x0, (void *)0x3fc00000, (void *)0x80000000,
    (void *)0x30000, (void *)0x1, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x2, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x5, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f333333, (void *)0x0,
    (void *)0x10000, (void *)0x8, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f333333, (void *)0x80000000,
};
void *__vt__23TObjEneMe3ShinowaMirage[119] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__23TObjEneMe3ShinowaMirageFv, (void *)&run_task__23TObjEneMe3ShinowaMirageFv,
    (void *)&render__23TObjEneMe3ShinowaMirageFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneMe3Shinowa__sub_800E7720, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneMe3Shinowa__sub_800E767C, (void *)&TObjEneMe3ShinowaMirage__vt60, (void *)&TObjEneMe3ShinowaMirage__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&dispatch_action__23TObjEneMe3ShinowaMirageFPvUii,
    (void *)&TObjEneMe3Shinowa__sub_800E7630, (void *)&update_collision__23TObjEneMe3ShinowaMirageFPv, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&select_and_apply_target__23TObjEneMe3ShinowaMirageFPv, (void *)&TObjEneMe3ShinowaMirage__vt103, (void *)&TObjEneMe3ShinowaMirage__vt104, (void *)&TObjEneMe3ShinowaMirage__vt105,
    (void *)&TObjEneMe3ShinowaMirage__vt106, (void *)&TObjEneMe3ShinowaMirage__vt107, (void *)&TObjEneMe3ShinowaMirage__vt108, (void *)&TObjEneMe3Shinowa__sub_800E71A8,
    (void *)&TObjEneMe3ShinowaMirage__vt110, (void *)&action__23TObjEneMe3ShinowaMirageFPvi, (void *)&TObjEneMe3ShinowaMirage__sub_800E4DCC, (void *)&TObjEneMe3ShinowaMirage__vt113,
    (void *)&TObjEneMe3ShinowaMirage__sub_800E4DC4, (void *)&update_mirage__23TObjEneMe3ShinowaMirageFPv, (void *)&TObjEneMe3ShinowaMirage__sub_800E47DC,
};
#define shinowa_mirage_model_init_data ((u8 *)shinowa_mirage_model_init_data)

extern "C" {
u8 check_body_collision_at__23TObjEneMe3ShinowaMirageFPvif(Obj_800E750C *arg0, s32 arg1, f32 farg0);
}

extern "C" {
u8 check_body_collision_at__23TObjEneMe3ShinowaMirageFPvif(Obj_800E750C *arg0, s32 arg1, f32 farg0);
}

extern "C" {
extern Info_800E6F0C *TObjEneMe3ShinowaMirage__mirage_info_table[];
}

void update_mirage__23TObjEneMe3ShinowaMirageFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { ((int (*)(void*))fn_800E762C)(p); TObjEneMe3ShinowaMirage__sub_800E6F64((u8 *)(p)); } }

void draw_model__23TObjEneMe3ShinowaMirageFPv(u8 *arg0) {
    s32 var_r31;
    s32 var_r30;
    s32 i;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_82072c *)(arg0))->m116();
        return;
    }
    TObjEneMe3ShinowaMirage__sub_800E6FE0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 2) {
        var_r31 = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        var_r31 = ((VObj_18_82072c *)(arg0))->m9(lbl_805D9E88, lbl_805D9E84, TObjEneMe3ShinowaReal__data_805DA5CC);
    } else if (((VObj_18_82072c *)(arg0))->m8(lbl_805DA5D8, TObjEneMe3ShinowaReal__data_805DA5CC) != 0) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        ((VObj_18_82072c *)(arg0))->m106();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        update_secondary_light__9TObjEneDDFPv((void *) (arg0));
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        for (i = 0; i < 3; i++) {
            if (lbl_80501000[i] != NULL) {
                *lbl_80501000[i] = M2C_FIELD(arg0, s32 *, 0x3D0);
            }
        }
        var_r30 = 1;
        if ((((VObj_18_82072c *)(arg0))->m107() != 0) && (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0)) {
            var_r30 = 0;
        }
        if (var_r30 != 0) {
            push_matrix();
            post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
            translate_matrix((int) (0), (f32) (TObjEneMe3ShinowaMirage__data_805DA5B8), (f32) (M2C_FIELD(arg0, f32 *, 0x3CC)), (f32) (TObjEneMe3ShinowaMirage__data_805DA5B8));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            TObjEneMe3ShinowaMirage__render_node_index = 0;
            set_global_state__16TObjEneRe7BeruraFi((void *) (advance_camera_ctrl_step__23TObjEneMe3ShinowaMirageFv));
            if (var_r31 == 1) {
                draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            } else {
                render_world_model__10TObjPlayerFPv((void *) (arg0));
            }
            set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
            pop_matrix();
        }
        ((VObj_18_82072c *)(arg0))->m108();
        some_id_805c6f74 = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv((void *) (arg0));
        VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x2FC), (void *) (&lbl_80500FF4));
    } else if ((get_main_phase() == 0xF) || (is_split_screen() == 0)) {
        VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x2FC), (void *) ((u8 *)(arg0) + 0x38));
    }
    end_effect_render__13TParticleCtrlFv();
}

void advance_camera_ctrl_step__23TObjEneMe3ShinowaMirageFv(void) {
    if ((s32) TObjEneMe3ShinowaMirage__render_node_index == 1) {
        get_camera_ctrl__9TObjEneDDFPv((s32) &TObjEneMe3ShinowaMirage__data_80500FC0.value, (s32) &lbl_80500FF4.value);
    }
    TObjEneMe3ShinowaMirage__render_node_index += 1;
}

void TObjEneMe3ShinowaMirage__sub_800E4DC4(void) {  }

void TObjEneMe3ShinowaMirage__sub_800E4DC8(void) {  }

void TObjEneMe3ShinowaMirage__sub_800E4DCC(void) {  }

#pragma push
#pragma fp_contract on
void state_break_apart__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1) {
    Vec_800E4DD0 sp14;
    Vec_800E4DD0 sp8;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        ((VObj_18_64d9d3 *)(arg0))->m92();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        break;
    case 3:
    case 5:
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x404)) {
        case 0:
            ((void (*)())advance_animation_playback)();
            if ((objInBand__FP7GameObjf((void *) (arg0), lbl_805DA5E0) != 0) || (objInBand__FP7GameObjf((void *) (arg0), TObjEneMe3ShinowaMirage__data_805DA5E4) != 0)) {
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD12), arg0 + 0x38, 0, 0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
                M2C_FIELD(arg0, s32 *, 0x408) = 0;
                sp14.x = TObjEneMe3ShinowaMirage__data_805DA5B8;
                sp14.y = TObjEneMe3ShinowaMirage__data_805DA5E8;
                sp14.z = TObjEneMe3ShinowaMirage__data_805DA5EC;
                init_zako__15TObjBoss2TunnelFPvPv(&sp14, arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x60));
                spawn_effect_f8__10TObjPlayerFii(&sp14, 0x14);
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x408)++;
            if (M2C_FIELD(arg0, s32 *, 0x408) >= 0x14) {
                M2C_FIELD(arg0, s32 *, 0x404) = 2;
                M2C_FIELD(arg0, s32 *, 0x3C4) |= 2;
                create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneMe3ShinowaMirage__data_805D52A0, lbl_8043CE00, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x60));
                VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x38);
                sp8.x += TObjEneMe3ShinowaMirage__data_805DA5EC * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
                sp8.z += TObjEneMe3ShinowaMirage__data_805DA5EC * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
                trigger_dell_biter_events__10TObjPlayerFPv(&sp8);
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD16), arg0 + 0x38, 0, 0);
            }
            ((VObj_18_64d9d3 *)(arg0))->m100();
            break;
        case 2:
            queue_destruction__7TObjectFv(arg0);
            break;
        }
        break;
    }
}
extern int fold_flush_0;
#pragma pop

void TObjEneMe3ShinowaMirage__sub_800E4FE8(u8 *arg0, s32 arg1) {
    Vec_800E4FE8 v;
    f32 c;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        advance_animation_playback(arg0, arg1);
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
        }
        break;
    case 0:
        advance_animation_playback(arg0, arg1);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        c = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        move_clamped_on_ground__9TObjEneDDFPvfff(arg0, v.x, v.z, c);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805DA5F0;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805DA5F0;
        ((VObj_18_fd6cbb *) arg0)->m87();
        break;
    case 5:
        clear_attack_receipts(arg0);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E50D8(u8 *arg0, s32 arg1) {
  s32 temp_r0;
  s32 temp_r3;
  switch (arg1)
  {
    return;
    case 4:
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_B8 = 7;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(4));
      PSO_VCALL_VObj_18_4a41ce_m93(arg0);
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4 = (s32) (((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4 & 0xFFFFFFFC);
      temp_r3 = ((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4;
      if (temp_r3 & 0x80000)
    {
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4 = (s32) (temp_r3 & 0xFFF7FFFF);
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 2;
      return;
    }
      PSO_VCALL_VObj_14_763762_m2(((u8 *) arg0) + 1000);
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 1;
      return;
    case 3:
      if (((s32) ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404) == 2)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(0));
    }
    case 5:
      return;
    case 0:
      advance_animation_playback((void *)(arg0), (s32)(arg1));
      temp_r0 = ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404;
      switch (temp_r0)
    {
      case 0:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0)
      {
        ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 1;
      }
        break;
      case 1:
        if (PSO_VCALL_VObj_14_763762_m4(((u8 *) arg0) + 1000) != 0)
      {
        ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 2;
      }
        break;
    }
      PSO_VCALL_VObj_18_4a41ce_m100(arg0);
      break;
  }
}

void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 0xB);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        ((V_A_800E47DC *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        return;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv(TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
            transition_enemy_state(arg0, 4);
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x404) >= 0x5A) {
            transition_enemy_state(arg0, 9);
        }
        return;
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (temp_r4 + 1);
        advance_animation_playback(arg0, temp_r4);
        ((V_A_800E47DC *) arg0)->m100();
        break;
    case 5:
        break;
    }
}

void state_cast_support__23TObjEneMe3ShinowaMirageFPvi(void *arg0_, s32 arg1) {
#define arg0 ((u8 *)arg0_)
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        set_field_378__9TObjEneDDFPvi(arg0, 0xA);
        ((VObj_18_800E530C *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x3C4) &= ~3;
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x408) > TObjEneMe3ShinowaMirage__mirage_info_table[M2C_FIELD(arg0, s32 *, 0x3C0)]->frame_1C) {
            transition_enemy_state(arg0, 4);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0, arg1);
        switch (M2C_FIELD(arg0, s32 *, 0x404)) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                TObjEneMe3ShinowaMirage__sub_800E6F0C((Obj_800E6F0C *)arg0);
                if (check_v2_mode__9TObjEneDDFv() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x404) = 2;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x404) = 1;
                }
                M2C_FIELD(arg0, s32 *, 0x408) = 0;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x408)++;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x408)++;
            if (M2C_FIELD(arg0, s32 *, 0x408) == 5) {
                create__9TTecSiftaFPvPvPv(arg0, arg0 + 0x38, clamp_frame_index__9TObjEneDDFi(TObjEneMe3ShinowaMirage__mirage_info_table[M2C_FIELD(arg0, s32 *, 0x3C0)]->frame));
            } else if (M2C_FIELD(arg0, s32 *, 0x408) == 0xA) {
                create__10TTecDebandFiii(arg0, arg0 + 0x38, clamp_frame_index__9TObjEneDDFi(TObjEneMe3ShinowaMirage__mirage_info_table[M2C_FIELD(arg0, s32 *, 0x3C0)]->frame));
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
                M2C_FIELD(arg0, s32 *, 0x408) = 0;
            }
            break;
        }
        ((VObj_18_800E530C *)arg0)->m100();
        break;
    }
}
#undef arg0

#define arg0 ((u8 *)arg0_)
#define F(t, o) M2C_FIELD(arg0, t *, o)
#define VO ((VObj_18_a1ce10 *)(arg0))

#pragma push
#pragma opt_common_subs off
void TObjEneMe3ShinowaMirage__sub_800E54E8(void *arg0_, s32 arg1) {
    Vec_800E4FE8 savePos;
    Vec_800E4FE8 save2FC;
    Vec_800E4FE8 dest;
    s32 rot[3];
    f32 v;
    u8 *home = arg0 + 0x418;

    switch (arg1) {
    case 4: {
        F(s32, 0x3C4) &= ~3;
        VO->m94();
        VO->m92();
        F(s32, 0x404) = 0;
        F(s32, 0x408) = 0;
        F(f32, 0x410) = TObjEneMe3ShinowaMirage__data_805DA5DC;
        F(f32, 0x37C) = lbl_805DA5F8;
        F(s32, 0x40C) = ((F(s32, 0x3D4) - (s32)get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805DA5FC, TObjEneMe3ShinowaMirage__data_805DA5DC)) * 0x3333) / 40;
        VecCopy__FP3VecPC3Vec(home, arg0 + 0x38);
        F(void *, 0x424) = 0;
        F(void *, 0x428) = 0;
        set_active__9TObjEneDDFPv(arg0);
        break;
    }
    case 3: {
        if (F(s32, 0x404) >= 40) {
            TObjEneMe3Shinowa__sub_800E7268(arg0);
            s32 r = collect_target_candidates__9TObjEneDDFif(arg0, lbl_805DA600);
            if (r > 0) {
                enemy_set_target_id(arg0, lbl_80500B98[r - 1].id);
                transition_enemy_state(arg0, 4);
            } else {
                transition_enemy_state(arg0, 11);
            }
        }
        break;
    }
    case 0:
        advance_animation_playback(arg0, arg1);
        F(s32, 0x404)++;
        if (transform_relative_position__9TObjEneDDFPvPv(arg0, F(void *, 0x390)) != 0) {
            if ((s16)get_stat_by_key_state__10TObjPlayerFPv((s32)arg0) == (s16)get_stat_by_key_state__10TObjPlayerFPv(F(s32, 0x390))) {
                enemy_copy_target_destination(arg0);
            }
        }
        update_velocity__9TObjEneDDFPv(arg0);
        rotate_xz_pair_by_angle(arg0 + 0x3A0, arg0 + 0x3A8, F(s32, 0x40C));
        v = F(f32, 0x3AC);
        if (v > lbl_805DA604) {
            v -= TObjEneMe3ShinowaMirage__data_805DA608;
            if (v < lbl_805DA604) {
                v = lbl_805DA604;
            }
        } else if (v < lbl_805DA604) {
            v += TObjEneMe3ShinowaMirage__data_805DA608;
            if (v > lbl_805DA604) {
                v = lbl_805DA604;
            }
        }
        VecCopy__FP3VecPC3Vec(&savePos, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(&save2FC, arg0 + 0x2FC);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x394);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
        F(f32, 0x300) += TObjEneMe3ShinowaMirage__data_805DA5EC;
        v *= F(f32, 0x410);
        calc_wall_clamped_destination(arg0, &dest, -F(f32, 0x3A0), -F(f32, 0x3A8), v);
        if (VO->m16(&dest) == 0) {
            F(f32, 0x410) *= lbl_805DA5F0;
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &savePos);
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, &save2FC);
        } else {
            F(f32, 0x410) = TObjEneMe3ShinowaMirage__data_805DA5DC;
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &savePos);
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, &save2FC);
            subtract_vector(&dest, arg0 + 0x38);
            f32 len = clamp_velocity__15TObjBoss2TunnelFPv(&dest);
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, dest.x, dest.z, len);
        }
        F(s32, 0x60) = (s32)(TObjEneMe3ShinowaMirage__data_8043CFE0 * atan2_float(F(f32, 0x3A0), F(f32, 0x3A8)));
        if (F(s32, 0x40C) != 0) {
            rot[0] = 0;
            if (F(s32, 0x40C) > 0) {
                rot[1] = F(s32, 0x60);
            } else {
                rot[1] = F(s32, 0x60) - 0x8000;
            }
            rot[2] = -0x4000;
            if (F(void *, 0x424) == 0) {
                F(void *, 0x424) = create_particle_emitter(arg0 + 0x38, 0x115);
                if (F(void *, 0x424) != 0) {
                    enable__13TParticleCtrlFPv(F(void *, 0x424));
                    set_flags__11TBoss4Type2FPvUi(F(void *, 0x424), 2);
                }
            } else {
                copy_vec3__11TBoss4Type2FPvPv(F(void *, 0x424), rot);
                copy_pos__11TNowLoadingFPvPv(F(void *, 0x424), arg0 + 0x38);
            }
            if (F(void *, 0x428) == 0) {
                F(void *, 0x428) = create_particle_emitter(arg0 + 0x38, 0x116);
                if (F(void *, 0x428) != 0) {
                    enable__13TParticleCtrlFPv(F(void *, 0x428));
                    set_flags__11TBoss4Type2FPvUi(F(void *, 0x428), 2);
                }
            } else {
                copy_vec3__11TBoss4Type2FPvPv(F(void *, 0x428), rot);
                copy_pos__11TNowLoadingFPvPv(F(void *, 0x428), arg0 + 0x38);
            }
        }
        VO->m86();
        break;
    case 5:
        VO->m91();
        F(f32, 0x37C) = TObjEneMe3ShinowaMirage__data_805DA5E8;
        if (F(void *, 0x424) != 0) {
            queue_destruction__7TObjectFv(F(void *, 0x424));
            F(void *, 0x424) = 0;
        }
        if (F(void *, 0x428) != 0) {
            queue_destruction__7TObjectFv(F(void *, 0x428));
            F(void *, 0x428) = 0;
        }
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

#pragma pop
#undef arg0
#undef F
#undef VO

void TObjEneMe3ShinowaReal__sub_800E5950(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        set_field_378__9TObjEneDDFPvi(arg0, 7);
        ((VObj_18_dc3190 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C4) &= 0xFFFFFFFC;
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x404) = 3;
        if (((VObj_18_dc3190 *)(arg0))->m102(TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (TObjEneMe3ShinowaMirage__data_8043CFE0 * atan2_float((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8))));
            if (((s32 (*)(void *, s32, f32))check_body_collision_at__23TObjEneMe3ShinowaMirageFPvif)((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x8000), (f32) (lbl_805DA604)) == 0) {
                M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A0) * lbl_805DA5BC);
                M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A8) * lbl_805DA5BC);
                M2C_FIELD(arg0, s32 *, 0x404) = 0;
                M2C_FIELD(arg0, f32 *, 0x410) = (f32) lbl_805DA60C;
            }
        }
        set_active__9TObjEneDDFPv((void *) (arg0));
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) == 3) {
            if (((s32 (*)(void))TObjEneMe3ShinowaMirage__sub_800E6FE0)() != 0) {
                transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (0xA)));
            } else if ((M2C_FIELD(arg0, s32 *, 0x3C4) & 0x20000) || (TObjEneMe3ShinowaMirage__sub_800E701C(arg0) == 0)) {
                M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFCFFFF);
                if ((check_v2_mode__9TObjEneDDFv() != 0) && (TObjEneMe3ShinowaMirage__sub_800E701C(arg0) == 0)) {
                    transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (0x10)));
                } else {
                    transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 0x20000);
                transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (0xE)));
            }
        }
        break;
    case 0:
        ((M2C_UNK (*)(void))advance_animation_playback)();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x404);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x40C)), (int) (0x31C7));
            if ((M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8)) >= TObjEneMe3ShinowaReal__data_805DA5CC) {
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
                ((VObj_18_dc3190 *)(arg0))->m89();
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD11), arg0 + 0x38, 0, 0);
            }
            ((VObj_18_dc3190 *)(arg0))->m100();
            ((VObj_18_dc3190 *)(arg0))->m87();
            return;
        case 1:
            if ((M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8)) >= lbl_805DA610) {
                M2C_FIELD(arg0, s32 *, 0x404) = 2;
                ((VObj_18_dc3190 *)(arg0))->m90();
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD12), arg0 + 0x38, 0, 0);
                spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF3));
            }
            move_clamped_on_ground__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (M2C_FIELD(arg0, f32 *, 0x410)));
            ((VObj_18_dc3190 *)(arg0))->m86();
            return;
        case 2:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 3;
            }
            ((VObj_18_dc3190 *)(arg0))->m100();
            ((VObj_18_dc3190 *)(arg0))->m87();
            return;
        }
        break;
    case 5:
        ((VObj_18_dc3190 *)(arg0))->m90();
        clear_field_388__9TObjEneDDFPv((void *) (arg0));
        break;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E5CE4(u8 *arg0, s32 arg1) {
    s32 var_r4;
    Info_800E5CE4 *info;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VObj_18_4f5f2e *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 0x10000);
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        reset_timer__11TBoss4Type3FPv(M2C_FIELD(arg0, void **, 0x3E0));
        reset_timer__11TBoss4Type3FPv(M2C_FIELD(arg0, void **, 0x3E4));
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            ((VObj_18_4f5f2e *)(arg0))->m105();
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0, arg1);
        switch (M2C_FIELD(arg0, s32 *, 0x404)) {
        case 0:
            ((VObj_18_4f5f2e *)(arg0))->m103();
            if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjEneMe3ShinowaMirage__data_805DA5EC) {
                if (update_death_check__14TObjEneEpsilonFPv(arg0) != 0) {
                    enemy_copy_target_destination(arg0);
                    update_velocity__9TObjEneDDFPv(arg0);
                    var_r4 = (s32) (TObjEneMe3ShinowaMirage__data_8043CFE0 * atan2_float(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)));
                } else {
                    var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
                }
                M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), var_r4, 0x300);
                M2C_FIELD(arg0, f32 *, 0x3A0) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
                M2C_FIELD(arg0, f32 *, 0x3A8) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
            }
            ((VObj_18_4f5f2e *)(arg0))->m110();
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEneMe3ShinowaMirage__data_805DA5B8 && M2C_FIELD(arg0, f32 *, 0xC0) <= lbl_805DA5D4) {
                info = ((Info_800E5CE4 * *)&TObjEneMe3ShinowaMirage__mirage_info_table)[M2C_FIELD(arg0, s32 *, 0x3C0)];
                move_to_shot_position__9TObjEneDDFPvfff(arg0, info, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), info->f8);
            } else {
                ((VObj_18_4f5f2e *)(arg0))->m100();
            }
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= 25.0f) {
                M2C_FIELD(arg0, f32 *, 0xC0) = 25.0f;
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x408)++;
            if (M2C_FIELD(arg0, s32 *, 0x408) <= ((Info_800E5CE4 * *)&TObjEneMe3ShinowaMirage__mirage_info_table)[M2C_FIELD(arg0, s32 *, 0x3C0)]->f20) {
                M2C_FIELD(arg0, f32 *, 0xC0) = TObjEneMe3ShinowaMirage__data_805DA5E4;
            }
            ((VObj_18_4f5f2e *)(arg0))->m100();
            break;
        }
        ((VObj_18_4f5f2e *)(arg0))->m87();
        break;
    }
}

#pragma push
#pragma fp_contract on
#undef TObjEneMe3ShinowaMirage__data_805DA5E8
#undef TObjEneMe3ShinowaMirage__data_805DA5EC
#undef lbl_805DA5F0
#undef TObjEneMe3ShinowaMirage__data_805DA5F4
#undef lbl_805DA5F8
#undef lbl_805DA5FC
#undef lbl_805DA600
#undef lbl_805DA604
#undef TObjEneMe3ShinowaMirage__data_805DA608
#undef lbl_805DA60C
#undef lbl_805DA610
#undef lbl_805DA614
#undef lbl_805DA618
#undef lbl_805DA61C
#undef lbl_805DA620
#undef lbl_805DA624
__declspec(section ".sdata2") extern const u32 TObjEneMe3ShinowaMirage__data_805DA5E8[1] = { 0x41200000 };
__declspec(section ".sdata2") extern const u32 TObjEneMe3ShinowaMirage__data_805DA5EC[1] = { 0x41a00000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA5F0[1] = { 0x3f4ccccd };
__declspec(section ".sdata2") extern const u32 TObjEneMe3ShinowaMirage__data_805DA5F4[1] = { 0x43480000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA5F8[1] = { 0x41f00000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA5FC[1] = { 0x40200000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA600[1] = { 0x471c4000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA604[1] = { 0x42a00000 };
__declspec(section ".sdata2") extern const u32 TObjEneMe3ShinowaMirage__data_805DA608[1] = { 0x40400000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA60C[1] = { 0x40e38e39 };
__declspec(section ".sdata2") extern const u32 lbl_805DA610[1] = { 0x41c00000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA614[1] = { 0x41600000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA618[1] = { 0x414db6dc };
__declspec(section ".sdata2") extern const u32 lbl_805DA61C[1] = { 0x41b80000 };
__declspec(section ".sdata2") extern const u32 lbl_805DA620[1] = { 0x3f59999a };
__declspec(section ".sdata2") extern const u32 lbl_805DA624[1] = { 0x43960000 };
#define TObjEneMe3ShinowaMirage__data_805DA5E8 (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA5E8)
#define TObjEneMe3ShinowaMirage__data_805DA5EC (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA5EC)
#define lbl_805DA5F0 (*(const f32 *)lbl_805DA5F0)
#define TObjEneMe3ShinowaMirage__data_805DA5F4 (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA5F4)
#define lbl_805DA5F8 (*(const f32 *)lbl_805DA5F8)
#define lbl_805DA5FC (*(const f32 *)lbl_805DA5FC)
#define lbl_805DA600 (*(const f32 *)lbl_805DA600)
#define lbl_805DA604 (*(const f32 *)lbl_805DA604)
#define TObjEneMe3ShinowaMirage__data_805DA608 (*(const f32 *)TObjEneMe3ShinowaMirage__data_805DA608)
#define lbl_805DA60C (*(const f32 *)lbl_805DA60C)
#define lbl_805DA610 (*(const f32 *)lbl_805DA610)
#define lbl_805DA614 (*(const f32 *)lbl_805DA614)
#define lbl_805DA618 (*(const f32 *)lbl_805DA618)
#define lbl_805DA61C (*(const f32 *)lbl_805DA61C)
#define lbl_805DA620 (*(const f32 *)lbl_805DA620)
#define lbl_805DA624 (*(const f32 *)lbl_805DA624)

void TObjEneMe3ShinowaMirage__sub_800E5F64(u8 *arg0, s32 arg1) {
    Vec_800E5F64 sp20;
    Vec_800E5F64 sp14;
    Vec_800E5F64 v;
    f32 d;
    s32 var_r4;
    s32 temp_r3_4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        ((VObj_18_2add4a *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C4) &= ~3;
        M2C_FIELD(arg0, s32 *, 0x3C4) |= 0x10000;
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        M2C_FIELD(arg0, f32 *, 0x410) = TObjEneMe3ShinowaMirage__data_805DA5B8;
        reset_timer__11TBoss4Type3FPv(M2C_FIELD(arg0, u8 **, 0x3E0));
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x404) == 5 || ((int)get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0)) != 0) {
            if (((VObj_18_2add4a *)(arg0))->m100() == 0U) {
                transition_enemy_state((void *)(arg0), (M2C_UNK)(9));
            } else {
                transition_enemy_state((void *)(arg0), (M2C_UNK)(4));
            }
        }
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x404)) {
        case 0:
            advance_animation_playback((void *)(arg0), (s32)(arg1));
            if (M2C_FIELD(arg0, s32 *, 0xB0) & 8) {
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
            }
            ((VObj_18_2add4a *)(arg0))->m100();
            ((VObj_18_2add4a *)(arg0))->m87();
            break;
        case 1:
            advance_animation_playback((void *)(arg0), (s32)(arg1));
            if (update_death_check__14TObjEneEpsilonFPv(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
                var_r4 = (s32)(TObjEneMe3ShinowaMirage__data_8043CFE0 * atan2_float(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)));
            } else {
                var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
            }
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), var_r4, 0x1000);
            if (objInBand__FP7GameObjf(arg0, TObjEneMe3ShinowaMirage__data_805DA5E8) != 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 2;
            }
            ((VObj_18_2add4a *)(arg0))->m100();
            ((VObj_18_2add4a *)(arg0))->m87();
            break;
        case 2:
            advance_animation_playback((void *)(arg0), (s32)(arg1));
            if (update_death_check__14TObjEneEpsilonFPv(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
            }
            if (M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8) >= lbl_805DA614) {
                if (((s32 (*)(void *, s32, f32))check_body_collision_at__23TObjEneMe3ShinowaMirageFPvif)(arg0, M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, f32 *, 0x3AC) - TObjEneMe3ShinowaMirage__data_805DA5EC) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x404) = 5;
                } else {
                    d = M2C_FIELD(arg0, f32 *, 0x3AC) - TObjEneMe3ShinowaMirage__data_805DA5EC;
                    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
                    v.x += M2C_FIELD(arg0, f32 *, 0x3A0) * d;
                    v.y += TObjEneMe3ShinowaMirage__data_805DA5EC;
                    v.z += M2C_FIELD(arg0, f32 *, 0x3A8) * d;
                    if (csnVecterUnder(&v, 0x15) != 0U) {
                        M2C_FIELD(arg0, s32 *, 0x404) = 3;
                        M2C_FIELD(arg0, f32 *, 0x414) = (M2C_FIELD(arg0, f32 *, 0x3AC) - TObjEneMe3ShinowaMirage__data_805DA5EC) / lbl_805DA618;
                        ((VObj_18_2add4a *)(arg0))->m89();
                        play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD11), arg0 + 0x38, 0, 0);
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x404) = 5;
                    }
                }
            }
            ((VObj_18_2add4a *)(arg0))->m100();
            ((VObj_18_2add4a *)(arg0))->m87();
            break;
        case 3:
            advance_animation_playback((void *)(arg0), (s32)(arg1));
            if (M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8) >= lbl_805DA61C) {
                M2C_FIELD(arg0, s32 *, 0x404) = 4;
                ((VObj_18_2add4a *)(arg0))->m90();
                play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD12), arg0 + 0x38, 0, 0);
                spawn_particle_effect(arg0 + 0x38, 0xF3);
            }
            move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), M2C_FIELD(arg0, f32 *, 0x414));
            ((VObj_18_2add4a *)(arg0))->m86();
            break;
        case 4:
            advance_animation_playback((void *)(arg0), (s32)(arg1));
            if (objInBand__FP7GameObjf(arg0, TObjEneMe3ShinowaMirage__data_805DA5E4) != 0) {
                if (enemy_check_target_valid(arg0) != 0) {
                    if (((VObj_18_2add4a *)M2C_FIELD(arg0, u8 **, 0x390))->m18(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC) != 0) {
                        ((VObj_18_2add4a *)M2C_FIELD(arg0, u8 **, 0x390))->m20(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC);
                        ((VObj_18_2add4a *)M2C_FIELD(arg0, u8 **, 0x390))->m23(arg0, TObjEneMe3ShinowaMirage__data_805DA608);
                    }
                }
                play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD13), arg0 + 0x38, 0, 0);
            }
            M2C_FIELD(arg0, f32 *, 0x414) *= lbl_805DA620;
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), M2C_FIELD(arg0, f32 *, 0x414));
            ((VObj_18_2add4a *)(arg0))->m87();
            break;
        }
        if (M2C_FIELD(arg0, s32 *, 0x404) != 0) {
            temp_r3_4 = lookup_entry_by_value__10TObjPlayerFPvf((void *)TObjEneMe3ShinowaMirage__data_805D52AC, M2C_FIELD(arg0, f32 *, 0xC0));
            if (temp_r3_4 != 0) {
                push_matrix();
                set_matrix_identity(0);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                mult_vec_array__10TObjPlayerFUii(0, temp_r3_4, &sp14, 2);
                pop_matrix();
                ((VObj_18_2add4a *)M2C_FIELD(arg0, u8 **, 0x3E0))->m4((M2C_UNK *)&sp14, (M2C_UNK *)&sp20);
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, f32 *, 0x3C8) = M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3CC) = TObjEneMe3ShinowaMirage__data_805DA5B8;
        ((VObj_18_2add4a *)(arg0))->m90();
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void state_chase_target__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1) {
    f32 temp_f31;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        ((VObj_18_e66632 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA624;
        if (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x10) {
            M2C_FIELD(arg0, f32 *, 0x410) = (f32) M2C_FIELD(TObjEneMe3ShinowaMirage__mirage_info_table[M2C_FIELD(arg0, s32 *, 0x3C0)], f32 *, 4);
        } else {
            M2C_FIELD(arg0, f32 *, 0x410) = (f32) M2C_FIELD(TObjEneMe3ShinowaMirage__mirage_info_table[M2C_FIELD(arg0, s32 *, 0x3C0)], f32 *, 0);
        }
        M2C_FIELD(arg0, f32 *, 0x414) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
        return;
    case 3:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            ((VObj_18_e66632 *)(arg0))->m109();
            transition_enemy_state(arg0, 0xB);
        } else if (((s32 (*)(f32))check_in_range__23TObjEneMe3ShinowaMirageFPv)((f32) (M2C_FIELD(arg0, f32 *, 0x414))) != 0) {
            transition_enemy_state(arg0, 6);
        } else if (((VObj_18_e66632 *)(arg0))->m104() != 0) {
            transition_enemy_state(arg0, 5);
        }
        break;
    case 5:
        break;
    case 0:
        ((void (*)())advance_animation_playback)();
        if (((s32 (*)(void *, f32))update_linked_position__14TObjEneEpsilonFPv)(arg0, TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            temp_f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            M2C_FIELD(arg0, f32 *, 0x414) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3A0) * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)))) + temp_f31);
            if (M2C_FIELD(arg0, f32 *, 0x414) < cos_table_lookup((int) (0x1000))) {
                update_angle__14TObjEneEpsilonFPvi((void *) (arg0), (int) (0x500));
                ((VObj_18_e66632 *)(arg0))->m100();
            } else {
                enemy_turn_and_move_on_ground((void *) (arg0), (int) (0x500), (f32) (M2C_FIELD(arg0, f32 *, 0x410)));
            }
            ((VObj_18_e66632 *)(arg0))->m87();
        }
        break;
    }
}
extern int fold_flush_1;
#pragma pop

void TObjEneMe3ShinowaMirage__sub_800E66FC(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f31;
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 0xB);
        ((VObj_18_8bca97 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFD);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 1);
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        M2C_FIELD(arg0, f32 *, 0x410) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
        if (enemy_has_live_target(arg0) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (TObjEneMe3ShinowaMirage__data_8043CFE0 * ((f32 (*)(f64, f64))atan2_float)((f64) M2C_FIELD(arg0, f32 *, 0x3A0), (f64) M2C_FIELD(arg0, f32 *, 0x3A8)));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) == 3) {
            transition_enemy_state(arg0, 0xB);
        }
        return;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x404);
        switch (temp_r0) {
        case 0:
            temp_f31 = get_node_world_y__23TObjEneMe3ShinowaMirageFPv((Obj_800E75AC *)arg0);
            ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x414) = get_node_world_y__23TObjEneMe3ShinowaMirageFPv((Obj_800E75AC *)arg0);
            M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) + (temp_f31 - M2C_FIELD(arg0, f32 *, 0x414)));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x8000);
            M2C_FIELD(arg0, s32 *, 0x404) = 1;
            M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
            break;
        case 1:
            ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
            if (M2C_FIELD(arg0, f32 *, 0xC0) > 29.0f) {
                M2C_FIELD(arg0, f32 *, 0xC0) = 29.0f;
            }
            M2C_FIELD(arg0, s32 *, 0x60) = ((s32 (*)(s32, s32, s32))approach_angle_limited)(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x40C), 0x800);
            M2C_FIELD(arg0, f32 *, 0x410) = (f32) (M2C_FIELD(arg0, f32 *, 0x410) - 0.3f);
            if (M2C_FIELD(arg0, f32 *, 0x410) < -5.0f) {
                M2C_FIELD(arg0, f32 *, 0x410) = -5.0f;
            }
            M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) + M2C_FIELD(arg0, f32 *, 0x410));
            temp_f1 = get_node_world_y__23TObjEneMe3ShinowaMirageFPv((Obj_800E75AC *)arg0);
            M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - (temp_f1 - M2C_FIELD(arg0, f32 *, 0x414)));
            M2C_FIELD(arg0, f32 *, 0x414) = temp_f1;
            if (M2C_FIELD(arg0, f32 *, 0x3C8) < M2C_FIELD(arg0, f32 *, 0x3C)) {
                M2C_FIELD(arg0, f32 *, 0x3C8) = M2C_FIELD(arg0, f32 *, 0x3C);
                M2C_FIELD(arg0, s32 *, 0x404) = 2;
                ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD12)), (u32) (arg0 + 0x38), 0, 0);
                ((s32 (*)(s32, s32))spawn_particle_effect)((s32) (arg0 + 0x38), 0xF3);
            }
            break;
        case 2:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 8;
                M2C_FIELD(arg0, s32 *, 0x404) = 3;
                M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
                M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
            }
            ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
            break;
        }
        ((VObj_18_8bca97 *)(arg0))->m100();
        update_by_distance__23TObjEneMe3ShinowaMirageFPv((void *) (arg0));
        ((VObj_18_8bca97 *)(arg0))->m87();
        M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFE);
        M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
        break;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E69F0(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        ((VObj_18_fd404c *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) > 0x1E) {
            transition_enemy_state(arg0, 3);
        }
        return;
    case 0:
        ((void (*)())advance_animation_playback)();
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x404);
        if (temp_r3 == 0) {
            if (((s32 (*)(void *, f32))update_linked_position__14TObjEneEpsilonFPv)(arg0, TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
                if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
                    M2C_FIELD(arg0, s32 *, 0x3D0) = 0x1C00FFFF;
                }
                M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D0) & lbl_805DA634);
                M2C_FIELD(arg0, s32 *, 0x408) = 0;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x404) = (s32) (temp_r3 + 1);
            M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) + 0x10);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x408) > 0xFF) {
                M2C_FIELD(arg0, s32 *, 0x408) = 0xFF;
            }
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x408);
            M2C_FIELD(arg0, u32 *, 0x3D0) = (temp_r4 << 24) | (M2C_FIELD(arg0, u32 *, 0x3D0) & 0x00FFFFFF);
            if (enemy_validate_retained_target((void *) (arg0), (int) (temp_r4)) == 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 0;
                if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
                    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
                }
            }
        }
        ((VObj_18_fd404c *)(arg0))->m100();
        update_by_distance__23TObjEneMe3ShinowaMirageFPv((void *) (arg0));
        ((VObj_18_fd404c *)(arg0))->m87();
        M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
        return;
    case 5:
        if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
            M2C_FIELD(arg0, s32 *, 0x3D0) = 0x1C00FFFF;
        }
        M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
        break;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E6BB8(u8 *arg0, s32 arg1) {
    Stack_800E6BB8 stack;
    f32 temp_f1;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(0));
        ((VObj_18_599a64 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x3E8));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C8);
        stack.spC = temp_f1 - TObjEneMe3ShinowaMirage__data_805DA5EC;
        TBoss3Volopt__sub_800D8D88((void *) (&stack.sp8), (f32) (temp_f1));
        return;
    case 3:
        if (((VObj_14_948132 *)((u8 *)(arg0) + (1000)))->m5() != 0) {
            transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (2)));
        }
    case 5:
    case 0:
        return;
    }
}

void action__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        ((VObj_DD_800E47DC *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 2);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFE);
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFCFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
            M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) > 5) {
            transition_enemy_state(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (M2C_FIELD(arg0, s32 *, 0x404) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj_DD_800E47DC *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

void dispatch_action__23TObjEneMe3ShinowaMirageFPvUii(Obj_800E6DD8 *arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        arg0->v111(arg2);
        return;
    case 1:
        TObjEneMe3ShinowaMirage__sub_800E6BB8((u8 *) arg0, arg2);
        return;
    case 2:
        TObjEneMe3ShinowaMirage__sub_800E69F0((u8 *)(arg0), (s32)(arg2));
        return;
    case 3:
        TObjEneMe3ShinowaMirage__sub_800E66FC((u8 *)arg0, arg2);
        return;
    case 4:
        state_chase_target__23TObjEneMe3ShinowaMirageFPvi((u8 *)(arg0), (s32)(arg2));
        return;
    case 5:
        TObjEneMe3ShinowaMirage__sub_800E5F64((u8 *)(arg0), (s32)(arg2));
        return;
    case 6:
        TObjEneMe3ShinowaMirage__sub_800E5CE4((u8 *)(arg0), (s32)(arg2));
        return;
    case 7:
        TObjEneMe3ShinowaReal__sub_800E5950((u8 *)(arg0), (s32)(arg2));
        return;
    case 8:
        TObjEneMe3ShinowaMirage__sub_800E54E8(arg0, arg2);
        return;
    case 11:
        TObjEneMe3ShinowaMirage__sub_800E5220(arg0, arg2);
        return;
    case 9:
        TObjEneMe3ShinowaMirage__sub_800E50D8((u8 *) arg0, arg2);
        return;
    case 10:
        state_cast_support__23TObjEneMe3ShinowaMirageFPvi(arg0, arg2);
        return;
    case 12:
        TObjEneMe3ShinowaMirage__sub_800E4FE8((u8 *)(arg0), (s32)(arg2));
        return;
    case 13:
        state_break_apart__23TObjEneMe3ShinowaMirageFPvi((u8 *)(arg0), (s32)(arg2));
        return;
    case 14:
        arg0->v112(arg2);
        return;
    case 15:
        arg0->v113(arg2);
        return;
    case 16:
        arg0->v114(arg2);
    default:
        return;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E6F0C(Obj_800E6F0C *self) {
    s32 f = clamp_frame_index__9TObjEneDDFi(TObjEneMe3ShinowaMirage__mirage_info_table[self->kind]->frame);
    create__9TTecRestaFPvPvPv(self, self->pos, f);
}

void TObjEneMe3ShinowaMirage__sub_800E6F64(u8 *arg0) {
    if (TObjEneMe3ShinowaMirage__sub_800E6FE0((u8 *)((void *) (arg0))) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_80500FEC.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x1b));
        M2C_FIELD(arg0, s32 *, 0x3c0) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3ShinowaMirage__data_805D5298, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x1a));
    M2C_FIELD(arg0, s32 *, 0x3c0) = 0;
}

s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x358) >= TObjEneMe3ShinowaMirage__data_805DA5DC;
}

int select_and_apply_target__23TObjEneMe3ShinowaMirageFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

s32 TObjEneMe3ShinowaMirage__sub_800E701C(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x354) < TObjEneMe3ShinowaMirage__data_805DA5DC;
}

void update_collision__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    struct VObj_800E7034_800E47DC *o = (struct VObj_800E7034_800E47DC *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
}

void update_by_distance__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    VObj_800E707C_800E47DC *o = (VObj_800E707C_800E47DC *)arg0;
    f32 lim = lbl_805DA5F8;
    if ((M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C)) > lim) {
        o->m95();
        return;
    }
    o->m96();
}

void apply_effect_pair__23TObjEneMe3ShinowaMirageFPv(u8 *arg0) {
    M2C_UNK sp8[8];
    u32 temp_r3;
    u32 temp_r3_3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    push_matrix();
    set_matrix_identity((int) (0));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A4), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3 != 0U) {
        mult_vec_array__10TObjPlayerFUii((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
        temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E0));
        ((VObj18b_800e70d4_800E47DC *) temp_r3_2)->m4(&sp8, &sp8[3]);
    }
    temp_r3_3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A8), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3_3 != 0U) {
        mult_vec_array__10TObjPlayerFUii((int) (0), (int) (temp_r3_3), (void *) (&sp8), (int) (2));
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E4));
        ((VObj18b_800e70d4_800E47DC *) temp_r3_4)->m4(&sp8, &sp8[3]);
    }
    pop_matrix();
}

#undef PAD_VIRT
#undef PADV
#undef PADV4
void TObjEneMe3Shinowa__sub_800E71A8(void) {  }

void dispatch_if_active__17TObjEneMe3ShinowaFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 == 1) || (temp_r0 == 9) || (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        ((E71ACObj_800e71ac_800E71A8*)(arg0 + 0x3E8))->m7();
    }
}

s32 update_effect__17TObjEneMe3ShinowaFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 == 1) || (temp_r0 == 9) || (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        ((E71FCObj_800e71fc_800E71A8*)(arg0 + 0x3E8))->m6();
    }
    return 0;
}

void TObjEneMe3Shinowa__sub_800E7250(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFEF);
    M2C_FIELD(arg0, s16 *, 0x2CC) = (s16) M2C_FIELD(arg0, s16 *, 0x3DC);
}

void TObjEneMe3Shinowa__sub_800E7268(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 0x10);
    M2C_FIELD(arg0, s16 *, 0x2CC) = (s16) ((s16) M2C_FIELD(arg0, s16 *, 0x3DC) / 2);
}

void TObjEneMe3Shinowa__vt105(void) {  }

#pragma push
#pragma fp_contract on
u8 can_hit_same_target__23TObjEneMe3ShinowaMirageFPv(E_800E728C *arg0) {
    s16 mine;
    s32 ret;
    s16 theirs;
    ret = 0;
    if (!(arg0->f3c4 & 0x10000)) {
        if (arg0->f3ac > lbl_805DA638 && arg0->f3ac < lbl_805DA63C) {
            mine = get_stat_by_key_state__10TObjPlayerFPv((int)arg0);
            theirs = get_stat_by_key_state__10TObjPlayerFPv(arg0->f390);
            if (theirs == mine && ((s32 (*)(void *, s32, f32))check_body_collision_at__23TObjEneMe3ShinowaMirageFPvif)(arg0, arg0->f60, arg0->f3ac - (*(f32 *)&TObjEneMe3ShinowaMirage__data_805DA5EC)) == 0) {
                ret = 1;
            }
        }
    }
    return (u8)ret;
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma fp_contract on
void update_player_state_default__23TObjEneMe3ShinowaMirageFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800E7324, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800E7324, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800E7324, sp10) == 0x8) ? 1 : -1];
    Stack_800E7324 stack;
    if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        stack.sp8 = M2C_FIELD(&lbl_8043CF94.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8043CF94.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_8043CF94.value, s32 *, 8);
        update_player_state__9TObjEneDDFPv((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void TObjEneMe3ShinowaMirage__sub_800E7378(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    temp_r31 = objInBand__FP7GameObjf(arg0, lbl_805DA640);
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA644) != 0) || (temp_r31 != 0)) {
        if (enemy_check_target_valid(arg0) != 0) {
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
            if (((VObj_18_c44252 *)(temp_r3))->m18(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC) != 0) {
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                ((VObj_18_c44252 *)(temp_r3_2))->m20(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC);
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                ((VObj_18_c44252 *)(temp_r3_3))->m23(arg0, TObjEneMe3ShinowaMirage__data_805DA608);
                if ((temp_r31 != 0) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= lbl_805DA648)) {
                    TObjEneDD__sub_800BA438((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x390)));
                }
            }
        }
        ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD13)), (u32) (arg0 + 0x38), 0, 0);
    }
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma fp_contract on
s32 check_in_range__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    f32 f31;

    if (M2C_FIELD(arg0, f32 *, 0x3AC) > TObjEneMe3ShinowaMirage__data_805DA5E4) {
        return 0;
    }
    f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * ((f32 (*)(s32))cos_table_lookup)(M2C_FIELD(arg0, s32 *, 0x60));
    f31 += M2C_FIELD(arg0, f32 *, 0x3A0) * ((f32 (*)(s32))sin_table_lookup)(M2C_FIELD(arg0, s32 *, 0x60));
    return (s32)((u32)__cntlzw(f31 < ((f32 (*)(s32))cos_table_lookup)(0x1E00)) >> 5);
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma fp_contract on
u8 check_body_collision_at__23TObjEneMe3ShinowaMirageFPvif(Obj_800E750C *arg0, s32 arg1, f32 farg0) {
    f32 f2 = farg0 * lbl_805DA64C;
    Sub_800E750C *s = arg0->fA4;
    u8 res;
    s32 a = arg0->f60;
    s32 b = s->f18;
    s->f0 = TObjEneMe3ShinowaMirage__data_805DA5B8;
    s->f8 = f2;
    s->fC = f2;
    s->f10 = lbl_805DA650;
    s->f14 = 1;
    s->f18 = 0x9D01;
    arg0->f60 = arg1;
    ((void (*)(void *, s32, f32, f32))check_enemy_body_collisions)(arg0, arg1, TObjEneMe3ShinowaMirage__data_805DA5B8, f2);
    res = (s->f18 & 0x380000) != 0;
    fn_8002B630(s, shinowa_mirage_model_init_data, s->f18 & 0x380000);
    s->f18 = b;
    arg0->f60 = a;
    return res;
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma fp_contract on
f32 get_node_world_y__23TObjEneMe3ShinowaMirageFPv(Obj_800E75AC *self) {
    Vec_800E75AC v;
    Node_800E75AC *node;
    v.x = TObjEneMe3ShinowaMirage__data_805DA5B8;
    v.y = TObjEneMe3ShinowaMirage__data_805DA5B8;
    v.z = TObjEneMe3ShinowaMirage__data_805DA5B8;
    push_matrix_from(identity_matrix);
    bind_motion_context(self->ff8, self->fc0);
    node = self->node;
    compose_motion_node_matrix(node);
    compose_motion_node_matrix(node->child);
    matrix_mult_vec(0, &v, &v);
    pop_matrix();
    return v.y;
}
extern int fold_flush_7;
#pragma pop

void fn_800E762C(void) {  }

void TObjEneMe3Shinowa__sub_800E7630(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3CC) + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p) { ((int (*)(void*, void*))VecCopy__FP3VecPC3Vec)((char*)p + 0x74, (char*)p + 0x2fc); }

void TObjEneMe3Shinowa__sub_800E767C(void) {  }

void TObjEneMe3Shinowa__vt60(u8 *arg0) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        clear_attack_receipts((void *) (arg0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 1) {
        clear_attack_receipts((void *) (arg0));
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC) {
        ((int (*)(void*, void*))transition_enemy_state)((void*)((void *) (arg0)), (void*)((int) (0xC)));
    }
}

void TObjEneMe3Shinowa__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 13) { ((int (*)(void*, void*))transition_enemy_state)(p, (void*)13); } }

void TObjEneMe3Shinowa__sub_800E7720(void) {  }

void TObjEneMe3Shinowa__sub_800E7724(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m115();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    }
    copy_position_vector__17TObjEneMe3ShinowaFPv((void*)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
        ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x3E4));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E4) = 0;
        ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x3E0));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E0) = 0;
        if (M2C_FIELD(arg0, void **, 0x424) != NULL) { ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x424)); M2C_FIELD(arg0, M2C_UNK *, 0x424) = 0; }
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3E8, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_propagation off
void init_enemy__23TObjEneMe3ShinowaMirageFPv(Mirage_800E7884 *self) {
    Tbl_800E7884 *tbl = &(*(Tbl_800E7884 *)&TObjEneMe3ShinowaMirage__data_80500FC0);
    init_position_vectors__9TObjEneDDFPv((u8 *)self);
    ((void (*)(void *))TObjEneMe3ShinowaMirage__sub_800E6F64)(self);
    self->f34 = *(s32 *)((*(Game_800E7884 * *)&TObjEneMe3ShinowaMirage__data_805D5298)->mdl + 8);
    init_model__9TObjEneDDFPv(self, ((void * *)shinowa_mirage_model_init_data), 1);
    self->fB0 = 0;
    set_field_d8__10TObjPlayerFPvi(self, shinowa_mirage_motion_param_table);
    set_field_dc__10TObjPlayerFPvi(self, (*(Game_800E7884 * *)&TObjEneMe3ShinowaMirage__data_805D5298)->f430);
    self->fB8 = 0;
    set_animation__10TObjPlayerFPvs(self, self->fB8);
    set_field_b8__14TObjEnePanarmsFPvs(self, self->fB8);
    {
        s32 *a = tbl->t[0];
        s32 *b = tbl->t[1];
        s32 *c = tbl->t[2];
        s32 i = self->f3C0;
        reset_hp__9TObjEneDDFPv(self, a[i], b[i], c[i]);
    }
    check_state_flag_4__9TObjEneDDFPv(self);
    self->f350 = TObjEneMe3ShinowaMirage__init_params;
    self->f37C = TObjEneMe3ShinowaMirage__data_805DA5E8;
    enemy_init_acquire_period(self, 0x1E);
    enemy_init_validate_period(self, 0x1E);
    self->f3C4 = 0;
    self->f3C8 = self->f3C;
    self->f3CC = TObjEneMe3ShinowaMirage__data_805DA5B8;
    self->f3D0 = 0;
    self->f3D8 = 0;
    self->f3D4 = 0;
    self->f3DC = self->f2CC;
    self->f3E0 = create__12TObjEneSaverFPvPv((void *)0xFF0000FF, (void *)0xA08000A0);
    self->f3E4 = create__12TObjEneSaverFPvPv((void *)0xFF0000FF, (void *)0xA08000A0);
    self->sub.m3();
    self->f404 = 0;
    self->f408 = 0;
    self->f40C = 0;
    self->f410 = TObjEneMe3ShinowaMirage__data_805DA5B8;
    self->f414 = TObjEneMe3ShinowaMirage__data_805DA5B8;
    self->f418 = TObjEneMe3ShinowaMirage__data_805DA5B8;
    self->f41C = TObjEneMe3ShinowaMirage__data_805DA5B8;
    self->f420 = TObjEneMe3ShinowaMirage__data_805DA5B8;
    self->f424 = 0;
    self->f428 = 0;
}
extern int fold_flush_8;
#pragma pop

void *TObjEneMe3Shinowa__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1000));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AC8;
    return arg0;
}

}
