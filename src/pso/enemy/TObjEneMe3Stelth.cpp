#ifndef PSO_CLASS_PACKAGE

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct RecoveredGlobal_800F4758_lbl_8050110C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct Info_800F4700 { u8 pad[0x18]; s32 frame; };

struct Obj_800F4700 { u8 pad[0x38]; u8 pos[0x3c8 - 0x38]; s32 kind; };

struct Base_800F4598 { u8 pad[0x18]; };

struct Obj_800F4598 : Base_800F4598 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void v5(s32);
    virtual void v6(s32);
    virtual void v7(s32);
    virtual void v8(s32);
    virtual void v9(s32);
    virtual void v10(s32);
    virtual void v11(s32);
    virtual void v12(s32);
    virtual void v13(s32);
    virtual void v14(s32);
    virtual void v15(s32);
    virtual void v16(s32);
    virtual void v17(s32);
    virtual void v18(s32);
    virtual void v19(s32);
    virtual void v20(s32);
    virtual void v21(s32);
    virtual void v22(s32);
    virtual void v23(s32);
    virtual void v24(s32);
    virtual void v25(s32);
    virtual void v26(s32);
    virtual void v27(s32);
    virtual void v28(s32);
    virtual void v29(s32);
    virtual void v30(s32);
    virtual void v31(s32);
    virtual void v32(s32);
    virtual void v33(s32);
    virtual void v34(s32);
    virtual void v35(s32);
    virtual void v36(s32);
    virtual void v37(s32);
    virtual void v38(s32);
    virtual void v39(s32);
    virtual void v40(s32);
    virtual void v41(s32);
    virtual void v42(s32);
    virtual void v43(s32);
    virtual void v44(s32);
    virtual void v45(s32);
    virtual void v46(s32);
    virtual void v47(s32);
    virtual void v48(s32);
    virtual void v49(s32);
    virtual void v50(s32);
    virtual void v51(s32);
    virtual void v52(s32);
    virtual void v53(s32);
    virtual void v54(s32);
    virtual void v55(s32);
    virtual void v56(s32);
    virtual void v57(s32);
    virtual void v58(s32);
    virtual void v59(s32);
    virtual void v60(s32);
    virtual void v61(s32);
    virtual void v62(s32);
    virtual void v63(s32);
    virtual void v64(s32);
    virtual void v65(s32);
    virtual void v66(s32);
    virtual void v67(s32);
    virtual void v68(s32);
    virtual void v69(s32);
    virtual void v70(s32);
    virtual void v71(s32);
    virtual void v72(s32);
    virtual void v73(s32);
    virtual void v74(s32);
    virtual void v75(s32);
    virtual void v76(s32);
    virtual void v77(s32);
    virtual void v78(s32);
    virtual void v79(s32);
    virtual void v80(s32);
    virtual void v81(s32);
    virtual void v82(s32);
    virtual void v83(s32);
    virtual void v84(s32);
    virtual void v85(s32);
    virtual void v86(s32);
    virtual void v87(s32);
    virtual void v88(s32);
    virtual void v89(s32);
    virtual void v90(s32);
    virtual void v91(s32);
    virtual void v92(s32);
    virtual void v93(s32);
    virtual void v94(s32);
    virtual void v95(s32);
    virtual void v96(s32);
    virtual void v97(s32);
    virtual void v98();
    virtual void v99(s32);
    virtual void v100(s32);
    virtual void v101(s32);
    virtual void v102(s32);
    virtual void v103(s32);
    virtual void v104(s32);
    virtual void v105(s32);
    virtual void v106(s32);
    virtual void v107(s32);
    virtual void v108(s32);
    virtual void v109(s32);
    virtual void v110(s32);
    virtual void v111(s32);
    u8 pad1c[0x3C0 - 0x1C];
    s32 f3C0;
};

typedef char RecoveredGlobal_800F4758_lbl_8050110C_size[sizeof(RecoveredGlobal_800F4758_lbl_8050110C) == 0x14 ? 1 : -1];

struct O_800F4814 { u8 pad[0x354]; f32 f354; };

struct Base_800F4868 { char pad[0x18]; };

struct VObj_800F4868 : Base_800F4868 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual void m73();  virtual void m74();  virtual void m75();
    virtual void m76();  virtual void m77();  virtual void m78();  virtual void m79();
    virtual void m80();  virtual void m81();  virtual void m82();  virtual void m83();
    virtual void m84();  virtual void m85();  virtual void m86();
};

struct Base_800F48B8 { char pad[0x18]; };

struct VObj_800F48B8 : Base_800F48B8 {
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

struct E4988Base { char pad[0x14]; };

struct E4988Obj : E4988Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct E49D0Base { char pad[0x14]; };

struct E49D0Obj : E49D0Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Vec_800F4D68 { f32 x; f32 y; f32 z; };

struct Node_800F4D68 { u8 pad[0x2c]; void *child; };

struct Obj_800F4D68 { u8 pad[0x34]; Node_800F4D68 *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

struct Sub_800F4CC8 { f32 f0; u8 pad4[4]; f32 f8; f32 fC; f32 f10; s32 f14; s32 f18; };

struct Obj_800F4CC8 { u8 pad0[0x60]; s32 f60; u8 pad1[0xA4 - 0x64]; Sub_800F4CC8 *fA4; };

struct Base_800F4A90 { u8 pad[0x18]; };

struct VObj_800F4A90 : Base_800F4A90 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual f32 m20(void *, f32);
    virtual void m21(); virtual void m22();
    virtual void m23(void *, f32);
};

struct Stelth_800F4A90 {
    u8 pad0[0x38];
    u8 pos[0x390 - 0x38];
    VObj_800F4A90 *target;
    u8 pad394[0x3F8 - 0x394];
    u8 f3F8[1];
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
    virtual M2C_UNK m112();
};

struct VBase_14_2ab9de { char pad[0x14]; };

struct VObj_14_2ab9de : VBase_14_2ab9de {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3(f32);
};

typedef struct Tbl_800F5124 { u8 pad[0xC]; s32 t[3][2]; } Tbl_800F5124;

f32 calc_boss4_scale__10TObjPlayerFi(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
u32 get_item_field_6__10TObjPlayerFPv(void *);
f32 get_random_float__8TObjFishFv(f32);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
void fn_8002B630(void *, void *, s32);
s32 check_demo_mode__10TObjPlayerFv();
void spawn_particle_effect(void *, s32);
s32 get_field_d8__10TObjPlayerFPv(void);
s32 enemy_check_target_valid(void *);
M2C_UNK enemy_init_validate_period(void *, int);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
M2C_UNK enemy_init_acquire_period(void *, int);
void __dt__9TObjEneDDFv(void *, int);
s32 clamp_frame_index__9TObjEneDDFi(s32);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
int TObjEneDD__vt93(void*);
int TObjEneDD__vt92(void*);
M2C_UNK check_state_flag_4__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BA438(void *, void *);
M2C_UNK init_model__9TObjEneDDFPv(void *, void *, int, int);
void clear_attack_receipts(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
int transition_enemy_state(void*, void*);
M2C_UNK init_position_vectors__9TObjEneDDFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneMe3Stelth__sub_800F1098(void *, s32);
void TObjEneMe3Stelth__sub_800F1440(void *, s32);
void exec__16TObjEneMe3StelthFPvi(void *, s32);
void TObjEneMe3Stelth__sub_800F2270(void *, s32);
void handle_breakup_state__16TObjEneMe3StelthFPvi(void *, s32);
void TObjEneMe3Stelth__sub_800F290C(void *, s32);
void action__16TObjEneMe3StelthFPvi(void *, s32);
void handle_message__16TObjEneMe3StelthFPvi(void *, s32);
void update_state_resta_cast__16TObjEneMe3StelthFPvi(void *, s32);
void TObjEneMe3Stelth__sub_800F2E74(void *, s32);
void TObjEneMe3Stelth__sub_800F3214(void *, s32);
void TObjEneMe3Stelth__sub_800F348C(void *, s32);
void state_chase_target__16TObjEneMe3StelthFPvi(void *, s32);
void update_state_drop__16TObjEneMe3StelthFPvi(void *, s32);
void update_state_fade_in__16TObjEneMe3StelthFPvi(void *, s32);
void TObjEneMe3Stelth__sub_800F3FE4(void *, s32);
void state_chase__16TObjEneMe3StelthFPvi(void *, s32);
void TObjEneMe3Stelth__sub_800F42B8(void *, s32);
void dispatch_state__16TObjEneMe3StelthFPvii(Obj_800F4598 *self, s32 arg1, s32 arg2);
void create_resta_effect__16TObjEneMe3StelthFPv(Obj_800F4700 *self);
void TObjEneMe3Stelth__sub_800F4758(u8 *arg0);
u8 TObjEneMe3Stelth__sub_800F47D4(u8 *arg0);
int select_and_apply_target__16TObjEneMe3StelthFPv(void* p);
s32 is_angle_in_range__16TObjEneMe3StelthFPv(O_800F4814 *self);
s32 TObjEneMe3Stelth__sub_800F4850(u8 *arg0);
void update_collision__16TObjEneMe3StelthFPv(void *arg0);
void update_distance_state__16TObjEneMe3StelthFPv(void *arg0);
void TObjEneMe3Stelth__sub_800F4910(void);
void TObjEneMe3Stelth__sub_800F4914(void* p);
void init_anim__16TObjEneMe3StelthFPv(void* p);
void TObjEneMe3Stelth__vt109(void);
s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0);
s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0);
void TObjEneMe3Stelth__vt105(void);
u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0);
void TObjEneMe3Stelth__sub_800F4A8C(void);
void attack_and_unequip__16TObjEneMe3StelthFPv(Stelth_800F4A90 *self);
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0);
u8 test_body_collision__16TObjEneMe3StelthFPvif(Obj_800F4CC8 *arg0, s32 arg1, f32 farg0);
f32 get_node_world_y__16TObjEneMe3StelthFPv(Obj_800F4D68 *self);
void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0);
void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0);
void copy_pos_with_height_offset__16TObjEneMe3StelthFPv(u8 *arg0);
void TObjEneMe3Stelth__sub_800F4F14(void);
void TObjEneMe3Stelth__vt60(u8 *arg0);
void TObjEneMe3Stelth__vt61(void* p);
void TObjEneMe3Stelth__sub_800F4FC8(void);
void TObjEneMe3Stelth__sub_800F4FCC(u8 *arg0);
void * __dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1);
int TObjEneMe3Stelth__sub_800F5864(void*, void*);
int TObjEneMe3Stelth__sub_800F5874(void*, void*);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK set_indexed_flags(void *, int, int);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
void free_collision_body_parts(void *);
void get_hand_joint_position__10TObjPlayerFPvi(void *, void *);
void send_6x26_unequip_item__10TObjPlayerFPvPv(void *, s32);
void play_sound_effect(s32, void *, s32, s32);
void __dl__7TObjectFPv(void *);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void bind_motion_context(s32, f32);
s32 compose_motion_node_matrix(void *);
s32 matrix_mult_vec(int, void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();

extern Info_800F4700 *TObjEneMe3Stelth__data_80501104[];
extern u8 *TObjEneMe3Stelth__data_805D5300;
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
extern const f32 TObjEneMe3Stelth__data_805DA824;
extern const f32 TObjEneMe3Stelth__data_805DA834;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA844;
extern const f32 TObjEneMe3Stelth__data_805DA84C;
extern const f32 TObjEneMe3Stelth__data_805DA850;
extern M2C_UNK __vt__16TObjEneMe3Stelth[];
extern Tbl_800F5124 lbl_805010E0;
extern RecoveredGlobal_800F4758_lbl_8050110C lbl_8050110C;
extern u8 lbl_8058D490[];
extern const f32 lbl_805DA810;
extern const f32 lbl_805DA814;
extern const f32 lbl_805DA81C;
extern const f32 lbl_805DA87C;
extern const f32 lbl_805DA894;
extern f32 lbl_805DA898;
extern f32 lbl_805DA89C;
extern const f32 lbl_805DA8A0;
extern const f32 lbl_805DA8A4;
extern const f32 lbl_805DA8A8;
extern const f32 lbl_805DA8AC;

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
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjEneMe3StelthReal__vt105();
extern "C" void TObjEneMe3StelthReal__vt109();
extern "C" void TObjEneMe3StelthReal__vt60();
extern "C" void TObjEneMe3StelthReal__vt61();
extern "C" void handle_direct_attack__16TObjEneMe3StelthFPvPviPv();
extern "C" void draw_with_debug_info__16TObjEneMe3StelthFPv();
extern "C" void render__16TObjEneMe3StelthFPv();
extern "C" void TObjEneMe3Stelth__sub_800F4424();
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
extern "C" void __dt__20TObjEneMe3StelthRealFv();
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
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_8043D49C[];
extern "C" u8 lbl_8043D4AC[];
extern "C" u8 lbl_8043D4C4[];
extern "C" u8 lbl_8043D4D8[];
extern "C" u8 lbl_8043D4F4[];
extern "C" u8 lbl_8043D50C[];
extern "C" u8 lbl_8043D524[];
extern "C" u8 lbl_8043D538[];
extern "C" u8 lbl_8043D550[];
extern "C" u8 lbl_8043D564[];
extern "C" u8 lbl_8043D580[];
extern "C" u8 lbl_8043D594[];
extern "C" u8 lbl_8043D5A8[];
extern "C" u8 lbl_8043D5C8[];
extern "C" u8 lbl_8043D5D8[];
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void setup_move__16TObjEneMe3StelthFPv();
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
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_80497710[2];
extern void *lbl_80497718[16];
extern void *lbl_80497758[2];
extern void *lbl_80497760[16];
void *lbl_804976C8[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804976E4[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
__declspec(section ".data") void *lbl_80497710[2] = {
    (void *)&lbl_8043D49C, (void *)0x0,
};
void *lbl_80497718[16] = {
    (void *)&lbl_8043D4AC, (void *)&lbl_8043D4C4, (void *)&lbl_8043D4D8, (void *)&lbl_8043D4F4,
    (void *)&lbl_8043D50C, (void *)&lbl_8043D524, (void *)&lbl_8043D538, (void *)&lbl_8043D550,
    (void *)&lbl_8043D564, (void *)&lbl_8043D580, (void *)&lbl_8043D594, (void *)0x0,
    (void *)&lbl_8043D5A8, (void *)&lbl_80497710, (void *)&lbl_80497718, (void *)0x1000b,
};
__declspec(section ".data") void *lbl_80497758[2] = {
    (void *)&lbl_8043D5C8, (void *)0x0,
};
void *lbl_80497760[16] = {
    (void *)&lbl_8043D4AC, (void *)&lbl_8043D4C4, (void *)&lbl_8043D4D8, (void *)&lbl_8043D4F4,
    (void *)&lbl_8043D50C, (void *)&lbl_8043D524, (void *)&lbl_8043D538, (void *)&lbl_8043D550,
    (void *)&lbl_8043D564, (void *)&lbl_8043D580, (void *)&lbl_8043D594, (void *)0x0,
    (void *)&lbl_8043D5D8, (void *)&lbl_80497758, (void *)&lbl_80497760, (void *)0x1000b,
};
void *lbl_804977A0[52] = {
    (void *)0x10000, (void *)0x0, (void *)0x3f000000, (void *)0x80000000,
    (void *)0x30000, (void *)0x1, (void *)0x3f333333, (void *)0x80000000,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x80000000,
    (void *)0x30000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3ecccccd, (void *)0x0,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x7, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0xa, (void *)0x3f8ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
};
void *__vt__20TObjEneMe3StelthReal[116] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__20TObjEneMe3StelthRealFv, (void *)&TObjEneMe3Stelth__sub_800F4FCC,
    (void *)&render__16TObjEneMe3StelthFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&handle_direct_attack__16TObjEneMe3StelthFPvPviPv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneMe3Stelth__sub_800F4FC8, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneMe3Stelth__sub_800F4F14, (void *)&TObjEneMe3StelthReal__vt60, (void *)&TObjEneMe3StelthReal__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&dispatch_state__16TObjEneMe3StelthFPvii,
    (void *)&update_shadow_height__16TObjEneMe3StelthFPv, (void *)&update_collision__16TObjEneMe3StelthFPv, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&init_anim__16TObjEneMe3StelthFPv,
    (void *)&TObjEneMe3Stelth__sub_800F4914, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&select_and_apply_target__16TObjEneMe3StelthFPv, (void *)&attack_and_unequip__16TObjEneMe3StelthFPv, (void *)&check_target_in_range__16TObjEneMe3StelthFPv, (void *)&TObjEneMe3StelthReal__vt105,
    (void *)&TObjEneMe3Stelth__sub_800F4A8C, (void *)&check_active_flag__16TObjEneMe3StelthFPv, (void *)&check_flag__16TObjEneMe3StelthFPv, (void *)&TObjEneMe3StelthReal__vt109,
    (void *)&TObjEneMe3Stelth__sub_800F4910, (void *)&TObjEneMe3Stelth__sub_800F4424, (void *)&setup_move__16TObjEneMe3StelthFPv, (void *)&draw_with_debug_info__16TObjEneMe3StelthFPv,
};
#define lbl_804976E4 ((u8 *)lbl_804976E4)

void dispatch_state__16TObjEneMe3StelthFPvii(Obj_800F4598 *self, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        self->v111(arg2);
        break;
    case 1:
        TObjEneMe3Stelth__sub_800F42B8(self, arg2);
        break;
    case 3:
        TObjEneMe3Stelth__sub_800F3FE4(self, arg2);
        break;
    case 2:
        state_chase__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 4:
        update_state_fade_in__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 5:
        update_state_drop__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 6:
        state_chase_target__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 7:
        TObjEneMe3Stelth__sub_800F348C(self, arg2);
        break;
    case 8:
        TObjEneMe3Stelth__sub_800F3214(self, arg2);
        break;
    case 9:
        TObjEneMe3Stelth__sub_800F2E74(self, arg2);
        break;
    case 13:
        handle_message__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 10:
        action__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 11:
        update_state_resta_cast__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 14:
        TObjEneMe3Stelth__sub_800F290C(self, arg2);
        break;
    case 15:
        handle_breakup_state__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 12:
        TObjEneMe3Stelth__sub_800F2270(self, arg2);
        break;
    case 16:
        TObjEneMe3Stelth__sub_800F1098(self, arg2);
        break;
    case 17:
        exec__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 18:
        TObjEneMe3Stelth__sub_800F1440(self, arg2);
        break;
    }
    if (self->f3C0 != 1 || (arg1 != 1 && arg1 != 2)) {
        self->v98();
    }
}

void create_resta_effect__16TObjEneMe3StelthFPv(Obj_800F4700 *self) {
    s32 f = clamp_frame_index__9TObjEneDDFi(TObjEneMe3Stelth__data_80501104[self->kind]->frame);
    create__9TTecRestaFPvPvPv(self, self->pos, f);
}

void TObjEneMe3Stelth__sub_800F4758(u8 *arg0) {
    if (((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_8050110C.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x3F));
        M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3Stelth__data_805D5300, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x3E));
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
}

u8 TObjEneMe3Stelth__sub_800F47D4(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x3F0) >= 1);
}

int select_and_apply_target__16TObjEneMe3StelthFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

s32 is_angle_in_range__16TObjEneMe3StelthFPv(O_800F4814 *self) {
    return self->f354 < TObjEneMe3Stelth__data_805DA80C ||
           (self->f354 >= TObjEneMe3Stelth__data_805DA850 && self->f354 < TObjEneMe3Stelth__data_805DA84C);
}

s32 TObjEneMe3Stelth__sub_800F4850(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x354) < TObjEneMe3Stelth__data_805DA850;
}

void update_collision__16TObjEneMe3StelthFPv(void *arg0) {
    struct VObj_800F4868 *o = (struct VObj_800F4868 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
}

void update_distance_state__16TObjEneMe3StelthFPv(void *arg0) {
    VObj_800F48B8 *o = (VObj_800F48B8 *)arg0;
    if ((M2C_FIELD(arg0, f32 *, 0x3D0) - M2C_FIELD(arg0, f32 *, 0x3C)) > lbl_805DA894) {
        o->m95();
        return;
    }
    o->m96();
}

void TObjEneMe3Stelth__sub_800F4910(void) {  }

void TObjEneMe3Stelth__sub_800F4914(void* p) { TObjEneDD__vt93(p); TObjEneMe3Stelth__sub_800F5864(p, (void*)38); }

void init_anim__16TObjEneMe3StelthFPv(void* p) { TObjEneDD__vt92(p); TObjEneMe3Stelth__sub_800F5874(p, (void*)38); }

void TObjEneMe3Stelth__vt109(void) {  }

s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E4988Obj*)(arg0 + 0x404))->m7();
        return 1;
    }
    return 0;
}

s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E49D0Obj*)(arg0 + 0x404))->m6();
        return 1;
    }
    return 0;
}

void TObjEneMe3Stelth__vt105(void) {  }

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x10000)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DA898) && (temp_f1 < lbl_805DA89C) && (((s32 (*)(void *, s32, f32))test_body_collision__16TObjEneMe3StelthFPvif)(arg0, M2C_FIELD(arg0, s32 *, 0x60), temp_f1 - (*(f32 *)&TObjEneMe3Stelth__data_805DA844)) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3Stelth__sub_800F4A8C(void) {  }

void attack_and_unequip__16TObjEneMe3StelthFPv(Stelth_800F4A90 *self) {
    s32 near = objInBand__FP7GameObjf(self, lbl_805DA810);
    if (objInBand__FP7GameObjf(self, TObjEneMe3Stelth__data_805DA808) == 0 && near == 0) {
        return;
    }
    if (enemy_check_target_valid(self) != 0 && self->target->m18(self, TObjEneMe3Stelth__data_805DA80C) != 0) {
        f32 d = self->target->m20(self, TObjEneMe3Stelth__data_805DA80C);
        self->target->m23(self, TObjEneMe3Stelth__data_805DA84C);
        if (d > TObjEneMe3Stelth__data_805DA840) {
            if (((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)(self) != 0) {
                VObj_800F4A90 *t = self->target;
                if (is_locally_controlled__10TObjPlayerFPv(t) != 0 && get_item_field_6__10TObjPlayerFPv(t) != 0) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv(t, get_field_d8__10TObjPlayerFPv());
                    get_hand_joint_position__10TObjPlayerFPvi(t, self->f3F8);
                    spawn_particle_effect(self->f3F8, 0x1D0);
                }
            } else if (near != 0 && calc_boss4_scale__10TObjPlayerFi(self) <= lbl_805DA8A0) {
                TObjEneDD__sub_800BA438(self, self->target);
            }
        }
    }
    play_sound_effect(0x3AA37, self->pos, 0, 0);
}

#pragma push
#pragma fp_contract on
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (get_random_float__8TObjFishFv(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C)) >= TObjEneMe3Stelth__data_805DA844) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0x3AC) > TObjEneMe3Stelth__data_805DA834) {
        return 0;
    }
    temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x3A8) * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f31 = (M2C_FIELD(arg0, f32 *, 0x3A0) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60))) + temp_f31_2;
    return (temp_f31 < cos_table_lookup(0x1E00)) == 0;
}
extern int fold_flush_0;
#pragma pop

u8 test_body_collision__16TObjEneMe3StelthFPvif(Obj_800F4CC8 *arg0, s32 arg1, f32 farg0) {
    f32 f2 = farg0 * lbl_805DA81C;
    Sub_800F4CC8 *s = arg0->fA4;
    u8 res;
    s32 a = arg0->f60;
    s32 b = s->f18;
    s->f0 = TObjEneMe3Stelth__data_805DA840;
    s->f8 = f2;
    s->fC = f2;
    s->f10 = lbl_805DA8A4;
    s->f14 = 1;
    s->f18 = 0x9D01;
    arg0->f60 = arg1;
    ((void (*)(void *, s32, f32, f32))check_enemy_body_collisions)(arg0, arg1, TObjEneMe3Stelth__data_805DA840, f2);
    res = (s->f18 & 0x380000) != 0;
    fn_8002B630(s, lbl_804976E4, s->f18 & 0x380000);
    s->f18 = b;
    arg0->f60 = a;
    return res;
}

f32 get_node_world_y__16TObjEneMe3StelthFPv(Obj_800F4D68 *self) {
    Vec_800F4D68 v;
    Node_800F4D68 *node;
    v.x = TObjEneMe3Stelth__data_805DA840;
    v.y = TObjEneMe3Stelth__data_805DA840;
    v.z = TObjEneMe3Stelth__data_805DA840;
    push_matrix_from(lbl_8058D490);
    bind_motion_context(self->ff8, self->fc0);
    node = self->node;
    compose_motion_node_matrix(node);
    compose_motion_node_matrix(node->child);
    matrix_mult_vec(0, &v, &v);
    pop_matrix();
    return v.y;
}

void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0) {
    if (((s32 (*)(void))TObjEneMe3Stelth__sub_800F4850)() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = ((s32 (*)(void *))is_angle_in_range__16TObjEneMe3StelthFPv)(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (lbl_805DA8A8 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) (lbl_805DA87C + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (lbl_805DA8AC + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (lbl_805DA81C + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

void copy_pos_with_height_offset__16TObjEneMe3StelthFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (lbl_805DA814 + M2C_FIELD(arg0, f32 *, 0x3D4)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneMe3Stelth__sub_800F4F14(void) {  }

void TObjEneMe3Stelth__vt60(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 1) {
        clear_attack_receipts(arg0);
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 1) && (((f32 (*)(s32))calc_boss4_scale__10TObjPlayerFi)((s32) arg0) <= M2C_FIELD(arg0, f32 *, 0x3E0))) {
            transition_enemy_state((void*)(arg0), (void*)(0x12));
        }
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xE) {
        transition_enemy_state((void*)(arg0), (void*)(0xE));
    }
}

void TObjEneMe3Stelth__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 15) { transition_enemy_state(p, (void*)15); } }

void TObjEneMe3Stelth__sub_800F4FC8(void) {  }

void TObjEneMe3Stelth__sub_800F4FCC(u8 *arg0) {
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m112();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    }
    ((M2C_UNK (*)(void *))copy_pos_with_height_offset__16TObjEneMe3StelthFPv)((void *) (arg0));
    ((VObj_18 *)(arg0))->m86();
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC);
    if (temp_r3 & 0x40000) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r3 & 0xFFFBFFFF);
        return;
    }
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
}

void *__dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMe3Stelth;
        if (M2C_FIELD(arg0, void **, 0x444) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x444)); M2C_FIELD(arg0, M2C_UNK *, 0x444) = 0; }
        if (M2C_FIELD(arg0, void **, 0x448) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x448)); M2C_FIELD(arg0, M2C_UNK *, 0x448) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x404, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_propagation off
void init_common__16TObjEneMe3StelthFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    u8 *temp_r6;
    Tbl_800F5124 *tbl = &lbl_805010E0;

    init_position_vectors__9TObjEneDDFPv((void *) (arg0));
    ((M2C_UNK (*)(void *))TObjEneMe3Stelth__sub_800F4758)((void *) (arg0));
    temp_r6 = (u8 *)(M2C_FIELD(TObjEneMe3Stelth__data_805D5300, u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r6, s32 *, 8);
    init_model__9TObjEneDDFPv((void *) (arg0), ((void * *)lbl_804976E4), (int) (1), (int) (temp_r6));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), lbl_804977A0);
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(TObjEneMe3Stelth__data_805D5300, s32 *, 0x430)));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8);
    {
        s32 *a = tbl->t[0];
        s32 *b = tbl->t[1];
        s32 *c = tbl->t[2];
        reset_hp__9TObjEneDDFPv((void *) (arg0), a[temp_r0], b[temp_r0], c[temp_r0]);
    }
    check_state_flag_4__9TObjEneDDFPv((void *) (arg0));
    M2C_FIELD(arg0, void **, 0x350) = lbl_804976C8;
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) TObjEneMe3Stelth__data_805DA824;
    enemy_init_acquire_period((void *) (arg0), (int) (0x1E));
    enemy_init_validate_period((void *) (arg0), (int) (0x1E));
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x3D0) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3D4) = (f32) TObjEneMe3Stelth__data_805DA840;
    M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, s16 *, 0x3F4) = (s16) M2C_FIELD(arg0, s16 *, 0x2CC);
    ((VObj_14_2ab9de *)((u8 *)(arg0) + (1028)))->m3(temp_f1);
    M2C_FIELD(arg0, s32 *, 0x424) = 0;
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
    M2C_FIELD(arg0, s32 *, 0x42C) = 0;
    M2C_FIELD(arg0, f32 *, 0x430) = (f32) TObjEneMe3Stelth__data_805DA840;
    M2C_FIELD(arg0, f32 *, 0x434) = (f32) TObjEneMe3Stelth__data_805DA840;
    M2C_FIELD(arg0, f32 *, 0x438) = (f32) TObjEneMe3Stelth__data_805DA840;
    M2C_FIELD(arg0, f32 *, 0x43C) = (f32) TObjEneMe3Stelth__data_805DA840;
    M2C_FIELD(arg0, f32 *, 0x440) = (f32) TObjEneMe3Stelth__data_805DA840;
    M2C_FIELD(arg0, s32 *, 0x444) = 0;
    M2C_FIELD(arg0, s32 *, 0x448) = 0;
    M2C_FIELD(arg0, s32 *, 0x420) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 1) {
        set_indexed_flags((void *) (arg0), (int) (0), (int) (0x08000000));
        return;
    }
    clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (0x08000000));
}
extern int fold_flush_1;
#pragma pop

}
#else
#if PSO_CLASS_PACKAGE == 0x800F0AE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_resources__16TObjEneMe3StelthFv(void);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D52F8;

void destroy_resources__16TObjEneMe3StelthFv(void) {
    if ((u32) lbl_805D52F8 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D52F8);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D52F8);
        lbl_805D52F8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F0C18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
s32 try_spawn_ground_effect__16TObjEneMe3StelthFii(s32, s32);

void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0) {
    if (try_spawn_ground_effect__16TObjEneMe3StelthFii(arg0, arg0 + 0x38) != 0) {
        play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
        return;
    }
    spawn_particle_effect(arg0 + 0x38, 0xF3);
    play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F169C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void exec__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 advance_timer__18TObjEneMe3SinowZoaFPvf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK, s32);
s32 objInBand__FP7GameObjf(void *, f32);

s32 is_split_screen();
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DA828;
extern const f32 lbl_805DA830;
extern const f32 TObjEneMe3Stelth__data_805DA834;
extern const f32 lbl_805DA838;

struct VB18 { char pad[0x18]; };
struct VO18 : VB18 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();
    virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();
    virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();
    virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
    virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();
    virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();
    virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();
    virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
    virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();
    virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();
    virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();
    virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
    virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();
    virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();
    virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();
    virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
    virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();
    virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();
    virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
    virtual void m95();virtual void m96();virtual void m97();virtual void m98();virtual void m99();
    virtual void m100();
};
struct VB414 { char pad[0x14]; };
struct VO414 : VB414 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
};

void exec__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r7;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VO18*)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF1);
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x3CC) | 1;
        M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0x424) = 0;
        play_sound_effect(0x3B23B, arg0 + 0x38, 0, 0, temp_r7);
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) == 3) {
            transition_enemy_state(arg0, 6);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFE);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
            set_indexed_flags(arg0, 0, 0x08000000);
        }
        return;
    case 0:
        advance_animation_playback();
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x424) = 3;
        } else if (is_split_screen() != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x424);
            switch (temp_r0) {
            case 0:
                if (objInBand__FP7GameObjf(arg0, lbl_805DA828) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 8);
                    ((VO414*)(arg0 + 0x404))->m3();
                    M2C_FIELD(arg0, s32 *, 0x424) = 1;
                }
                break;
            case 1:
                if (advance_timer__18TObjEneMe3SinowZoaFPvf(arg0 + 0x404, lbl_805DA830) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                    M2C_FIELD(arg0, s32 *, 0x424) = 2;
                }
                break;
            }
        } else if (objInBand__FP7GameObjf(arg0, TObjEneMe3Stelth__data_805DA834) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 8);
            M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
        } else if (objInBand__FP7GameObjf(arg0, lbl_805DA838) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        }
        ((VO18*)arg0)->m100();
        ((VO18*)arg0)->m87();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F1C90
#include "types.h"

extern "C" {

void setup_move__16TObjEneMe3StelthFPv(void* p);
int TObjEneMe3Stelth__sub_800F4758(void*);
int get_target_info__9TObjEneDDFPv(void*);
int setup_move_bounds__16TObjEneMe3StelthFPv(void*);

void setup_move__16TObjEneMe3StelthFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { setup_move_bounds__16TObjEneMe3StelthFPv(p); TObjEneMe3Stelth__sub_800F4758(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F2240
#include "types.h"

extern "C" {

void add_instance__16TObjEneMe3StelthFv(void);
int load_projection_tex_matrix__15TOTrapAncient02Fi(void*);

    extern int TObjEneMe3Stelth__data_805D5304;
    extern int lbl_805D5310;
void add_instance__16TObjEneMe3StelthFv(void) { load_projection_tex_matrix__15TOTrapAncient02Fi((void*)(lbl_805D5310)); TObjEneMe3Stelth__data_805D5304 = (TObjEneMe3Stelth__data_805D5304 + 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F2A48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK advance_animation_playback();

struct TBase { char pad[0x18]; };
struct TObj : TBase {
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
};

struct SubBase { char pad[0x14]; };
struct SubObj : SubBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual M2C_UNK v4();
};

void action__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((TObj *)arg0)->v93();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 4);
        ((SubObj *)(arg0 + 0x404))->v2();
        M2C_FIELD(arg0, s32 *, 0x424) = 1;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) == 2) {
            transition_enemy_state(arg0, 0);
        }
        return;
    case 0:
        advance_animation_playback();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x424);
        switch (temp_r0) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x424) = 1;
            }
            break;
        case 1:
            if (((SubObj *)(arg0 + 0x404))->v4() != 0) {
                M2C_FIELD(arg0, s32 *, 0x424) = 2;
            }
            break;
        }
        ((TObj *)arg0)->v100();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFB);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4424
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe3Stelth__sub_800F4424(u8 *arg0, s32 arg1);
s32 check_v2_mode__9TObjEneDDFv(void);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

}

struct Base18F { char pad[0x18]; };
struct VObj18F : Base18F {
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
    virtual void m100();
};

extern "C" {

void TObjEneMe3Stelth__sub_800F4424(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            set_field_378__9TObjEneDDFPvi(arg0, 1);
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            set_field_378__9TObjEneDDFPvi(arg0, 3);
        }
        ((VObj18F *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 2);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFE);
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFEFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x424) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) > 5) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
                transition_enemy_state(arg0, 1);
            } else {
                transition_enemy_state(arg0, 3);
            }
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj18F *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3D4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3D0) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x800F4868
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800F4868 { char pad[0x18]; };
struct VObj_800F4868 : Base_800F4868 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual void m73();  virtual void m74();  virtual void m75();
    virtual void m76();  virtual void m77();  virtual void m78();  virtual void m79();
    virtual void m80();  virtual void m81();  virtual void m82();  virtual void m83();
    virtual void m84();  virtual void m85();  virtual void m86();
};
struct Base_800F48B8 { char pad[0x18]; };
struct VObj_800F48B8 : Base_800F48B8 {
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

extern "C" {

void update_collision__16TObjEneMe3StelthFPv(void *arg0);
void update_distance_state__16TObjEneMe3StelthFPv(void *arg0);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

void update_collision__16TObjEneMe3StelthFPv(void *arg0) {
    struct VObj_800F4868 *o = (struct VObj_800F4868 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
}

extern const f32 lbl_805DA894;

void update_distance_state__16TObjEneMe3StelthFPv(void *arg0) {
    VObj_800F48B8 *o = (VObj_800F48B8 *)arg0;
    if ((M2C_FIELD(arg0, f32 *, 0x3D0) - M2C_FIELD(arg0, f32 *, 0x3C)) > lbl_805DA894) {
        o->m95();
        return;
    }
    o->m96();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0);
s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0);

struct E4988Base { char pad[0x14]; };
struct E4988Obj : E4988Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E4988Obj*)(arg0 + 0x404))->m7();
        return 1;
    }
    return 0;
}

struct E49D0Base { char pad[0x14]; };
struct E49D0Obj : E49D0Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E49D0Obj*)(arg0 + 0x404))->m6();
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4A18
#include "types.h"

extern "C" {

void TObjEneMe3Stelth__vt105(void);

void TObjEneMe3Stelth__vt105(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4A1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0);
void TObjEneMe3Stelth__sub_800F4A8C(void);
s32 test_body_collision__16TObjEneMe3StelthFPvif(void *, s32, f32);

extern f32 TObjEneMe3Stelth__data_805DA844;
extern f32 lbl_805DA898;
extern f32 lbl_805DA89C;

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x10000)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DA898) && (temp_f1 < lbl_805DA89C) && (test_body_collision__16TObjEneMe3StelthFPvif(arg0, M2C_FIELD(arg0, s32 *, 0x60), temp_f1 - TObjEneMe3Stelth__data_805DA844) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3Stelth__sub_800F4A8C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4DE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0);
void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0);
s32 is_angle_in_range__16TObjEneMe3StelthFPv(void *);
s32 TObjEneMe3Stelth__sub_800F4850();

extern const f32 lbl_805DA81C;
extern const f32 lbl_805DA87C;
extern const f32 lbl_805DA8A8;
extern const f32 lbl_805DA8AC;

void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0) {
    if (TObjEneMe3Stelth__sub_800F4850() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = is_angle_in_range__16TObjEneMe3StelthFPv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (lbl_805DA8A8 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) (lbl_805DA87C + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (lbl_805DA8AC + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (lbl_805DA81C + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4F14
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe3Stelth__vt61(void* p);
void TObjEneMe3Stelth__sub_800F4F14(void);
void TObjEneMe3Stelth__sub_800F4FC8(void);

void TObjEneMe3Stelth__sub_800F4F14(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4F98
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe3Stelth__vt61(void* p);
void TObjEneMe3Stelth__sub_800F4F14(void);
void TObjEneMe3Stelth__sub_800F4FC8(void);

void TObjEneMe3Stelth__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 15) { transition_enemy_state(p, (void*)15); } }
void TObjEneMe3Stelth__sub_800F4FC8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F5084
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void free_collision_body_parts(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__16TObjEneMe3Stelth[];

void *__dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMe3Stelth;
        if (M2C_FIELD(arg0, void **, 0x444) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x444)); M2C_FIELD(arg0, M2C_UNK *, 0x444) = 0; }
        if (M2C_FIELD(arg0, void **, 0x448) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x448)); M2C_FIELD(arg0, M2C_UNK *, 0x448) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x404, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F52B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe3Stelth__ct(void *arg0);
void init_object__9TObjEneDDFPv(void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__16TObjEneMe3Stelth[];
extern void *lbl_805D2AF8;

void *TObjEneMe3Stelth__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMe3Stelth;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1028));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F53C8
#include "types.h"

extern "C" {

int create_real__16TObjEneMe3StelthFPv(void* p);
int create__20TObjEneMe3StelthRealFPv(void*);

int create_real__16TObjEneMe3StelthFPv(void* p) { return create__20TObjEneMe3StelthRealFPv(p); }

}
#endif

#if PSO_CLASS_PACKAGE == 0x802D70AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_attack__16TObjEneMe3StelthFsiiiff(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1);
u8 *insert_slot_by_id__12TObjNpcEnemyFs();
M2C_UNK copy_position_data(void *, s32);

void spawn_attack__16TObjEneMe3StelthFsiiiff(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;

    temp_r3 = insert_slot_by_id__12TObjNpcEnemyFs();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0) = arg0;
        M2C_FIELD(temp_r3, s16 *, 2) = 3;
        M2C_FIELD(temp_r3, f32 *, 4) = farg1;
        M2C_FIELD(temp_r3, s32 *, 8) = arg1;
        M2C_FIELD(temp_r3, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_r3, f32 *, 0x10) = farg0;
        copy_position_data(temp_r3 + 0x14, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DC82C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_depth_buffer_id__16TObjEneMe3StelthFi(s32 arg0);

extern s32 lbl_805D7708;

void set_depth_buffer_id__16TObjEneMe3StelthFi(s32 arg0) {
    lbl_805D7708 = arg0;
}

}
#endif
#endif
