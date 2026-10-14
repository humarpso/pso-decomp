#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define VIRT(n) virtual void m##n() = 0;
#define F_8009C510(off) M2C_FIELD(arg0, f32 *, off)
#define I_8009C510(off) M2C_FIELD(arg0, s32 *, off)
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)

struct VBase_8009AD18 { char pad[0x18]; };
struct VObj_8009AD18 : VBase_8009AD18 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8();
    virtual s32 m9();
    virtual s32 m10();
    virtual s32 m11();
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
    virtual s32 m15();
    virtual s32 m16();
    virtual s32 m17();
    virtual s32 m18();
    virtual s32 m19();
    virtual s32 m20();
    virtual s32 m21();
    virtual s32 m22();
    virtual s32 m23();
    virtual s32 m24();
    virtual s32 m25();
    virtual s32 m26();
    virtual s32 m27();
    virtual s32 m28();
    virtual s32 m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual s32 m32();
    virtual s32 m33();
    virtual s32 m34();
    virtual s32 m35();
    virtual s32 m36();
    virtual s32 m37();
    virtual s32 m38();
    virtual s32 m39();
    virtual s32 m40();
    virtual s32 m41();
    virtual s32 m42();
    virtual s32 m43();
    virtual s32 m44();
    virtual s32 m45();
    virtual s32 m46();
    virtual s32 m47();
    virtual s32 m48();
    virtual s32 m49();
    virtual s32 m50();
    virtual s32 m51();
    virtual s32 m52();
    virtual s32 m53();
    virtual s32 m54();
    virtual s32 m55();
    virtual s32 m56();
    virtual s32 m57();
    virtual s32 m58();
    virtual s32 m59();
    virtual s32 m60();
    virtual s32 m61();
    virtual s32 m62();
    virtual s32 m63();
    virtual s32 m64();
    virtual s32 m65();
    virtual s32 m66();
    virtual s32 m67();
    virtual s32 m68();
    virtual s32 m69();
    virtual s32 m70();
    virtual s32 m71();
    virtual s32 m72();
    virtual s32 m73();
    virtual s32 m74();
    virtual s32 m75();
    virtual s32 m76();
    virtual s32 m77();
    virtual s32 m78();
    virtual s32 m79();
    virtual s32 m80();
    virtual s32 m81();
    virtual s32 m82();
    virtual s32 m83();
    virtual s32 m84();
    virtual s32 m85();
    virtual s32 m86();
    virtual s32 m87();
    virtual s32 m88();
    virtual s32 m89();
    virtual s32 m90();
    virtual s32 m91();
    virtual s32 m92();
    virtual s32 m93();
    virtual s32 m94();
};

struct Obj_8009AD18 {
    u8 pad0[0x3C];
    f32 f3C;
    u8 pad40[0x390 - 0x40];
    s32 f390;
    u8 pad394[0x3C8 - 0x394];
    u32 flags3C8;
    u8 pad3CC[0x400 - 0x3CC];
    s32 timer;
    u8 pad404[0x470 - 0x404];
    s32 sub;
    u8 pad474[0x4A8 - 0x474];
    f32 f4A8;
    f32 f4AC;
    f32 f4B0;
    u8 pad4B4[0x4B8 - 0x4B4];
    s32 f4B8;
    u8 pad4BC[0x4D0 - 0x4BC];
    s32 count;
    void *members[8];
    s32 f4F4;
};

struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

struct VBase_18_8dc821 { char pad[0x18]; };

struct VObj_18_8dc821 : VBase_18_8dc821 {
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
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual M2C_UNK m111();
    virtual void m112();
    virtual M2C_UNK m113();
};

typedef s32 M2C_UNK;
struct VBase_8009C91C { char pad[0x18]; };

struct VObj_8009C91C : VBase_8009C91C {
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
    virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100(); virtual void m101(); virtual void m102(); virtual void m103();
    virtual void m104(); virtual void m105(); virtual s32 m106();
};

struct Vec_8009C91C { f32 x, y, z; };

struct Can_8009C91C {
    u8 pad0[0x38];
    Vec_8009C91C pos38;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x394 - 0x64];
    Vec_8009C91C base;
    Vec_8009C91C vel;
    f32 f3AC;
    u8 pad3B0[0x3C8 - 0x3B0];
    u32 flags;
    u8 pad3CC[0x3E8 - 0x3CC];
    f32 f3E8;
    u8 pad3EC[0x3F4 - 0x3EC];
    f32 f3F4;
    f32 f3F8;
    u8 pad3FC[0x404 - 0x3FC];
    s32 f404;
    s32 f408;
    u8 pad40C[0x414 - 0x40C];
    u8 f414[0x470 - 0x414];
    s32 mode;
    s32 timer;
    s32 count;
    u8 pad47C[4];
    s32 rot;
    f32 f484;
    f32 dist;
    f32 ddist;
    Vec_8009C91C dir;
    u8 pad49C[0x4B4 - 0x49C];
    s32 f4B4;
};

struct VBase_18_2d9fb9 { char pad[0x18]; };

struct VObj_18_2d9fb9 : VBase_18_2d9fb9 {
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
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual s32 m106();
};

struct Vec_8009D320 { f32 x, y, z; };

struct Prm_8009D320 { u8 pad[0x18]; s32 f18; s32 f1C; s32 f20; s32 f24; };

struct Can_8009D320 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xB8 - 0x34];
    s16 fB8;
    u8 padBA[0x2FC - 0xBA];
    u8 snd[0x394 - 0x2FC];
    Vec_8009D320 base;
    u8 pad3A0[0x3C8 - 0x3A0];
    u32 flags;
    u8 pad3CC[0x404 - 0x3CC];
    s32 f404;
    u8 pad408[0x414 - 0x408];
    u8 f414[0x468 - 0x414];
    Prm_8009D320 *prm;
    u8 pad46C[4];
    s32 mode;
    s32 timer;
    u8 pad478[0x490 - 0x478];
    Vec_8009D320 pos;
    void *f49C;
    void *f4A0;
};

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

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, int, int);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK draw_with_alt_model__10TObjPlayerFPvi(void *, int);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void fn_8009BD00(void);
extern M2C_UNK lbl_8043A268[];
extern M2C_UNK lbl_8043A274[];
extern u32 lbl_805D4FD4;
extern s32 TObjEneMe1Canadin__render_point_cursor;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D9898;
extern const f32 lbl_805D98A0;
extern const f32 lbl_805D98A4;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void TObjPlayer__sub_8009BA04(u8 *arg0);
f64 atan2_float(f32, f32);
s32 rotate_xz_pair_by_angle(void *, void *, int);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0);
void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0);
void TObjEneMe1Canadin__sub_8009E930(u8 *arg0);
void TObjEneMe1Canadin__sub_8009E948(u8 *arg0);
void update_angle__17TObjEneMe1CanadinFPv(void *arg0);
void update_hover_height__17TObjEneMe1CanadinFPv(void *arg0);
void push_history_entry__17TObjEneMe1CanadinFPvfPvi(s32, f32, void *, s32);
void enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
M2C_UNK move_to_wall_clamped_destination__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK advance_animation_playback();
f32 subtract_vector(void *, void *);
extern const f64 lbl_8043A3C8;
extern const f32 TObjEneMe1Canadin__data_805D988C;
extern const f32 lbl_805D9898;
extern const f32 TObjEneMe1Canadin__data_805D98B4;
extern const f32 lbl_805D98D8;
extern const f32 lbl_805D98DC;
extern const f32 lbl_805D98E0;
extern const f32 lbl_805D98E4;
void TObjEneMe1Canadin__sub_8009C91C(void *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void *create_particle_emitter(void *, s32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void enable__13TParticleCtrlFPv(void *);
void reset_map_core__17TObjEneMe1CanadinFPv(void* p, void * _w1);
void noop__17TObjEneMe1CanadinFv(void);
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0);
void advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *arg0);
void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0);
s32 check_target__17TObjEneMe1CanadinFPv(void *arg0);
void update_angle__17TObjEneMe1CanadinFPv(void *arg0);
void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0);
void TObjEneMe1Canadin_EffDischarge__ct(void *, void *, void *, void *);
void *TObjEneMe1Canadin_EffLine__ct(void *, void *, void *, void *);
void TObjEneEpsilon__sub_800B92F8(void *, s32, f32);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
void enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback();
s32 play_sound_effect(s32, void *, s32, s32);
void * __nw__7TObjectFUl(int);
f32 subtract_vector(void *, void *);
extern const M2C_UNK canadin_formation_reset_vec4[];
extern u8 TObjEneMe1Canadin__map_core_default_vec4[];
extern const f32 TObjEneMe1Canadin__data_805D988C;
extern const f32 TObjEneMe1Canadin__data_805D98BC;
extern const f32 lbl_805D9910;
void TObjEneMe1Canadin__sub_8009D320(void *arg0, s32 arg1);
u32 __cvt_fp2unsigned(f32);
extern const f32 TObjEneMe1Canadin__data_805D98B4;
extern const f32 lbl_805D9914;
void pack_color_rgba__17TObjEneMe1CanadinFPv(u8 *arg0);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, int, int);
int get_target_info__9TObjEneDDFPv(void*);
M2C_UNK pack_debug_text_position(int, int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void queue_debug_text__13TObjEneMe1GeeFiPv(s32, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
extern M2C_UNK lbl_8043A398[];
extern M2C_UNK lbl_8043A3A8[];
extern M2C_UNK lbl_8043A3BC[];
extern const f32 lbl_805D98A0;
extern const f32 lbl_805D98A4;
void render_canadin_model_with_debug_type(u8 *arg0);
}

extern "C" {

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
    virtual M2C_UNK m112();
};

struct Stack_8009AA64 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8009AA64_lbl_8048FE94 { M2C_UNK value; u8 remaining[0x18]; };

typedef char RecoveredGlobal_8009AA64_lbl_8048FE94_size[sizeof(RecoveredGlobal_8009AA64_lbl_8048FE94) == 0x1C ? 1 : -1];

struct Obj_8009B3C0 {
    u8 pad[0x3c8]; u32 flags;
    u8 pad2[0x4d0 - 0x3cc]; s32 count; void *members[1];
};

struct Obj_8009B638 { u8 pad[0x46c]; s32 step; };

struct Obj_8009B1CC { u8 pad0[0x390]; void *key; u8 pad1[0x13C]; s32 count; u8 *items[8]; };

struct LeaderBase_8009AB4C { char pad[0x18]; };

struct Leader_8009AB4C : LeaderBase_8009AB4C {
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
    virtual s32 m107();
};

struct Fields_8009AB4C {
    u8 pad0[0x24];
    s32 field24;
    u8 pad28[0x30 - 0x28];
    u32 flags30;
    u8 pad34[0x60 - 0x34];
    s32 angle;
    u8 pad64[0x2FC - 0x64];
    u8 pos2FC[0x3C8 - 0x2FC];
    u32 flags3C8;
    u8 pad3CC[0x4D0 - 0x3CC];
    s32 count;
    void *members[1];
};

struct Info_8009B274 { u8 pad0[0x2C]; s32 f2C; };

struct Leader_8009B274 {
    u8 pad0[0x3C0];
    s32 f3C0;
    u8 pad3C4[0x3C8 - 0x3C4];
    u32 flags;
    u8 pad3CC[0x468 - 0x3CC];
    Info_8009B274 *info;
    u8 pad46C[0x4C8 - 0x46C];
    u16 f4C8;
    u8 pad4CA[0x4CC - 0x4CA];
    s32 max;
    s32 count;
    u32 ids[8];
    s32 mode;
};

struct Vec_8009B43C { f32 x, y, z; };

struct Info_8009B43C { u8 pad0[0x2C]; s32 f2C; };

struct Leader_8009B43C {
    u8 pad0[0x1C];
    u16 f1C;
    u8 pad1E[0x2C - 0x1E];
    s16 f2C;
    u8 pad2E[0x38 - 0x2E];
    Vec_8009B43C pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x468 - 0x64];
    Info_8009B43C *info;
    u8 pad46C[0x4CC - 0x46C];
    s32 max;
    s32 count;
    void *ids[8];
};

struct Obj_8009AF54 {
    u8 pad0[0x2FC];
    u8 pos[0x3C8 - 0x2FC];
    u32 flags3C8;
    u8 pad3CC[0x4A4 - 0x3CC];
    u8 v4A4[0x4B8 - 0x4A4];
    s32 f4B8;
    u8 pad4BC[0x4D0 - 0x4BC];
    s32 count;
    void *members[8];
    s32 state;
};

struct RecoveredGlobal_8009BD00_lbl_80500960 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef char RecoveredGlobal_8009BD00_lbl_80500960_size[sizeof(RecoveredGlobal_8009BD00_lbl_80500960) == 0x10 ? 1 : -1];

struct VBase_18_0f49f2 { char pad[0x18]; };

struct VObj_18_0f49f2 : VBase_18_0f49f2 {
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
    virtual void m114();
    virtual M2C_UNK m115(void *);
};

struct Stack_8009BF0C {
    M2C_UNK sp8;
    f32 spC;
};

struct VObj_18_p4 : VBase_18 {
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

struct VBase18D_8009BDA8 { char pad[0x18]; };

struct VObj18D_8009BDA8 : VBase18D_8009BDA8 {
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

struct Base_A_8009BDA8 { char pad[0x18]; };

struct V_A_8009BDA8 : public Base_A_8009BDA8 {
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

struct F_A_8009BDA8 { char pad[0x18]; };

struct F_V_8009BDA8 : F_A_8009BDA8 {
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

struct Base_A_8009dfac_8009BDA8 { char pad[0x18]; };

struct V_A_8009dfac_8009BDA8 : Base_A_8009dfac_8009BDA8 {
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

struct CanadinBase_8009E0AC { char pad[0x18]; };

struct Canadin_8009E0AC : CanadinBase_8009E0AC {
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
    virtual void m108(s32);
    virtual void m109(s32);
    virtual void m110(s32);
};

struct VBase_8009DB08 { char pad[0x18]; };

struct VObj_8009DB08 : VBase_8009DB08 {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2(); virtual M2C_UNK m3();
    virtual M2C_UNK m4(); virtual M2C_UNK m5(); virtual M2C_UNK m6(); virtual M2C_UNK m7();
    virtual M2C_UNK m8(); virtual M2C_UNK m9(); virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14(); virtual M2C_UNK m15();
    virtual M2C_UNK m16(); virtual M2C_UNK m17(); virtual M2C_UNK m18(); virtual M2C_UNK m19();
    virtual M2C_UNK m20(); virtual M2C_UNK m21(); virtual M2C_UNK m22(); virtual M2C_UNK m23();
    virtual M2C_UNK m24(); virtual M2C_UNK m25(); virtual M2C_UNK m26(); virtual M2C_UNK m27();
    virtual M2C_UNK m28(); virtual M2C_UNK m29(); virtual M2C_UNK m30(); virtual M2C_UNK m31();
    virtual M2C_UNK m32(); virtual M2C_UNK m33(); virtual M2C_UNK m34(); virtual M2C_UNK m35();
    virtual M2C_UNK m36(); virtual M2C_UNK m37(); virtual M2C_UNK m38(); virtual M2C_UNK m39();
    virtual M2C_UNK m40(); virtual M2C_UNK m41(); virtual M2C_UNK m42(); virtual M2C_UNK m43();
    virtual M2C_UNK m44(); virtual M2C_UNK m45(); virtual M2C_UNK m46(); virtual M2C_UNK m47();
    virtual M2C_UNK m48(); virtual M2C_UNK m49(); virtual M2C_UNK m50(); virtual M2C_UNK m51();
    virtual M2C_UNK m52(); virtual M2C_UNK m53(); virtual M2C_UNK m54(); virtual M2C_UNK m55();
    virtual M2C_UNK m56(); virtual M2C_UNK m57(); virtual M2C_UNK m58(); virtual M2C_UNK m59();
    virtual M2C_UNK m60(); virtual M2C_UNK m61(); virtual M2C_UNK m62(); virtual M2C_UNK m63();
    virtual M2C_UNK m64(); virtual M2C_UNK m65(); virtual M2C_UNK m66(); virtual M2C_UNK m67();
    virtual M2C_UNK m68(); virtual M2C_UNK m69(); virtual M2C_UNK m70(); virtual M2C_UNK m71();
    virtual M2C_UNK m72(); virtual M2C_UNK m73(); virtual M2C_UNK m74(); virtual M2C_UNK m75();
    virtual M2C_UNK m76(); virtual M2C_UNK m77(); virtual M2C_UNK m78(); virtual M2C_UNK m79();
    virtual M2C_UNK m80(); virtual M2C_UNK m81(); virtual M2C_UNK m82(); virtual M2C_UNK m83();
    virtual M2C_UNK m84(); virtual M2C_UNK m85(); virtual M2C_UNK m86(); virtual M2C_UNK m87();
    virtual M2C_UNK m88(); virtual M2C_UNK m89(); virtual M2C_UNK m90(); virtual M2C_UNK m91();
    virtual M2C_UNK m92(); virtual M2C_UNK m93(); virtual M2C_UNK m94(); virtual M2C_UNK m95();
    virtual M2C_UNK m96(); virtual M2C_UNK m97(); virtual M2C_UNK m98(); virtual M2C_UNK m99();
    virtual M2C_UNK m100(); virtual M2C_UNK m101(); virtual M2C_UNK m102(); virtual M2C_UNK m103();
    virtual M2C_UNK m104(); virtual M2C_UNK m105(); virtual M2C_UNK m106();
};

struct Base_En_8009DE90 { char pad[0x18]; };

struct V_En_8009DE90 : Base_En_8009DE90 {
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
    virtual void m86();
    virtual void p87();
    virtual void p88();
    virtual void p89();
    virtual void p90();
    virtual void p91();
    virtual void p92();
    virtual void m93();
};

struct Base_Sub_8009DE90 { char pad[0x14]; };

struct V_Sub_8009DE90 : Base_Sub_8009DE90 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
    virtual s32 m5();
};

struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_8009E1D4_lbl_8043A32C {
    M2C_UNK value;
    u8 remaining[0x10];
};

typedef char RecoveredGlobal_8009E1D4_lbl_8043A32C_size[sizeof(RecoveredGlobal_8009E1D4_lbl_8043A32C) == 0x14 ? 1 : -1];

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

typedef char RecoveredGlobal_8009E4AC_lbl_8043A2A0_size[sizeof(RecoveredGlobal_8009E4AC_lbl_8043A2A0) == 0x10 ? 1 : -1];

struct VObj_18_p10 : VBase_18 {
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
    virtual M2C_UNK m99(M2C_UNK *);
};

struct Stack_800CBDBC {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_8009ED5C_8009ECE0 {
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

struct VBase_18_7dcedb { char pad[0x18]; };

struct VObj_18_7dcedb : VBase_18_7dcedb {
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
    virtual M2C_UNK m112();
};

struct RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin { M2C_UNK value; u8 remaining[0x1D4]; };

typedef char RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin_size[sizeof(RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin) == 0x1D8 ? 1 : -1];

struct VBase_14_559b06 { char pad[0x14]; };

struct VObj_14_559b06 : VBase_14_559b06 {
    virtual void m0();
    virtual void m1();
    virtual M2C_UNK m2(void *);
};

struct VBase_18_3bc1aa { char pad[0x18]; };

struct VObj_18_3bc1aa : VBase_18_3bc1aa {
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
    virtual M2C_UNK m85(s16, M2C_UNK);
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
    virtual M2C_UNK m104();
};

struct VBase_8009F004 { char pad[0x18]; };

struct VObj_8009F004 : VBase_8009F004 {
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
    virtual void m85(s16, s32);
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
};

struct VBase14_8009F004 { char pad[0x14]; };

struct VSub_8009F004 : VBase14_8009F004 {
    virtual void m0(); virtual void m1(); virtual void m2();
};

struct Vec_8009F004 { f32 x, y, z; };

struct Obj_8009F004 { u8 pad[0x414]; Vec_8009F004 v[7]; };

struct Head_8009F004 { u8 b[0x1C]; };

struct Mdl_8009F004 { Head_8009F004 head; u8 model[0x64]; u8 field[4]; };

struct Arr_8009F004 { s32 v[3]; };

struct Tbl_8009F004 { Arr_8009F004 a, b, c, d; };

f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324(void *);
M2C_UNK obj_getField1c(void *);
f64 atan2_float(f32, f32);
f32 newton_sqrtf(f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 rotate_xz_pair_by_angle(void *, void *, int);
s32 is_vec_xz_cross_negative(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
f32 get_status_value_f32__23TObjEneMe1CanadinLeaderFv(f32);
M2C_UNK create_timed_particle_emitter(void *, int, int, int);
void bringer_effect_cleanup_noop(void);
void render_bringer_rush_effect_noop(void);
void update_bringer_rush_effect(u8 *arg0);
void * destroy_bringer_rush_effect(void *arg0, s16 arg1);
u8 * construct_bringer_rush_effect(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0);
void TObjEneMe1CanadinLeader__vt110(Leader_8009AB4C *obj, s32 mode);
void update_formation_state__23TObjEneMe1CanadinLeaderFPv(void *arg0);
u8 TObjEneMe1CanadinLeader__vt107(void *arg0);
void TObjEneMe1CanadinLeader__vt111(void *arg0);
s32 TObjEneMe1CanadinLeader__vt114(Obj_8009B1CC *arg0);
void TObjEneMe1CanadinLeader__vt115(Leader_8009B274 *self, u32 id);
s32 TObjEneMe1CanadinLeader__vt106(Obj_8009B3C0 *self);
void TObjEneMe1CanadinLeader__vt105(Leader_8009B43C *self);
void TObjEneMe1CanadinLeader__vt103(Obj_8009B638 *self);
void TObjEneMe1CanadinLeader__vt104(void *arg0);
void run_task__23TObjEneMe1CanadinLeaderFv(u8 *arg0);
void * __dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1);
void * TObjEneMe1CanadinLeader__ct(void *, void *, void *);
void * create__23TObjEneMe1CanadinLeaderFPv(void *arg0);
void update_if_ready__17TObjEneMe1CanadinFPv(void* p);
void fn_8009BD00(void);
void update_by_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
void update_walk_animation__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
void TObjEneMe1Canadin__vt110(u8 *arg0, s32 arg1);
void TObjEneMe1Canadin__sub_8009BFF8(u8 *arg0, s32 arg1);
void TObjEneMe1Canadin__sub_8009C178(u8 *arg0, s32 arg1);
void TObjEneMe1Canadin__sub_8009C2EC(u8 *arg0, s32 arg1);
void TObjEneMe1Canadin__sub_8009C510(u8 *arg0, s32 arg1);
void run_task__17TObjEneMe1CanadinFPvi(u8 *arg0, s32 arg1);
void TObjEneMe1Canadin__sub_8009CC74(void *arg0, s32 arg1);
void move__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
void TObjEneMe1Canadin__vt109(void *arg0, s32 arg1);
void action__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
void TObjEneMe1Canadin__sub_8009DE90(void *argv0, s32 arg1);
void handle_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
void dispatch_state__17TObjEneMe1CanadinFPvUii(Canadin_8009E0AC *self, u32 which, s32 arg);
void fn_8009E1D4(u8 *arg0, s32 arg1);
void set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(void* p);
void TObjEneMe1CanadinLeader__sub_8009E258(u8 *arg0);
void set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(void* p);
void TObjEneMe1CanadinLeader__sub_8009E27C(void* p);
void set_attack_flag__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_leader_index__23TObjEneMe1CanadinLeaderFPvii(void *arg0, s32 arg1, s32 arg2);
void fn_8009E2DC(u8 *arg0);
int TObjEneMe1Canadin__vt114(void);
void TObjEneMe1Canadin__vt115(void);
s32 fn_8009E300(u8 *arg0);
u8 TObjEneMe1CanadinLeader__sub_8009E31C(u8 *arg0, s32 arg1);
void TObjEneMe1CanadinLeader__sub_8009E334(u8 *arg0);
void TObjEneMe1CanadinLeader__sub_8009E350(u8 *arg0);
int TObjEneMe1CanadinLeader__sub_8009E36C(void* p);
void fn_8009E378(void *arg0);
int TObjEneMe1Canadin__vt107(void);
void TObjEneMe1Canadin__vt111(void *arg0);
void reset_map_core__17TObjEneMe1CanadinFPv(void* p, void * _w1);
void TObjEneMe1CanadinLeader__sub_8009E4AC(u8 *arg0, s32 arg1);
void update_fade_sequence__23TObjEneMe1CanadinLeaderFPv(void *);
struct Canadin_8009E504 {
    u8 pad0[0x4A4];
    f32 f4a4;
    u8 pad4a8[0x4B8 - 0x4A8];
    s32 state;
    s32 tblIdx;
    s32 timer;
    s32 pos;
};
int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
void noop__17TObjEneMe1CanadinFv(void);
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0);
s32 TObjEneMe1Canadin__vt106(u8 *arg0);
void TObjEneMe1Canadin__vt105(void);
s32 TObjEneMe1Canadin__sub_8009E76C(u8 *arg0);
void advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *arg0);
void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0);
s32 check_target__17TObjEneMe1CanadinFPv(void *arg0);
s32 TObjEneMe1Canadin__sub_8009E860(Canadin_8009E860 *self, f32 *out, f32 _w2);
void TObjEneMe1Canadin__sub_8009E930(u8 *arg0);
void TObjEneMe1Canadin__sub_8009E948(u8 *arg0);
int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p);
void TObjEneMe1Canadin__vt103(u8 *arg0);
void update_move__17TObjEneMe1CanadinFPv(void* p);
void update_angle__17TObjEneMe1CanadinFPv(void *arg0);
void update_hover_height__17TObjEneMe1CanadinFPv(void *arg0);
void set_target_speed_z__17TObjEneMe1CanadinFPv(void *arg0);
void TObjEneMe1Canadin__sub_8009EB14(u8 *arg0, f32 height);
void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0);
void TObjEneMe1Canadin__sub_8009EB98(u8 *arg0, f32 farg0);
void update_dd_flag__17TObjEneMe1CanadinFPv(void *arg0);
void calc_move_vector__17TObjEneMe1CanadinFiPv(s32 arg0, void *arg1);
void TObjEneMe1Canadin__vt104(void *arg0);
void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *arg0);
void update__17TObjEneMe1CanadinFPv(void *arg0);
void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0);
void TObjEneMe1Canadin__sub_8009EE18(void);
void set_state_12__17TObjEneMe1CanadinFPv(void* p);
void set_mode0xD_unless_0xBor0xD__17TObjEneMe1CanadinFPv(void *arg0);
void TObjEneMe1Canadin__sub_8009EE84(void);
void run_task__17TObjEneMe1CanadinFv(u8 *arg0);
void * __dt__17TObjEneMe1CanadinFv(void *arg0, s16 arg1);
void setup_enemy__17TObjEneMe1CanadinFPv(u8 *arg0);
u8 * TObjEneMe1Canadin__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s16 arg4, s16 arg5);
void * init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void * create_canadin__23TObjEneMe1CanadinLeaderFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void * TObjEneMe1Canadin_EffLight__ct(void *, void *, s32);
s32 enemy_has_live_target(void *);
void TObjEneEpsilon__sub_800B92AC(void *, s32, f32);
void enemy_init_validate_period(void *, s32);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
void enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
void enemy_init_acquire_period(void *, s32);
s32 set_target_player__13TBoss2DeRolLeFPvPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void init_object__9TObjEneDDFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
void reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(void *, int);
M2C_UNK update_camera_sequence__9TObjEneDDFPv();
void initialize_enemy_state__9TObjEneDDFPv(void *, s32);
s32 get_random_scaled__9TObjEneDDFv();
void check_state_flag_4__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BA5A4(void *, void *, void *);
void setup__9TObjEneDDFPvii(void *, int, int);
s32 is_alive__9TObjEneDDFPv(void *);
s32 is_player_entity_id();
int TObjEneDD__vt86(void*);
void set_part_position__9TObjEneDDFPvPvi(void *, s32, s32);
void init_model__9TObjEneDDFPv(void *, void *, s32);
void set_active__9TObjEneDDFPv(void *);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, f32, f32, f32);
void move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
u32 TObjEneDD__vt98();
s32 collect_enemy_target_candidates(void *, Entry_8009E860 *);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
void clear_attack_receipts();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
s32 init_common_from__9TObjEneDDFPvPv(void *, void *);
int get_target_info__9TObjEneDDFPv(void*);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void init_position_vectors__9TObjEneDDFPv(u8 *arg0);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(void *, int, s32, void *, s32);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *, f32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 approach_angle_limited(s32, s32, M2C_UNK);
void set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK advance_animation_playback();
u8 * find_entity_by_id(u16);
void free_collision_body_parts(void *);
u32 get_player_by_client_id(u16);
void send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(s32, void *, s32, s32);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void __dt__7TObjectFv(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 rand();
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void vec3_add_to(void *, void *);
M2C_UNK matrix_mult_vec(int, void *, int);
M2C_UNK rotate_vector_by_matrix(int, int, int);
f32 subtract_vector(void *, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();

extern u8 TObjEneMe1Canadin__map_core_default_vec4[];
extern const f32 TObjEneMe1Canadin__data_805D988C;
extern const f32 TObjEneMe1Canadin__data_805D98AC;
extern const f32 TObjEneMe1Canadin__data_805D98B4;
extern const f32 TObjEneMe1Canadin__data_805D98BC;
extern M2C_UNK __vt__17TObjEneMe1Canadin[];
extern const M2C_UNK canadin_formation_reset_vec4[];
extern RecoveredGlobal_8009E4AC_lbl_8043A2A0 canadin_formation_fade_start_color;
extern RecoveredGlobal_8009E1D4_lbl_8043A32C lbl_8043A32C;
extern u8 lbl_8043A340[];
extern const f64 lbl_8043A3C8;
extern M2C_UNK bringer_rush_effect_vtable[];
extern RecoveredGlobal_8009BD00_lbl_80500960 lbl_80500960;
extern s32 bringer_rush_effect_name;
extern void *TObjEneMe1Canadin__class_name;
extern void *lbl_805D4FD0;
extern u32 lbl_805D4FD4;
extern s32 TObjEneMe1Canadin__render_point_cursor;
extern void *lbl_805D4FDC;
extern s32 lbl_805D4FE0;
extern s32 *lbl_805D4FE4;
extern s32 *lbl_805D4FE8;
extern s32 *lbl_805D4FEC;
extern s32 *lbl_805D4FF0;
extern const f32 lbl_805D9860;
extern const f32 lbl_805D9880;
extern const f32 lbl_805D9884;
extern const f32 lbl_805D9890;
extern const f32 lbl_805D9894;
extern const f32 lbl_805D9898;
extern const f32 lbl_805D989C;
extern const f32 lbl_805D98A4;
extern const f32 lbl_805D98A8;
extern const f32 lbl_805D98B0;
extern const f32 lbl_805D98B8;
extern const f32 lbl_805D98C8;
extern const f32 lbl_805D98D0;
extern const f32 lbl_805D98D4;
extern const f32 lbl_805D98E4;
extern const f32 lbl_805D98F4;
extern const f32 lbl_805D991C;
extern const f32 lbl_805D9918;
extern const f32 lbl_805D9920;
extern const f32 lbl_805D9924;
extern const f32 lbl_805D9928;
extern const f32 lbl_805D992C;
extern void *tl_04;

extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
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
void TObjEneDD__vt99();
}
extern "C" {
void TObjEneEpsilon__vt81();
}
extern "C" {
void TObjEneMe1CanadinLeader__vt108(u8 *arg0, s32 arg1);
}
extern "C" {
void TObjEneMe1CanadinLeader__vt109();
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
}
extern "C" {
void TObjPlayer__sub_800F65D0();
}
extern "C" {
void apply_hit_message_flags__10TObjPlayerFPvPv();
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
extern u8 lbl_8043A1B0[];
}
extern "C" {
extern u8 lbl_8043A1C0[];
}
extern "C" {
extern u8 lbl_8043A1CC[];
}
extern "C" {
extern u8 lbl_8043A1E4[];
}
extern "C" {
extern u8 lbl_8043A1FC[];
}
extern "C" {
extern u8 lbl_8043A214[];
}
extern "C" {
extern u8 lbl_8043A22C[];
}
extern "C" {
extern u8 lbl_8043A240[];
}
extern "C" {
extern u8 lbl_8043A254[];
}
extern "C" {
extern u8 lbl_8043A2B0[];
}
extern "C" {
extern u8 lbl_8043A2CC[];
}
extern "C" {
extern u8 lbl_8043A2D8[];
}
extern "C" {
extern u8 lbl_8043A2F8[];
}
extern "C" {
extern u8 lbl_8043A308[];
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
extern void *bm_ene_me1_mb_model_names[3];
extern void *bm_ene_me1_mb_motion_names[7];
void *lbl_8048FEB0[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_8048FECC[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *bm_ene_me1_mb_model_names[3] = {
    (void *)&lbl_8043A1B0, (void *)&lbl_8043A1C0, (void *)0x0,
};
void *bm_ene_me1_mb_motion_names[7] = {
    (void *)&lbl_8043A1CC, (void *)&lbl_8043A1E4, (void *)&lbl_8043A1FC, (void *)&lbl_8043A214,
    (void *)&lbl_8043A22C, (void *)&lbl_8043A240, (void *)0x0,
};
void *bm_ene_me1_mb_resource_descriptor[4] = {
    (void *)&lbl_8043A254, (void *)&bm_ene_me1_mb_model_names, (void *)&bm_ene_me1_mb_motion_names, (void *)0x20006,
};
void *lbl_8048FF30[28] = {
    (void *)0x10000, (void *)0x4, (void *)0x3e4ccccd, (void *)0x0,
    (void *)0x10000, (void *)0x5, (void *)0x3e4ccccd, (void *)0x0,
    (void *)0x20001, (void *)0x1, (void *)0x3f000000, (void *)0x0,
    (void *)0x20000, (void *)0x0, (void *)0x3f000000, (void *)0x0,
    (void *)0x20000, (void *)0x2, (void *)0x3f333333, (void *)0x0,
    (void *)0x20001, (void *)0x3, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x1, (void *)0x3f000000, (void *)0x0,
};
void *canadin_leader_fade_sequence_table[5] = {
    (void *)&lbl_8043A2B0, (void *)&lbl_8043A2CC, (void *)&lbl_8043A2D8, (void *)&lbl_8043A2F8,
    (void *)&lbl_8043A308,
};
void *__vt__23TObjEneMe1CanadinLeader[118] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__23TObjEneMe1CanadinLeaderFv, (void *)&run_task__23TObjEneMe1CanadinLeaderFv,
    (void *)&TObjPlayer__sub_8009BA04, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneMe1Canadin__sub_8009EE84, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneMe1Canadin__sub_8009EE18, (void *)&set_state_12__17TObjEneMe1CanadinFPv, (void *)&set_mode0xD_unless_0xBor0xD__17TObjEneMe1CanadinFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&dispatch_state__17TObjEneMe1CanadinFPvUii,
    (void *)&update__17TObjEneMe1CanadinFPv, (void *)&call_dd_vt86__17TObjEneMe1CanadinFPv, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&update_dd_flag__17TObjEneMe1CanadinFPv, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&select_and_apply_target__17TObjEneMe1CanadinFPv, (void *)&TObjEneMe1CanadinLeader__vt103, (void *)&TObjEneMe1CanadinLeader__vt104, (void *)&TObjEneMe1CanadinLeader__vt105,
    (void *)&TObjEneMe1CanadinLeader__vt106, (void *)&TObjEneMe1CanadinLeader__vt107, (void *)&TObjEneMe1CanadinLeader__vt108, (void *)&TObjEneMe1CanadinLeader__vt109,
    (void *)&TObjEneMe1CanadinLeader__vt110, (void *)&TObjEneMe1CanadinLeader__vt111, (void *)&update_if_ready__17TObjEneMe1CanadinFPv, (void *)&render_canadin_model_with_debug_type,
    (void *)&TObjEneMe1CanadinLeader__vt114, (void *)&TObjEneMe1CanadinLeader__vt115,
};
#define lbl_8048FEB0 ((u8 *)lbl_8048FEB0)
#define lbl_8048FECC ((u8 *)lbl_8048FECC)
#define lbl_8048FF30 ((u8 *)lbl_8048FF30)
#define __vt__23TObjEneMe1CanadinLeader ((M2C_UNK *)__vt__23TObjEneMe1CanadinLeader)

u32 lbl_80500930[3];
u32 lbl_8050093C[3];
u32 lbl_80500948[3];
u32 lbl_80500954[3];
#define lbl_80500930 ((s32 *)lbl_80500930)
#define lbl_8050093C ((s32 *)lbl_8050093C)
#define lbl_80500948 ((s32 *)lbl_80500948)
#define lbl_80500954 ((s32 *)lbl_80500954)

void bringer_effect_cleanup_noop(void);

void render_bringer_rush_effect_noop(void);

void update_bringer_rush_effect(u8 *arg0);

void *destroy_bringer_rush_effect(void *arg0, s16 arg1);

u8 *construct_bringer_rush_effect(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0);

void TObjEneMe1CanadinLeader__vt110(Leader_8009AB4C *obj, s32 mode) {
    s32 i;
    Fields_8009AB4C *self;
    self = (Fields_8009AB4C *)obj;
    switch (mode) {
    case 4:
        create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D4FDC, 0, self->field24, self->pos2FC, self->angle);
        for (i = 0; i < self->count; i++) {
            set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(self->members[i]);
        }
        self->flags3C8 |= 0x400000;
        play_sound_effect(0x4003B71D, self->pos2FC, 0, 0);
        refresh_lobby_state__10TObjPlayerFPv(self);
        break;
    case 0:
        if (obj->m107() != 0) {
            send_entity_set_flags__6TLobbyFPv(self);
            queue_destruction__7TObjectFv(self);
        }
        break;
    case 5:
        self->flags30 &= ~0x200;
        break;
    case 1:
        return;
    case 3:
        return;
    }
}

#define self ((Obj_8009AD18 *)arg0)
void TObjEneMe1CanadinLeader__vt108(u8 *arg0, s32 arg1) {
    s32 k;
    s32 i;
    s32 j;

    switch (arg1) {
    case 4: {
        advance_state_5_to_4__17TObjEneMe1CanadinFPv(arg0);
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        ((VObj_8009AD18 *)arg0)->m94();
        const f32 *p = (const f32 *)canadin_formation_reset_vec4;
        self->f4A8 = p[1];
        self->f4AC = p[2];
        self->f4B0 = p[3];
        self->sub = 0;
        for (k = 2, i = 0; i < self->count; k += 2, i++) {
            set_leader_index__23TObjEneMe1CanadinLeaderFPvii(self->members[i], self->f390, k);
        }
        break;
    }
    case 3:
        if (self->flags3C8 & 2) {
            self->flags3C8 &= ~2;
            self->f4F4 = 1;
            transition_enemy_state(arg0, 4);
        }
        break;
    case 0:
        ((void (*)(void *))advance_animation_playback)(arg0);
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        switch (self->sub) {
        case 0:
            self->timer--;
            if (self->timer <= 0) {
                self->f4B8 = 2;
                self->sub = 1;
                play_sound_effect(0x4003B21A, arg0 + 0x2FC, 0, 0);
            }
            break;
        case 1:
            if (self->f4B8 == 0) {
                self->flags3C8 |= 0x8000;
                for (j = 0; j < self->count; j++) {
                    if (TObjEneMe1CanadinLeader__sub_8009E36C(self->members[j]) == 0) {
                        break;
                    }
                }
                if (j == self->count) {
                    set_attack_flag__23TObjEneMe1CanadinLeaderFPv(arg0);
                    s32 m;
                    for (m = 0; m < self->count; m++) {
                        set_attack_flag__23TObjEneMe1CanadinLeaderFPv(self->members[m]);
                    }
                }
            }
            update_move__17TObjEneMe1CanadinFPv(arg0);
            break;
        }
        TObjEneMe1Canadin__sub_8009EB14(arg0, lbl_805D9890 + self->f3C);
        ((VObj_8009AD18 *)arg0)->m87();
        break;
    case 5:
        ((VObj_8009AD18 *)arg0)->m90();
        break;
    }
}
#undef self

#define self ((Obj_8009AF54 *)arg0)
void update_formation_state__23TObjEneMe1CanadinLeaderFPv(void *arg0) {
    s32 i;
    s32 j;
    if (self->flags3C8 & 0x10) {
        self->flags3C8 &= ~0x10;
        self->state = 7;
    }
    switch (self->state) {
    case 1:
        ((M2C_UNK (*)(void *, s32))TObjEneMe1CanadinLeader__sub_8009E4AC)(arg0, 0);
        self->state = 2;
        play_sound_effect(0x4003AD1B, self->pos, 0, 0);
        break;
    case 2:
        if (self->f4B8 == 0) {
            self->state = 3;
            self->flags3C8 &= ~8;
            copy_vec4__13TRaderMapCoreFPvPv(self->v4A4, ((M2C_UNK *)canadin_formation_reset_vec4));
            for (i = 0; i < self->count; i++) {
                if (((s32 (*)(void *, s32))TObjEneMe1CanadinLeader__sub_8009E31C)(self->members[i], 0x200) != 0) {
                    ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E27C)(self->members[i]);
                }
            }
        }
        break;
    case 3:
        if (self->flags3C8 & 8) {
            self->state = 4;
        }
        break;
    case 4:
        ((M2C_UNK (*)(void *, s32))TObjEneMe1CanadinLeader__sub_8009E4AC)(arg0, 2);
        self->state = 5;
        play_sound_effect(0x4003AD1C, self->pos, 0, 0);
        break;
    case 5:
        if (self->f4B8 == 0) {
            copy_vec4__13TRaderMapCoreFPvPv(self->v4A4, ((M2C_UNK *)canadin_formation_reset_vec4));
            self->state = 6;
            for (i = 0; i < self->count; i++) {
                if (((s32 (*)(void *, s32))TObjEneMe1CanadinLeader__sub_8009E31C)(self->members[i], 0x100) != 0) {
                    ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E27C)(self->members[i]);
                }
            }
        }
        break;
    case 6:
        break;
    case 7:
        ((M2C_UNK (*)(void *, s32))TObjEneMe1CanadinLeader__sub_8009E4AC)(arg0, 4);
        self->state = 8;
        play_sound_effect(0x4003AD1B, self->pos, 0, 0);
        break;
    case 8:
        if (self->f4B8 == 0) {
            self->state = 9;
            copy_vec4__13TRaderMapCoreFPvPv(self->v4A4, ((M2C_UNK *)canadin_formation_reset_vec4));
            for (j = 0; j < self->count; j++) {
                ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E258)(self->members[j]);
            }
            ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E258)(arg0);
        }
        break;
    case 0:
    case 9:
        break;
    }
}

#undef self
u8 TObjEneMe1CanadinLeader__vt107(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x4D0) <= 0);
}

void TObjEneMe1CanadinLeader__vt111(void *arg0) {
    *lbl_805D4FE4 = M2C_FIELD(arg0, s32 *, 0x4B4);
    *lbl_805D4FE8 = M2C_FIELD(arg0, s32 *, 0x4B4);
}

s32 TObjEneMe1CanadinLeader__vt114(Obj_8009B1CC *arg0) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        if ((void *)fn_8009E300(arg0->items[i]) == arg0->key) {
            n++;
        }
    }
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return n < 4;
    }
    return n < 2;
}

void TObjEneMe1CanadinLeader__vt115(Leader_8009B274 *self, u32 id) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        if (self->ids[i] == id) {
            self->count--;
            u32 t = self->ids[self->count];
            self->ids[self->count] = id;
            self->ids[i] = t;
            break;
        }
    }
    if (self->mode == 3) {
        s32 k = get_status_value_f32__23TObjEneMe1CanadinLeaderFv((f32)self->max / (f32)self->info->f2C);
        if (self->count <= self->max - k) {
            self->f3C0 = ((s32 (*)(u16))find_entity_by_id)(self->f4C8);
            ((M2C_UNK (*)(s32))set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv)(self->f3C0);
        }
    }
    if (!(self->flags & 0x100000) && self->count <= self->max / 2) {
        self->flags |= 0x10;
    }
    if (self->count <= 2) {
        self->flags |= 0x40;
    }
}

s32 TObjEneMe1CanadinLeader__vt106(Obj_8009B3C0 *self) {
    s32 i;
    if (self->flags & 0x40) {
        self->flags &= ~0x40;
        ((s32 (*)(void *, s16))transition_enemy_state)(self, 0xb);
        for (i = 0; i < self->count; i++) {
            set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(self->members[i]);
        }
        return 1;
    }
    return 0;
}

void TObjEneMe1CanadinLeader__vt105(Leader_8009B43C *self) {
    s32 id;
    s32 sub;
    s32 angle;
    s32 n;
    s32 i;
    s32 j;
    Vec_8009B43C v;
    n = (s32)get_status_value_f32__23TObjEneMe1CanadinLeaderFv((f32)self->max / (f32)self->info->f2C);
    if (n < 1) {
        n = 1;
    }
    angle = self->angle;
    id = (self->f1C + 1) & 0xFFFF;
    sub = self->f2C + 1;
    for (i = 0; i < n; i++) {
        v.x = lbl_805D9894 * sin_table_lookup(angle);
        v.y = lbl_805D9898;
        v.z = lbl_805D9894 * cos_table_lookup(angle);
        vec3_add_to(&v, &self->pos);
        angle += 0x10000 / self->max;
        self->ids[i] = create_canadin__23TObjEneMe1CanadinLeaderFPvPvPvPv(self, &v, (void *)id++, (void *)sub++);
        ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E334)(self->ids[i]);
        self->count++;
    }
    for (j = n; j < self->max; j++) {
        v.x = lbl_805D9894 * sin_table_lookup(angle);
        v.y = lbl_805D9898;
        v.z = lbl_805D9894 * cos_table_lookup(angle);
        vec3_add_to(&v, &self->pos);
        angle += 0x10000 / self->max;
        self->ids[j] = create_canadin__23TObjEneMe1CanadinLeaderFPvPvPvPv(self, &v, (void *)id++, (void *)sub++);
        ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E350)(self->ids[j]);
        self->count++;
    }
}

void TObjEneMe1CanadinLeader__vt103(Obj_8009B638 *self) {
    switch (self->step) {
    case 0:
    case 1:
        self->step++;
        ((s32 (*)(void *, s16))transition_enemy_state)(self, 6);
        break;
    case 2:
        self->step = 0;
        ((s32 (*)(void *, s16))transition_enemy_state)(self, 7);
        break;
    }
}

void TObjEneMe1CanadinLeader__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x1C);
}

void run_task__23TObjEneMe1CanadinLeaderFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m112();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        update_fade_sequence__23TObjEneMe1CanadinLeaderFPv((void *) (arg0));
        update_formation_state__23TObjEneMe1CanadinLeaderFPv((void *)((void *) (arg0)));
    }
    ((M2C_UNK (*)(void *))copy_pos__17TObjEneMe1CanadinFPv)((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

void *__dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjEneMe1CanadinLeader;
        ((void (*)(void *, int))__dt__17TObjEneMe1CanadinFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

struct VBase_18_1e038c { char pad[0x18]; };
struct VObj_18_1e038c : VBase_18_1e038c {
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
};

void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
extern s32 TObjEneMe1CanadinLeader__class_name;

struct List_8009B7C0 { u8 pad[0x4CC]; s32 cap; s32 n; s32 items[8]; };

void *TObjEneMe1CanadinLeader__ct(void *arg0, void *a, void *b) {
    s32 i;
    List_8009B7C0 *l;

    init__17TObjEneMe1CanadinFPvPvPvPv(arg0, a, b, (void *)2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjEneMe1CanadinLeader;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjEneMe1CanadinLeader__class_name;
    ((VObj_18_1e038c *)(arg0))->m104();
    M2C_FIELD(arg0, f32 *, 0x3E8) += lbl_805D989C;
    l = (List_8009B7C0 *)arg0;
    l->cap = 8;
    l->n = 0;
    for (i = 0; i < 8; i++) {
        l->items[i] = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4F4) = 0;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x1D);
    return arg0;
}

void *create__23TObjEneMe1CanadinLeaderFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F8);
    if (o != NULL) {
        o = TObjEneMe1CanadinLeader__ct(o, tl_04, arg0);
    }
    return o;
}

void render_canadin_model_with_debug_type(u8 *arg0) {
    s32 temp_r3;
    if ((((s32)get_target_info__9TObjEneDDFPv((void*)(arg0))) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
        if (temp_r3 & 0x100) {
            queue_debug_text__13TObjEneMe1GeeFiPv(pack_debug_text_position(0, 0), (void *) (lbl_8043A398));
        } else if (temp_r3 & 0x200) {
            queue_debug_text__13TObjEneMe1GeeFiPv(pack_debug_text_position(0, 0), (void *) (lbl_8043A3A8));
        } else {
            queue_debug_text__13TObjEneMe1GeeFiPv(pack_debug_text_position(0, 0), (void *) (lbl_8043A3BC));
        }
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805D98A0, lbl_805D98A4) != 0) {
        update_player_state__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (0));
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        clear_global_flag_400__9TObjEneDDFv();
        draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void update_if_ready__17TObjEneMe1CanadinFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { ((int (*)(void*))update_by_field_0x354__17TObjEneMe1CanadinFPv)(p); } }

void TObjPlayer__sub_8009BA04(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r0_2;
    s32 var_r30;
    s32 var_r29;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_8dc821 *)(arg0))->m113();
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x400000) {
        var_r30 = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        var_r30 = ((VObj_18_8dc821 *)(arg0))->m9(lbl_805D9E88, lbl_805D9E84, lbl_805D98A4);
    } else if (((VObj_18_8dc821 *)(arg0))->m8(lbl_805D98A0, lbl_805D98A4) != 0) {
        var_r30 = 1;
    } else {
        var_r30 = 0;
    }
    if (var_r30 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x01000000) {
            update_player_state__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (0));
        }
        update_secondary_light__9TObjEneDDFPv((void *) (arg0));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        lbl_805D5660 = model_render_flags;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        ((VObj_18_8dc821 *)(arg0))->m111();
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        translate_matrix((int) (0), (f32) (lbl_805D9898), (f32) (M2C_FIELD(arg0, f32 *, 0x3F4)), (f32) (lbl_805D9898));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        var_r29 = 1;
        if ((temp_r0 == 1) || (temp_r0 == 0xB)) {
            ((VObj_14_aa9368 *)((u8 *)(arg0) + (972)))->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0) {
                var_r29 = 0;
            }
        }
        if (var_r29 != 0) {
            if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
                lbl_805D4FD4 = 0;
                TObjEneMe1Canadin__render_point_cursor = (s32)(arg0 + 0x414);
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x438), (void *) (lbl_8043A268));
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x420), (void *) (lbl_8043A274));
                set_global_state__16TObjEneRe7BeruraFi((void *) (&fn_8009BD00));
                if (var_r30 == 1) {
                    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
                } else {
                    render_world_model__10TObjPlayerFPv((void *) (arg0));
                }
                set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
            } else {
                rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
                lbl_805D4FD4 = -1;
                TObjEneMe1Canadin__render_point_cursor = (s32)(arg0 + 0x414);
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x438), (void *) (lbl_8043A268));
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x420), (void *) (lbl_8043A274));
                set_global_state__16TObjEneRe7BeruraFi((void *) (&fn_8009BD00));
                draw_with_alt_model__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x410)));
                set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r0_2 == 1) || (temp_r0_2 == 0xB)) {
            ((VObj_14_aa9368 *)((u8 *)(arg0) + (972)))->m7();
        }
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        model_render_flags = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv((void *) (arg0));
        return;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x438), (void *) (lbl_8043A268));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x420), (void *) (lbl_8043A274));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x42C), (void *) (arg0 + 0x2FC));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x414), (void *) (arg0 + 0x2FC));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x444), (void *) (arg0 + 0x2FC));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x450), (void *) (arg0 + 0x2FC));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x45C), (void *) (arg0 + 0x2FC));
}

void fn_8009BD00(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    switch (lbl_805D4FD4) {
    case 2:
    case 3:
        push_matrix();
        update_camera_sequence__9TObjEneDDFPv();
        temp_r5 = TObjEneMe1Canadin__render_point_cursor;
        TObjEneMe1Canadin__render_point_cursor = temp_r5 + 0xC;
        matrix_mult_vec((int) (0), (void *) (&lbl_80500960.value), (int) (temp_r5));
        temp_r4 = TObjEneMe1Canadin__render_point_cursor;
        temp_r5_2 = temp_r4;
        TObjEneMe1Canadin__render_point_cursor = temp_r4 + 0xC;
        rotate_vector_by_matrix((int) (0), (int) (temp_r4), (int) (temp_r5_2));
        pop_matrix();
        break;
    case 6:
    case 11:
    case 14:
        temp_r4_2 = TObjEneMe1Canadin__render_point_cursor;
        TObjEneMe1Canadin__render_point_cursor = temp_r4_2 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((void *) (&lbl_80500960.value), (int) (temp_r4_2));
        break;
    }
    lbl_805D4FD4 += 1;
}

void update_by_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    f32 temp_f1;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x484) = ((f32 (*)(s32, f32))sin_table_lookup)(M2C_FIELD(arg0, s32 *, 0x60), temp_f1);
        M2C_FIELD(arg0, f32 *, 0x488) = ((f32 (*)(s32))cos_table_lookup)(M2C_FIELD(arg0, s32 *, 0x60));
        return;
    case 0:
        advance_animation_playback();
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
        move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x484), M2C_FIELD(arg0, f32 *, 0x488), lbl_805D98A8);
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
        advance_animation_playback();
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

void TObjEneMe1Canadin__vt110(u8 *arg0, s32 arg1) {
    Stack_8009BF0C stack;
    f32 temp_f1;
    u8 *temp_r3;
    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, u8 **, 0x3C0) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x4C8));
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3C0));
            ((VObj_18_0f49f2 *)(temp_r3))->m115(arg0);
        }
        ((M2C_UNK (*)(void *, int, int, void *, int))create_breakup_mdl__12TBoss3VoloptFiiiii)((void *) (lbl_805D4FE0), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (arg0 + 0x2FC), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x400000);
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x2FC));
        temp_f1 = stack.spC;
        stack.spC = temp_f1 - TObjEneMe1Canadin__data_805D98AC;
        trigger_dell_biter_events__10TObjPlayerFPv((void *) (&stack.sp8), (f32) (temp_f1));
        refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) (arg0));
        ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)((int) (0x4003AA1E), (void *) (arg0 + 0x2FC), (int) (0), (int) (0));
        return;
    case 0:
        ((M2C_UNK (*)(void))queue_destruction__7TObjectFv)();
    case 3:
    case 5:
        return;
    }
}

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
                ((M2C_UNK (*)(void *))advance_state_5_to_4__17TObjEneMe1CanadinFPv)(arg0);
            }
            ((M2C_UNK (*)(void *, f32))TObjEneMe1Canadin__sub_8009EB14)(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F4));
            break;
        case 1:
            copy_position__14TObjEneEpsilonFPv(arg0, arg0 + 0x50);
            update_velocity__9TObjEneDDFPv(arg0);
            ((M2C_UNK (*)(void *))update_angle__17TObjEneMe1CanadinFPv)(arg0);
            ((M2C_UNK (*)(void *))update_position_with_offset__17TObjEneMe1CanadinFPv)(arg0);
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805D98B0) {
                move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), TObjEneMe1Canadin__data_805D98B4);
            }
            break;
        }
        ((VObj *)arg0)->m87();
        ((M2C_UNK (*)(void *))noop__17TObjEneMe1CanadinFv)(arg0);
        break;
    }
}

void TObjEneMe1Canadin__sub_8009C178(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (int) (0xB));
        ((VObj_18_p4 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, u8 **, 0x3C0) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x4C8));
            temp_r3 = M2C_FIELD(arg0, u8 **, 0x3C0);
            ((VObj_18_p4 *)(temp_r3))->m115(arg0);
        } else {
            ((M2C_UNK (*)(void *))send_entity_set_flags__6TLobbyFPv)((void *) (arg0));
        }
        create_timed_particle_emitter((void *) (arg0 + 0x2FC), (int) (0x117), (int) (0), (int) (0x19));
        create_timed_particle_emitter((void *) (arg0 + 0x2FC), (int) (0x118), (int) (0x19), (int) (0xF));
        ((Sub_8009C178 *)(arg0 + 0x3CC))->s1(0x19);
        ((Sub_8009C178 *)(arg0 + 0x3CC))->s2();
        ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)((int) (0x4003AD18), (void *) (arg0 + 0x2FC), (int) (0), (int) (0));
        return;
    case 3:
        if ((((Sub_8009C178 *)(arg0 + 0x3CC))->s4() != 0) && (((VObj_18_p4 *)(arg0))->m107() != 0)) {
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
        ((VObj_18_p4 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x3C8) &= 0xFFBFFFFF;
        M2C_FIELD(arg0, s32 *, 0x3C8) |= 0x200000;
        M2C_FIELD(arg0, s32 *, 0x30) |= 0x01000000;
        M2C_FIELD(arg0, s32 *, 0x410) = -0x7F80;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x470) >= 0x96) {
            ((void (*)(void *, s16))transition_enemy_state)(arg0, 0xD);
            M2C_FIELD(arg0, s16 *, 0x32C) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) |= 0x800;
            ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(0x4003AD1F, arg0 + 0x2FC, 0, 0);
        }
        break;
    case 1:
        break;
    case 0: {
        advance_animation_playback();
        if (update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C) != 0) {
            enemy_copy_target_destination(arg0);
        }
        update_velocity__9TObjEneDDFPv(arg0);
        ((void (*)(void *, f32))TObjEneMe1Canadin__sub_8009EB98)(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3EC));
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
        ((VObj_18_p4 *)arg0)->m87();
        break;
    }
    case 5:
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        break;
    }
}

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
        ((VObj_18_p4 *)arg0)->m94();
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
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&v, arg0 + 0x308);
        f = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, v.x, v.z, f);
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
        ((VObj_18_p4 *)arg0)->m87();
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

void run_task__17TObjEneMe1CanadinFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((M2C_UNK (*)(void))advance_state_5_to_4__17TObjEneMe1CanadinFPv)();
        ((M2C_UNK (*)(void *, int))set_field_378__9TObjEneDDFPvi)((void *) (arg0), (int) (9));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj_8009c7d8 *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = ((s32 (*)(int))find_entity_by_id)((int) (M2C_FIELD(arg0, u16 *, 0x4C8)));
            ((M2C_UNK (*)(int))set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv)((int) (M2C_FIELD(arg0, s32 *, 0x3C0)));
        }
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        return;
    case 3:
        if ((((VObj_8009c7d8 *) arg0)->m106() == 0) && (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805D98D4)) {
            ((M2C_UNK (*)(void *, int))transition_enemy_state)((void *) (arg0), (int) (5));
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        copy_position__14TObjEneEpsilonFPv((void *) (arg0), (void *) (arg0 + 0x50));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        ((M2C_UNK (*)(void *))update_angle__17TObjEneMe1CanadinFPv)((void *) (arg0));
        ((M2C_UNK (*)(void *))update_position_with_offset__17TObjEneMe1CanadinFPv)((void *) (arg0));
        move_with_wall_slide_commit__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (TObjEneMe1Canadin__data_805D98B4));
        ((VObj_8009c7d8 *) arg0)->m86();
        ((M2C_UNK (*)(void *))noop__17TObjEneMe1CanadinFv)((void *) (arg0));
        break;
    }
}

#pragma push
#pragma fp_contract on
void TObjEneMe1Canadin__sub_8009C91C(void *arg0, s32 arg1) {
    Can_8009C91C *o = (Can_8009C91C *)arg0;
    Vec_8009C91C *dir = &o->dir;
    switch (arg1) {
    case 4:
        advance_state_4_to_5__17TObjEneMe1CanadinFPv(o);
        set_field_378__9TObjEneDDFPvi(o, 8);
        o->flags &= 0xFFBFFFFF;
        ((VObj_8009C91C *)o)->m94();
        o->f404 = 0;
        o->mode = 1;
        TObjEneMe1Canadin__sub_8009E948((u8 *)o);
        o->timer = 0;
        o->count = 0;
        o->rot = 0;
        o->f484 = lbl_805D9898;
        o->dist = lbl_805D9898;
        o->ddist = lbl_805D9898;
        dir->x = lbl_805D9898;
        dir->y = lbl_805D9898;
        dir->z = lbl_805D9898;
        break;
    case 3:
        if (((VObj_8009C91C *)o)->m106() == 0 && try_trigger_action__17TObjEneMe1CanadinFPv(o) == 0 && o->count >= 4) {
            ((VObj_8009C91C *)o)->m103();
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_linked_position__14TObjEneEpsilonFPv(o, TObjEneMe1Canadin__data_805D988C) != 0) {
            switch (o->mode) {
            case 1: {
                if (o->timer == 0) {
                    f32 t;
                    enemy_copy_target_destination(o);
                    update_velocity__9TObjEneDDFPv(o);
                    t = lbl_805D98D8 * calc_elapsed_scaled__9TObjEneDDFv(o);
                    if (t >= lbl_805D9898) {
                        t += lbl_805D98DC;
                    } else {
                        t -= lbl_805D98DC;
                    }
                    t *= lbl_805D98E0;
                    o->rot = t;
                    dir->x = -o->vel.x;
                    dir->z = -o->vel.z;
                    o->f484 = lbl_805D98E0 * (o->f3E8 - o->f3F4);
                    o->ddist = lbl_805D98E0 * (lbl_805D98E4 - o->f3AC);
                    o->dist = o->f3AC;
                }
                o->timer++;
                if (o->timer >= 8) {
                    o->count++;
                    o->mode = 0;
                    TObjEneMe1Canadin__sub_8009E930((u8 *)o);
                }
                o->f3F8 += o->f484;
                rotate_xz_pair_by_angle(&dir->x, &dir->z, o->rot);
                {
                    Vec_8009C91C v;
                    f32 c;
                    o->dist += o->ddist;
                    v.x = dir->x * o->dist + o->base.x;
                    v.z = dir->z * o->dist + o->base.z;
                    subtract_vector(&v, &o->pos38);
                    c = clamp_velocity__15TObjBoss2TunnelFPv(&v);
                    move_to_wall_clamped_destination__9TObjEneDDFPvfff(o, v.x, v.z, c);
                }
                o->angle = (s32)(lbl_8043A3C8 * atan2_float(dir->x, dir->z)) + 0x8000;
                push_history_entry__17TObjEneMe1CanadinFPvfPvi(o->f408, TObjEneMe1Canadin__data_805D98B4, o->f414, o->f4B4);
                break;
            }
            case 0:
                enemy_copy_target_destination(o);
                update_velocity__9TObjEneDDFPv(o);
                update_angle__17TObjEneMe1CanadinFPv(o);
                update_hover_height__17TObjEneMe1CanadinFPv(o);
                o->timer++;
                if (o->timer > 30) {
                    o->timer = 0;
                    o->mode = 1;
                }
                break;
            }
            ((VObj_8009C91C *)o)->m87();
        }
        break;
    case 5:
        TObjEneMe1Canadin__sub_8009E930((u8 *)o);
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneMe1Canadin__sub_8009D320(void *arg0, s32 arg1) {
    Vec_8009D320 *pos;
    Can_8009D320 *o = (Can_8009D320 *)arg0;
    pos = &o->pos;
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(o, 6);
        o->flags |= 0x10000;
        o->flags &= 0xFFBFFFFF;
        ((VObj_18_2d9fb9 *)o)->m94();
        o->f30 |= 0x01000000;
        reset_map_core__17TObjEneMe1CanadinFPv(o, (void *)canadin_formation_reset_vec4);
        o->mode = 1;
        o->timer = 0;
        o->f49C = 0;
        o->f4A0 = 0;
        break;
    case 3:
        if (((VObj_18_2d9fb9 *)o)->m106() == 0 && try_trigger_action__17TObjEneMe1CanadinFPv(o) == 0 && o->mode == 6) {
            if (o->flags & 0x100000) {
                transition_enemy_state(o, 8);
            } else {
                transition_enemy_state(o, 9);
            }
        }
        break;
    case 0:
        advance_animation_playback();
        if (o->mode == 1) {
            if (update_linked_position__14TObjEneEpsilonFPv(o, TObjEneMe1Canadin__data_805D988C) == 0) {
                break;
            }
        } else if (update_death_check__14TObjEneEpsilonFPv(o) == 0) {
            break;
        }
        enemy_copy_target_destination(o);
        switch (o->mode) {
        case 1:
            update_velocity__9TObjEneDDFPv(o);
            if (check_target__17TObjEneMe1CanadinFPv(o) != 0) {
                o->mode = 2;
                o->flags |= 0x40000;
                advance_state_4_to_5__17TObjEneMe1CanadinFPv(o);
            } else {
                advance_state_5_to_4__17TObjEneMe1CanadinFPv(o);
            }
            TObjEneEpsilon__sub_800B92F8(o, 0x200, TObjEneMe1Canadin__data_805D98BC);
            break;
        case 2:
            update_velocity__9TObjEneDDFPv(o);
            update_angle__17TObjEneMe1CanadinFPv(o);
            if (o->fB8 == 1) {
                void *p;
                o->mode = 3;
                reset_map_core__17TObjEneMe1CanadinFPv(o, TObjEneMe1Canadin__map_core_default_vec4);
                VecCopy__FP3VecPC3Vec(pos, &o->base);
                p = __nw__7TObjectFUl(0x48);
                if (p != 0) {
                    p = TObjEneMe1Canadin_EffLine__ct(p, o, o->f414, pos);
                }
                o->f49C = p;
                play_sound_effect(0x4002B71B, o->snd, 0, 0);
                play_sound_effect(0x4002B51E, o->snd, 0, 0);
            }
            break;
        case 3: {
            Vec_8009D320 v;
            update_velocity__9TObjEneDDFPv(o);
            update_angle__17TObjEneMe1CanadinFPv(o);
            VecCopy__FP3VecPC3Vec(&v, &o->base);
            subtract_vector(&v, pos);
            if (clamp_velocity__15TObjBoss2TunnelFPv(&v) < lbl_805D9910) {
                VecCopy__FP3VecPC3Vec(pos, &o->base);
            } else {
                pos->x = lbl_805D9910 * v.x + pos->x;
                pos->y = lbl_805D9910 * v.y + pos->y;
                pos->z = lbl_805D9910 * v.z + pos->z;
            }
            if (o->f4A0 == 0) {
                o->f4A0 = create_particle_emitter(o->f414, 0xF7);
                if (o->f4A0 != 0) {
                    enable__13TParticleCtrlFPv(o->f4A0);
                }
            } else {
                copy_pos__11TNowLoadingFPvPv(o->f4A0, o->f414);
            }
            o->timer++;
            if (o->timer > o->prm->f18) {
                o->mode = 4;
                o->timer = 0;
                queue_destruction__7TObjectFv(o->f49C);
                o->f49C = 0;
                if (o->f4A0 != 0) {
                    queue_destruction__7TObjectFv(o->f4A0);
                    o->f4A0 = 0;
                }
            }
            break;
        }
        case 4:
            o->timer++;
            if (o->timer >= o->prm->f1C) {
                o->mode = 5;
                o->timer = 0;
                o->flags &= 0xFFFBFFFF;
                reset_map_core__17TObjEneMe1CanadinFPv(o, (void *)canadin_formation_reset_vec4);
                o->f404++;
                {
                    void *q = __nw__7TObjectFUl(0x68);
                    if (q != 0) {
                        TObjEneMe1Canadin_EffDischarge__ct(q, o, o->f414, pos);
                    }
                }
                play_sound_effect(0x4002A408, o->snd, 0, 0);
            }
            break;
        case 5:
            o->timer++;
            if (o->timer > o->prm->f20) {
                o->timer = 0;
                if (o->f404 >= o->prm->f24) {
                    o->mode = 6;
                } else {
                    o->mode = 1;
                }
            }
            break;
        }
        update_position_with_offset__17TObjEneMe1CanadinFPv(o);
        ((VObj_18_2d9fb9 *)o)->m87();
        ((void (*)(void *))noop__17TObjEneMe1CanadinFv)(o);
        break;
    case 5:
        o->flags &= 0xFFFBFFFF;
        reset_map_core__17TObjEneMe1CanadinFPv(o, (void *)canadin_formation_reset_vec4);
        if (o->f49C != 0) {
            queue_destruction__7TObjectFv(o->f49C);
            o->f49C = 0;
        }
        if (o->f4A0 != 0) {
            queue_destruction__7TObjectFv(o->f4A0);
            o->f4A0 = 0;
        }
        break;
    }
}
#pragma pop

void move__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        ((M2C_UNK (*)(void))advance_state_5_to_4__17TObjEneMe1CanadinFPv)();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj18D_8009BDA8 *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 3:
        if ((((VObj18D_8009BDA8 *) arg0)->vf1B0() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x470) == 3)) {
            M2C_FIELD(arg0, s32 *, 0x404) = 0;
            ((VObj18D_8009BDA8 *) arg0)->vf1A4();
        }
    case 5:
    case 1:
        return;
    case 0:
        advance_animation_playback();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x470);
        switch (temp_r0) {
        case 0:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 4) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFB);
                if (((s32 (*)(void *, M2C_UNK))TObjEneMe1CanadinLeader__sub_8009E31C)(arg0, 0x200) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x470) = 1;
                    ((M2C_UNK (*)(void *, M2C_UNK))TObjEneMe1CanadinLeader__sub_8009E4AC)(arg0, 1);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x470) = 2;
                    ((M2C_UNK (*)(void *))advance_state_4_to_5__17TObjEneMe1CanadinFPv)(arg0);
                    ((M2C_UNK (*)(void *, M2C_UNK))TObjEneMe1CanadinLeader__sub_8009E4AC)(arg0, 3);
                }
            }
            ((M2C_UNK (*)(void *))update_move__17TObjEneMe1CanadinFPv)(arg0);
            ((M2C_UNK (*)(void *))update_hover_height__17TObjEneMe1CanadinFPv)(arg0);
            break;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4B8) == 0) {
                M2C_FIELD(arg0, s32 *, 0x470) = 3;
            }
            ((M2C_UNK (*)(void *))update_move__17TObjEneMe1CanadinFPv)(arg0);
            ((M2C_UNK (*)(void *))update_hover_height__17TObjEneMe1CanadinFPv)(arg0);
            break;
        case 2:
            ((M2C_UNK (*)(void *))update_move__17TObjEneMe1CanadinFPv)(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4B8) != 0) {
                ((M2C_UNK (*)(void *))update_hover_height__17TObjEneMe1CanadinFPv)(arg0);
            } else {
                ((M2C_UNK (*)(void *, f32))TObjEneMe1Canadin__sub_8009EB14)(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F0));
                if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x80000) {
                    M2C_FIELD(arg0, s32 *, 0x470) = 3;
                }
            }
            break;
        }
        ((VObj18D_8009BDA8 *) arg0)->vf164();
        ((M2C_UNK (*)(void *))noop__17TObjEneMe1CanadinFv)(arg0);
        break;
    }
}

void TObjEneMe1Canadin__vt109(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((M2C_UNK (*)(void))advance_state_5_to_4__17TObjEneMe1CanadinFPv)();
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((V_A_8009BDA8 *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x80000) {
            M2C_FIELD(arg0, s32 *, 0x404) = 0;
            ((V_A_8009BDA8 *) arg0)->m103();
        }
        return;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        ((M2C_UNK (*)(void *))update_move__17TObjEneMe1CanadinFPv)(arg0);
        ((M2C_UNK (*)(void *))update_hover_height__17TObjEneMe1CanadinFPv)(arg0);
        ((V_A_8009BDA8 *) arg0)->m87();
        ((M2C_UNK (*)(void *))noop__17TObjEneMe1CanadinFv)(arg0);
        break;
    }
}

void TObjEneMe1Canadin__vt108(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    f32 temp_f1;

    switch (arg1) {
    case 4:
        ((M2C_UNK (*)(void))advance_state_5_to_4__17TObjEneMe1CanadinFPv)();
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj_8009DB08 *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        {
            const f32 *p = (const f32 *) canadin_formation_reset_vec4;
            M2C_FIELD(arg0, f32 *, 0x4A8) = p[1];
            M2C_FIELD(arg0, f32 *, 0x4AC) = p[2];
            M2C_FIELD(arg0, f32 *, 0x4B0) = p[3];
            pack_color_rgba__17TObjEneMe1CanadinFPv((u8 *)(arg0));
        }
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 3:
        if (((VObj_8009DB08 *) arg0)->m106() == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 2) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFD);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
                    transition_enemy_state(arg0, 5);
                } else {
                    transition_enemy_state(arg0, 4);
                }
            }
        }
    case 1:
        return;
    case 0:
        advance_animation_playback();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x470);
        switch (temp_r0) {
        case 2:
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x400) = (s32) (M2C_FIELD(arg0, s32 *, 0x400) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x400) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x4B8) = 2;
                M2C_FIELD(arg0, s32 *, 0x470) = 1;
                play_sound_effect(0x4003B21A, arg0 + 0x2FC, 0, 0);
            }
            break;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4B8) == 0) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x8000);
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C4);
                switch (temp_r0_2) {
                case 0:
                    ((M2C_UNK (*)(void *))set_attack_flag__23TObjEneMe1CanadinLeaderFPv)(arg0);
                case 1:
                    M2C_FIELD(arg0, s32 *, 0x470) = 3;
                    break;
                }
            }
            ((M2C_UNK (*)(void *))update_move__17TObjEneMe1CanadinFPv)(arg0);
            break;
        case 3:
            ((M2C_UNK (*)(void *))update_move__17TObjEneMe1CanadinFPv)(arg0);
            break;
        }
        ((M2C_UNK (*)(void *))set_target_speed_z__17TObjEneMe1CanadinFPv)(arg0);
        ((VObj_8009DB08 *) arg0)->m87();
        return;
    case 5:
        ((VObj_8009DB08 *) arg0)->m90();
        break;
    }
}

void action__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((F_V_8009BDA8 *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
        M2C_FIELD(arg0, s32 *, 0x4B8) = 1;
        break;
    case 3:
        if (((F_V_8009BDA8 *) arg0)->m106() == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 1) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFE);
                transition_enemy_state(arg0, 3);
            } else if (enemy_has_live_target(arg0) != 0) {
                transition_enemy_state(arg0, 3);
            }
        }
        break;
    case 0:
        advance_animation_playback();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) != 1) {
            update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 2) {
            ((M2C_UNK (*)(void *, f32))TObjEneMe1Canadin__sub_8009EB14)(arg0, lbl_805D9890 + M2C_FIELD(arg0, f32 *, 0x3C));
        } else {
            ((M2C_UNK (*)(void *))set_target_speed_z__17TObjEneMe1CanadinFPv)(arg0);
        }
        ((F_V_8009BDA8 *) arg0)->m87();
        break;
    case 5:
    case 1:
        break;
    }
}

void TObjEneMe1Canadin__sub_8009DE90(void *argv0, s32 arg1) {
#define arg0 ((u8 *)argv0)
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((V_En_8009DE90 *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
        M2C_FIELD(arg0, s32 *, 0x4B8) = 1;
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3CC);
        TBoss3Volopt__sub_800D8D88(arg0 + 0x38);
        return;
    case 3:
        if (((V_Sub_8009DE90 *) (arg0 + 0x3CC))->m5() != 0) {
            transition_enemy_state(arg0, 2);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 2) {
            ((M2C_UNK (*)(void *, f32))TObjEneMe1Canadin__sub_8009EB14)(arg0, lbl_805D9890 + M2C_FIELD(arg0, f32 *, 0x3C));
        } else {
            ((M2C_UNK (*)(void *))set_target_speed_z__17TObjEneMe1CanadinFPv)(arg0);
        }
        ((V_En_8009DE90 *) arg0)->m86();
        break;
    }
#undef arg0
}

void handle_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        ((V_A_8009dfac_8009BDA8 *) arg0)->m93();
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
            transition_enemy_state(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) == 2) {
            ((V_A_8009dfac_8009BDA8 *) arg0)->m105();
        }
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFEFFFFFF);
        break;
    }
}

void dispatch_state__17TObjEneMe1CanadinFPvUii(Canadin_8009E0AC *self, u32 which, s32 arg) {
    switch (which) {
    case 0:
        handle_state__17TObjEneMe1CanadinFPvi(self, arg);
        break;
    case 1:
        TObjEneMe1Canadin__sub_8009DE90(self, arg);
        break;
    case 2:
        action__17TObjEneMe1CanadinFPvi(self, arg);
        break;
    case 3:
        self->m108(arg);
        break;
    case 4:
        self->m109(arg);
        break;
    case 5:
        move__17TObjEneMe1CanadinFPvi(self, arg);
        break;
    case 6:
        TObjEneMe1Canadin__sub_8009D320((void *)(self), (s32)(arg));
        break;
    case 7:
        TObjEneMe1Canadin__sub_8009CC74(self, arg);
        break;
    case 8:
        TObjEneMe1Canadin__sub_8009C91C((void *)(self), (s32)(arg));
        break;
    case 9:
        ((void (*)(void *, s32))run_task__17TObjEneMe1CanadinFPvi)(self, arg);
        break;
    case 10:
        ((void (*)(void *, s32))TObjEneMe1Canadin__sub_8009C2EC)(self, arg);
        break;
    case 11:
        ((void (*)(void *, s32))TObjEneMe1Canadin__sub_8009C178)(self, arg);
        break;
    case 12:
        ((void (*)(void *, s32))TObjEneMe1Canadin__sub_8009C510)(self, arg);
        break;
    case 13:
        self->m110(arg);
        break;
    case 14:
        ((void (*)(void *, s32))TObjEneMe1Canadin__sub_8009BFF8)(self, arg);
        break;
    case 16:
        update_walk_animation__17TObjEneMe1CanadinFPvi(self, arg);
        break;
    case 17:
        update_by_state__17TObjEneMe1CanadinFPvi(self, arg);
        break;
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void fn_8009E1D4(u8 *arg0, s32 arg1) {
    struct CopyStack_8009E1D4 { u8 bytes[0x14]; };
    CopyStack_8009E1D4 copy_storage_8009E1D4;
    u8 *temp_r6;
    temp_r6 = (u8 *)((void *)((u8 *)(&lbl_8043A32C.value) + -4));
    *(M2CCopy_14 *)(copy_storage_8009E1D4.bytes) = *(const M2CCopy_14 *)((s32) temp_r6 + 4);
    (*(f32 *)(copy_storage_8009E1D4.bytes + 0x4)) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x468), f32 *, 4);
    setup__9TObjEneDDFPvii(arg0, arg1, (s32) (copy_storage_8009E1D4.bytes));
}
extern int fold_flush_0;
#pragma pop

void set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x40; }

void set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x20; }

void TObjEneMe1CanadinLeader__sub_8009E258(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100000 | 4);
}

void set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x8; }

void TObjEneMe1CanadinLeader__sub_8009E27C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x4; }

void set_attack_flag__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x2; }

void set_leader_index__23TObjEneMe1CanadinLeaderFPvii(void *arg0, s32 arg1, s32 arg2) {
    set_target_player__13TBoss2DeRolLeFPvPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x400) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 1);
}

void fn_8009E2DC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x400) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 1);
}

int TObjEneMe1Canadin__vt114(void) { return 1; }

void TObjEneMe1Canadin__vt115(void) {  }

s32 fn_8009E300(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x40000) {
        return M2C_FIELD(arg0, s32 *, 0x390);
    }
    return 0;
}

u8 TObjEneMe1CanadinLeader__sub_8009E31C(u8 *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x3C8) & arg1) != 0);
}

void TObjEneMe1CanadinLeader__sub_8009E334(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x200);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFEFF);
}

void TObjEneMe1CanadinLeader__sub_8009E350(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFDFF);
}

int TObjEneMe1CanadinLeader__sub_8009E36C(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }

void fn_8009E378(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 2) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = ((s32 (*)(u16))find_entity_by_id)(M2C_FIELD(arg0, u16 *, 0x4C8));
        fn_8009E2DC((u8 *)((void*)((void*)(M2C_FIELD(arg0, s32 *, 0x3C0)))));
    }
}

int TObjEneMe1Canadin__vt107(void) { return 1; }

void TObjEneMe1Canadin__vt111(void *arg0) {
    *lbl_805D4FEC = M2C_FIELD(arg0, s32 *, 0x4B4);
    *lbl_805D4FF0 = M2C_FIELD(arg0, s32 *, 0x4B4);
}

void pack_color_rgba__17TObjEneMe1CanadinFPv(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x4B4) = ((u8) __cvt_fp2unsigned(lbl_805D9914 * M2C_FIELD(arg0, f32 *, 0x4AC)) << 24)
        | ((u8) __cvt_fp2unsigned(lbl_805D9914 * M2C_FIELD(arg0, f32 *, 0x4B0)) << 16)
        | ((u8) __cvt_fp2unsigned(TObjEneMe1Canadin__data_805D98B4 * (lbl_805D9914 * M2C_FIELD(arg0, f32 *, 0x4A4))) << 8)
        | (u8) __cvt_fp2unsigned(lbl_805D9914 * M2C_FIELD(arg0, f32 *, 0x4A8));
}

void reset_map_core__17TObjEneMe1CanadinFPv(void* p, void * _w1) { ((int (*)(void*))copy_vec4__13TRaderMapCoreFPvPv)((char*)p + 0x4a4); pack_color_rgba__17TObjEneMe1CanadinFPv((u8 *)(p)); }

void TObjEneMe1CanadinLeader__sub_8009E4AC(u8 *arg0, s32 arg1) {
    reset_map_core__17TObjEneMe1CanadinFPv((void *)((void *) (arg0)), (void *)((void *) (&canadin_formation_fade_start_color.value)));
    M2C_FIELD(arg0, s32 *, 0x4B8) = 3;
    M2C_FIELD(arg0, s32 *, 0x4BC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 2;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
}

#define p ((Canadin_8009E504 *)pv)
void update_fade_sequence__23TObjEneMe1CanadinLeaderFPv(void *pv) {
    switch (p->state) {
    case 0:
        break;
    case 1:
        if (p->f4a4 > lbl_805D9898) {
            p->f4a4 = p->f4a4 - lbl_805D9918;
        } else {
            p->f4a4 = lbl_805D9898;
            p->state = 0;
        }
        pack_color_rgba__17TObjEneMe1CanadinFPv((u8 *)(p));
        break;
    case 2:
        if (p->f4a4 < lbl_805D98D4) {
            p->f4a4 = p->f4a4 + lbl_805D9918;
        } else {
            p->f4a4 = lbl_805D98D4;
            p->state = 0;
        }
        pack_color_rgba__17TObjEneMe1CanadinFPv((u8 *)(p));
        break;
    case 3:
        p->timer++;
        if ((f32)p->timer >= lbl_805D98B0) {
            p->timer = 0;
            switch (((s8 **)canadin_leader_fade_sequence_table)[p->tblIdx][p->pos++]) {
            case 0x62:
                p->f4a4 = lbl_805D9898;
                break;
            case 0x63:
                p->state = 0;
                copy_vec4__13TRaderMapCoreFPvPv(&p->f4a4, (void *)canadin_formation_reset_vec4);
                break;
            case 0x61:
                p->f4a4 = lbl_805D98D4;
                break;
            }
            pack_color_rgba__17TObjEneMe1CanadinFPv((u8 *)(p));
        }
        break;
    }
}
#undef p

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

s32 check_target__17TObjEneMe1CanadinFPv(void *arg0) {
    f32 sp8;
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    if (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805D98E4) {
        var_r31 = 1;
        M2C_FIELD(arg0, void **, 0x3C0) = ((void * (*)(u16))find_entity_by_id)(M2C_FIELD(arg0, u16 *, 0x4C8));
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
    count = collect_enemy_target_candidates(self, list);
    for (i = 0; i < count; i++) {
        id = get_player_by_client_id(list[i].id);
        if (id != self->owner) {
            self->target = (Target_8009E860 *)((void * (*)(u16))find_entity_by_id)(self->target_id);
            if (self->target->m114(id) != 0) {
                *out = newton_sqrtf(list[i].dist);
                found = 1;
                ((void (*)(void *, u32))set_target_player__13TBoss2DeRolLeFPvPv)(self, id);
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

void update_move__17TObjEneMe1CanadinFPv(void* p) { if (((int (*)(void*))enemy_has_live_target)(p) != 0) { ((int (*)(void*))enemy_copy_target_destination)(p); ((int (*)(void*))update_velocity__9TObjEneDDFPv)(p); ((int (*)(void*))update_angle__17TObjEneMe1CanadinFPv)(p); } }

void update_angle__17TObjEneMe1CanadinFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), (s32) (lbl_8043A3C8 * atan2_float(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), 0x400);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (s16) M2C_FIELD(arg0, s32 *, 0x60);
}

void update_hover_height__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB14((u8*)arg0, (M2C_FIELD(arg0, f32 *, 0x3E8) + M2C_FIELD(arg0, f32 *, 0x3C)));
}

void set_target_speed_z__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB14((u8*)arg0, (M2C_FIELD(arg0, f32 *, 0x3EC) + M2C_FIELD(arg0, f32 *, 0x3C)));
}

void TObjEneMe1Canadin__sub_8009EB14(u8 *arg0, f32 height) {
    Stack_800CBDBC stack;
    ((M2C_UNK (*)(u8*, f32))TObjEneMe1Canadin__sub_8009EB98)(arg0, height);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    stack.spC = M2C_FIELD(arg0, f32 *, 0x3F8);
    ((VObj_18_p10 *)(arg0))->m99(&stack.sp8);
}

void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB98((u8 *)((u8 *)arg0), M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E8));
}

void TObjEneMe1Canadin__sub_8009EB98(u8 *arg0, f32 farg0) {
    f32 temp_f3;
    temp_f3 = farg0 - M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFF7FFFF);
    if (temp_f3 >= TObjEneMe1Canadin__data_805D98BC) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) + TObjEneMe1Canadin__data_805D98BC);
        return;
    }
    if (temp_f3 <= lbl_805D9924) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - TObjEneMe1Canadin__data_805D98BC);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x3F8) = farg0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x80000);
}

void update_dd_flag__17TObjEneMe1CanadinFPv(void *arg0) {
    if (TObjEneDD__vt98() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFEFFFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x01000000);
}

#pragma push
#pragma fp_contract on
void calc_move_vector__17TObjEneMe1CanadinFiPv(s32 arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r31;

    temp_r31 = get_random_scaled__9TObjEneDDFv();
    f32 fv = calc_boss4_scale__10TObjPlayerFi(arg0);
    temp_f31 = (lbl_805D98D0 * fv) + lbl_805D989C;
    temp_f1 = temp_f31 * ((f32 (*)(s32, f32))sin_table_lookup)(temp_r31, fv);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_805D9898;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f31 * ((f32 (*)(s32, f32))cos_table_lookup)(temp_r31, temp_f1));
    ((M2C_UNK (*)(void *, s32))vec3_add_to)(arg1, arg0 + 0x38);
}
extern int fold_flush_1;
#pragma pop

void TObjEneMe1Canadin__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x1C);
}

void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) get_random_float__21TObjEneMe3ShinowaRealFv(M2C_FIELD(arg0, f32 *, 0x354)) == 0) {
        ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E350)(arg0);
        return;
    }
    ((M2C_UNK (*)(void *))TObjEneMe1CanadinLeader__sub_8009E334)(arg0);
}

void update__17TObjEneMe1CanadinFPv(void *arg0) {
    struct VBase_8009ED5C_8009ECE0 *o = (struct VBase_8009ED5C_8009ECE0 *)arg0;
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - M2C_FIELD(arg0, f32 *, 0x3C));
    if (M2C_FIELD(arg0, f32 *, 0x3F4) < lbl_805D98D0) {
        o->m96();
    } else {
        o->m95();
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3F4);
}

void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC));
}

void TObjEneMe1Canadin__sub_8009EE18(void) {  }

void set_state_12__17TObjEneMe1CanadinFPv(void* p) { if (*(short*)((char*)p + 0x326) != 12) { ((int (*)(void*, void*))transition_enemy_state)(p, (void*)12); } }

void set_mode0xD_unless_0xBor0xD__17TObjEneMe1CanadinFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xD) && (temp_r0 != 0xB)) {
        ((int (*)(void*, void*))transition_enemy_state)((void*)(arg0), (void*)(0xD));
    }
}

void TObjEneMe1Canadin__sub_8009EE84(void) {  }

void run_task__17TObjEneMe1CanadinFv(u8 *arg0) {
    u8 *temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_7dcedb *)(arg0))->m112();
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) && ((M2C_FIELD(arg0, u8 **, 0x3C0) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x4C8)), temp_r3 = M2C_FIELD(arg0, u8 **, 0x3C0), ((temp_r3 == NULL) != 0)) || (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) == 0))) {
        ((void (*)(void *))queue_destruction__7TObjectFv)(arg0);
        return;
    }
    if (((VObj_18_7dcedb *)(arg0))->m81() != 4) {
        ((VObj_18_7dcedb *)(arg0))->m83();
        ((void (*)(void *))update_fade_sequence__23TObjEneMe1CanadinLeaderFPv)(arg0);
    }
    copy_pos__17TObjEneMe1CanadinFPv((u8 *)(arg0));
    ((int (*)(void *))set_player_state_default__12TBoss8DragonFPv)(arg0);
    ((VObj_18_7dcedb *)(arg0))->m98();
}

void *__dt__17TObjEneMe1CanadinFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe1Canadin;
        if (M2C_FIELD(arg0, void **, 0x4A0) != NULL) { ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x4A0)); M2C_FIELD(arg0, M2C_UNK *, 0x4A0) = 0; }
        ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x408));
        M2C_FIELD(arg0, M2C_UNK *, 0x408) = 0;
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3CC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void setup_enemy__17TObjEneMe1CanadinFPv(u8 *arg0) {
    s32 i;
    void *p;

    init_position_vectors__9TObjEneDDFPv(arg0);
    ((VObj_8009F004 *)arg0)->m104();
    init_model__9TObjEneDDFPv(arg0, lbl_8048FECC, 1);
    set_field_d8__10TObjPlayerFPvi(arg0, lbl_8048FF30);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD((*(u8 * *)&lbl_805D4FD0), s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    reset_hp__9TObjEneDDFPv(arg0, lbl_80500930[M2C_FIELD(arg0, s32 *, 0x3C4)], lbl_8050093C[M2C_FIELD(arg0, s32 *, 0x3C4)], lbl_80500948[M2C_FIELD(arg0, s32 *, 0x3C4)]);
    check_state_flag_4__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, void **, 0x350) = lbl_8048FEB0;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805D989C;
    enemy_init_acquire_period(arg0, 0x2D);
    enemy_init_validate_period(arg0, 0x2D);
    set_active__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) |= 0x01000000;
    M2C_FIELD(arg0, s32 *, 0x468) = lbl_80500954[M2C_FIELD(arg0, s32 *, 0x3C4)];
    ((VSub_8009F004 *)(arg0 + 0x3CC))->m2();
    M2C_FIELD(arg0, f32 *, 0x3E8) = lbl_805D9928;
    M2C_FIELD(arg0, f32 *, 0x3EC) = lbl_805D98A4;
    M2C_FIELD(arg0, f32 *, 0x3F0) = TObjEneMe1Canadin__data_805D98AC * (lbl_805D992C * (f32)rand()) + lbl_805D98A4;
    M2C_FIELD(arg0, f32 *, 0x3F4) = M2C_FIELD(arg0, f32 *, 0x3EC);
    M2C_FIELD(arg0, f32 *, 0x3F8) = M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F4);
    M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
    M2C_FIELD(arg0, s32 *, 0x400) = 0;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
    p = ((void * (*)(u32))__nw__7TObjectFUl)(0x38);
    if (p != NULL) {
        p = TObjEneMe1Canadin_EffLight__ct(p, arg0, 5);
    }
    M2C_FIELD(arg0, void **, 0x408) = p;
    M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    M2C_FIELD(arg0, s32 *, 0x410) = 0;
    for (i = 0; i < 7; i++) {
        VecCopy__FP3VecPC3Vec(&((Obj_8009F004 *)arg0)->v[i], arg0 + 0x38);
    }
    M2C_FIELD(arg0, s32 *, 0x46C) = 0;
    M2C_FIELD(arg0, s32 *, 0x470) = 0;
    M2C_FIELD(arg0, s32 *, 0x474) = 0;
    M2C_FIELD(arg0, s32 *, 0x478) = 0;
    M2C_FIELD(arg0, s32 *, 0x47C) = 0;
    M2C_FIELD(arg0, s32 *, 0x480) = 0;
    M2C_FIELD(arg0, f32 *, 0x484) = lbl_805D9898;
    M2C_FIELD(arg0, f32 *, 0x488) = lbl_805D9898;
    M2C_FIELD(arg0, f32 *, 0x48C) = lbl_805D9898;
    M2C_FIELD(arg0, f32 *, 0x490) = lbl_805D9898;
    M2C_FIELD(arg0, f32 *, 0x494) = lbl_805D9898;
    M2C_FIELD(arg0, f32 *, 0x498) = lbl_805D9898;
    M2C_FIELD(arg0, s32 *, 0x49C) = 0;
    M2C_FIELD(arg0, s32 *, 0x4A0) = 0;
    ((void (*)(void *, void *))copy_vec4__13TRaderMapCoreFPvPv)(arg0 + 0x4A4, TObjEneMe1Canadin__map_core_default_vec4);
    M2C_FIELD(arg0, f32 *, 0x4A4) = lbl_805D9898;
    M2C_FIELD(arg0, s32 *, 0x4B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    copy_pos__17TObjEneMe1CanadinFPv(arg0);
    set_part_position__9TObjEneDDFPvPvi(arg0, M2C_FIELD(arg0, s32 *, 0xA4), 0);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_8009F004 *)arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
    if (M2C_FIELD(arg0, void **, 0x3C0) != NULL) {
        M2C_FIELD(arg0, u16 *, 0x4C8) = ((u16 (*)(void *))obj_getField1c)(M2C_FIELD(arg0, void **, 0x3C0));
    } else {
        M2C_FIELD(arg0, u16 *, 0x4C8) = 0xFFFF;
    }
}
extern int fold_flush_2;
#pragma pop

u8 *TObjEneMe1Canadin__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s16 arg4, s16 arg5) {
    init_object__9TObjEneDDFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin *)&__vt__17TObjEneMe1Canadin).value;
    init_common__18TObjEneMe3SinowZoaFPv((void *) (arg0 + 0x3CC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (*(s32 *)&TObjEneMe1Canadin__class_name);
    M2C_FIELD(arg0, u8 **, 0x3C0) = arg2;
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x3C0)));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg5;
    ((s32 (*)(void *, void *))calc_move_vector__17TObjEneMe1CanadinFiPv)((void *) (M2C_FIELD(arg0, u8 **, 0x3C0)), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((void *) (arg3)));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3C0), s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    ((void (*)(void *))setup_enemy__17TObjEneMe1CanadinFPv)((void *) (arg0));
    return arg0;
}

void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe1Canadin;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 972));
    M2C_FIELD(arg0, void **, 0x0) = TObjEneMe1Canadin__class_name;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    M2C_FIELD(arg0, u32 *, 0x3C8) = 0;
    update_by_field_0x354__17TObjEneMe1CanadinFPv((void *)(arg0));
    M2C_FIELD(arg0, void **, 0x3C0) = arg0;
    M2C_FIELD(arg0, void **, 0x3C4) = arg3;
    ((void (*)(void *))setup_enemy__17TObjEneMe1CanadinFPv)(arg0);
    return arg0;
}

}
