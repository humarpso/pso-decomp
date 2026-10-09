#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_8035DD68 { char pad[0x18]; };
struct VObj18_8035DD68 : VBase18_8035DD68 {
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
};
struct EGPad_8035DD68 { char pad[0x18]; };
#define V1(n) virtual void vpad##n();
#define V10(n) V1(n##0) V1(n##1) V1(n##2) V1(n##3) V1(n##4) V1(n##5) V1(n##6) V1(n##7) V1(n##8) V1(n##9)
struct EG_8035DD68 : EGPad_8035DD68 {
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8)
    V1(90) V1(91) V1(92)
    virtual void slot93();
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
    virtual M2C_UNK m53();
};

struct RecoveredGlobal_8035E374_lbl_805439E0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8035E374_lbl_805439E0_size[sizeof(RecoveredGlobal_8035E374_lbl_805439E0) == 0x10 ? 1 : -1];

struct VBase_18_6ff2a2 { char pad[0x18]; };

struct VObj_18_6ff2a2 : VBase_18_6ff2a2 {
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
};

#include <stddef.h>
struct VBase_18_7f4864 { char pad[0x18]; };

struct VObj_18_7f4864 : VBase_18_7f4864 {
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
    virtual M2C_UNK m94(s32);
};

struct VBase_14_87d649 { char pad[0x14]; };

struct VObj_14_87d649 : VBase_14_87d649 {
    virtual void m0();
    virtual M2C_UNK m1(M2C_UNK);
    virtual M2C_UNK m2();
    virtual void m3();
    virtual s32 m4();
};

struct RecoveredFields_8035E578_arg0 {
    u8 unknown_0[0xB8];
    s16 field_B8;
    u8 unknown_BA[0x3B2];
    s32 field_46C;
};

struct O_8035DDC8 { u8 pad[0x30]; u32 f30; u8 pad2[0x46c - 0x34]; u32 f46c; };

struct O_8035DE08 { u8 pad[0x30]; u32 f30; u8 pad2[0x46c - 0x34]; u32 f46c; };

struct VB_8035E430 { char pad[0x18]; };

struct VO_8035E430 : VB_8035E430 {
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
    virtual void m92(); virtual void m93(); virtual void m94();
};

struct G_8035E430 {
    u8 pad0[0x24]; s32 x24; u8 pad28[0x10]; u8 x38[0x28]; s32 x60; u8 pad64[0x54];
    s16 xB8; u8 padBA[0x2FC - 0xBA]; u8 x2FC[0x430 - 0x2FC]; s32 x430; s32 x434;
    u8 pad438[0x28]; u8 x460[0xC]; s32 flags;
};

typedef s32 M2C_UNK;
struct VBase_8035E018 { char pad[0x14]; };

struct VObj_8035E018 : VBase_8035E018 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct Rec_8035E018 { u8 b[0x1C]; };

struct Self_8035E018 { u8 pad[0x3C0]; Rec_8035E018 recs[4]; };

struct Base_A { char pad[0x18]; };

struct V_A : Base_A {
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
    virtual void m87();
    virtual void f88();
    virtual void f89();
    virtual void f90();
    virtual void f91();
    virtual void f92();
    virtual void f93();
    virtual void m94(s32);
};

struct Pair_8035EA90 { s32 a; f32 b; };

struct VBase_8035EA90 { char pad[0x18]; };

struct VObj_8035EA90 : VBase_8035EA90 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Pair_8035EA90, int, int, int);
    virtual void m22();
    virtual void m23(void *);
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};

extern "C" {
s32 TObjEneEpsilonGuard__sub_8035DD74(u8 *arg0);
s32 is_guard_active__19TObjEneEpsilonGuardFPv(u8 *arg0);
void clear_and_flag_state__19TObjEneEpsilonGuardFPv(u8 *arg0);
void set_flag_8_and_notify__19TObjEneEpsilonGuardFPv(u8 *arg0);
void TObjEneEpsilonGuard__sub_8035DEC0(u8 *arg0);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
extern RecoveredGlobal_8035E374_lbl_805439E0 lbl_805439E0;
extern s32 lbl_805D6F78;
extern s32 lbl_805D6F7C;
void advance_camera_ctrl_step__19TObjEneEpsilonGuardFv(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, int, int);
M2C_UNK toggle_flag_9__10TObjPlayerFPv(void *);
void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_803626A8(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
extern const f32 lbl_805E01E0;
extern const f32 lbl_805E01E4;
void render__19TObjEneEpsilonGuardFv(u8 *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
void TObjEneEpsilonGuard__sub_8035E578(u8 *, s32);
s32 is_state_flag_set__19TObjEneEpsilonGuardFPv(O_8035DDC8 *self);
s32 is_guard_ready__19TObjEneEpsilonGuardFPv(O_8035DE08 *self);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, void *, s32, void *, s32);
void spawn_effect_f8__10TObjPlayerFii(void *, int);
void trigger_dell_biter_events__10TObjPlayerFPv(void *);
void play_sound_effect(int, void *, int, int);
extern u8 lbl_80479C50[];
extern s32 lbl_805D6FA8;
struct G_8035E430;
void handle_break_state__19TObjEneEpsilonGuardFPvi(G_8035E430 *, s32);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void advance_camera_ctrl_step__19TObjEneEpsilonGuardFv(void);
extern M2C_UNK main_task[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D6F78;
extern s32 lbl_805D6F7C;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
extern const f32 TObjEneEpsilonGuard__data_805E01DC;
void render_with_fade__19TObjEneEpsilonGuardFPvi(u8 *arg0, s32 arg1);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *);
extern void *TObjEneEpsilonGuard__data_805D6F74;
void TObjEneEpsilonGuard__sub_8035E8C0(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
s32 obj_is_hit_receivable();
M2C_UNK queue_destruction__7TObjectFv(void *);
VObj_8035EA90 *get_battle_param__10TObjPlayerFi(s32);
void *create_particle_emitter(void *, int, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
u32 find_entity_by_id(u16);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s16 get_table_value_by_index__19TObjEneEpsilonGuardFPv(u32);
extern void *lbl_804F2034[];
extern void *TObjEneEpsilonGuard__data_805D6F74;
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
extern const f32 lbl_805E01F4;
extern const f32 lbl_805E01F8;
extern const f32 lbl_805E01FC;
extern const f32 lbl_805E0200;
void TObjEneEpsilonGuard__sub_8035EA90(u8 *);
}

extern "C" {

struct GuardBase_8035DD68 { char pad[0x18]; };
struct GuardVObj_8035DD68 : GuardBase_8035DD68 {
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
    virtual void m52(); virtual void m53();
};
struct Base_8035E3B8_8035DD68 { char pad[0x18]; };
struct VObj_8035E3B8_8035DD68 : Base_8035E3B8_8035DD68 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
    virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60();
    virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72();
    virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76();
    virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80();
    virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88();
    virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

int TObjEneEpsilonGuard__sub_8035DD68(void* p);
void handle_event__19TObjEneEpsilonGuardFPvi(void *, s32);
void handle_message__19TObjEneEpsilonGuardFPvi(void *, s32);
void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
void set_target__19TObjEneEpsilonGuardFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void state_orbit__19TObjEneEpsilonGuardFPvi(void *, s32);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, void *, f32, f32, f32);
void set_orbit_destination__19TObjEneEpsilonGuardFPvi(u8 *, s32);
s32 TObjEneEpsilonGuard__sub_8035F95C(u32);
s32 TObjEneEpsilonGuard__sub_8035F968();
M2C_UNK draw_model_motion(int, int, f32);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK clear_global_state__10TObjPlayerFv();
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

int TObjEneEpsilonGuard__sub_8035DD68(void* p) { return (*(u32*)((char*)p + 0x46c) >> 7) & 0x1; }

s32 TObjEneEpsilonGuard__sub_8035DD74(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, u32 *, 0x46C) >> 4U) & 1;
}

s32 is_guard_active__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 1) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, u32 *, 0x46C) >> 9U) & 1;
}

s32 is_state_flag_set__19TObjEneEpsilonGuardFPv(O_8035DDC8 *self) {
    if (self->f30 & 0xa00) {
        return 0;
    }
    if (self->f46c & 0x10) {
        return 0;
    }
    if (self->f46c & 0x20) {
        return 0;
    }
    return (self->f46c & 4) ? 1 : 0;
}

s32 is_guard_ready__19TObjEneEpsilonGuardFPv(O_8035DE08 *self) {
    if (self->f30 & 0xa00) {
        return 0;
    }
    if (self->f46c & 0x10) {
        return 0;
    }
    if (self->f46c & 0x20) {
        return 0;
    }
    return (self->f46c & 4) ? 1 : 0;
}

void clear_and_flag_state__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44C) = 0;
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x20);
    ((VObj_18 *)(arg0))->m53();
}

void set_flag_8_and_notify__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 8);
    ((VObj_18 *)(arg0))->m53();
}

void TObjEneEpsilonGuard__sub_8035DEC0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 2);
    ((VObj_18 *)(arg0))->m53();
}

void set_target__19TObjEneEpsilonGuardFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (void)arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    if (arg3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x100);
    } else {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFEFF);
    }
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 1);
    ((GuardVObj_8035DD68 *)arg0)->m53();
}

extern M2C_UNK main_task[];
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
extern const f32 TObjEneEpsilonGuard__data_805E01DC;

void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f1;

    if ((M2C_FIELD(arg0, s32 *, 0x46C) & 0x20) && (get_mode__11TCameraCtrlFPv((void *) (main_task)) & 0x200)) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        translate_matrix((int) (0), (f32) (TObjEneEpsilonGuard__data_805E01D8), (f32) (TObjEneEpsilonGuard__data_805E01DC), (f32) (TObjEneEpsilonGuard__data_805E01D8));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x458);
        scale_matrix((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
        set_global_flag__10TObjPlayerFv();
        draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 0x444)), (int) (M2C_FIELD(arg0, s32 *, 0x448)), (f32) (M2C_FIELD(arg0, f32 *, 0x454)));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
    }
}

void render_with_fade__19TObjEneEpsilonGuardFPvi(u8 *arg0, s32 arg1) {
    s32 i;
    VObj_8035E018 *r;
    i = 0;
    if (is_split_screen() != 0) {
        i = get_camera_mode__11TCameraCtrlFv();
    }
    lbl_805D5660 = some_id_805c6f74;
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    r = (VObj_8035E018 *)&((Self_8035E018 *)arg0)->recs[i];
    update_obstruction_fade(r);
    if (updateFromCamera__15RenderFadeStateFPCf(r, arg0 + 0x2FC) != 0) {
        r->m6();
        if (!(get_mode__11TCameraCtrlFPv(main_task) & 0x200)) {
            some_id_805c6f74 = lbl_805D5660;
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            return;
        }
    } else if (M2C_FIELD(arg0, s16 *, 0x326) == 3) {
        ((VObj_8035E018 *)(arg0 + 0x4BC))->m6();
        if (!(get_mode__11TCameraCtrlFPv(main_task) & 0x200)) {
            some_id_805c6f74 = lbl_805D5660;
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            return;
        }
    } else if (get_mode__11TCameraCtrlFPv(main_task) & 0x200) {
        some_id_805c6f74 = lbl_805D5660;
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        return;
    }
    update_secondary_light__9TObjEneDDFPv(arg0);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    push_matrix();
    post_translate_matrix(arg0 + 0x38);
    translate_matrix(0, TObjEneEpsilonGuard__data_805E01D8, TObjEneEpsilonGuard__data_805E01DC, TObjEneEpsilonGuard__data_805E01D8);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    clear_global_flag_400__9TObjEneDDFv();
    lbl_805D6F78 = 0;
    lbl_805D6F7C = (s32)(arg0 + 0x460);
    M2C_FIELD(arg0, f32 *, 0x460) = TObjEneEpsilonGuard__data_805E01D8;
    M2C_FIELD(arg0, f32 *, 0x464) = TObjEneEpsilonGuard__data_805E01D8;
    M2C_FIELD(arg0, f32 *, 0x468) = TObjEneEpsilonGuard__data_805E01D8;
    set_global_state__16TObjEneRe7BeruraFi((void *)advance_camera_ctrl_step__19TObjEneEpsilonGuardFv);
    toggle_particle_effect__10TObjPlayerFv();
    if (arg1 == 1) {
        draw__16TObjEneRe7BeruraFPv(arg0);
    } else {
        render_world_model__10TObjPlayerFPv(arg0);
    }
    end_effect_render__13TParticleCtrlFv();
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    pop_matrix();
    update_primary_light__9TObjEneDDFPv(arg0);
    if (updateFromCamera__15RenderFadeStateFPCf(r, arg0 + 0x2FC) != 0) {
        r->m7();
    } else if (M2C_FIELD(arg0, s16 *, 0x326) == 3) {
        ((VObj_8035E018 *)(arg0 + 0x4BC))->m7();
    }
    some_id_805c6f74 = lbl_805D5660;
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
}

#pragma push
#pragma opt_common_subs off
void render__19TObjEneEpsilonGuardFv(u8 *arg0) {
    s32 var_r31;
    if ((check_demo_mode__10TObjPlayerFv() == 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        var_r31 = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x10)) {
            if (is_main_phase_15__9TObjEneDDFv() != 0) {
                var_r31 = ((VObj_18_6ff2a2 *)(arg0))->m9(lbl_805E01E0, lbl_805E01E0, lbl_805E01E4);
            } else if (((VObj_18_6ff2a2 *)(arg0))->m8(lbl_805E01E0, lbl_805E01E4) != 0) {
                var_r31 = 1;
            } else {
                var_r31 = 0;
            }
        }
        if (var_r31 != 0) {
            update_player_state__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (0));
            toggle_flag_9__10TObjPlayerFPv((void *) (arg0));
            render_with_fade__19TObjEneEpsilonGuardFPvi((u8 *)((u8 *) (arg0)), (s32)((s32) (var_r31)));
            render_guard_effect__19TObjEneEpsilonGuardFPv((u8 *)((void *) (arg0)));
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x460) = (f32) TObjEneEpsilonGuard__data_805E01D8;
        M2C_FIELD(arg0, f32 *, 0x464) = (f32) TObjEneEpsilonGuard__data_805E01D8;
        M2C_FIELD(arg0, f32 *, 0x468) = (f32) TObjEneEpsilonGuard__data_805E01D8;
        TObjPlayer__sub_803626A8((void *) (arg0), (void *) (arg0 + 0x460), (int) (0));
    }
}
#pragma pop

void advance_camera_ctrl_step__19TObjEneEpsilonGuardFv(void) {
    if ((s32) lbl_805D6F78 == 0) {
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_805439E0.value, lbl_805D6F7C);
    }
    lbl_805D6F78 += 1;
}

void handle_message__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((struct VObj_8035E3B8_8035DD68 *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x14);
        send_entity_set_flags__6TLobbyFPv(arg0);
        return;
    case 3:
        queue_destruction__7TObjectFv(arg0);
    case 5:
    case 0:
        return;
    }
}

extern void *TObjEneEpsilonGuard__data_805D6F74;
extern const f32 lbl_805E01E8;
extern const f32 lbl_805E01EC;
extern const f32 lbl_805E01F0;

#pragma push
#pragma opt_common_subs off
typedef char RecoveredFields_8035E578_arg0_B8_offset[offsetof(RecoveredFields_8035E578_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_8035E578_arg0_46C_offset[offsetof(RecoveredFields_8035E578_arg0, field_46C) == 0x46C ? 1 : -1];

typedef s32 M2C_UNK;
void handle_break_state__19TObjEneEpsilonGuardFPvi(G_8035E430 *o, s32 arg1) {
    switch (arg1) {
    case 4:
        o->xB8 = 0;
        set_field_378__9TObjEneDDFPvi(o, 4);
        o->flags |= 0x40;
        o->flags &= ~0x14;
        ((VO_8035E430 *)o)->m94();
        spawn_effect_f8__10TObjPlayerFii(o->x460, 0x14);
        o->x430 = 0;
        o->x434 = 0;
        break;
    case 3:
        if (o->x430 == 1) {
            transition_enemy_state(o, 5);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(o);
        o->x434++;
        if (o->x434 >= 0x14) {
            ((VO_8035E430 *)o)->m94();
            create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D6FA8, lbl_80479C50, o->x24, o->x38, o->x60);
            play_sound_effect(0x4003AD4C, o->x2FC, 0, 0);
            trigger_dell_biter_events__10TObjPlayerFPv(o->x2FC);
            o->x430 = 1;
        }
        ((VO_8035E430 *)o)->m87();
        break;
    }
}

void TObjEneEpsilonGuard__sub_8035E578(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    switch (arg1) {
    case 4:
        ((RecoveredFields_8035E578_arg0 *)arg0)->field_B8 = 0;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
        ((VObj_14_87d649 *)((u8 *)(arg0) + (1212)))->m1(0x14);
        ((VObj_14_87d649 *)((u8 *)(arg0) + (1212)))->m2();
        temp_r4 = ((RecoveredFields_8035E578_arg0 *)arg0)->field_46C;
        ((RecoveredFields_8035E578_arg0 *)arg0)->field_46C = (s32) (temp_r4 & ~0x14);
        ((VObj_18_7f4864 *)(arg0))->m94(temp_r4);
        break;
    case 3:
        if (((VObj_14_87d649 *)((u8 *)(arg0) + (1212)))->m4() != 0) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(0));
            ((RecoveredFields_8035E578_arg0 *)arg0)->field_46C = (s32) (((RecoveredFields_8035E578_arg0 *)arg0)->field_46C | 0x10);
            ((VObj_18_7f4864 *)(arg0))->m93();
            break;
        }
    case 5:
        break;
    case 0:
        advance_animation_playback((void *)(arg0));
        ((VObj_18_7f4864 *)(arg0))->m87();
        break;
    }
}
#pragma pop

void state_orbit__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    u32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 4);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFFE7);
        ((VObj18_8035DD68 *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x430) = 0;
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x43C) = 0;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 8) {
            transition_enemy_state(arg0, 3);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback((void *)(arg0));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x430);
        switch (temp_r0) {
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x100) {
                M2C_FIELD(arg0, s32 *, 0x43C) = (s32) ((lbl_805E01E8 * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 8)) / (lbl_805E01EC * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 0)));
            } else {
                M2C_FIELD(arg0, s32 *, 0x43C) = (s32) ((lbl_805E01F0 * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 8)) / (lbl_805E01EC * M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 0)));
            }
            M2C_FIELD(arg0, s32 *, 0x430) = 1;
            break;
        case 1:
            temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x470));
            if (temp_r3 != 0U) {
                if (TObjEneEpsilonGuard__sub_8035F968() == 1) {
                    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFFFB);
                    M2C_FIELD(arg0, s32 *, 0x430) = 2;
                } else if (TObjEneEpsilonGuard__sub_8035F95C(temp_r3) != 1) {
                    goto block_23;
                }
            } else {
block_23:
                M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) + M2C_FIELD(arg0, s32 *, 0x43C));
                ((M2C_UNK (*)(void *, s32))set_orbit_destination__19TObjEneEpsilonGuardFPvi)(arg0, M2C_FIELD(arg0, s32 *, 0x438));
                update_velocity__9TObjEneDDFPv(arg0);
                move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, TObjEneEpsilonGuard__data_805D6F74, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 8));
            }
            break;
        case 2:
            if ((find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x470)) != 0U) && (TObjEneEpsilonGuard__sub_8035F968() == 0)) {
                M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 4);
                M2C_FIELD(arg0, s32 *, 0x430) = 1;
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = ((s32 (*)(void *))calc_angle_to_target__19TObjEneEpsilonGuardFPv)(arg0);
        ((VObj18_8035DD68 *) arg0)->vf164();
        break;
    }
}

void TObjEneEpsilonGuard__sub_8035E8C0(void *arg0, s32 arg1) {
    s32 temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x46C);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (temp_r4 & ~0x216);
        ((V_A *) arg0)->m94(temp_r4);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 2) {
            transition_enemy_state(arg0, 2);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        enemy_copy_target_destination(arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x200)) {
            f32 *d = (f32 *)TObjEneEpsilonGuard__data_805D6F74;
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > d[0] + d[1]) {
                M2C_FIELD(arg0, s32 *, 0x46C) |= 0x200;
            } else {
                move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, d, -M2C_FIELD(arg0, f32 *, 0x3A0), -M2C_FIELD(arg0, f32 *, 0x3A8), d[1]);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x60) = ((s32 (*)(void *))calc_angle_to_target__19TObjEneEpsilonGuardFPv)(arg0);
        ((V_A *) arg0)->m87();
        break;
    }
}

void handle_event__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        ((EG_8035DD68 *) arg0)->slot93();
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & ~5);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 1) {
            transition_enemy_state(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
        break;
    }
}
#pragma push
#pragma opt_common_subs off
void TObjEneEpsilonGuard__sub_8035EA90(u8 *arg0) {
    f32 lim;
    s32 i;
    VObj_8035EA90 *p;
    u32 t;
    if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x20) {
        switch (M2C_FIELD(arg0, s32 *, 0x44C)) {
        case 0:
            M2C_FIELD(arg0, f32 *, 0x458) = TObjEneEpsilonGuard__data_805E01D8;
            M2C_FIELD(arg0, s32 *, 0x450) = 0;
            M2C_FIELD(arg0, f32 *, 0x454) = TObjEneEpsilonGuard__data_805E01D8;
            M2C_FIELD(arg0, s32 *, 0x44C) = 1;
            M2C_FIELD(arg0, void **, 0x440) = ((void *(*)(void *, int))create_particle_emitter)(arg0 + 0x2FC, 0x221);
            break;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x458) += lbl_805E01F4;
            if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
                copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x440), arg0 + 0x2FC);
            }
            if (M2C_FIELD(arg0, f32 *, 0x458) >= lbl_805E01F8) {
                M2C_FIELD(arg0, f32 *, 0x458) = lbl_805E01F8;
                M2C_FIELD(arg0, s32 *, 0x44C) = 2;
            }
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x450)++;
            if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
                copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x440), arg0 + 0x2FC);
            }
            if (M2C_FIELD(arg0, s32 *, 0x450) >= M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, s32 *, 0x18)) {
                M2C_FIELD(arg0, f32 *, 0x458) = lbl_805E01F8;
                M2C_FIELD(arg0, s32 *, 0x44C) = 3;
            }
            break;
        case 3:
            M2C_FIELD(arg0, f32 *, 0x458) -= lbl_805E01F4;
            if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
                copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x440), arg0 + 0x2FC);
            }
            if (M2C_FIELD(arg0, f32 *, 0x458) <= TObjEneEpsilonGuard__data_805E01D8) {
                M2C_FIELD(arg0, f32 *, 0x458) = TObjEneEpsilonGuard__data_805E01D8;
                M2C_FIELD(arg0, s32 *, 0x46C) &= ~0x20;
                if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x440));
                    M2C_FIELD(arg0, void **, 0x440) = NULL;
                }
            }
            break;
        default:
            M2C_FIELD(arg0, s32 *, 0x46C) &= ~0x20;
            if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x440));
                M2C_FIELD(arg0, void **, 0x440) = NULL;
            }
            break;
        }
        lim = (f32)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x448), u32 *, 4) - lbl_805E01F8;
        M2C_FIELD(arg0, f32 *, 0x454) += lbl_805E01FC;
        if (lim < M2C_FIELD(arg0, f32 *, 0x454)) {
            M2C_FIELD(arg0, f32 *, 0x454) -= lim;
        }
        M2C_FIELD((u8 *)lbl_804F2034, f32 *, 0x38) = lbl_805E0200 * M2C_FIELD(arg0, f32 *, 0x458);
        ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(M2C_FIELD(arg0, u8 **, 0x45C) + 0x38, arg0 + 0x38);
        init_all_slots__10TObjPlayerFv();
        check_object_collisions__10TObjPlayerFPv(M2C_FIELD(arg0, void **, 0x45C));
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x45C), u8 **, 0xA4), s32 *, 0x18) & 0x80000) {
            for (i = 0; i < 16; i++) {
                p = get_battle_param__10TObjPlayerFi(i);
                if (p == NULL) {
                    break;
                }
                if (obj_is_hit_receivable() != 0) {
                    t = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x470));
                    if (t != 0 && p->m31() == 0) {
                        Pair_8035EA90 pr;
                        pr.a = get_table_value_by_index__19TObjEneEpsilonGuardFPv(t);
                        pr.b = M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 0xC);
                        p->m21(arg0, pr, 0, -1, -1);
                        p->m23(arg0);
                    }
                }
            }
        }
    } else if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x440));
        M2C_FIELD(arg0, void **, 0x440) = NULL;
    }
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0);
void TObjEneEpsilonGuard__vt86(void *);
int set_part_local_pos__9TObjEneDDFPvPvi(void*, void*, void*);
s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0);
    extern int lbl_805D5108;
}

extern "C" {

void TObjEneEpsilonGuard__vt87(void *);
void update_center_position__19TObjEneEpsilonGuardFPv(u8 *);
void update_guard_state__19TObjEneEpsilonGuardFPv(u8 *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK TObjEneDD__vt86();
s32 TObjEneEpsilonGuard__sub_8035F950();
M2C_UNK enemy_copy_target_destination(void *);
s16 obj_getField1c(int);

void update_guard_state__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x40)) {
        temp_r3 = ((s32 (*)(int))find_entity_by_id)((int) (M2C_FIELD(arg0, u16 *, 0x470)));
        if ((temp_r3 == 0) || (TObjEneEpsilonGuard__sub_8035F950() == 1)) {
            if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x10) {
                ((M2C_UNK (*)(void *, int))transition_enemy_state)((void *) (arg0), (int) (5));
            } else {
                ((M2C_UNK (*)(void *, int))transition_enemy_state)((void *) (arg0), (int) (4));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x390) = temp_r3;
            M2C_FIELD(arg0, s16 *, 0x38C) = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x390)));
            enemy_copy_target_destination((void *) (arg0));
            ((M2C_UNK (*)(void *))TObjEneEpsilonGuard__sub_8035EA90)((void *) (arg0));
        }
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x20) {
            play_persistent_sound((int) (0x4003A846), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r0 != 4) && (temp_r0 != 5)) {
            play_persistent_sound((int) (0x4003AD43), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

void TObjEneEpsilonGuard__vt87(void *arg0) {
    TObjEneDD__vt86();
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x400000) {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x80);
    } else {
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFF7F);
    }
    update_center_position__19TObjEneEpsilonGuardFPv((u8 *)(arg0));
}

extern const f32 TObjEneEpsilonGuard__data_805E01DC;

void update_center_position__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneEpsilonGuard__data_805E01DC + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    ((M2C_UNK (*)(void *, void *, void *, f32))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneEpsilonGuard__data_805E01DC));
}
void TObjEneEpsilonGuard__vt86(void* p) { set_part_local_pos__9TObjEneDDFPvPvi(p, (char*)p + 0x2fc, (void*)0); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_8035EF78 { char pad[0x18]; };

struct VObj_18_8035EF78 : VBase_18_8035EF78 {
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
    virtual M2C_UNK m86();
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

struct Rec_8035F4B4 { u8 b[0x1C]; };

struct Self_8035F4B4 { u8 pad[0x3C0]; Rec_8035F4B4 recs[4]; };

typedef s32 M2C_UNK;
struct VBase_8035F234 { char pad[0x18]; };

struct VObj_8035F234 : VBase_8035F234 {
    virtual void m0(int);
};

struct VBase_18_b345b0 { char pad[0x18]; };
struct VObj_18_b345b0 : VBase_18_b345b0 {
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
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92();
    virtual M2C_UNK m93();
};

extern "C" {
void TObjEneEpsilonGuard__vt85(void *arg0, s32 arg1, s32 arg2);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void run_task__19TObjEneEpsilonGuardFv(u8 *arg0);
M2C_UNK enemy_copy_target_destination(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
M2C_UNK activate_and_dispatch__10TObjPlayerFPv(void *);
void init_model_and_state__19TObjEneEpsilonGuardFPv(void *);
s32 get_bml_motion(void *, int);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
M2C_UNK initialize_enemy_state__9TObjEneDDFPv(void *, int);
M2C_UNK check_state_flag_4__9TObjEneDDFPv(void *);
M2C_UNK init_model__9TObjEneDDFPv(void *, void *, int);
M2C_UNK init_position_vectors__9TObjEneDDFPv(void *);
M2C_UNK TObjEneMe3Stelth__sub_800F5874(void *, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
M2C_UNK set_indexed_flags(void *, int, int);
M2C_UNK init_collision_body_parts(void *, void *, int);
void *construct_collider_proxy__10TObjPlayerFPv(void *, int);
extern s32 lbl_805D6F68;
extern s32 lbl_805D6F6C;
extern s32 lbl_805D6F70;
extern u8 *lbl_805D6FA0;
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
M2C_UNK TObjEneEpsilon__ct();
extern s32 lbl_805D4458;
void *TObjEneEpsilonGuard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjEneEpsilon__vt0(void *, int);
u8 *__dt__19TObjEneEpsilonGuardFv(u8 *arg0, s16 arg1);
}

extern "C" {

void TObjEneEpsilonGuard__vt26(void);
void TObjEneEpsilonGuard__vt59(void);
void TObjEneEpsilonGuard__vt60(void);
void TObjEneEpsilonGuard__vt61(void);
void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *__nw__7TObjectFUl(int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);

extern const f64 lbl_80479C88;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt87();
extern "C" void TObjEneDD__vt88();
extern "C" void TObjEneDD__vt89();
extern "C" void TObjEneDD__vt90();
extern "C" void TObjEneDD__vt91();
extern "C" void TObjEneDD__vt92();
extern "C" void TObjEneDD__vt93();
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilonGuard__vt20();
extern "C" void TObjEneEpsilonGuard__vt21();
extern "C" void TObjEneEpsilonGuard__vt22();
extern "C" void TObjEneEpsilon__vt101();
extern "C" void TObjEneEpsilon__vt28();
extern "C" void TObjEneEpsilon__vt37();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void fn_800F5D80();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
void *lbl_804F2008[7] = {
    (void *)0x43160000, (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_804F2024[4] = {
    (void *)0x10000, (void *)0x2, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804F2034[22] = {
    (void *)0x0, (void *)0x41400000, (void *)0x0, (void *)0x40000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41400000, (void *)0x0, (void *)0x42100000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *__vt__19TObjEneEpsilonGuard[105] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__19TObjEneEpsilonGuardFv, (void *)&run_task__19TObjEneEpsilonGuardFv,
    (void *)&render__19TObjEneEpsilonGuardFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&TObjEneEpsilonGuard__vt20, (void *)&TObjEneEpsilonGuard__vt21,
    (void *)&TObjEneEpsilonGuard__vt22, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneEpsilonGuard__vt26, (void *)&TObjPlayer__sub_8000FF3C, (void *)&TObjEneEpsilon__vt28, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&TObjEneEpsilon__vt37,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneEpsilonGuard__vt59, (void *)&TObjEneEpsilonGuard__vt60, (void *)&TObjEneEpsilonGuard__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneEpsilonGuard__vt85,
    (void *)&TObjEneEpsilonGuard__vt86, (void *)&TObjEneEpsilonGuard__vt87, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneEpsilon__vt101,
};

s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f3;

    enemy_copy_target_destination((void *)(arg0));
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x38);
    return (s32) (lbl_80479C88 * get_ad_end_text_start__10TObjPlayerFv((f32) (temp_f3 - M2C_FIELD(arg0, f32 *, 0x394)), (f32) (M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x39C)), (f32) (temp_f3)));
}

#pragma push
#pragma fp_contract on
void set_orbit_destination__19TObjEneEpsilonGuardFPvi(u8 *arg0, s32 arg1) {
    enemy_copy_target_destination((void *)(arg0));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((M2C_FIELD((*(f32 * *)&TObjEneEpsilonGuard__data_805D6F74), f32 *, 0) * sin_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x394));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((M2C_FIELD((*(f32 * *)&TObjEneEpsilonGuard__data_805D6F74), f32 *, 0) * cos_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x39C));
}
#pragma pop

void TObjEneEpsilonGuard__vt59(void) {  }
void TObjEneEpsilonGuard__vt60(void) {  }
void TObjEneEpsilonGuard__vt61(void) {  }
void TObjEneEpsilonGuard__vt26(void) {  }

extern void *tl_04;

void TObjEneEpsilonGuard__vt85(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        ((M2C_UNK (*)(void *, s32))handle_event__19TObjEneEpsilonGuardFPvi)((void *) (arg0), arg2);
        return;
    case 1:
        ((M2C_UNK (*)(void *, s32))TObjEneEpsilonGuard__sub_8035E8C0)((void *) (arg0), arg2);
        return;
    case 2:
        ((M2C_UNK (*)(void *, s32))state_orbit__19TObjEneEpsilonGuardFPvi)((void *) (arg0), arg2);
        return;
    case 3:
        ((M2C_UNK (*)(void *, s32))TObjEneEpsilonGuard__sub_8035E578)((void *) (arg0), arg2);
        return;
    case 4:
        ((M2C_UNK (*)(void *, s32))handle_break_state__19TObjEneEpsilonGuardFPvi)((void *) (arg0), arg2);
        return;
    case 5:
        ((M2C_UNK (*)(void *, s32))handle_message__19TObjEneEpsilonGuardFPvi)((void *) (arg0), arg2);
        return;
    }
}

#pragma push
#pragma fp_contract on
void run_task__19TObjEneEpsilonGuardFv(u8 *arg0) {
    s32 temp_r3;
    if (((VObj_18_8035EF78 *)(arg0))->m81() != 4) {
        ((M2C_UNK (*)(void *))update_guard_state__19TObjEneEpsilonGuardFPv)((void *) (arg0));
        ((VObj_18_8035EF78 *)(arg0))->m83();
        if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x10)) {
            ((VObj_18_8035EF78 *)(arg0))->m86();
            ((M2C_UNK (*)(void *))update_center_position__19TObjEneEpsilonGuardFPv)((void *) (arg0));
            set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
            ((VObj_18_8035EF78 *)(arg0))->m98();
            return;
        }
        temp_r3 = ((s32 (*)(int))find_entity_by_id)((int) (M2C_FIELD(arg0, u16 *, 0x470)));
        if (temp_r3 != 0) {
            ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x38), (void *) (temp_r3 + 0x38));
            ((M2C_UNK (*)(void *))update_center_position__19TObjEneEpsilonGuardFPv)((void *) (arg0));
        }
    } else if (M2C_FIELD(arg0, s16 *, 0x326) == 0) {
        ((M2C_UNK (*)(void *, int))transition_enemy_state)((void *) (arg0), (int) (0));
    }
}
#pragma pop

void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneEpsilonGuard__ct((void *)(o), (void *)(tl_04), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3), (void *)(arg4));
    }
    return o;
}

u8 *__dt__19TObjEneEpsilonGuardFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x18) = __vt__19TObjEneEpsilonGuard;
        if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x440));
            M2C_FIELD(arg0, void **, 0x440) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x45C) != NULL) {
            free_collision_body_parts(M2C_FIELD(arg0, void **, 0x45C));
            if (M2C_FIELD(arg0, VObj_8035F234 **, 0x45C) != NULL) {
                M2C_FIELD(arg0, VObj_8035F234 **, 0x45C)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x45C) = NULL;
        }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs(arg0 + 0x4BC, -1);
        TObjEneEpsilon__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void init_model_and_state__19TObjEneEpsilonGuardFPv(void *arg0_) {
#define arg0 ((u8 *)arg0_)

    void *o;

    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model(lbl_805D6FA0, 2);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(lbl_805D6FA0, 0);
    init_model__9TObjEneDDFPv(arg0, lbl_804F2034, 1);
    set_field_d8__10TObjPlayerFPvi(arg0, lbl_804F2024);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(lbl_805D6FA0, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    reset_hp__9TObjEneDDFPv(arg0, lbl_805D6F68, lbl_805D6F6C, lbl_805D6F70);
    set_indexed_flags(arg0, 0, 0x80020);
    check_state_flag_4__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, void **, 0x350) = lbl_804F2008;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x57);
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x460, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x46C) = 0;
    M2C_FIELD(arg0, s32 *, 0x46C) |= 0x10;
    ((VObj_18_b345b0 *)(arg0))->m93();
    M2C_FIELD(arg0, s32 *, 0x444) = get_bml_model(lbl_805D6FA0, 3);
    M2C_FIELD(arg0, s32 *, 0x448) = get_bml_motion(lbl_805D6FA0, 3);
    M2C_FIELD(arg0, f32 *, 0x454) = TObjEneEpsilonGuard__data_805E01D8;
    M2C_FIELD(arg0, s32 *, 0x450) = 0;
    M2C_FIELD(arg0, s32 *, 0x430) = 0;
    M2C_FIELD(arg0, s32 *, 0x434) = 0;
    M2C_FIELD(arg0, s32 *, 0x438) = 0;
    M2C_FIELD(arg0, s32 *, 0x43C) = 0;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_18_b345b0 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
    o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = construct_collider_proxy__10TObjPlayerFPv(o, 0);
    }
    M2C_FIELD(arg0, void **, 0x45C) = o;
    init_collision_body_parts(M2C_FIELD(arg0, void **, 0x45C), (u8 *) lbl_804F2034 + 0x2C, 1);
    M2C_FIELD(arg0, s32 *, 0x440) = 0;
    TObjEneMe3Stelth__sub_800F5874(arg0, 0x3F);
#undef arg0
}

void *TObjEneEpsilonGuard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6) {
    s32 var_r30;
    TObjEneEpsilon__ct();
    M2C_FIELD(arg0, void ***, 0x18) = __vt__19TObjEneEpsilonGuard;
    init_common__18TObjEneMe3SinowZoaFPv((void *) ((u8 *)(arg0) + 0x4BC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4458;
    M2C_FIELD(arg0, s16 *, 0x470) = ((s16 (*)(void *))obj_getField1c)((void *) (arg2));
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16)(s32)arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16)(s32)arg4;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg2, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg2, s16 *, 0x2A);
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) ((u8 *)(arg0) + 0x38), (void *) (arg5));
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) ((u8 *)(arg0) + 0x50), (void *) ((u8 *)(arg2) + 0x50));
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32)arg6;
    init_model_and_state__19TObjEneEpsilonGuardFPv((void *) (arg0));
    ((VObj_18_599a64 *)(arg0))->m93();
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
    for (var_r30 = 0; var_r30 < 4; var_r30++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Self_8035F4B4 *)arg0)->recs[var_r30]);
    }
    return arg0;
}

}
