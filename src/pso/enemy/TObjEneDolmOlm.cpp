#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80301690_80300CE4 { char pad[0x18]; };
struct VObj_80301690_80300CE4 : Base_80301690_80300CE4 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)
    V(90)V(91)V(92)V(93)V(94)V(95)V(96)V(97)V(98)V(99)
    virtual void m100();
#undef V
};

struct Base_A_802cf040_802CECE0 { char pad[0x18]; };

struct V_A_802cf040_802CECE0 : Base_A_802cf040_802CECE0 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
    virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43();
    virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47();
    virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51();
    virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55();
    virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59();
    virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63();
    virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67();
    virtual void p68(); virtual void p69(); virtual void p70(); virtual void p71();
    virtual void p72(); virtual void p73(); virtual void p74(); virtual void p75();
    virtual void p76(); virtual void p77(); virtual void p78(); virtual void p79();
    virtual void p80(); virtual void p81(); virtual void p82(); virtual void p83();
    virtual void p84(); virtual void p85();
    virtual void m86();
    virtual void p87(); virtual void p88(); virtual void p89(); virtual void p90();
    virtual void p91(); virtual void p92(); virtual void p93();
    virtual void m94();
    virtual void p95(); virtual void p96(); virtual void p97(); virtual void p98();
    virtual void p99();
    virtual void m100();
};

#include <stddef.h>
struct Stack_80300FC0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80300FC0_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80300FC0_lbl_8058D490_size[sizeof(RecoveredGlobal_80300FC0_lbl_8058D490) == 0x30 ? 1 : -1];

struct Stack_80301264 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80301264_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };

struct VBase_18_477421
{
  char pad[0x18];
};

struct VObj_18_477421 : VBase_18_477421 {
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
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
    virtual M2C_UNK m85();
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual M2C_UNK m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual M2C_UNK m99();
};

struct RecoveredFields_8030247C_arg0
{
  u8 unknown_0[0x2B4];
  f32 field_2B4;
  u8 unknown_2B8[0x6E];
  s16 field_326;
  u8 unknown_328[0xBC];
  s32 field_3E4;
};

struct E_80302D80 { s32 a; s32 b; s32 c; s32 d; };

struct G_80302D80 { u8 pad[0x42c]; E_80302D80 *e; };

struct O_80302D80 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct B14_80302004 { char pad[0x14]; };

struct V14_80302004 : B14_80302004 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual s32 m5();
};

struct Ene_80302004 {
    u8 pad0[0x38];
    u8 sub38[0x2ee];
    s16 s326;
    s16 s328;
    u8 pad1[0x390 - 0x32a];
    s32 f390;
    u8 pad2[0x3a8 - 0x394];
    V14_80302004 obj;
};

struct Ene_80302A34 { u8 pad0[0x18]; void *vt; u8 pad1[0x3a8 - 0x1c]; u8 sub[0x1c]; void *obj[2]; };

typedef s32 M2C_UNK;
struct VBase_14_800A7BEC { char pad[0x14]; };

struct VObj_14_800A7BEC : VBase_14_800A7BEC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800A7BEC { u8 pad0[0x38]; u8 sub38[0x326 - 0x38]; s16 f326; s16 state; u8 pad32a[0x390 - 0x32A]; s32 f390; };

typedef struct Vec_800A7A14 {
    f32 x, y, z;
} Vec_800A7A14;

struct VBase_800A7A14 { char pad[0x18]; };

struct VObj_800A7A14 : VBase_800A7A14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800A7A14 *, Vec_800A7A14 *);
};

typedef struct Obj_800A7A14 {
    u8 pad0[0x38];
    Vec_800A7A14 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x3C4 - 0xC4];
    VObj_800A7A14 *effs[2];
} Obj_800A7A14;

struct A7B00Base_800a7b00_800A7764 { char pad[0x14]; };

struct A7B00Obj_800a7b00_800A7764 : A7B00Base_800a7b00_800A7764 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

typedef struct Vec_80300D00 { f32 x, y, z; } Vec_80300D00;

typedef struct Hit_80300D00 { s32 flags; u8 *obj; } Hit_80300D00;

struct O_80302D80;
struct E16_80301148 { u8 pad[8]; s32 v; u8 pad2[4]; };

struct E8_80301148 { u8 pad[4]; s32 v; };

struct T_80301148 { u8 pad[0x42C]; E16_80301148 *a; E8_80301148 *b; };

struct VBase_14_fa0828 { char pad[0x14]; };
struct VObj_14_fa0828 : VBase_14_fa0828 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
};
struct VBase_18_c99286 { char pad[0x18]; };
struct VObj_18_c99286 : VBase_18_c99286 {
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
    virtual M2C_UNK m79(s32);
    virtual M2C_UNK m80();
};

struct VSubBase_803021AC { char pad[0x14]; };

struct VSub_803021AC : VSubBase_803021AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual s32 m8();
    u8 rest[0x3c - 0x18];
};

struct Mesh_803021AC { u8 pad[6]; s16 flags; };

struct L3_803021AC { u8 pad[4]; Mesh_803021AC *mesh; };

struct L2_803021AC { u8 pad[4]; L3_803021AC *p; };

struct L1_803021AC { u8 pad[0x30]; L2_803021AC *p; };

struct Model_803021AC { u8 pad[0x2c]; L1_803021AC *p; };

struct EBase_803021AC { char pad[0x18]; };

struct Ene_803021AC : EBase_803021AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
    u8 pad1c[8];
    s32 f24;
    u8 pad28[8];
    u32 f30;
    Model_803021AC *model;
    u8 pos[0x60 - 0x38];
    s32 rotY;
    u8 pad64[0x326 - 0x64];
    s16 state;
    u8 pad328[0x380 - 0x328];
    f32 f380;
    u8 pad384[0x390 - 0x384];
    s32 f390;
    u8 pad394[0x3a8 - 0x394];
    VSub_803021AC sub;
    u32 f3e4;
};

struct Vec_803021AC { f32 x, y, z; };

struct Vec_8030177C { f32 x, y, z; };

struct Param_8030177C { u8 pad0[0x10]; f32 range; u8 pad14[0x18 - 0x14]; s32 angle; s32 power; };

struct Move_8030177C { u8 pad0[8]; s32 turn; };

struct Obj_8030177C {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x38 - 0x34];
    Vec_8030177C pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
    u8 pad64[0xB8 - 0x64];
    s16 fb8;
    u8 padBA[0xC4 - 0xBA];
    f32 fc4;
    f32 fc8;
    u8 padCC[0x2A8 - 0xCC];
    Obj_8030177C *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_8030177C f2fc;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    s16 f328;
    u8 pad32A[0x338 - 0x32A];
    u16 f338;
    u8 pad33A[0x350 - 0x33A];
    Move_8030177C *move;
    u8 pad354[0x368 - 0x354];
    s32 kind;
};

struct VBase_18_cc39a7 { char pad[0x18]; };
struct VObj_18_cc39a7 : VBase_18_cc39a7 {
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
    virtual s32 m17(M2C_UNK);
};
extern "C" {
s32 TObjEneDolmOlm__sub_80300CF0(void);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
extern s32 TObjEneDolmOlm__data_805D6A1C;
extern const f32 lbl_805DE6F4;
void TObjEneDolmOlm__sub_803020C4(void);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300EB0(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300EF4(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300F38(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300F7C(s32 arg0);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 TObjPlayer__sub_800D92BC(void *, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
M2C_UNK pop_matrix();
extern RecoveredGlobal_80300FC0_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneDolmOlm__data_805DEF54;
extern const f32 lbl_805DEF58;
extern const f32 TObjEneDolmOlm__data_805DEF5C;
void TObjEneDolmOlm__sub_80300FC0(u8 *arg0);
s32 check_path_obstructed(void *, void *);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern RecoveredGlobal_80300FC0_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneDolmOlm__data_805DEF54;
extern const f32 TObjEneDolmOlm__data_805DEF68;
void TObjEneDolmOlm__sub_80301264(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK submit_cursor_candidate(void *, int);
void init_body_sub__14TObjEneDolmOlmFPv(void *arg0);
void advance_position__14TObjEneDolmOlmFPv(u8 *arg0);
M2C_UNK TObjEneDolmOlm__sub_80301C3C(void *);
M2C_UNK set_active__12TObjEneReconFv();
extern const f32 TObjEneDolmOlm__data_805DEF50;
void TObjEneDolmOlm__sub_8030247C(u8 *arg0);
extern u32 TObjEneDolmOlm__data_805D6A10;
void TObjEneDolmOlm__sub_80302D80(O_80302D80 *self, s32 i);
void advance_animation_playback(void);
void TObjEneMe3SinowZoa__sub_800D758C(void *);
void TBoss3Volopt__sub_800D8E80(void *);
void TObjEneDolmOlm__sub_80302004(Ene_80302004 *self);
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void unlink_enemy_group_relations(void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
Ene_80302A34 *TObjEneDolmOlm__sub_80302A34(Ene_80302A34 *self, s16 flag);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern u32 TObjEneDolmOlm__data_805D6A14;
extern u32 TObjEneDolmOlm__data_805D6A18;
extern const f32 lbl_805DEF60;
void TObjEneDolmOlm__sub_8030105C(Obj_800A7A14 *o);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void attach_particle_model(s32, s32, s32, s32, s32, f32);
Hit_80300D00 *csnVectorUnder(void *, void *, s32, f32);
s32 TParticleCtrl__sub_80086884(s32);
s32 get_instance__13TParticleCtrlFv(void);
s32 spawn_particle_effect(void *, int);
void fn_800D88E4(void *);
extern s32 lbl_805D53A4;
extern const f32 lbl_805DEF4C;
extern const f32 TObjEneDolmOlm__data_805DEF50;
void TObjEneDolmOlm__sub_80300D00(u8 *arg0, Vec_80300D00 *arg1);
M2C_UNK draw_trail_with_colors(u32, s32, s32, int, int);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
void TObjEneDolmOlm__sub_80302D80(O_80302D80 *self, s32 i);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern u32 TObjEneDolmOlm__data_805D6A10;
extern u32 TObjEneDolmOlm__data_805D6A14;
extern u32 TObjEneDolmOlm__data_805D6A18;
extern const f32 lbl_805DEF64;
void TObjEneDolmOlm__sub_80301148(u8 *arg0);
s32 obj_testFlags30(void *, u32);
void obj_clearFlags30(void *, u32);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void TObjEneDolmOlm__sub_8030158C(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi();
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
f32 get_random_float__8TObjFishFv(f32);
u8 *get_enemy_entity(u32);
f32 horizontal_distance_squared(void *, void *);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
u8 *get_player_by_client_id(u32);
extern u32 TObjEneDolmOlm__data_805D6A0C;
extern const f32 TObjEneDolmOlm__data_805DEF5C;
extern const f32 TObjEneDolmOlm__data_805DEF6C;
void TObjEneDolmOlm__sub_80301348(u8 *arg0);
void render_with_position_override__10TObjPlayerFPvPvi(void *, void *, s32);
s32 is_split_screen();
M2C_UNK get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
s32 render_model_if_visible__14TObjEneDolmOlmFPv(u8 *arg0);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(void *);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void TObjEneDolmOlm__sub_803020C4(void);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 TObjEneDolmOlm__data_805D6A1C;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 TObjEneDolmOlm__data_805DEF50;
extern const f32 TObjEneDolmOlm__data_805DEF54;
extern const f32 TObjEneDolmOlm__data_805DEF68;
extern const f32 lbl_805DEF70;
extern const f32 lbl_805DEF84;
extern const f32 lbl_805DEF88;
extern const f32 lbl_805DEF8C;
void TObjEneDolmOlm__sub_803021AC(Ene_803021AC *arg0);
f32 calc_boss4_scale__10TObjPlayerFi();
f32 get_random_float__8TObjFishFv(f32);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 obj_testFlags30(void *, u32);
s32 play_sound_effect(void *, void *, int, int);
s32 spawn_particle_effect(void *, int);
u8 *get_player_by_client_id(u32);
void advance_animation_playback(void);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void obj_clearFlags30(void *, u32);
M2C_UNK apply_actor_gravity(void *, int, f32);
s32 update_angle__10TObjPlayerFPviPv(void *, s32, void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 check_player_flag1__6TLobbyFPv(void *);
s32 angle_difference_abs(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_effect__10TObjPlayerFiii(void *, s32, s32);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void subtract_vector(void *, void *);
extern const f64 lbl_804750C8[];
extern u32 TObjEneDolmOlm__data_805D6A0C;
extern const f32 TObjEneDolmOlm__data_805DEF50;
extern const f32 TObjEneDolmOlm__data_805DEF54;
extern const f32 TObjEneDolmOlm__data_805DEF5C;
extern const f32 TObjEneDolmOlm__data_805DEF6C;
extern const f32 lbl_805DEF70;
M2C_UNK TObjEneDolmOlm__sub_8030177C(void *arg0_);
struct Vec_80301C3C { f32 x, y, z; };
struct Elem_80301C3C { u8 pad[0xC]; f32 r; u8 pad2[0x1C]; };
struct Tgt_80301C3C { u8 pad[0xA4]; Elem_80301C3C *arr; s32 count; };
M2C_UNK move_with_wall_slide(void *);
M2C_UNK enemy_set_heading_velocity(void *, s32, f32);
s32 select_enemy_destination(void *, void *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, void *);
M2C_UNK enemy_turn_toward_dest(void *, s32);
f32 get_target_value__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_800C4E08(void *);
M2C_UNK update_target_near_flag(void *);
s32 test_elt_flag__10TObjPlayerFPvii(void *, int, int);
extern const f32 lbl_805DEF74;
extern const f32 lbl_805DEF78;
extern const f32 lbl_805DEF7C;
extern const f32 lbl_805DEF80;
}

extern "C" {

void * TObjEneDolmOlm__create(void *arg0);
void TObjEneDolmOlm__sub_80300CFC(void);
void TObjEneDolmOlm__sub_803012F8(void* p);
void advance_position__14TObjEneDolmOlmFPv(u8 *arg0);
void check_scale_trigger__14TObjEneDolmOlmFPv(void *arg0);
void free_shared_resources__14TObjEneDolmOlmFv(void);
void init_body_sub__14TObjEneDolmOlmFPv(void *arg0);
s32 render_model_if_visible__14TObjEneDolmOlmFPv(u8 *arg0);
void reset_count__14TObjEneDolmOlmFv(void);
void update_state__14TObjEneDolmOlmFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK post_translate_matrix(void *);
void *TObjControl__ct(void *, void *);
u8 *TObjEneDolmOlm__ct(u8 *, M2C_UNK, s32);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void free__11TOBoss4RockFUi(void*);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK restore_render_scissor(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
M2C_UNK fn_8002AE64(void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK init_position_vectors__10TObjPlayerFi(void *);
M2C_UNK init_enemy_base__10TObjPlayerFPv(void *, M2C_UNK);
M2C_UNK init_common__18TObjEneMe3SinowZoaFPv(void *);
s32 create__12TObjEneSaverFPvPv(u32, u32);
M2C_UNK initialize_enemy_photon_effect(void *);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
M2C_UNK init_collision_body_parts(void *, void *, int);
extern s32 lbl_805D4068;
extern const f32 lbl_805DEF94;
extern const f32 lbl_805DEF98;
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
}
extern "C" {
}
extern "C" {
}
extern "C" {
void TObjPlayer__sub_8000FF3C();
}
extern "C" {
void TObjPlayer__sub_80010A80();
}
extern "C" {
void TObjPlayer__sub_800111D8();
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
void TObjPlayer__sub_800AC9D8();
}
extern "C" {
void TObjPlayer__sub_800C53B4();
}
extern "C" {
void TObjPlayer__sub_800C5B10();
}
extern "C" {
void TObjPlayer__sub_800F65D0();
}
extern "C" {
void TObjPlayer__sub_800F673C();
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
void beast_idle_update();
}
extern "C" {
void beast_retire_corpse();
}
extern "C" {
void beast_select_target();
}
extern "C" {
void beast_update_approach();
}
extern "C" {
void beast_update_attack();
}
extern "C" {
void beast_update_dead();
}
extern "C" {
void beast_update_group_chase();
}
extern "C" {
void beast_update_hurt();
}
extern "C" {
void calc_distance_accuracy_penalty__10TObjPlayerFv();
}
extern "C" {
void call_vt78__10TObjPlayerFPv();
}
extern "C" {
void classify_actor_view_detail();
}
extern "C" {
void clear_all_status_effects();
}
extern "C" {
void clear_flag_0x100__10TObjPlayerFPv();
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
void enter_state7__10TObjPlayerFPv();
}
extern "C" {
void enter_state_8__10TObjPlayerFPv();
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
void fn_800F5D80();
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
void is_lying_down__12TObjEneBeastFv();
}
extern "C" {
void is_target_in_attack_range__10TObjPlayerFv();
}
extern "C" {
extern u8 lbl_80474F08[];
}
extern "C" {
extern u8 lbl_80474F1C[];
}
extern "C" {
extern u8 lbl_80474F34[];
}
extern "C" {
extern u8 lbl_80474F54[];
}
extern "C" {
extern u8 lbl_80474F74[];
}
extern "C" {
extern u8 lbl_80474F90[];
}
extern "C" {
extern u8 lbl_80474FAC[];
}
extern "C" {
extern u8 lbl_80474FC8[];
}
extern "C" {
extern u8 lbl_80474FE4[];
}
extern "C" {
extern u8 lbl_80475000[];
}
extern "C" {
extern u8 lbl_8047501C[];
}
extern "C" {
extern u8 lbl_80475038[];
}
extern "C" {
extern u8 lbl_80475054[];
}
extern "C" {
extern u8 lbl_8047506C[];
}
extern "C" {
extern u8 lbl_80475084[];
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
void tick_freeze_and_reset_appearance();
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_start_action__10TObjPlayerFPvii();
}
extern "C" {
void update_action_hold__12TObjEneBeastFPv();
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
void update_object_view_visibility();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
void *lbl_804E6740[3] = {
    (void *)&lbl_80474F08, (void *)&lbl_80474F1C, (void *)0x0,
};
void *lbl_804E674C[10] = {
    (void *)&lbl_80474F34, (void *)&lbl_80474F54, (void *)&lbl_80474F74, (void *)&lbl_80474F90,
    (void *)&lbl_80474FAC, (void *)&lbl_80474FC8, (void *)&lbl_80474FE4, (void *)&lbl_80475000,
    (void *)&lbl_8047501C, (void *)0x0,
};
void *lbl_804E6774[4] = {
    (void *)&lbl_80475038, (void *)&lbl_804E6740, (void *)&lbl_804E674C, (void *)0x20009,
};
void *lbl_804E6784[3] = {
    (void *)&lbl_80475054, (void *)&lbl_8047506C, (void *)0x0,
};
void *lbl_804E6790[10] = {
    (void *)&lbl_80474F34, (void *)&lbl_80474F54, (void *)&lbl_80474F74, (void *)&lbl_80474F90,
    (void *)&lbl_80474FAC, (void *)&lbl_80474FC8, (void *)&lbl_80474FE4, (void *)&lbl_80475000,
    (void *)&lbl_8047501C, (void *)0x0,
};
void *lbl_804E67B8[4] = {
    (void *)&lbl_80475084, (void *)&lbl_804E6784, (void *)&lbl_804E6790, (void *)0x20009,
};
s32 lbl_804E67C8[52] = {
    0x10000, 0x5, 0x3f4ccccd, 0x1,
    0x10000, 0x6, 0x3f19999a, 0x20,
    0x10002, 0x8, 0x3f4ccccd, 0x1,
    0x20000, 0x0, 0x3f4ccccd, 0x4,
    0x20000, 0x1, 0x3f4ccccd, 0x4,
    0x10000, 0x8, 0x3f4ccccd, 0x1,
    0x20000, 0x2, 0x3f4ccccd, 0x8,
    0x20000, 0x7, 0x3f4ccccd, 0x20,
    0x30000, 0x3, 0x3f333333, 0x10,
    0x30000, 0x3, 0x3f333333, 0x10,
    0x20000, 0x5, 0x3f4ccccd, 0x20,
    0x10000, 0x5, 0x3f4ccccd, 0x20,
    0x20000, 0x4, 0x3f4ccccd, 0x4,
};
s32 lbl_804E6898[14] = {
    0x43610000, 0x3f400000, 0x400, 0x0,
    0x1e0000, 0x1, 0x0, 0x43960000,
    0x3f800000, 0x400, 0x0, 0x1e0000,
    0x1, 0x0,
};
s32 lbl_804E68D0[22] = {
    0x0, 0x41480000, 0x0, 0x41000000,
    0x0, 0x0, 0x8003, 0x0,
    0x0, 0x0, 0x0, 0x0,
    0x41480000, 0x0, 0x41000000, 0x0,
    0x0, 0x8003, 0x0, 0x0,
    0x0, 0x0,
};
void *lbl_804E6928[103] = {
    (void *)0x0, (void *)0x0, (void *)&TObjEneDolmOlm__sub_80302A34, (void *)&TObjEneDolmOlm__sub_8030247C,
    (void *)&TObjEneDolmOlm__sub_803021AC, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&beast_select_target, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&is_lying_down__12TObjEneBeastFv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold__12TObjEneBeastFPv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&tick_freeze_and_reset_appearance,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&update_state__14TObjEneDolmOlmFPv, (void *)&TObjEneDolmOlm__sub_8030158C,
    (void *)&TObjEneDolmOlm__sub_80301348, (void *)&clear_flag_0x100__10TObjPlayerFPv, (void *)&enter_state7__10TObjPlayerFPv, (void *)&enter_state_8__10TObjPlayerFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneDolmOlm__sub_80302004,
    (void *)&beast_idle_update, (void *)&TObjPlayer__sub_800C5B10, (void *)&beast_update_approach, (void *)&beast_update_group_chase,
    (void *)&beast_update_attack, (void *)&TObjPlayer__sub_800C53B4, (void *)&beast_update_hurt, (void *)&beast_update_dead,
    (void *)&beast_retire_corpse, (void *)&TObjEneDolmOlm__sub_8030105C, (void *)&TObjEneDolmOlm__sub_80300FC0, (void *)&TObjEneDolmOlm__sub_80300F7C,
    (void *)&TObjEneDolmOlm__sub_80300F38, (void *)&TObjEneDolmOlm__sub_80300EF4, (void *)&TObjEneDolmOlm__sub_80300EB0, (void *)&TObjPlayer__sub_800AC9D8,
    (void *)&check_scale_trigger__14TObjEneDolmOlmFPv, (void *)&TObjEneDolmOlm__sub_80300CFC, (void *)&TObjEneDolmOlm__sub_803012F8,
};

    extern int lbl_805D69E8;
void reset_count__14TObjEneDolmOlmFv(void) { lbl_805D69E8 = 0; }

s32 TObjEneDolmOlm__sub_80300CF0(void) {
    return 0x7FFFFFFF;
}

void TObjEneDolmOlm__sub_80300CFC(void) {  }

void TObjEneDolmOlm__sub_80300D00(u8 *arg0, Vec_80300D00 *arg1) {
    Vec_80300D00 v;
    Hit_80300D00 *hit;
    f32 y;
    s32 e;
    VecCopy__FP3VecPC3Vec(&v, arg1);
    y = v.y;
    v.y = y + lbl_805DEF4C;
    hit = csnVectorUnder(&v, arg0 + 0x120, 0x4007, y);
    if (hit != NULL) {
        if (hit->flags & 4) {
            if (lbl_805D53A4 % 5 == 0) {
                fn_800D88E4(arg0 + 0x38);
            }
            e = spawn_particle_effect(hit->obj + 0x38, 0x49);
            if (e != 0) {
                attach_particle_model(e, TParticleCtrl__sub_80086884(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneDolmOlm__data_805DEF50);
            }
            spawn_particle_effect(hit->obj + 0x38, 0xA4);
        } else if (hit->flags & 2) {
            if (lbl_805D53A4 % 10 == 0) {
                fn_800D88E4(arg0 + 0x38);
            }
            e = spawn_particle_effect(hit->obj + 0x54, 0x49);
            if (e != 0) {
                attach_particle_model(e, TParticleCtrl__sub_80086884(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneDolmOlm__data_805DEF50);
            }
            spawn_particle_effect(hit->obj + 0x54, 0xA4);
        }
        *(s32 *)(arg0 + 0x3E4) = *(s32 *)(hit->obj + 0x18);
        if (*(s32 *)(arg0 + 0x3E4) & 0x4000) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3D8, hit->obj);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3D8, arg0 + 0x38);
        }
    }
}

void init_body_sub__14TObjEneDolmOlmFPv(void *arg0) {
    TObjEneDolmOlm__sub_80300D00((u8 *)(arg0), (Vec_80300D00 *)((s8 *)arg0 + 0x38));
}

void TObjEneDolmOlm__sub_80300EB0(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A801))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300EF4(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A802))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300F38(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003B203))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300F7C(s32 arg0) {
    play_sound_effect((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD00))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300FC0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80300FC0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80300FC0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80300FC0, sp10) == 0x8) ? 1 : -1];
    Stack_80300FC0 stack;
    stack.sp8 = TObjEneDolmOlm__data_805DEF54;
    stack.spC = lbl_805DEF58;
    stack.sp10 = TObjEneDolmOlm__data_805DEF5C * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    TObjPlayer__sub_800D92BC((void *) (&stack.sp8), (int) (0xF));
}

void TObjEneDolmOlm__sub_8030105C(Obj_800A7A14 *o) {
    Vec_800A7A14 b;
    Vec_800A7A14 a;
    u32 e;
    s32 idx;
    VObj_800A7A14 *eff;
    if (!(o->fC0 < lbl_805DEF60)) {
        return;
    }
    switch (o->fB8) {
    case 3:
        e = lookup_entry_by_value__10TObjPlayerFPvf((void *)(*(s32 *)&TObjEneDolmOlm__data_805D6A14), o->fC0);
        idx = 0;
        break;
    case 4:
        e = lookup_entry_by_value__10TObjPlayerFPvf((void *)(*(s32 *)&TObjEneDolmOlm__data_805D6A18), o->fC0);
        idx = 1;
        break;
    default:
        e = 0;
        break;
    }
    if (e == 0) {
        return;
    }
    push_matrix();
    TObjPlayer__sub_803D8CD4(0);
    post_translate_matrix(&o->pos);
    rotate_matrix_y(0, o->f60);
    TObjPlayer__sub_803D8960(0, e, &a, 2);
    pop_matrix();
    eff = o->effs[idx];
    if (eff != NULL) {
        eff->m4(&a, &b);
    }
}

void TObjEneDolmOlm__sub_80301148(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x368) < 1) {
        M2C_FIELD(arg0, s32 *, 0x334) = 0;
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 0x40);
    } else {
        M2C_FIELD(arg0, s32 *, 0x334) = 2;
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 0x41);
    }
    TObjEneDolmOlm__sub_80302D80((O_80302D80 *)arg0, M2C_FIELD(arg0, s32 *, 0x368));
    set_global_flag__10TObjPlayerFv();
    draw_trail_with_colors(TObjEneDolmOlm__data_805D6A14,
        ((T_80301148 *)TObjEneDolmOlm__data_805D6A10)->a[M2C_FIELD(arg0, s32 *, 0x368)].v,
        ((T_80301148 *)TObjEneDolmOlm__data_805D6A10)->b[lbl_804E67C8[13]].v, 0x1C, 0x1D);
    draw_trail_with_colors(TObjEneDolmOlm__data_805D6A18,
        ((T_80301148 *)TObjEneDolmOlm__data_805D6A10)->a[M2C_FIELD(arg0, s32 *, 0x368)].v,
        ((T_80301148 *)TObjEneDolmOlm__data_805D6A10)->b[lbl_804E67C8[17]].v, 0x14, 0x15);
    clear_global_state__10TObjPlayerFv();
    M2C_FIELD(arg0, f32 *, 0x3CC) = lbl_805DEF64 + M2C_FIELD(arg0, f32 *, 0x35C);
    M2C_FIELD(arg0, f32 *, 0x3D0) = lbl_805DEF64 + M2C_FIELD(arg0, f32 *, 0x360);
}

#pragma push
#pragma fp_contract on
void TObjEneDolmOlm__sub_80301264(u8 *arg0, s32 arg1, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_80301264, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80301264, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80301264, sp10) == 0x8) ? 1 : -1];
    Stack_80301264 stack;
    stack.spC = TObjEneDolmOlm__data_805DEF54;
    stack.sp8 = TObjEneDolmOlm__data_805DEF54;
    stack.sp10 = (TObjEneDolmOlm__data_805DEF68 * farg0) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
    push_matrix_from((void *) (&(*(RecoveredGlobal_80301264_lbl_8058D490 *)&lbl_8058D490).value));
    rotate_matrix_y((int)((int) (0)), (int)((void *) (arg1)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrices((int) (1));
    vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x2FC));
    check_path_obstructed((void *) (arg0), (void *) (&stack.sp8));
}
#pragma pop

void TObjEneDolmOlm__sub_803012F8(void* p) { *(s16*)((char*)p + 0xb8) = 1; }

extern const f32 TObjEneDolmOlm__data_805DEF6C;

void advance_position__14TObjEneDolmOlmFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneDolmOlm__data_805DEF6C);
}

void TObjEneDolmOlm__sub_80301348(u8 *arg0) {
    f32 temp_f31;
    f32 var_f30;
    u16 id;
    s32 var_r29;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    switch (M2C_FIELD(arg0, s16 *, 0x326)) {
    case 0:
    case 2:
    case 10:
    case 11:
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        if (M2C_FIELD(arg0, u32 *, 0x34C) == 0U) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        }
        obj_clearFlags30((void *) (arg0), (int) (0x04040000));
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (0x0A000000));
        break;
    default:
        id = M2C_FIELD(arg0, u16 *, 0x338);
        var_r29 = 0;
        var_f30 = TObjEneDolmOlm__data_805DEF6C;
        if (id < 0x1000U) {
            temp_r3_2 = get_player_by_client_id(id);
            if (temp_r3_2 != NULL) {
                temp_f31 = horizontal_distance_squared((void *) (temp_r3_2 + 0x38), (void *) (arg0 + 0x38));
                var_f30 = get_random_float__8TObjFishFv(M2C_FIELD(temp_r3_2, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C));
                if (get_field_3e4__10TObjPlayerFPv((int) (temp_r3_2)) == get_current_floor()) {
                    if ((temp_f31 < (M2C_FIELD(M2C_FIELD(TObjEneDolmOlm__data_805D6A0C, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x368) * 4)), f32 *, 0x10) * M2C_FIELD(M2C_FIELD(TObjEneDolmOlm__data_805D6A0C, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x368) * 4)), f32 *, 0x10))) && (((f32 (*)(void *)) calc_boss4_scale__10TObjPlayerFi)(arg0) < M2C_FIELD(arg0, f32 *, 0x3D0))) {
                        var_r29 = 1;
                    }
                }
            }
        } else if (id < 0x4000U) {
            temp_r3_3 = get_enemy_entity(id);
            if (temp_r3_3 != NULL) {
                var_f30 = get_random_float__8TObjFishFv(M2C_FIELD(temp_r3_3, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C));
            }
        }
        if (var_r29 == 1) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            obj_setFlags30((void *) (arg0), (int) (0x200000));
            obj_clearFlags30((void *) (arg0), (int) (0x04040000));
            clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (0x0A000000));
            return;
        }
        if (var_f30 < TObjEneDolmOlm__data_805DEF6C) {
            M2C_FIELD(arg0, s16 *, 0x326) = 5;
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            if (TObjEneDolmOlm__data_805DEF5C < ((f32 (*)(void *)) calc_boss4_scale__10TObjPlayerFi)(arg0)) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
            } else {
                M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            }
            obj_setFlags30((void *) (arg0), (int) (0x200000));
            obj_clearFlags30((void *) (arg0), (int) (0x04040000));
            clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (0x0A000000));
        }
        break;
    }
}

void TObjEneDolmOlm__sub_8030158C(u8 *arg0) {
    s16 temp_r0;
    if (obj_testFlags30(arg0, 0x1000U) != 0) {
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34C) == 0U) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        }
        obj_clearFlags30(arg0, 0x04040000U);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000U);
        return;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        obj_clearFlags30(arg0, 0x04040000U);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000U);
        return;
    case 2:
    case 3:
    case 10:
        return;
    }
}

void update_state__14TObjEneDolmOlmFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
        }
        break;
    case 10:
        break;
    case 0:
        switch ((s16) M2C_FIELD(arg0, s16 *, 0x328)) {
        case 2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
            }
            break;
        }
        break;
    default:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        ((VObj_80301690_80300CE4 *) arg0)->m100();
        obj_setFlags30(arg0, 0x04040000);
        set_indexed_flags(arg0, 0, 0x0A000000);
        break;
    }
}

#pragma push
#pragma opt_common_subs off
#define arg0 ((Obj_8030177C *)arg0_)
M2C_UNK TObjEneDolmOlm__sub_8030177C(void *arg0_) {
    if (arg0->f338 < 0x1000) {
        Obj_8030177C *tgt = (Obj_8030177C *)get_player_by_client_id(arg0->f338);
        f32 d = horizontal_distance_squared(&tgt->pos, &arg0->pos);
        if (tgt != 0 && get_field_3e4__10TObjPlayerFPv((int)tgt) == get_current_floor() &&
            d < (*(Param_8030177C ** *)&TObjEneDolmOlm__data_805D6A0C)[arg0->kind]->range * (*(Param_8030177C ** *)&TObjEneDolmOlm__data_805D6A0C)[arg0->kind]->range) {
            arg0->target = tgt;
        } else {
            arg0->target = 0;
        }
    } else {
        arg0->f338 = 0xFFFF;
        arg0->target = 0;
    }
    obj_clearFlags30(arg0, 0x4040000);
    ((void (*)(void *))advance_animation_playback)(arg0);
    switch (arg0->f328) {
    case 0:
        if (arg0->target == 0 || (u16)obj_getField1c(arg0->target) >= 0x1000) {
            arg0->f30 &= ~0x200000;
            arg0->f328 = 2;
            arg0->fb8 = 2;
        } else {
            Obj_8030177C *p = arg0->target;
            if (check_player_flag1__6TLobbyFPv(p) != 0) {
                if (get_random_float__8TObjFishFv(p->pos.y - arg0->pos.y) < TObjEneDolmOlm__data_805DEF6C) {
                    arg0->f326 = 5;
                    arg0->f328 = 1;
                    if (TObjEneDolmOlm__data_805DEF5C < ((f32 (*)(void *))calc_boss4_scale__10TObjPlayerFi)(arg0)) {
                        arg0->fb8 = 3;
                    } else {
                        arg0->fb8 = 4;
                    }
                } else {
                    arg0->f326 = 3;
                    arg0->f328 = 1;
                    arg0->fb8 = 2;
                    arg0->f30 &= ~0x200000;
                    obj_clearFlags30(arg0, 0x4040000);
                    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0xA000000);
                }
            } else {
                arg0->f328 = 1;
            }
        }
        apply_actor_gravity(arg0, 0, TObjEneDolmOlm__data_805DEF54);
        break;
    case 1:
        if (arg0->target != 0) {
            Vec_8030177C v;
            VecCopy__FP3VecPC3Vec(&v, &arg0->target->f2fc);
            subtract_vector(&v, &arg0->f2fc);
            if (update_angle__10TObjPlayerFPviPv(arg0, arg0->move->turn, &v) < (*(Param_8030177C ** *)&TObjEneDolmOlm__data_805D6A0C)[arg0->kind]->angle) {
                arg0->f328 = 3;
                arg0->fb8 = 0xC;
                play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A804), &arg0->pos, 0, 0);
                spawn_particle_effect(&arg0->pos, 0x20E);
            }
        } else {
            arg0->fb8 = arg0->f328 = 2;
        }
        apply_actor_gravity(arg0, 0, TObjEneDolmOlm__data_805DEF54);
        break;
    case 3:
        apply_actor_gravity(arg0, 0, TObjEneDolmOlm__data_805DEF54);
        if (arg0->target != 0) {
            Vec_8030177C v;
            s32 a;
            f32 d;
            Param_8030177C *t;
            VecCopy__FP3VecPC3Vec(&v, &arg0->target->f2fc);
            subtract_vector(&v, &arg0->f2fc);
            a = angle_difference_abs(arg0->rotY, (s32)(lbl_804750C8[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
            d = horizontal_distance_squared(&arg0->target->pos, &arg0->pos);
            t = (*(Param_8030177C ** *)&TObjEneDolmOlm__data_805D6A0C)[arg0->kind];
            if (a < t->angle && d < t->range * t->range) {
                a = obj_getField1c(arg0->target);
                if (obj_testFlags30(arg0->target, 0x4000000) == 0) {
                    Obj_8030177C *pl = (Obj_8030177C *)get_player_by_client_id((u16)a);
                    if (pl != 0 && is_locally_controlled__10TObjPlayerFPv(pl) != 0 &&
                        all_parents_unqueued_for_destruction__7TObjectFv(pl) != 0 &&
                        obj_testFlags30(pl, 0x800) == 0 && check_player_flag1__6TLobbyFPv(pl) == 0) {
                        play_effect__10TObjPlayerFiii(pl, (s32)(lbl_805DEF70 * (f32)(*(Param_8030177C ** *)&TObjEneDolmOlm__data_805D6A0C)[arg0->kind]->power), 2);
                    }
                }
            }
        }
        if (objInBand__FP7GameObjf(arg0, arg0->fc4 - TObjEneDolmOlm__data_805DEF50 - arg0->fc8) != 0) {
            arg0->fb8 = arg0->f328 = 2;
        }
        break;
    case 2:
        apply_actor_gravity(arg0, 0, TObjEneDolmOlm__data_805DEF54);
        arg0->f30 &= ~0x200000;
        arg0->f326 = 3;
        arg0->f328 = 1;
        arg0->fb8 = 2;
        obj_clearFlags30(arg0, 0x4040000);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0xA000000);
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot(&arg0->pos, -0x5DB4, 1, 0);
}
#undef arg0
#pragma pop

#define ADV ((void (*)(void *))advance_animation_playback)
#define arg0 ((u8 *)arg0_)
#pragma push
#pragma opt_common_subs off
M2C_UNK TObjEneDolmOlm__sub_80301C3C(void *arg0_) {
    Vec_80301C3C v;
    f32 f;

    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        apply_actor_gravity(arg0, 0, TObjEneDolmOlm__data_805DEF54);
        ADV(arg0);
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, f32 *, 0x3D4) = TObjEneDolmOlm__data_805DEF54;
        M2C_FIELD(arg0, f32 *, 0xC8) *= TObjEneDolmOlm__data_805DEF68;
        break;
    default:
    case 1:
        if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
            if (test_elt_flag__10TObjPlayerFPvii(arg0, 0, 0x300000) != 0) {
                if ((f32) M2C_FIELD(arg0, u32 *, 0x38C)++ < lbl_805DEF74) {
                    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x50);
                } else {
                    VecCopy__FP3VecPC3Vec(&v, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
                }
            } else {
                M2C_FIELD(arg0, u32 *, 0x38C) = 0;
                VecCopy__FP3VecPC3Vec(&v, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            }
            ADV(arg0);
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B205), arg0 + 0x38, 0, 0);
            if (horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x38) < lbl_805DEF78 || ((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0) {
                Vec_80301C3C a = v;
                if (select_enemy_destination(arg0, &a, 1) != 0) {
                    Vec_80301C3C b = *(Vec_80301C3C *)(arg0 + 0x2FC);
                    copy_position_if_valid__10TObjPlayerFii(arg0, &b);
                }
            }
            f = lbl_805DEF7C * M2C_FIELD(arg0, f32 *, 0x394);
            if (((s32 (*)(u8 *, s32, f32))TObjEneDolmOlm__sub_80301264)(arg0, M2C_FIELD(arg0, s32 *, 0x60) + 0x8000, f) == 0) {
                enemy_turn_toward_dest(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
                enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60) + 0x8000, f);
                move_with_wall_slide(arg0);
                M2C_FIELD(arg0, f32 *, 0x3D4) += f;
                if (M2C_FIELD(arg0, f32 *, 0x3D4) >= lbl_805DEF80) {
                    M2C_FIELD(arg0, s16 *, 0x328) = 2;
                }
                f32 d = horizontal_distance_squared(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC, arg0 + 0x38);
                for (s32 i = 0; i < M2C_FIELD(arg0, Tgt_80301C3C **, 0x2A8)->count; i++) {
                    if (d > (M2C_FIELD(arg0, Tgt_80301C3C **, 0x2A8)->arr[i].r + get_target_value__10TObjPlayerFPv(arg0)) * (M2C_FIELD(arg0, Tgt_80301C3C **, 0x2A8)->arr[i].r + get_target_value__10TObjPlayerFPv(arg0))) {
                        M2C_FIELD(arg0, s16 *, 0x328) = 2;
                        break;
                    }
                }
            } else {
                M2C_FIELD(arg0, s16 *, 0x328) = 2;
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        obj_clearFlags30(arg0, 0x04040000);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
        update_target_near_flag(arg0);
        TObjPlayer__sub_800C4E08(arg0);
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    obj_clearFlags30(arg0, 0x200000);
}
#pragma pop
#undef arg0
#undef ADV

void check_scale_trigger__14TObjEneDolmOlmFPv(void *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < M2C_FIELD(arg0, f32 *, 0x3CC)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
    }
}

extern M2C_UNK main_task[];

void TObjEneDolmOlm__sub_80302004(Ene_80302004 *self) {
    advance_animation_playback();
    switch (self->s328) {
    case 0:
    default:
        if (self->f390 != 0) {
            TObjEneMe3SinowZoa__sub_800D758C(&self->obj);
            TBoss3Volopt__sub_800D8E80(self->sub38);
            self->s328 = 1;
            return;
        }
        self->s328 = 2;
        return;
    case 1:
        if (self->obj.m5() == 1) {
            self->s328 = 2;
            self->f390 = 0;
        }
        break;
    case 2:
        self->s326 = 1;
        self->s328 = 0;
        break;
    }
}

void TObjEneDolmOlm__sub_803020C4(void) {
    switch (TObjEneDolmOlm__data_805D6A1C) {
    case 0x15:
    case 0x1d:
    case 0x49:
        begin_effect_render__13TParticleCtrlFv();
        break;
    default:
        end_effect_render__13TParticleCtrlFv();
        break;
    }
    TObjEneDolmOlm__data_805D6A1C += 1;
}

s32 render_model_if_visible__14TObjEneDolmOlmFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3D8)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

extern void *tl_04;

typedef struct RecoveredFields_8030247C_arg0 RecoveredFields_8030247C_arg0;
typedef struct VBase_18_477421 VBase_18_477421;
typedef struct VObj_18_477421 VObj_18_477421;
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())

void TObjEneDolmOlm__sub_803021AC(Ene_803021AC *arg0) {
    s32 vis;
    s16 saved;
    if (arg0->f30 & 0x02000000) {
        return;
    }
    if (is_split_screen() != 0) {
        get_camera_mode__11TCameraCtrlFv();
    }
    vis = arg0->m9(lbl_805DEF84, lbl_805DEF88, lbl_805DEF70);
    if (vis != 0 && render_model_if_visible__14TObjEneDolmOlmFPv((u8 *)arg0) == 0) {
    select_actor_lighting(arg0);
    some_id_805c6f74 |= 1;
    set_global_param__8TObjFishFi(arg0->f24);
    push_matrix();
    translate_matrix(0, TObjEneDolmOlm__data_805DEF54, arg0->f380, TObjEneDolmOlm__data_805DEF54);
    post_translate_matrix(arg0->pos);
    rotate_matrix_y(0, arg0->rotY);
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        draw_chunk_object(arg0->model);
    } else {
        switch (arg0->state) {
        case 0:
        case 1:
        case 8:
        case 9: {
            s16 t;
            Mesh_803021AC *m = arg0->model->p->p->p->mesh;
            t = m->flags;
            saved = t;
            m->flags = (u8)t;
            break;
        }
        }
        toggle_particle_effect__10TObjPlayerFv();
        TObjEneDolmOlm__data_805D6A1C = 0;
        set_global_state__16TObjEneRe7BeruraFi((void *)TObjEneDolmOlm__sub_803020C4);
        if (arg0->f390 == 1) {
            if (arg0->sub.m8() != 0) {
                lbl_805D5660 = some_id_805c6f74;
                lbl_805D5664 = lbl_805D7784;
                lbl_805D5668 = lbl_805D7780;
                arg0->sub.m6();
                if (toggle_flag_9__10TObjPlayerFPv(arg0) == 0) {
                    some_id_805c6f74 |= 1;
                    draw__16TObjEneRe7BeruraFPv(arg0);
                    some_id_805c6f74 &= ~1;
                }
                arg0->sub.m7();
                lbl_805D7784 = lbl_805D5664;
                lbl_805D7780 = lbl_805D5668;
                some_id_805c6f74 = lbl_805D5660;
            }
        } else if (vis == 1) {
            draw__16TObjEneRe7BeruraFPv(arg0);
        } else {
            render_world_model__10TObjPlayerFPv(arg0);
        }
        set_global_state__16TObjEneRe7BeruraFi(NULL);
        end_effect_render__13TParticleCtrlFv();
        switch (arg0->state) {
        case 0:
        case 1:
        case 8:
        case 9:
            arg0->model->p->p->p->mesh->flags = saved;
            break;
        }
    }
    pop_matrix();
    some_id_805c6f74 &= ~1;
    restore_scene_lighting();
    switch (arg0->state) {
    case 0:
    case 1:
    case 8:
    case 9:
        break;
    default:
        if (!(arg0->f3e4 & 0x4000)) {
            Vec_803021AC v;
            v.x = lbl_805DEF8C;
            v.y = TObjEneDolmOlm__data_805DEF50;
            v.z = TObjEneDolmOlm__data_805DEF68;
            render_with_position_override__10TObjPlayerFPvPvi(arg0, &v, 0);
        }
        break;
    }
    }
}

void TObjEneDolmOlm__sub_8030247C(u8 *arg0) {
  s16 temp_r0;
  if (check_demo_mode__10TObjPlayerFv() == 1)
  {
    PSO_VCALL_VObj_18_477421_m99(arg0);
    return;
  }
  temp_r0 = ((RecoveredFields_8030247C_arg0 *) arg0)->field_326;
  {
    switch (temp_r0)
    {
      case 0:
        PSO_VCALL_VObj_18_477421_m81(arg0);
        break;
      case 1:
        PSO_VCALL_VObj_18_477421_m82(arg0);
        break;
      case 2:
        PSO_VCALL_VObj_18_477421_m83(arg0);
        break;
      case 3:
        PSO_VCALL_VObj_18_477421_m84(arg0);
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
        break;
      case 4:
        PSO_VCALL_VObj_18_477421_m85(arg0);
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
        break;
      case 5:
        PSO_VCALL_VObj_18_477421_m86(arg0);
        break;
      case 6:
        PSO_VCALL_VObj_18_477421_m87(arg0);
        break;
      case 7:
        PSO_VCALL_VObj_18_477421_m88(arg0);
        break;
      case 8:
        PSO_VCALL_VObj_18_477421_m89(arg0);
        break;
      case 9:
        PSO_VCALL_VObj_18_477421_m90(arg0);
        break;
      case 10:
        TObjEneDolmOlm__sub_80301C3C((void *) arg0);
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
        break;
      case 11:
        TObjEneDolmOlm__sub_8030177C((void *)((void *) arg0));
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
        break;
    }
  }
  advance_position__14TObjEneDolmOlmFPv((u8 *)((void *) arg0));
  copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
  submit_cursor_candidate((void *) arg0, (int) (-1));
  if (((RecoveredFields_8030247C_arg0 *) arg0)->field_3E4 & 0x4000)
  {
    set_active__12TObjEneReconFv();
  }
  ((RecoveredFields_8030247C_arg0 *) arg0)->field_2B4 = (f32) (((RecoveredFields_8030247C_arg0 *) arg0)->field_2B4 + TObjEneDolmOlm__data_805DEF50);
}

void * TObjEneDolmOlm__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3E8);
    if (o2 != NULL) {
        o2 = ((void *(*)(void *, void *, void *))TObjEneDolmOlm__ct)(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D6A00;
extern u32 lbl_805D6A04;
extern u32 lbl_805D6A08;
extern u32 TObjEneDolmOlm__data_805D6A0C;
extern u32 TObjEneDolmOlm__data_805D6A10;
extern u32 TObjEneDolmOlm__data_805D6A14;
extern u32 TObjEneDolmOlm__data_805D6A18;

void free_shared_resources__14TObjEneDolmOlmFv(void) {
    if ((u32) lbl_805D6A00 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A00);
        lbl_805D6A00 = 0U;
    }
    if ((u32) lbl_805D6A04 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A04);
        lbl_805D6A04 = 0U;
    }
    if ((u32) lbl_805D6A08 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A08);
        lbl_805D6A08 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A0C != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneDolmOlm__data_805D6A0C);
        TObjEneDolmOlm__data_805D6A0C = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A18 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDolmOlm__data_805D6A18, 1);
        TObjEneDolmOlm__data_805D6A18 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A14 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDolmOlm__data_805D6A14, 1);
        TObjEneDolmOlm__data_805D6A14 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A10 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDolmOlm__data_805D6A10, 1);
        TObjEneDolmOlm__data_805D6A10 = 0U;
    }
}

Ene_80302A34 *TObjEneDolmOlm__sub_80302A34(Ene_80302A34 *self, s16 flag) {
    s32 i;
    if (self != NULL) {
        self->vt = lbl_804E6928;
        for (i = 0; i < 2; i++) {
            if (self->obj[i] != NULL) {
                queue_destruction__7TObjectFv(self->obj[i]);
                self->obj[i] = 0;
            }
        }
        unlink_enemy_group_relations(self);
        free_collision_body_parts(self);
        __dt__18TObjEneMe3SinowZoaFPvs(self->sub, -1);
        TObjPlayer__sub_800C68FC(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

u8 *TObjEneDolmOlm__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u32 col;

    init_enemy_base__10TObjPlayerFPv(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804E6928;
    init_common__18TObjEneMe3SinowZoaFPv(arg0 + 0x3A8);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D4068;
    ((VObj_18_c99286 *) arg0)->m79(arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    TObjEneDolmOlm__sub_80301148(arg0);
    M2C_FIELD(arg0, void **, 0xD8) = lbl_804E67C8;
    set_field_d8__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, void **, 0xD8));
    M2C_FIELD(arg0, s32 *, 0xDC) = M2C_FIELD(TObjEneDolmOlm__data_805D6A10, s32 *, 0x430);
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    init_collision_body_parts(arg0, (u8 *) lbl_804E68D0 + M2C_FIELD(arg0, s32 *, 0x368) * 0x2C, 1);
    bind_enemy_combat_stats(arg0, ((s32 *) lbl_805D6A00)[M2C_FIELD(arg0, s32 *, 0x368)],
        ((s32 *) lbl_805D6A04)[M2C_FIELD(arg0, s32 *, 0x368)], ((s32 *) lbl_805D6A08)[M2C_FIELD(arg0, s32 *, 0x368)]);
    M2C_FIELD(arg0, u8 **, 0x350) = (u8 *) lbl_804E6898 + M2C_FIELD(arg0, s32 *, 0x368) * 0x1C;
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    advance_position__14TObjEneDolmOlmFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    initialize_enemy_photon_effect(arg0);
    M2C_FIELD(arg0, s32 *, 0x2AC) = lbl_805DEF94 * (lbl_805DEF98 * ((f32 (*)(void *)) calc_boss4_scale__10TObjPlayerFi)(arg0));
    M2C_FIELD(arg0, s16 *, 0x33A) = 0xF;
    M2C_FIELD(arg0, s16 *, 0x33C) = M2C_FIELD(arg0, s16 *, 0x33A);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0x374) = 0;
    M2C_FIELD(arg0, s16 *, 0x376) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E4) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x3D8, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, u32 *, 0x30) |= 0x40000;
    switch (M2C_FIELD(arg0, s32 *, 0x368)) {
    default:
        col = 0xFFDE20BD;
        break;
    case 1:
        col = 0xFFCDDE62;
        break;
    }
    ((VObj_14_fa0828 *) (arg0 + 0x3A8))->m3();
    M2C_FIELD(arg0, s32 *, 0x390) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C4) = create__12TObjEneSaverFPvPv(0xA0303030, col);
    M2C_FIELD(arg0, s32 *, 0x3C8) = create__12TObjEneSaverFPvPv(0xA0303030, col);
    M2C_FIELD(arg0, f32 *, 0x398) = ((f32 **) TObjEneDolmOlm__data_805D6A0C)[M2C_FIELD(arg0, s32 *, 0x368)][0];
    M2C_FIELD(arg0, f32 *, 0x3A0) = ((f32 **) TObjEneDolmOlm__data_805D6A0C)[M2C_FIELD(arg0, s32 *, 0x368)][1];
    M2C_FIELD(arg0, f32 *, 0x39C) = ((f32 **) TObjEneDolmOlm__data_805D6A0C)[M2C_FIELD(arg0, s32 *, 0x368)][2];
    M2C_FIELD(arg0, f32 *, 0x3A4) = ((f32 **) TObjEneDolmOlm__data_805D6A0C)[M2C_FIELD(arg0, s32 *, 0x368)][3];
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    M2C_FIELD(arg0, f32 *, 0x3D4) = TObjEneDolmOlm__data_805DEF54;
    fn_8002AE64(arg0);
    ((VObj_18_c99286 *) arg0)->m80();
    return arg0;
}

void TObjEneDolmOlm__sub_80302D80(O_80302D80 *self, s32 i) {
    self->f34 = (*(G_80302D80 * *)&TObjEneDolmOlm__data_805D6A10)->e[i].c;
    self->f24 = (*(G_80302D80 * *)&TObjEneDolmOlm__data_805D6A10)->e[i].d;
}

}
