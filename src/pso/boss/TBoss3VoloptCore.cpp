#include "types.h"
#include "pso/player/TObjPlayer.h"

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PSO_VCALL_VObj_18_b8f5cb_m31(_self) (((VObj_18_b8f5cb *)(_self))->m31())
#define PSO_VCALL_VObj_18_b8f5cb_m61(_self) (((VObj_18_b8f5cb *)(_self))->m61())
#define PSO_VCALL_VObj_18_b8f5cb_m30(_self) (((VObj_18_b8f5cb *)(_self))->m30())
#define PSO_VCALL_VObj_18_b8f5cb_m60(_self) (((VObj_18_b8f5cb *)(_self))->m60())
#define PSO_VCALL_VObj_18_b8f5cb_m53(_self) (((VObj_18_b8f5cb *)(_self))->m53())

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
int get_battle_param__10TObjPlayerFi(int);
void init_all_slots__10TObjPlayerFv(void);
void check_object_collisions__10TObjPlayerFv(void *);
extern const f32 lbl_805D86B0;
extern const f32 lbl_805D86D4;
s32 check_target_collision__10TObjPlayerFPv(u8 *arg0);
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
void TObjPlayer__sub_8003FCD0(u8 *arg0);
s32 TObjPlayer__sub_80040AE4(s32 i);
void update_if_active__15TObjEneMe1GiGueFl(void*, s32);
s32 advance_animation_playback(void *);
s32 minimap_render_dot(void *, s32, s32, s32);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
extern s32 vol_opt_active_hit_zone;
void TObjPlayer__sub_8003F9D4(void *arg0_);
s32 update_angle__10TObjPlayerFlPv(void *, int, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_target_collision__10TObjPlayerFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8004885C(void *, void *, int, int, void *, f32, f32);
f32 scale_velocity__19TObjGyaranzoMissileFf(void *, f32);
s32 advance_animation_playback(void *);
u32 get_player_by_client_id(int);
s32 minimap_render_dot(void *, s32, s32, s32);
void * __nw__7TObjectFUl(int);
s32 vec3_add_to(void *, void *);
s32 subtract_vector(void *, void *);
extern s32 volopt_slot_positions[];
extern const f32 lbl_805D86D0;
extern const f32 lbl_805D86DC;
extern const f32 lbl_805D86E0;
extern const f32 lbl_805D86E4;
void TObjPlayer__sub_800401CC(u8 *arg0);
}

extern "C" {

struct Base_8003f510_8003F4C0 { u8 pad[0x18]; };

struct VObj_8003f510_8003F4C0 : Base_8003f510_8003F4C0 {
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
    virtual void m56();
};

struct Base_8003F6B4_8003F4C0 { char pad[0x18]; };

struct VObj_8003F6B4_8003F4C0 : Base_8003F6B4_8003F4C0 {
    virtual void m0();    virtual void m1();    virtual void m2();    virtual void m3();
    virtual void m4();    virtual void m5();    virtual void m6();    virtual void m7();
    virtual void m8();    virtual void m9();    virtual void m10();    virtual void m11();
    virtual void m12();    virtual void m13();    virtual void m14();    virtual void m15();
    virtual void m16();    virtual void m17();    virtual void m18();    virtual void m19();
    virtual void m20(void *second, f32 c);
};

struct Base_8003FB3C_8003F4C0 { char pad[0x18]; };

struct VObj_8003FB3C_8003F4C0 : Base_8003FB3C_8003F4C0 {
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
    virtual void m56(); virtual void m57();
};

struct E_A_8003fde8_8003F4C0 { char pad[0x18]; };

struct E_V_8003fde8_8003F4C0 : E_A_8003fde8_8003F4C0 {
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
    virtual void m56();
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

struct VBase_80040A7C { u8 pad[0x18]; };

struct VObj_80040A7C : VBase_80040A7C {
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
    virtual void m79(void *);
};

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

s32 recalc_combat_stats__10TObjPlayerFv(void *, s32, s32, s32, f32, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 reset_status_effect_row(void *);
s32 add_status_effect_timer__10TObjPlayerFll(void *, int, int);
s32 add_flags_2e4__10TObjPlayerFUl(void *, s32);
s32 obj_testFlags30(void *, s32);
s32 obj_clearFlags30(void *, s32);
s32 obj_setFlags30(void *, s32);
s32 queue_destruction__7TObjectFv(void *);
int dispatch_shared_handler_a__6TLobbyFl(void*);
int register_object__6TLobbyFl(void*);
int dispatch_shared_handler_b__6TLobbyFl(void*);
int register_boss__6TLobbyFl(void*);
s32 set_field_b8__14TObjEnePanarmsFs(void *, s16);
s32 set_field_d8__10TObjPlayerFl(void *, void *);
s32 fn_8003CFEC(void *);
s32 reset_photon_effect__12TBoss3VoloptFv(void *);
s32 TBoss3Volopt__sub_8003F398();
s32 alloc_boss_target_slot__10TObjPlayerFPvi(Obj_8003F730 *self, s32 _w1);
void TObjPlayer__sub_8003F81C(u8 *arg0);
void teardown_render_state__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_80040558(void * _w0);
void TObjPlayer__sub_800405D8(u8 *arg0);
void TBoss3VoloptCore__sub_80040788(void);
void cache_volopt_resource_ptrs(void);
void * TBoss3VoloptCore__sub_800407E0(void *arg0);
void * destroy__16TBoss3VoloptCoreFPvs(void *arg0, s16 arg1);
void TBoss3VoloptCore__ct(VObj_80040894 *arg0);
void * create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3);
void * TBoss3VoloptCore__sub_80040A7C(void *arg0, void *arg1, void *arg2);
int TObjPlayer__sub_80040ADC(void);
s32 TObjPlayer__sub_80040AE4(s32 i);
void update_if_active__15TObjEneMe1GiGueFl(void*, s32);
s32 TCameraCtrl__sub_8006A044(s32, f32);
s32 check_demo_mode__10TObjPlayerFv();
u32 create_particle_emitter(void *, int);
s32 __dt__15TObjEnemyCustomFv(void *, s32);
s32 TObjEnemyCustom__ct();
s32 set_param__12TObjEneLappyFl(void *, s32);
s32 update_prev_position__10TObjPlayerFv(void *);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
s32 draw__16TObjEneRe7BeruraFv(void *);
s32 set_animation__10TObjPlayerFPvs(void *, s16);
s32 advance_animation_playback(void *);
void * find_entity_by_id(u16);
s32 free_collision_body_parts(void *);
s32 init_collision_body_parts(void *, void *, s32);
s32 minimap_render_dot(void *, s32, s32, s32);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 scale_matrix(s32, f32, f32, f32);
s32 rotate_matrix_y(s32, s32);
s32 rotate_matrix_x(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(s32);
s32 draw_chunk_object(s32);

extern Slot_8003F730 volopt_target_slot_used[];
extern u16 lbl_805D271C;
extern s32 lbl_805D2728;
extern int boss3_volopt_resources;
extern s32 vol_opt_active_hit_zone;
extern u16 boss3_volopt_monitor_base_actor_id;
extern int lbl_805D4C50;
extern int lbl_805D4C54;
extern int lbl_805D4C58;
extern int volopt_array_resource_ptr;
extern int volopt_resource_table_ptr;
extern s32 boss3_volopt_core_active_flag;
extern s32 boss3_volopt_turn_angle_limit;
extern s32 local_client_id;
extern const f32 lbl_805D86B0;
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
void TBoss3Volopt__sub_800C762C();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjEnemyCustom__sub_800C789C();
}
extern "C" {
void TObjEnemyCustom__sub_800C79C8();
}
extern "C" {
void TObjEnemyCustom__sub_800C7AE0();
}
extern "C" {
void TObjEnemyCustom__sub_800C7DD0();
}
extern "C" {
void TObjEnemyCustom__sub_800C7DF4();
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
void update_and_send_enemy_hit_state();
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
void apply_defense_stat_status__10TObjPlayerFlPv();
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
void call_player_preserving_field__15TObjEnemyCustomFPv();
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
void get_enemy_name__14TObjEnePanarmsFv();
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
void update_gigue__15TObjEnemyCustomFv();
}
extern "C" {
void update_if_active__15TObjEnemyCustomFPv();
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
    (void *)0x0, (void *)0x0, (void *)&destroy__16TBoss3VoloptCoreFPvs, (void *)&TObjPlayer__sub_800405D8,
    (void *)&teardown_render_state__10TObjPlayerFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEnemyCustom__sub_800C7DF4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&TObjPlayer__sub_80040ADC, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFlPv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjEnemyCustom__sub_800C7DD0, (void *)&update_if_active__15TObjEnemyCustomFPv,
    (void *)&update_gigue__15TObjEnemyCustomFv, (void *)&TObjEnemyCustom__sub_800C7AE0, (void *)&TObjEnemyCustom__sub_800C79C8, (void *)&TObjEnemyCustom__sub_800C789C,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state,
};
#define TBoss3VoloptCore__vtable ((s32 *)TBoss3VoloptCore__vtable)

extern "C" {
s32 alloc_boss_target_slot__10TObjPlayerFPvi(Obj_8003F730 *self, s32 _w1);
}

void TObjPlayer::set_grabbed_state(s32 arg0) {
    void *temp_r3;

    temp_r3 = find_entity_by_id(lbl_805D271C);
    if ((temp_r3 != NULL) && ((s16) *(s16 *)((s8 *)temp_r3 + 0x326) != 0xA)) {
        update_if_active__15TObjEneMe1GiGueFl(temp_r3, 0xA);
        *(s32 *)((s8 *)temp_r3 + 0x3C4) = arg0;
    }
}

void TObjPlayer::update_topple_state() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x10000);
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        if (angle_difference_abs(*(s32 *)((s8 *)arg0 + 0x60), *(s32 *)((s8 *)arg0 + 0x398) - 0x4000) <= (s32) boss3_volopt_turn_angle_limit) {
            *(s32 *)((s8 *)arg0 + 0x37C) = 3;
        } else {
            *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        }
        break;
    case 1:
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x3C4) - 1;
        *(s32 *)((s8 *)arg0 + 0x3C4) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            *(s32 *)((s8 *)arg0 + 0x37C) = 2;
        }
        break;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited(*(s32 *)((s8 *)arg0 + 0x60), *(s32 *)((s8 *)arg0 + 0x398) - 0x4000, boss3_volopt_turn_angle_limit);
        if (angle_difference_abs(*(s32 *)((s8 *)arg0 + 0x60), *(s32 *)((s8 *)arg0 + 0x398) - 0x4000) <= (s32) boss3_volopt_turn_angle_limit) {
            *(s32 *)((s8 *)arg0 + 0x37C) = 3;
        }
        break;
    case 3:
        play_persistent_sound(0x4003BC05, arg0, arg0 + 0x38, 0, 0);
        advance_animation_playback(arg0);
        *(s32 *)((s8 *)arg0 + 0x390) = (s32) (*(s32 *)((s8 *)arg0 + 0x390) - TObjPlayer__sub_80040AE4(0));
        *(s32 *)((s8 *)arg0 + 0x394) = (s32) (*(s32 *)((s8 *)arg0 + 0x394) - TObjPlayer__sub_80040AE4(0));
        TObjPlayer__sub_8003FCD0((u8 *)(arg0));
        *(s32 *)((s8 *)arg0 + 0x398) = calc_spin_value();
        if ((s32) *(s32 *)((s8 *)arg0 + 0x394) <= -0x238E) {
            ((VObj_8003f510_8003F4C0*)arg0)->m56();
        }
        break;
    }
    advance_animation_playback(arg0);
    if ((s32) vol_opt_active_hit_zone >= 0) {
        minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    }
}

void TObjPlayer::link_photon(u16 arg0) {
    void *temp_r3;
    void *temp_r4;
    void *temp_r5;

    temp_r3 = find_entity_by_id(lbl_805D271C);
    if ((temp_r3 != NULL) && ((s32) *(s32 *)((s8 *)temp_r3 + 0x3C8) <= 0)) {
        temp_r4 = find_entity_by_id(arg0);
        if (temp_r4 != NULL) {
            f32 temp_f1 = (*(f32 *)&lbl_805D86B0);
            temp_r5 = *(void **)((s8 *)temp_r3 + 0xA4);
            *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 0x04000000);
            ((VObj_8003F6B4_8003F4C0*)temp_r3)->m20(temp_r4, temp_f1);
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
        temp_r4 = *(s32 *)((s8 *)this + 0x388) | 0x20000;
        *(s32 *)((s8 *)this + 0x388) = temp_r4;
        *(s32 *)((s8 *)this + 0x3BC) = arg1;
        *(s32 *)((s8 *)this + 0x3C0) = arg2;
        *(s32 *)((s8 *)this + 0x3C4) = arg3;
        boss3_volopt_core_active_flag = 0;
        alloc_boss_target_slot__10TObjPlayerFPvi((Obj_8003F730 *)(this), (s32)(temp_r4));
        *(s32 *)((s8 *)this + 0x388) = (s32) (*(s32 *)((s8 *)this + 0x388) & 0xFFFFFFFE);
        ((VObj_8003FB3C_8003F4C0 *)this)->m57();
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
    return (s32) (lbl_805D86B4 * (f32) ((((s32) (u16) *(s32 *)((s8 *)this + 0x390) / 10922) * 0x3C) + 0x78));
}

void TObjPlayer::update_state_spin() {
    s32 temp_r3;
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)this + 0x30) = (s32) (*(s32 *)((s8 *)this + 0x30) | 0x40000);
        *(s32 *)((s8 *)this + 0x388) = (s32) (*(s32 *)((s8 *)this + 0x388) | 0x20000);
        *(s32 *)((s8 *)this + 0x390) = 0x4000;
        *(s32 *)((s8 *)this + 0x394) = -0x1555;
        *(u16 *)((s8 *)this + 0x338) = 0xFFFF;
        *(s32 *)((s8 *)this + 0x388) = (s32) (*(s32 *)((s8 *)this + 0x388) | 0x10000);
        *(s16 *)((s8 *)this + 0xB8) = 0;
        *(s32 *)((s8 *)this + 0x5C) = 0;
        TObjPlayer__sub_8003FCD0((u8 *)(this));
        *(s32 *)((s8 *)this + 0x398) = calc_spin_value();
        *(s32 *)((s8 *)this + 0x60) = (s32) *(s32 *)((s8 *)this + 0x398);
        *(s16 *)((s8 *)this + 0x33C) = 0x5A;
        *(s32 *)((s8 *)this + 0x37C) = 1;
    case 1:
        advance_animation_playback(this);
        temp_r3 = *(s16 *)((s8 *)this + 0x33C) - 1;
        *(s16 *)((s8 *)this + 0x33C) = temp_r3;
        if ((s16) temp_r3 <= 0) {
            *(s32 *)((s8 *)this + 0x30) = (s32) (*(s32 *)((s8 *)this + 0x30) & 0xFFFBFFFF);
            *(s32 *)((s8 *)this + 0x388) = (s32) (*(s32 *)((s8 *)this + 0x388) & 0xFFFFFFFE);
            ((E_V_8003fde8_8003F4C0 *) this)->m56();
        }
        break;
    case -1:
        break;
    }
}

s32 check_target_collision__10TObjPlayerFPv(u8 *arg0) {
    s32 found;
    s32 i;
    VObj_18_c44252 *obj;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x2A8) == 0U) {
        return 0;
    }
    found = 0;
    init_all_slots__10TObjPlayerFv();
    check_object_collisions__10TObjPlayerFv(arg0);
    if (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0x18) & 0x80000) {
        for (i = 0; i < 0x10; i++) {
            obj = (VObj_18_c44252 *)get_battle_param__10TObjPlayerFi(i);
            if (obj == NULL) {
                break;
            }
            if (((s32 (*)(void *))obj_is_hit_receivable)(obj) != 0) {
                if (obj->m18(arg0, lbl_805D86B0) != 0) {
                    obj->m23(arg0, lbl_805D86D4);
                    obj->m20(arg0, lbl_805D86B0);
                }
                if ((u32) obj == (u32) *(u32 *)((s8 *)arg0 + 0x2A8)) {
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
    temp_r0 = *(s32 *)((s8 *)this + 0x37C);
    switch (temp_r0) {
    case 0:
        if (obj_testFlags30((void *)(this), (s32)(0x02000000)) != 0) {
            *(s32 *)((s8 *)this + 0x388) = (s32) (*(s32 *)((s8 *)this + 0x388) | 0x40000);
        }
        obj_clearFlags30(this, 0x02200200);
        *(s16 *)((s8 *)this + 0x33E) = (s16) *(s16 *)((s8 *)this + 0x32C);
        *(s16 *)((s8 *)this + 0xB8) = 3;
        play_sound_effect(0x4003A81F, 0, 0, 0);
        play_sound_effect(0x4003BC20, 0, 0, 0);
        if ((s32) local_client_id == (s32) *(u16 *)((s8 *)this + 0x2D4)) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805D86D8);
        }
        *(s32 *)((s8 *)this + 0x3C8) = 0x14;
        *(s32 *)((s8 *)this + 0x37C) = 1;
    case 1:
        advance_animation_playback(this);
        if ((u32) *(u32 *)((s8 *)this + 0xB4) != 8U) {
            *(s32 *)((s8 *)this + 0x388) = (s32) (*(s32 *)((s8 *)this + 0x388) & 0xFFFFFFFE);
            if (*(s32 *)((s8 *)this + 0x388) & 0x40000) {
                TObjPlayer::set_grabbed_state((s32)(0xF));
            } else {
                update_if_active__15TObjEneMe1GiGueFl((void*)(this), (s32)(*(s32 *)((s8 *)this + 0x380)));
            }
        }
        return;
    case -1:
        *(s32 *)((s8 *)this + 0x388) = (s32) (*(s32 *)((s8 *)this + 0x388) & 0xFFFBFFFF);
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
        update_angle__10TObjPlayerFlPv(arg0, 0x800, arg0 + 0x308);
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
        scale_velocity__19TObjGyaranzoMissileFf(arg0 + 0x308, lbl_805D86E0);
        update_angle__10TObjPlayerFlPv(arg0, 0x800, arg0 + 0x308);
        vec3_add_to(arg0 + 0x38, arg0 + 0x308);
        if (check_target_collision__10TObjPlayerFPv(arg0) != 0) {
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
        temp_f31 = scale_velocity__19TObjGyaranzoMissileFf(arg0 + 0x308, lbl_805D86E0);
        update_angle__10TObjPlayerFlPv(arg0, 0x800, arg0 + 0x308);
        vec3_add_to(arg0 + 0x38, arg0 + 0x308);
        check_target_collision__10TObjPlayerFPv(arg0);
        if (temp_f31 < lbl_805D86E4) {
            *(u16 *)((s8 *)arg0 + 0x338) = 0xFFFF;
            ((VObj_18_8d846b *)arg0)->m57();
        }
        break;
    }
    advance_animation_playback(arg0);
    minimap_render_dot((void *)(arg0 + 0x38), (s32)(-0x5DB4), (s32)(1), (s32)(0));
}

void teardown_render_state__10TObjPlayerFPv(u8 *arg0) {
    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x02000000) && (((Fn80040464VObj_80040464_8003F4C0*)arg0)->m8(lbl_805D86E8, lbl_805D86EC) != 0)) {
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x5C));
        if (*(s32 *)((s8 *)arg0 + 0x388) & 0x10000) {
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x398));
            scale_matrix(0, (*(const f32 *)&(*(f32 *)&lbl_805D86B0)), (*(const f32 *)&(*(f32 *)&lbl_805D86B0)), lbl_805D86F0);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60) - *(s32 *)((s8 *)arg0 + 0x398));
        } else {
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x34));
        } else {
            draw__16TObjEneRe7BeruraFv(arg0);
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

void TObjPlayer__sub_800405D8(u8 *arg0) {
  f32 var_f1;
  s32 temp_r3;
  vol_opt_active_hit_zone = ((TObjPlayer *)arg0)->calc_hit_zone_index();
  if (check_demo_mode__10TObjPlayerFv() == 1)
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
  if (PSO_VCALL_VObj_18_b8f5cb_m31(arg0) != 0)
  {
    PSO_VCALL_VObj_18_b8f5cb_m61(arg0);
  }
  else
    if (PSO_VCALL_VObj_18_b8f5cb_m30(arg0) != 0)
  {
    if (((s32) (*((s32 *) (0x3C8 + ((s8 *) arg0))))) > 0)
    {
      obj_clearFlags30((void *)((void *) arg0), (s32)((int) 0x200));
    }
    else
    {
      PSO_VCALL_VObj_18_b8f5cb_m60(arg0);
    }
  }
  if (obj_testFlags30((void *)((void *)((void *) arg0)), (s32)((s32)((int) 0x4000))) != 0)
  {
    if (add_status_effect_timer__10TObjPlayerFll((void *) arg0, (int) 4, (int) (-1)) <= 0)
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
    update_prev_position__10TObjPlayerFv((void *) arg0);
    fn_8003CFEC((void *) (arg0 + 0x2FC));
    PSO_VCALL_VObj_18_b8f5cb_m53(arg0);
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

void *destroy__16TBoss3VoloptCoreFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = TBoss3VoloptCore__vtable;
        free_collision_body_parts(arg0);
        ((s32 (*)(s32))fn_8003CFEC)(0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TBoss3VoloptCore__ct(VObj_80040894 *arg0) {
    void *temp_r4;

    *(s32 *)((s8 *)arg0 + 0) = lbl_805D2728;
    *(s32 *)((s8 *)arg0 + 0xDC) = *(s32 *)((s8 *)(*(void * *)&volopt_resource_table_ptr) + 0x430);
    *(void **)((s8 *)arg0 + 0xD8) = boss3_volopt_core_hit_table;
    set_field_d8__10TObjPlayerFl(arg0, *(void **)((s8 *)arg0 + 0xD8));
    init_collision_body_parts(arg0, lbl_804839E4, 1);
    *(s32 *)((s8 *)arg0 + 0x368) = 0;
    *(void **)((s8 *)arg0 + 0x350) = lbl_804839C8;
    recalc_combat_stats__10TObjPlayerFv(arg0, (*(s32 *)&lbl_805D4C50), (*(s32 *)&lbl_805D4C54), (*(s32 *)&lbl_805D4C58), lbl_805D86B0, lbl_805D86B0);
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    set_field_b8__14TObjEnePanarmsFs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    *(s16 *)((s8 *)arg0 + 0x32C) = *(s16 *)((s8 *)arg0 + 0x2B8);
    *(s16 *)((s8 *)arg0 + 0x32E) = *(s16 *)((s8 *)arg0 + 0x2BA);
    *(s16 *)((s8 *)arg0 + 0x33E) = *(s16 *)((s8 *)arg0 + 0x32C);
    set_param__12TObjEneLappyFl(arg0, 0x2E);
    update_prev_position__10TObjPlayerFv(arg0);
    reset_photon_effect__12TBoss3VoloptFv(arg0);
    ((TObjPlayer *)arg0)->load_entry_params_volopt(0x18);
    *(s32 *)((s8 *)arg0 + 0x388) |= 0x10000;
    *(s32 *)((s8 *)arg0 + 0x390) = 0;
    temp_r4 = *(void **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)temp_r4 + 0x18) |= 0xC00;
    arg0->m56();
    add_flags_2e4__10TObjPlayerFUl(arg0, 4);
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

void *TBoss3VoloptCore__sub_80040A7C(void *arg0, void *arg1, void *arg2) {
    ((s32 (*)(void *, void *))TObjEnemyCustom__ct)(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = TBoss3VoloptCore__vtable;
    ((VObj_80040A7C *)arg0)->m79(arg2);
    ((s32 (*)(void *))TBoss3VoloptCore__ct)(arg0);
    return arg0;
}

int TObjPlayer__sub_80040ADC(void) { return 0; }

s32 TObjPlayer__sub_80040AE4(s32 i) {
    return (*(G_80040AE4 * *)&volopt_array_resource_ptr)->arr[i];
}

void TObjPlayer::load_entry_params_volopt(s32 i) {
    O_80040AF8 *self = (O_80040AF8 *)this;
    self->f34 = (*(G_80040AF8 * *)&volopt_resource_table_ptr)->entries[i].f8;
    self->f24 = (*(G_80040AF8 * *)&volopt_resource_table_ptr)->entries[i].fc;
}

}
