#include "types.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TUnk_80483A10.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjGyaranzoMissile.h"

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
    virtual s32 m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual s32 m23(void *, f32);
};

struct VBase_18_8d846b { char pad[0x18]; };

struct VObj_18_8d846b : VBase_18_8d846b {
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
};

struct S_800401CC { s32 a; s32 b; s32 c; };

extern "C" {
u8 obj_is_hit_receivable(void *);
extern const f32 lbl_805D86B0;
extern const f32 lbl_805D86D4;
f32 cos_table_lookup(s32);
s32 push_matrix();
s32 pop_matrix();
s32 set_matrix_identity(int, f32);
s32 rotate_vector_by_matrix(int, int, int);
s32 rotate_matrix_y(s32, s32);
extern const f32 lbl_805D86C0;
extern const f32 lbl_805D86C4;
extern const f32 lbl_805D86C8;
extern const f32 lbl_805D86CC;
extern const f32 lbl_805D86D0;
void TObjPlayer__sub_8003FCD0(u8 *arg0);
s32 TObjPlayer__sub_80040AE4(s32 i);
void update_if_active__15TObjEneMe1GiGueFl(void*, s32);
s32 advance_animation_playback(void *);
s32 minimap_render_dot(void *, s32, s32, s32);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
extern s32 vol_opt_active_hit_zone;
void TObjPlayer__sub_8003F9D4(void *arg0_);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss3Volopt__sub_8004885C(void *, void *, int, int, void *, f32, f32);
u32 get_player_by_client_id(int);
void * __nw__7TObjectFUl(int);
s32 vec3_add_to(void *, void *);
s32 subtract_vector(void *, void *);
extern s32 volopt_slot_positions[];
extern const f32 lbl_805D86DC;
extern const f32 lbl_805D86E0;
extern const f32 lbl_805D86E4;
void TObjPlayer__sub_800401CC(u8 *arg0);
struct Base_8003F6B4_8003F4C0 { char pad[0x18]; };

struct VObj_8003F6B4_8003F4C0 : Base_8003F6B4_8003F4C0 {
    virtual void m0();    virtual void m1();    virtual void m2();    virtual void m3();
    virtual void m4();    virtual void m5();    virtual void m6();    virtual void m7();
    virtual void m8();    virtual void m9();    virtual void m10();    virtual void m11();
    virtual void m12();    virtual void m13();    virtual void m14();    virtual void m15();
    virtual void m16();    virtual void m17();    virtual void m18();    virtual void m19();
    virtual void m20(void *second, f32 c);
};

struct Fn80040464Base_80040464_8003F4C0 { char pad[0x18]; };

struct Fn80040464VObj_80040464_8003F4C0 : Fn80040464Base_80040464_8003F4C0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct VBase_18_b8f5cb
{
  char pad[0x18];
};

struct VObj_18_b8f5cb : VBase_18_b8f5cb {
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
    virtual s32 m30();
    virtual s32 m31();
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
    virtual s32 m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual s32 m60();
    virtual s32 m61();
};

struct Obj_80040038 { u8 pad[0xb8]; s16 anim; u8 pad2[0x37c - 0xba]; s32 state; };

struct Obj_8003FFE4 { u8 pad[0x30]; u32 flags; u8 pad2[0x37c - 0x34]; s32 state; };

struct Obj_8004055C { u8 pad0[0x326]; s16 state; };

struct Base_8003F730 { char pad[0x18]; };

struct Obj_8003F730 : Base_8003F730 {
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
    virtual void m55(); virtual void m56();
    u8 pad1C[0x390 - 0x1C];
    s32 unk390;
    s32 unk394;
    u8 pad398[0x3BC - 0x398];
    s32 slot;
};

typedef struct Slot_8003F730 {
    s8 used;
    u8 pad[3];
} Slot_8003F730;

typedef struct Obj_8003FBC8 {
    u8 pad0[0x3C];
    f32 y;
    u8 pad40[0x326 - 0x40];
    s16 unk326;
    u8 pad328[0x390 - 0x328];
    s32 angle;
} Obj_8003FBC8;

typedef struct Ent_8003FBC8 {
    u8 pad0[0x30];
    u32 flags;
} Ent_8003FBC8;

struct VBase_18_62ff9d { char pad[0x18]; };

struct VObj_18_62ff9d : VBase_18_62ff9d {
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
    virtual s32 m56();
};

struct Vec_8003F81C { f32 x, y, z; };

typedef struct VBase_18_b8f5cb VBase_18_b8f5cb;

typedef struct VObj_18_b8f5cb VObj_18_b8f5cb;

struct G_80040AE4 { u8 pad[0x18]; s32 arr[1]; };

struct E_80040AF8 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct G_80040AF8 { u8 pad[0x42c]; E_80040AF8 *entries; };

struct O_80040AF8 { u8 pad[0x24]; s32 f24; u8 pad2[0x34 - 0x28]; s32 f34; };

struct VBase_80040894 { u8 pad[0x18]; };

struct VObj_80040894 : VBase_80040894 {
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
};

s32 reset_status_effect_row(void *);
s32 obj_testFlags30(void *, s32);
s32 obj_clearFlags30(void *, s32);
s32 obj_setFlags30(void *, s32);
s32 queue_destruction__7TObjectFv(void *);
int dispatch_shared_handler_a__6TLobbyFl(void*);
int register_object__6TLobbyFl(void*);
int dispatch_shared_handler_b__6TLobbyFl(void*);
int register_boss__6TLobbyFl(void*);
s32 fn_8003CFEC(void *);
s32 TBoss3Volopt__sub_8003F398();
s32 alloc_boss_target_slot__10TObjPlayerFPvi(Obj_8003F730 *self, s32 _w1);
void TObjPlayer__sub_8003F81C(u8 *arg0);
void render__13TUnk_80483A10Fv(u8 *arg0);
void TObjPlayer__sub_80040558(void * _w0);
void run_task__13TUnk_80483A10Fv(u8 *arg0);
void TBoss3VoloptCore__sub_80040788(void);
void cache_volopt_resource_ptrs(void);
void * TBoss3VoloptCore__sub_800407E0(void *arg0);
void * destroy__13TUnk_80483A10Fs(void *arg0, s16 arg1);
void TBoss3VoloptCore__ct(VObj_80040894 *arg0);
void * create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3);
void * TBoss3VoloptCore__sub_80040A7C(void *arg0, void *arg1, void *arg2);
int is_target_in_attack_range__13TUnk_80483A10Fv(void);
s32 TCameraCtrl__sub_8006A044(s32, f32);
u32 create_particle_emitter(void *, int);
s32 __dt__15TObjEnemyCustomFv(void *, s32);
s32 TObjEnemyCustom__ct();
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
s32 set_animation__10TObjPlayerFPvs(void *, s16);
void * find_entity_by_id(u16);
s32 free_collision_body_parts(void *);
s32 init_collision_body_parts(void *, void *, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 __dl__7TObjectFPv(void *);
s32 scale_matrix(s32, f32, f32, f32);
s32 rotate_matrix_x(s32, s32);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);

extern Slot_8003F730 volopt_target_slot_used[];
extern u16 lbl_805D271C;
extern s32 lbl_805D2728;
extern int boss3_volopt_resources;
extern u16 boss3_volopt_monitor_base_actor_id;
extern int lbl_805D4C50;
extern int lbl_805D4C54;
extern int lbl_805D4C58;
extern int volopt_array_resource_ptr;
extern int volopt_resource_table_ptr;
extern s32 boss3_volopt_core_active_flag;
extern s32 boss3_volopt_turn_angle_limit;
extern s32 local_client_id;
extern const f32 lbl_805D86B4;
extern const f32 lbl_805D86B8;
extern const f32 lbl_805D86BC;
extern const f32 lbl_805D86D8;
extern const f32 lbl_805D86E8;
extern const f32 lbl_805D86EC;
extern const f32 lbl_805D86F0;
extern const f32 lbl_805D86F4;
extern s32 model_render_flags;
extern void *tl_04;

extern "C" {
void vfunc_65__15TObjEnemyCustomFll();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void vfunc_63__15TObjEnemyCustomFv();
}
extern "C" {
void vfunc_62__15TObjEnemyCustomFv();
}
extern "C" {
void vfunc_61__15TObjEnemyCustomFv();
}
extern "C" {
void vfunc_58__15TObjEnemyCustomFv();
}
extern "C" {
void vfunc_28__15TObjEnemyCustomFv();
}
extern "C" {
void vfunc_29__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_73__13TUnk_804806E8Fv();
}
extern "C" {
void consume_timer_field__10TObjPlayerFPvi();
}
extern "C" {
void vfunc_67__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_66__13TUnk_804806E8Fv();
}
extern "C" {
void apply_slow_status__13TUnk_804806E8Fv();
}
extern "C" {
void update_shock_clock__10TObjPlayerFPv();
}
extern "C" {
void vfunc_43__13TUnk_804806E8Fv();
}
extern "C" {
void TObjPlayer__sub_80018E6C();
}
extern "C" {
void vfunc_13__13TUnk_804AF8A0Fl();
}
extern "C" {
void vfunc_74__9TObjEnemyFl();
}
extern "C" {
void apply_hit_message_flags__9TObjEnemyFPv();
}
extern "C" {
void add_actor_exp();
}
extern "C" {
void apply_action_hold_status__13TUnk_804806E8Ff();
}
extern "C" {
void apply_anti_technique__13TUnk_804806E8Fl();
}
extern "C" {
void apply_attack_stat_status__13TUnk_804806E8FPv();
}
extern "C" {
void apply_confusion_status__13TUnk_804806E8Fv();
}
extern "C" {
void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
}
extern "C" {
void apply_movement_ailment__13TUnk_804806E8Fl();
}
extern "C" {
void apply_object_set_data();
}
extern "C" {
void apply_paralysis__13TUnk_804806E8Fv();
}
extern "C" {
void apply_poison_status__13TUnk_804806E8Fv();
}
extern "C" {
void apply_set_data__9TObjEnemyFPv();
}
extern "C" {
void apply_shock_status__13TUnk_804806E8Fv();
}
extern "C" {
void apply_switch_attack__10TObjPlayerFi();
}
extern "C" {
void calc_distance_accuracy_penalty__10TObjPlayerFv();
}
extern "C" {
void vfunc_79__15TObjEnemyCustomFv();
}
extern "C" {
void classify_actor_view_detail();
}
extern "C" {
void clear_all_status_effects__13TUnk_804806E8Fv();
}
extern "C" {
void clear_harmful_statuses__13TUnk_804806E8Fv();
}
extern "C" {
void cure_paralysis__13TUnk_804806E8Fv();
}
extern "C" {
void cure_poison_ailment__13TUnk_804806E8Fv();
}
extern "C" {
void enemy_spawn_jellen_effect();
}
extern "C" {
void enemy_spawn_zalure_effect();
}
extern "C" {
void vfunc_78__13TUnk_804806E8Fl();
}
extern "C" {
void vfunc_77__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_76__13TUnk_804806E8Fv();
}
extern "C" {
void vfunc_75__13TUnk_804806E8Ff();
}
extern "C" {
void clear_lobby_object_state__9TObjEnemyFv();
}
extern "C" {
void vfunc_9__13TUnk_804806E8Fv();
}
extern "C" {
void get_actor_level_index();
}
extern "C" {
void vfunc_12__9TObjEnemyFv();
}
extern "C" {
void get_pos__13TUnk_804806E8Fl();
}
extern "C" {
void is_actor_cadence_frame();
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
void reset_motion_fields__13TUnk_804806E8Fv();
}
extern "C" {
void reset_pose__13TUnk_804806E8Fv();
}
extern "C" {
void roll_physical_accuracy__13TUnk_804806E8FPvlf();
}
extern "C" {
void select_melee_contact_body__10TObjPlayerFv();
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_start_action__13TUnk_804806E8Fll();
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
void vfunc_60__15TObjEnemyCustomFv();
}
extern "C" {
void vfunc_59__15TObjEnemyCustomFv();
}
extern "C" {
void update_movement_status__10TObjPlayerFv();
}
extern "C" {
void update_object_view_visibility__13TUnk_804B9870Fff();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
void *boss3_volopt_core_hit_table[20] = {
    (void *)0x10000, (void *)0xe, (void *)0x3f333333, (void *)0x0,
    (void *)0x10000, (void *)0xe, (void *)0x3f333333, (void *)0x1,
    (void *)0x20000, (void *)0xe, (void *)0x3f333333, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x8,
    (void *)0x10000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x10,
};
void *lbl_804839C8[7] = {
    (void *)0x43160000, (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_804839E4[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x3a83126f,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *TBoss3VoloptCore__vtable[83] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__13TUnk_80483A10Fs, (void *)&run_task__13TUnk_80483A10Fv,
    (void *)&render__13TUnk_80483A10Fv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker__13TUnk_804806E8FPUc, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__15TObjEnemyCustomFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__13TUnk_80483A10Fv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment__13TUnk_804806E8Fv, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)&apply_action_hold_status__13TUnk_804806E8Ff, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__15TObjEnemyCustomFv, (void *)&vfunc_59__15TObjEnemyCustomFv,
    (void *)&vfunc_60__15TObjEnemyCustomFv, (void *)&vfunc_61__15TObjEnemyCustomFv, (void *)&vfunc_62__15TObjEnemyCustomFv, (void *)&vfunc_63__15TObjEnemyCustomFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__15TObjEnemyCustomFll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__15TObjEnemyCustomFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv,
};
#define TBoss3VoloptCore__vtable ((s32 *)TBoss3VoloptCore__vtable)

void TObjPlayer::set_grabbed_state(s32 arg0) {
    void *entity;

    entity = find_entity_by_id(lbl_805D271C);
    if ((entity != NULL) && ((s16) *(s16 *)((s8 *)entity + 0x326) != 0xA)) {
        update_if_active__15TObjEneMe1GiGueFl(entity, 0xA);
        *(s32 *)((s8 *)entity + 0x3C4) = arg0;
    }
}

void TObjPlayer::update_topple_state() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = this->m_37c;
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 | 0x10000);
        *(s16 *)&this->m_b8 = 0;
        if (angle_difference_abs(this->rotation_y, *(s32 *)&this->unk_398 - 0x4000) <= (s32) boss3_volopt_turn_angle_limit) {
            this->m_37c = 3;
        } else {
            this->m_37c = 1;
        }
        break;
    case 1:
        temp_r0_2 = this->m_3c4 - 1;
        this->m_3c4 = temp_r0_2;
        if (temp_r0_2 <= 0) {
            this->m_37c = 2;
        }
        break;
    case 2:
        this->rotation_y = approach_angle_limited(this->rotation_y, *(s32 *)&this->unk_398 - 0x4000, boss3_volopt_turn_angle_limit);
        if (angle_difference_abs(this->rotation_y, *(s32 *)&this->unk_398 - 0x4000) <= (s32) boss3_volopt_turn_angle_limit) {
            this->m_37c = 3;
        }
        break;
    case 3:
        play_persistent_sound(0x4003BC05, arg0, (u8 *)&this->position, 0, 0);
        advance_animation_playback(arg0);
        *(s32 *)&this->unk_390 = (s32) (*(s32 *)&this->unk_390 - TObjPlayer__sub_80040AE4(0));
        this->m_394 = (s32) (this->m_394 - TObjPlayer__sub_80040AE4(0));
        TObjPlayer__sub_8003FCD0((u8 *)(arg0));
        *(s32 *)&this->unk_398 = calc_spin_value();
        if ((s32) this->m_394 <= -0x238E) {
            this->vfunc_58();
        }
        break;
    }
    advance_animation_playback(arg0);
    if ((s32) vol_opt_active_hit_zone >= 0) {
        minimap_render_dot((u8 *)&this->position, -0x5DB4, 1, 0);
    }
}

void TObjPlayer::link_photon(u16 arg0) {
    void *entity;
    void *temp_r4;
    void *temp_r5;

    entity = find_entity_by_id(lbl_805D271C);
    if ((entity != NULL) && ((s32) *(s32 *)((s8 *)entity + 0x3C8) <= 0)) {
        temp_r4 = find_entity_by_id(arg0);
        if (temp_r4 != NULL) {
            f32 temp_f1 = (*(f32 *)&lbl_805D86B0);
            temp_r5 = *(void **)((s8 *)entity + 0xA4);
            *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 0x04000000);
            ((VObj_8003F6B4_8003F4C0*)entity)->m20(temp_r4, temp_f1);
        }
    }
}

s32 alloc_boss_target_slot__10TObjPlayerFPvi(Obj_8003F730 *self, s32 _w1) {
    s32 i;
    s32 idx;
    for (i = 0; i < 6; i++) {
        idx = (self->slot + 6 - i) % 6;
        if (volopt_target_slot_used[idx].used == 0) {
            self->slot = idx;
            break;
        }
    }
    if (i == 6) {
        boss3_volopt_core_active_flag = 1;
        self->m56();
        return 0;
    }
    self->unk390 = (s32)(lbl_805D86B4 * (f32)((self->slot + 2) * 60 - 10));
    self->unk394 = -0x71C;
    return 1;
}

void TObjPlayer__sub_8003F81C(u8 *arg0) {
    s32 sp10;
    f32 spC;
    s32 sp8;
    f32 temp_f1;
    s16 temp_r3;
    s16 temp_r4;
    s16 var_r0;
    s32 temp_r0;
    s32 temp_r5;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x10000);
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        *(s16 *)((s8 *)arg0 + 0x33C) = 5;
        *(u32 *)((s8 *)arg0 + 0x3CC) = 0U;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited((int) (*(s32 *)((s8 *)arg0 + 0x60)), (int) (*(s32 *)((s8 *)arg0 + 0x398) - 0x8000), boss3_volopt_turn_angle_limit);
        if (angle_difference_abs((int) (*(s32 *)((s8 *)arg0 + 0x60)), (int) (*(s32 *)((s8 *)arg0 + 0x398) - 0x8000)) <= (s32) boss3_volopt_turn_angle_limit) {
            *(s16 *)((s8 *)arg0 + 0x33C) = (TBoss3Volopt__sub_8003F398() != 0) ? 5 : 0x1E;
            *(s32 *)((s8 *)arg0 + 0x37C) = 2;
        }
        break;
    case 2:
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            Vec_8003F81C v = *(Vec_8003F81C *)(arg0 + 0x38);
            v.y -= lbl_805D86B8;
            *(u32 *)((s8 *)arg0 + 0x3CC) = create_particle_emitter(&v, 0x31);
            play_sound_effect((int) (0x4003AD1E), (s32) (arg0 + 0x38), 0, 0);
            *(s32 *)((s8 *)arg0 + 0x37C) = 3;
        }
        break;
    case 3:
        if (--*(s16 *)((s8 *)arg0 + 0x33C) < 0) {
            boss3_volopt_core_active_flag = 1;
            ((VObj_18_62ff9d *)(arg0))->m56();
        }
        break;
    case -1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3CC) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3CC));
            *(u32 *)((s8 *)arg0 + 0x3CC) = 0U;
        }
        break;
    }
    advance_animation_playback((void *) (arg0));
    if ((s32) vol_opt_active_hit_zone >= 0) {
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
}

struct Obj_8003F730;
void TObjPlayer__sub_8003F9D4(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x10000);
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        *(s32 *)((s8 *)arg0 + 0x5C) = 0;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        break;
    case 1:
        advance_animation_playback(arg0);
        *(s32 *)((s8 *)arg0 + 0x390) = (s32) (*(s32 *)((s8 *)arg0 + 0x390) - TObjPlayer__sub_80040AE4((int) (0)));
        *(s32 *)((s8 *)arg0 + 0x394) = (s32) (*(s32 *)((s8 *)arg0 + 0x394) - TObjPlayer__sub_80040AE4((int) (0)));
        TObjPlayer__sub_8003FCD0(arg0);
        *(s32 *)((s8 *)arg0 + 0x398) = ((TObjPlayer *)arg0)->calc_spin_value();
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x398) - 0x4000);
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x3C0);
        if (temp_r3 > 1) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x394) <= -0x238E) {
                *(s32 *)((s8 *)arg0 + 0x3C0) = (s32) (temp_r3 - 1);
                temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x3BC) - 1;
                *(s32 *)((s8 *)arg0 + 0x3BC) = temp_r0_2;
                if (temp_r0_2 < 0) {
                    *(s32 *)((s8 *)arg0 + 0x3BC) = 5;
                }
                if (((s32 (*)(void *))alloc_boss_target_slot__10TObjPlayerFPvi)((void *) (arg0)) == 1) {
                    *(s32 *)((s8 *)arg0 + 0x37C) = 0;
                }
            } else {
                goto block_14;
            }
        } else {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x394) < -0x1555) {
                *(s32 *)((s8 *)arg0 + 0x3D0) = (s32) *(s32 *)((s8 *)arg0 + 0x390);
                update_if_active__15TObjEneMe1GiGueFl((void *) (arg0), (int) (9));
            }
block_14:
            play_persistent_sound((int) (0x4003BC05), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
        break;
    case -1:
        break;
    }
    if ((s32) vol_opt_active_hit_zone >= 0) {
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
}

void TObjPlayer::set_boss_target_pos(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;

    if (obj_testFlags30(this, 0x800) == 0) {
        temp_r4 = *(s32 *)&this->unk_388 | 0x20000;
        *(s32 *)&this->unk_388 = temp_r4;
        this->m_3bc = arg1;
        *(s32 *)&this->unk_3C0 = arg2;
        this->m_3c4 = arg3;
        boss3_volopt_core_active_flag = 0;
        alloc_boss_target_slot__10TObjPlayerFPvi((Obj_8003F730 *)(this), (s32)(temp_r4));
        *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 & 0xFFFFFFFE);
        this->vfunc_59();
    }
}

s32 TObjPlayer::calc_hit_zone_index() {
    Obj_8003FBC8 *self = (Obj_8003FBC8 *)this;
    s32 r;
    s32 d;
    s32 angle;
    Ent_8003FBC8 *e;
    if (self->unk326 == 0) {
        return -1;
    }
    angle = self->angle;
    r = -1;
    d = (u16)angle % 0x2AAA - 0x1555;
    if (self->y >= lbl_805D86BC) {
        if (__abs(d) <= 0x8DC) {
            r = 0;
        }
    } else if (d <= 0xDB2) {
        if (d >= 0x510) {
            r = 1;
        } else if (d >= -0x510) {
            r = 2;
        } else if (d >= -0xDB2) {
            r = 3;
        }
    }
    if (r >= 0) {
        r += ((u16)(angle - 0x2AAA) / 0x2AAA) * 4;
        e = (Ent_8003FBC8 *)find_entity_by_id(boss3_volopt_monitor_base_actor_id + r);
        if (e == NULL || (e->flags & 0x800)) {
            r = -1;
        }
    }
    return r;
}

void TObjPlayer__sub_8003FCD0(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r3;
    u8 *temp_r4;
    temp_r3 = ((u16)*(s32 *)((s8 *)arg0 + 0x390) % 10922) - 0x1555;
    if (*(s32 *)((s8 *)arg0 + 0x388) & 0x20000) {
        *(f32 *)((s8 *)arg0 + 0x38C) = (f32) (lbl_805D86C0 / cos_table_lookup(temp_r3));
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805D86C4;
    } else {
        *(f32 *)((s8 *)arg0 + 0x38C) = (f32) (lbl_805D86C8 / cos_table_lookup(temp_r3));
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805D86CC;
    }
    push_matrix();
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x38C);
    *(f32 *)((s8 *)arg0 + 0x38) = temp_f1;
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) lbl_805D86D0;
    set_matrix_identity((int) (0), (f32) (temp_f1));
    rotate_matrix_y((s32)((int) (0)), (s32)((int) (*(s32 *)((s8 *)arg0 + 0x390))));
    temp_r4 = (u8 *)(arg0 + 0x38);
    rotate_vector_by_matrix((int) (0), (int) (temp_r4), (int) (temp_r4));
    pop_matrix();
}

s32 TObjPlayer::calc_spin_value() {
    return (s32) (lbl_805D86B4 * (f32) ((((s32) (u16) *(s32 *)&this->unk_390 / 10922) * 0x3C) + 0x78));
}

void TObjPlayer::update_state_spin() {
    s32 temp_r3;
    s32 temp_r0;

    temp_r0 = this->m_37c;
    switch (temp_r0) {
    case 0:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags | 0x40000);
        *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 | 0x20000);
        *(s32 *)&this->unk_390 = 0x4000;
        this->m_394 = -0x1555;
        *(u16 *)((s8 *)this + 0x338) = 0xFFFF;
        *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 | 0x10000);
        *(s16 *)&this->m_b8 = 0;
        *(s32 *)&this->m_5c = 0;
        TObjPlayer__sub_8003FCD0((u8 *)(this));
        *(s32 *)&this->unk_398 = calc_spin_value();
        this->rotation_y = (s32) *(s32 *)&this->unk_398;
        *(s16 *)&this->unk_33C = 0x5A;
        this->m_37c = 1;
    case 1:
        advance_animation_playback(this);
        temp_r3 = *(s16 *)&this->unk_33C - 1;
        *(s16 *)&this->unk_33C = temp_r3;
        if ((s16) temp_r3 <= 0) {
            *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFFBFFFF);
            *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 & 0xFFFFFFFE);
            this->vfunc_58();
        }
        break;
    case -1:
        break;
    }
}

s32 TObjPlayer::check_target_collision() {
    s32 found;
    s32 i;
    VObj_18_c44252 *obj;
    if ((u32) *(u32 *)&this->target == 0U) {
        return 0;
    }
    found = 0;
    TObjPlayer::init_all_slots();
    ((TObjPlayer *)((u8 *)this))->check_object_collisions();
    if (*(s32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0x18) & 0x80000) {
        for (i = 0; i < 0x10; i++) {
            obj = (VObj_18_c44252 *)TObjPlayer::get_battle_param(i);
            if (obj == NULL) {
                break;
            }
            if (((s32 (*)(void *))obj_is_hit_receivable)(obj) != 0) {
                if (obj->m18(((u8 *)this), lbl_805D86B0) != 0) {
                    obj->m23(((u8 *)this), lbl_805D86D4);
                    obj->m20(((u8 *)this), lbl_805D86B0);
                }
                if ((u32) obj == (u32) *(u32 *)&this->target) {
                    found = 1;
                }
            }
        }
    }
    return found;
}

void TObjPlayer::run_freeze_state() {
    Obj_8003FFE4 *self = (Obj_8003FFE4 *)this;
    switch (self->state) {
    case 0:
        boss3_volopt_core_active_flag = 1;
        self->flags |= 0x02040000;
        self->state = 1;
        break;
    case 1:
        break;
    case -1:
        self->flags &= ~0x02040000;
        break;
    }
}

void TObjPlayer::update_reaction_animation() {
    Obj_80040038 *self = (Obj_80040038 *)this;
    switch (self->state) {
    case 0:
        self->anim = 4;
        self->state = 1;
    case 1:
        ((s32)advance_animation_playback(self));
        break;
    case -1:
        return;
    }
}

void TObjPlayer::update_grabbed_state() {
    s32 temp_r0;
    temp_r0 = this->m_37c;
    switch (temp_r0) {
    case 0:
        if (obj_testFlags30((void *)(this), (s32)(0x02000000)) != 0) {
            *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 | 0x40000);
        }
        obj_clearFlags30(this, 0x02200200);
        this->m_33e = (s16) this->hp;
        *(s16 *)&this->m_b8 = 3;
        play_sound_effect(0x4003A81F, 0, 0, 0);
        play_sound_effect(0x4003BC20, 0, 0, 0);
        if ((s32) local_client_id == (s32) this->m_2d4) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805D86D8);
        }
        *(s32 *)((s8 *)this + 0x3C8) = 0x14;
        this->m_37c = 1;
    case 1:
        advance_animation_playback(this);
        if ((u32) this->m_b4 != 8U) {
            *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 & 0xFFFFFFFE);
            if (*(s32 *)&this->unk_388 & 0x40000) {
                TObjPlayer::set_grabbed_state((s32)(0xF));
            } else {
                update_if_active__15TObjEneMe1GiGueFl((void*)(this), (s32)(*(s32 *)&this->unk_380));
            }
        }
        return;
    case -1:
        *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 & 0xFFFBFFFF);
        break;
    }
}

void TObjPlayer__sub_800401CC(u8 *arg0) {
    S_800401CC sp8;
    f32 temp_f31;
    u32 temp_r4;
    void *obj;
    *(u32 *)((s8 *)arg0 + 0x2A8) = get_player_by_client_id(*(u16 *)((s8 *)arg0 + 0x338));
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x388) &= ~0x10000;
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        *(s32 *)((s8 *)arg0 + 0x5C) = 0;
        if (*(s32 *)((s8 *)arg0 + 0x380) == 4) {
            *(s32 *)((s8 *)arg0 + 0x37C) = *(s32 *)((s8 *)arg0 + 0x3B4);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x39C, arg0 + 0x38);
            *(s32 *)((s8 *)arg0 + 0x3B4) = 1;
            *(s32 *)((s8 *)arg0 + 0x37C) = 1;
            *(s32 *)((s8 *)arg0 + 0x3B8) = 0x1E;
        }
        break;
    case 1:
        VecCopy__FP3VecPC3Vec(arg0 + 0x308, (void *)(*(u32 *)((s8 *)arg0 + 0x2A8) + 0x38));
        subtract_vector(arg0 + 0x308, arg0 + 0x38);
        ((TObjPlayer *)arg0)->update_angle(0x800, arg0 + 0x308);
        if (--*(s32 *)((s8 *)arg0 + 0x3B8) <= 0) {
            *(s32 *)((s8 *)arg0 + 0x3B8) = 0x96;
            *(s32 *)((s8 *)arg0 + 0x3B4) = 2;
            *(s32 *)((s8 *)arg0 + 0x37C) = 2;
            sp8.b = *(s32 *)((s8 *)arg0 + 0x398);
            sp8.a = 0;
            sp8.c = 0x4000;
            obj = __nw__7TObjectFUl(0x48);
            if (obj != 0) {
                TBoss3Volopt__sub_8004885C(obj, (u8 *)volopt_slot_positions + *(s32 *)((s8 *)arg0 + 0x3A8) * 0xC, 0x11B, 8, &sp8, lbl_805D86DC, lbl_805D86D0);
            }
        }
        break;
    case 2:
        temp_r4 = *(u32 *)((s8 *)arg0 + 0x2A8);
        if (temp_r4 == 0U) {
            *(s32 *)((s8 *)arg0 + 0x3B4) = 4;
            *(s32 *)((s8 *)arg0 + 0x37C) = 4;
            return;
        }
        VecCopy__FP3VecPC3Vec(arg0 + 0x308, (void *)(temp_r4 + 0x2FC));
        subtract_vector(arg0 + 0x308, arg0 + 0x38);
        ((TObjGyaranzoMissile *)(arg0 + 0x308))->scale_velocity(lbl_805D86E0);
        ((TObjPlayer *)arg0)->update_angle(0x800, arg0 + 0x308);
        vec3_add_to(arg0 + 0x38, arg0 + 0x308);
        if (((TObjPlayer *)arg0)->check_target_collision() != 0) {
            *(s32 *)((s8 *)arg0 + 0x3B4) = 4;
            *(s32 *)((s8 *)arg0 + 0x37C) = 4;
        }
        if (--*(s32 *)((s8 *)arg0 + 0x3B8) <= 0) {
            *(s32 *)((s8 *)arg0 + 0x3B4) = 4;
            *(s32 *)((s8 *)arg0 + 0x37C) = 4;
        }
        break;
    case 4:
        VecCopy__FP3VecPC3Vec(arg0 + 0x308, arg0 + 0x39C);
        subtract_vector(arg0 + 0x308, arg0 + 0x38);
        temp_f31 = ((TObjGyaranzoMissile *)(arg0 + 0x308))->scale_velocity(lbl_805D86E0);
        ((TObjPlayer *)arg0)->update_angle(0x800, arg0 + 0x308);
        vec3_add_to(arg0 + 0x38, arg0 + 0x308);
        ((TObjPlayer *)arg0)->check_target_collision();
        if (temp_f31 < lbl_805D86E4) {
            *(u16 *)((s8 *)arg0 + 0x338) = 0xFFFF;
            ((VObj_18_8d846b *)arg0)->m57();
        }
        break;
    }
    advance_animation_playback(arg0);
    minimap_render_dot((void *)(arg0 + 0x38), (s32)(-0x5DB4), (s32)(1), (s32)(0));
}

void TUnk_80483A10::render() {
    u8 *arg0 = (u8 *)this;
    if (!(*(s32 *)&this->actorFlags & 0x02000000) && (((Fn80040464VObj_80040464_8003F4C0*)arg0)->m8(lbl_805D86E8, lbl_805D86EC) != 0)) {
        TObjFish::set_global_param(this->texture_id);
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_x(0, *(s32 *)&this->m_5c);
        if (*(s32 *)&this->m_388 & 0x10000) {
            rotate_matrix_y(0, this->m_398);
            scale_matrix(0, (*(const f32 *)&(*(f32 *)&lbl_805D86B0)), (*(const f32 *)&(*(f32 *)&lbl_805D86B0)), lbl_805D86F0);
            rotate_matrix_y(0, this->rotation_y - this->m_398);
        } else {
            rotate_matrix_y(0, this->rotation_y);
        }
        if (TObjPlayer::check_demo_mode() == 1) {
            draw_chunk_object(*(s32 *)&this->model);
        } else {
            ((TObjEneRe7Berura *)arg0)->draw();
        }
        pop_matrix();
    }
}

void TObjPlayer__sub_80040558(void * _w0) {  }

void TObjPlayer::dispatch_reaction_state() {
    Obj_8004055C *arg0 = (Obj_8004055C *)this;
    switch (arg0->state) {
    case 0: run_freeze_state(); return;
    case 1: TObjPlayer__sub_8003F9D4((void *)(arg0)); return;
    case 2: TObjPlayer__sub_800401CC((u8 *)(arg0)); return;
    case 4: update_grabbed_state(); return;
    case 5: update_reaction_animation(); return;
    case 7: update_state_spin(); return;
    case 9: TObjPlayer__sub_8003F81C((u8 *)(arg0)); return;
    case 10: update_topple_state(); break;
    }
}

void TUnk_80483A10::run_task() {
    u8 *arg0 = (u8 *)this;
  f32 var_f1;
  s32 temp_r3;
  vol_opt_active_hit_zone = ((TObjPlayer *)arg0)->calc_hit_zone_index();
  if (TObjPlayer::check_demo_mode() == 1)
  {
    TObjPlayer__sub_80040558((void *)((void *)((void *) arg0)));
    return;
  }
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x3C8));
  if (temp_r3 > 0)
  {
    *((s32 *) (((s8 *) arg0) + 0x3C8)) = (s32) (temp_r3 - 1);
  }
  if ((this->has_flag_0x800()) != 0)
  {
    (this->vfunc_63());
  }
  else
    if ((this->test_flag30_512()) != 0)
  {
    if (((s32) (*((s32 *) (0x3C8 + ((s8 *) arg0))))) > 0)
    {
      obj_clearFlags30((void *)((void *) arg0), (s32)((int) 0x200));
    }
    else
    {
      (this->vfunc_62());
    }
  }
  if (obj_testFlags30((void *)((void *)((void *) arg0)), (s32)((s32)((int) 0x4000))) != 0)
  {
    if (((TObjPlayer *)arg0)->add_status_effect_timer((int) 4, (int) (-1)) <= 0)
    {
      reset_status_effect_row((void *) (arg0 + 0x284));
      obj_clearFlags30((void *)((void *) arg0), (s32)((int) 0x4000));
    }
  }
  else
  {
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != ((s32) (*((s32 *) (((s8 *) arg0) + 0x374)))))
    {
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x37C)))) != (-1))
      {
        *((s32 *) (((s8 *) arg0) + 0x37C)) = -1;
        ((TObjPlayer *)arg0)->dispatch_reaction_state();
      }
      *((s16 *) (((s8 *) arg0) + 0x326)) = (s16) (*((s32 *) (((s8 *) arg0) + 0x374)));
      *((s32 *) (((s8 *) arg0) + 0x37C)) = 0;
    }
    ((TObjPlayer *)arg0)->dispatch_reaction_state();
    var_f1 = *((f32 *) (((s8 *) arg0) + 0x3C));
    if (var_f1 > lbl_805D86F4)
    {
      if ((arg0 && arg0) && arg0)
      {
      }
    }
    else
    {
      var_f1 = lbl_805D86F4;
    }
    *((f32 *) (((s8 *) arg0) + 0x3C)) = var_f1;
    ((TObjEnemy *)arg0)->update_prev_position();
    fn_8003CFEC((void *) (arg0 + 0x2FC));
    (this->clear_all_status_effects());
  }
}

void TBoss3VoloptCore__sub_80040788(void) {  }

void cache_volopt_resource_ptrs(void) { volopt_resource_table_ptr = boss3_volopt_resources; lbl_805D4C50 = register_boss__6TLobbyFl((void*)33); lbl_805D4C54 = dispatch_shared_handler_b__6TLobbyFl((void*)33); lbl_805D4C58 = register_object__6TLobbyFl((void*)33); volopt_array_resource_ptr = dispatch_shared_handler_a__6TLobbyFl((void*)33); }

void *TBoss3VoloptCore__sub_800407E0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3D4);
    if (o != NULL) {
        o = TBoss3VoloptCore__sub_80040A7C((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

void *TUnk_80483A10::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = TBoss3VoloptCore__vtable;
        free_collision_body_parts(this);
        ((s32 (*)(s32))fn_8003CFEC)(0);
        __dt__15TObjEnemyCustomFv(this, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

void TBoss3VoloptCore__ct(VObj_80040894 *arg0) {
    void *temp_r4;

    *(s32 *)((s8 *)arg0 + 0) = lbl_805D2728;
    *(s32 *)((s8 *)arg0 + 0xDC) = *(s32 *)((s8 *)(*(void * *)&volopt_resource_table_ptr) + 0x430);
    *(void **)((s8 *)arg0 + 0xD8) = boss3_volopt_core_hit_table;
    ((TObjPlayer *)arg0)->set_field_d8((s32)(*(void **)((s8 *)arg0 + 0xD8)));
    init_collision_body_parts(arg0, lbl_804839E4, 1);
    *(s32 *)((s8 *)arg0 + 0x368) = 0;
    *(void **)((s8 *)arg0 + 0x350) = lbl_804839C8;
    ((TUnk_804806E8 *)arg0)->recalc_combat_stats((void *)(*(s32 *)&lbl_805D4C50), (void *)(*(s32 *)&lbl_805D4C54), (void *)(*(s32 *)&lbl_805D4C58), (f32)lbl_805D86B0, (f32)lbl_805D86B0);
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    ((TObjMotion *)arg0)->set_field_b8(*(s16 *)((s8 *)arg0 + 0xB8));
    *(s16 *)((s8 *)arg0 + 0x32C) = *(s16 *)((s8 *)arg0 + 0x2B8);
    *(s16 *)((s8 *)arg0 + 0x32E) = *(s16 *)((s8 *)arg0 + 0x2BA);
    *(s16 *)((s8 *)arg0 + 0x33E) = *(s16 *)((s8 *)arg0 + 0x32C);
    ((TObjEneLappy *)arg0)->set_param(0x2E);
    ((TObjEnemy *)arg0)->update_prev_position();
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    ((TObjPlayer *)arg0)->load_entry_params_volopt(0x18);
    *(s32 *)((s8 *)arg0 + 0x388) |= 0x10000;
    *(s32 *)((s8 *)arg0 + 0x390) = 0;
    temp_r4 = *(void **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)temp_r4 + 0x18) |= 0xC00;
    arg0->m56();
    ((TUnk_804806E8 *)arg0)->add_flags_2e4(4);
    *(s32 *)((s8 *)arg0 + 0x3C8) = 0;
    obj_setFlags30(arg0, 0x8000);
    if (TBoss3Volopt__sub_8003F398() != 0) {
        boss3_volopt_turn_angle_limit = 0xA00;
    } else {
        boss3_volopt_turn_angle_limit = 0x200;
    }
    arg0->m80();
}

void *create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3) {
    TObjEnemyCustom__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = TBoss3VoloptCore__vtable;
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg3;
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    *(s16 *)((s8 *)arg0 + 0x28) = (s16) *(s16 *)((s8 *)arg1 + 0x28);
    *(s16 *)((s8 *)arg0 + 0x2A) = (s16) *(s16 *)((s8 *)arg1 + 0x2A);
    ((s32 (*)(void *, s32 *))TBoss3VoloptCore__ct)(arg0, TBoss3VoloptCore__vtable);
    return arg0;
}

void *TBoss3VoloptCore__sub_80040A7C(void *arg0, void *arg1, void *arg1_arg) {
    ((s32 (*)(void *, void *))TObjEnemyCustom__ct)(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = TBoss3VoloptCore__vtable;
    ((TUnk_80483A10 *)arg0)->apply_set_data(arg1_arg);
    ((s32 (*)(void *))TBoss3VoloptCore__ct)(arg0);
    return arg0;
}

s32 TUnk_80483A10::is_target_in_attack_range() { return 0; }

s32 TObjPlayer__sub_80040AE4(s32 i) {
    return (*(G_80040AE4 * *)&volopt_array_resource_ptr)->arr[i];
}

void TObjPlayer::load_entry_params_volopt(s32 i) {
    O_80040AF8 *self = (O_80040AF8 *)this;
    self->f34 = (*(G_80040AF8 * *)&volopt_resource_table_ptr)->entries[i].f8;
    self->f24 = (*(G_80040AF8 * *)&volopt_resource_table_ptr)->entries[i].fc;
}

}
