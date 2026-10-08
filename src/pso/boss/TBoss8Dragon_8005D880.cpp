#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Fade_800653C4 { char b[0x1C]; };

struct Dragon_800653C4 { char pad[0x580]; Fade_800653C4 fade[4]; };

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
    virtual s32 m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
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
    virtual M2C_UNK m103();
};

typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_8006426C { f32 x, y, z; };

struct Obj_8006426C {
    u8 pad0[0x3c0];
    Vec_8006426C a;
    u8 pad3cc[0x444 - 0x3cc];
    Vec_8006426C b;
    u8 pad450[0x578 - 0x450];
    s32 f578;
};

struct Vec_8006442C { f32 x, y, z; };

struct Fx_8006442C { u8 pad0[8]; f32 scale; u8 padC[8]; };

struct Dragon_8006442C {
    u8 pad0[0x3E4];
    Vec_8006442C a, b, c, d;
    Vec_8006442C e, f, g, h;
    u8 pad444[0x578 - 0x444];
    s32 f578;
};

typedef struct Vec_80063088 {
    f32 x, y, z;
} Vec_80063088;

typedef struct Res_80063088 {
    u8 pad0[0xC];
    s32 fC;
    s32 f10;
} Res_80063088;

struct VBase_80063088 { char pad[0x18]; };

struct Obj_80063088 : VBase_80063088 {
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
    virtual M2C_UNK m94();
    u8 pad1C[0x60 - 0x1C];
    s32 angle;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0x38C - 0xBA];
    u16 f38C;
    u8 pad38E[0x394 - 0x38E];
    f32 f394;
    f32 f398;
    f32 f39C;
    u8 pad3A0[0x444 - 0x3A0];
    Vec_80063088 fxPos;
    u8 pad450[0x490 - 0x450];
    s32 f490;
    u8 pad494[0x4C4 - 0x494];
    u8 f4C4[0x5F0 - 0x4C4];
    Res_80063088 *res;
    u8 pad5F4[0x6DC - 0x5F4];
    s32 state;
    s32 f6E0;
    u8 pad6E4[0x724 - 0x6E4];
    void *fx;
};

struct Vec_8005E594 { f32 x, y, z; };

struct Fx_8005E594 { u8 pad[0x14]; s32 f14; };

struct Hit2_8005E594 { u8 pad[4]; f32 y; };

struct Hit_8005E594 { u8 pad[4]; Hit2_8005E594 *p; };

struct Obj_8005E594 {
    u8 pad0[0x3E4];
    Vec_8005E594 cp[8];
    u8 pad444[0x5F0 - 0x444];
    Fx_8005E594 *fx;
    u8 pad5f4[0x734 - 0x5F4];
    void *parts[16];
};

struct VBase_18_81e212 { char pad[0x18]; };

struct VObj_18_81e212 : VBase_18_81e212 {
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
    virtual M2C_UNK m72(M2C_UNK);
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

struct Vec_80062BA0 { f32 x, y, z; };

struct Cam_80062BA0 { s8 a; s8 b; s16 c; f32 d; f32 e; };

struct Part_80064F50 { u8 pad0[4]; f32 f4; u8 pad8[4]; f32 fC; u8 pad10[8]; u32 flags; u8 pad1C[4]; f32 f20; u8 pad24[4]; f32 f28; };

struct Cfg_80064F50 { u8 pad[0x18]; s32 i18; s32 i1C; s32 i20; s32 i24; };

struct Obj_80064F50 { u8 pad0[0xA4]; Part_80064F50 *parts; u8 padA8[0x4C0 - 0xA8]; u32 flags4C0; u8 pad4C4[0x4E4 - 0x4C4]; s32 mode4E4; u8 pos4E8[4]; };

struct Vec_80060020 { f32 x, y, z; };

struct Hit2_80060020 { u8 pad[4]; f32 y; };

struct Hit_80060020 { u8 pad[4]; Hit2_80060020 *p; };

struct Cfg_80060020 { s16 h0; s16 h2; s32 f4; };

struct Fx_80060020 { u8 pad[4]; s32 f4; };

struct ObjBase_80060020 { char pad[0x18]; };

struct Obj_80060020 : ObjBase_80060020 {
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

struct Dragon_80060020 : Obj_80060020 {
    u8 pad1c[0x38 - 0x1C];
    Vec_80060020 pos;
    u8 pad44[0x5C - 0x44];
    s32 f5C;
    s32 f60;
    s32 f64;
    u8 pad68[0xB8 - 0x68];
    s16 fB8;
    u8 padba[0x4BC - 0xBA];
    Cfg_80060020 *f4BC;
    u32 f4C0;
    u8 pad4c4[0x5F0 - 0x4C4];
    Fx_80060020 *f5F0;
    u8 f5F4[0x6DC - 0x5F4];
    s32 f6DC;
    s32 f6E0;
    u8 pad6e4[0x6E8 - 0x6E4];
    s32 f6E8;
    u8 pad6ec[0x6F4 - 0x6EC];
    f32 f6F4;
};

extern "C" {
int VecCopy__FP3VecPC3Vec(void*, void*);
void queue_destruction__7TObjectFv(void *);
s32 get_flag_bit6__12TBoss8DragonFPv();
void advance_motion_timer__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_8005FB90(u8 *arg0);
void TBoss8Dragon__sub_80064694(s32 arg0);
void shift_position_history__12TBoss8DragonFi(s32 arg0);
int check_demo_mode__10TObjPlayerFv(void*);
M2C_UNK project_sound_origin_from_camera(void *, void *, f32);
s32 query_teammate_state__9TObjEneDDFPv();
s32 update_lobby_state__9TObjEneDDFPv(void *);
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_attack_receipts(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK TObjEneDD__sub_800BBA0C(void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK add_radar_scaled_marker(void *, int, int, int, f32);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK run_tasks__7TObjectFv(void *);
extern const f32 lbl_805D8D58;
extern const f32 lbl_805D8DAC;
void update_main__12TBoss8DragonFPv(u8 *arg0);
M2C_UNK fill_value_array(int);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK emit_enemy_effect__9TObjEneDDFiiPvi(void *, int, void *, int);
void TBoss8Dragon__sub_8006426C(Obj_8006426C *arg0);
int VecCopy__FP3VecPC3Vec(void*, void*);
M2C_UNK TBoss1Dragon__sub_80027A80(void *, void *);
M2C_UNK fill_value_array(int);
M2C_UNK TBoss8Dragon__sub_800670E0(int, void *);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK emit_enemy_effect__9TObjEneDDFiiPvi(void *, int, void *, int);
extern f32 lbl_80437D04[];
extern u8 lbl_80437D18[];
extern const f32 lbl_805D8D74;
void TBoss8Dragon__sub_8006442C(Dragon_8006442C *arg0);
void queue_destruction__7TObjectFv(void *);
void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
s32 TBoss8Dragon__sub_8005FAE0(u8 *arg0);
void advance_motion_entry__12TBoss8DragonFPv(void *arg0);
void spawn_ground_splash__12TBoss8DragonFPv(u8 *arg0);
void reset_float_3c__12TBoss8DragonFPv(void* a0);
void set_flag_4e4__12TBoss8DragonFPv(void* p);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
void * spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
f32 get_speed_or_default__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
void * __nw__7TObjectFUl(u32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
u8 *TBoss5GryphonShockWave__ct(u8 *arg0, u8 *arg1_parent, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s16 arg6);
extern M2C_UNK lbl_80437938[];
extern const f32 lbl_805D8D50;
extern const f32 lbl_805D8D54;
extern const f32 lbl_805D8D74;
extern const f32 lbl_805D8D80;
extern const f32 lbl_805D8E5C;
extern const f32 lbl_805D8E9C;
extern const f32 lbl_805D8EA0;
void TBoss8Dragon__sub_80063088(Obj_80063088 *self, u32 arg1);
int VecCopy__FP3VecPC3Vec(void*, void*);
u8 * csnVecterUnder(M2C_UNK *, M2C_UNK);
void * spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
extern const f32 lbl_805D8D58;
extern const f32 lbl_805D8D70;
extern const f32 lbl_805D8D74;
extern const f32 lbl_805D8D90;
extern const f32 lbl_805D8D94;
void update_ground_effects__12TBoss8DragonFPv(Obj_8005E594 *arg0);
int VecCopy__FP3VecPC3Vec(void*, void*);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 TBoss8Dragon__sub_8005D700();
void advance_motion_entry__12TBoss8DragonFPv(void *arg0);
void reset_float_3c__12TBoss8DragonFPv(void* a0);
void set_flag_4e4__12TBoss8DragonFPv(void* p);
Vec_80062BA0 *TBoss8Dragon__sub_80065F08(void);
void restore_player_cameras();
void activate_camera_mode(int);
void set_scripted_camera_pose(void *, void *, void *);
M2C_UNK cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
void update_prev_position__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
s32 play_sound_effect(int, void *, int, int);
M2C_UNK play_cue_stream_file(void *);
M2C_UNK init_all_slots__11TWindowCtrlFv();
M2C_UNK init_all_slots2__11TWindowCtrlFv();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Vec_80062BA0 lbl_80437DB8[];
extern const f64 lbl_80437EB0;
extern u8 lbl_80437EC0[];
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D74;
extern const f32 lbl_805D8DD4;
extern const f32 lbl_805D8E80;
extern const f32 lbl_805D8E84;
extern const f32 lbl_805D8E88;
void TBoss8Dragon__sub_80062BA0(u8 *arg0, u32 arg1);
M2C_UNK set_collider_contact_low(void *);
M2C_UNK set_collider_contact_high(void *);
M2C_UNK update_local_colliders_from_world(void *, void *);
extern const f32 lbl_805D8E10;
extern const f32 lbl_805D8E84;
extern const f32 lbl_805D8EAC;
void TObjEneDD__sub_80064F50(Obj_80064F50 *arg0);
f32 calc_random_ratio__10TObjPlayerFv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
void fire_at_angle__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0);
void move_along_angle__12TBoss8DragonFPvif(void *arg0, s32 arg1, f32 farg0);
void TBoss8Dragon__sub_800646F0(s32 arg0);
void reset_radius__12TBoss8DragonFPv(void* a0);
void reset_angle__12TBoss8DragonFPv(void* a0);
void set_phase__12TBoss8DragonFPv(void* p);
void clear_timer__12TBoss8DragonFPv(void* p);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
M2C_UNK fn_800660B8(void *);
M2C_UNK set_shake_preset__11TCameraCtrlFi(s32);
u8 * csnVecterUnder(M2C_UNK *, M2C_UNK);
M2C_UNK subtractive_rng_seed(void *, s32);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
s32 is_alive__9TObjEneDDFPv(void *);
f32 get_speed_or_default__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
u32 get_player_by_client_id(M2C_UNK);
M2C_UNK fn_80351DA8(void *, void *, void *, int, int);
f32 round_away_from_zero__20TWindowSubStatusDispFf(f32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f64 lbl_80437EB0;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D70;
extern const f32 lbl_805D8D74;
extern const f32 lbl_805D8D7C;
extern const f32 lbl_805D8D88;
extern const f32 lbl_805D8D90;
extern const f32 lbl_805D8DBC;
extern const f32 lbl_805D8DC0;
extern const f32 lbl_805D8DC4;
extern const f32 lbl_805D8DC8;
extern const f32 lbl_805D8DCC;
extern const f32 lbl_805D8DD0;
extern const f32 lbl_805D8DD4;
extern const f32 lbl_805D8DD8;
extern const f32 lbl_805D8DDC;
extern const f32 lbl_805D8DE0;
extern const f32 lbl_805D8DE4;
void TBoss8Dragon__sub_80060020(Dragon_80060020 *self, u32 arg1);
void update_target_from_state__12TBoss8DragonFPv(void *arg0);
s32 rand();
extern f32 lbl_80437E24[];
extern f32 lbl_80437E48[];
extern const f32 lbl_805D8D98;
extern const f32 lbl_805D8DA0;
extern const f32 lbl_805D8DA4;
extern const f32 lbl_805D8DA8;
extern const f32 lbl_805D8DAC;
extern const f32 lbl_805D8DB0;
extern const f32 lbl_805D8DB4;
void TBoss8Dragon__sub_8005F0B8(u8 *arg0, u32 *arg1);
M2C_UNK TBoss8Dragon__sub_80064C94(void *arg0, void *);
}

extern "C" {

struct V_8005DC0C { f32 x, y, z; };

struct Obj_8005DC0C {
    u8 pad0[0x326];
    s16 f326;
    u8 pad328[0x3C0 - 0x328];
    V_8005DC0C pts[8];
    u8 pad420[0x4E4 - 0x420];
    s32 f4e4;
};

struct Obj_8005DC0C;

struct VBase_14 { char pad[0x14]; };

struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    u32 f18;
};

struct Boss_8005DD68 { u8 pad[0x580]; VObj_14 fades[4]; };

struct RecoveredGlobal_8005E17C_lbl_8043797C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_8005E17C_lbl_804FF5C0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8005E1E8 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_8005E058 { f32 x, y, z; };

struct Obj_8005E058 { u8 pad0[0x3C0]; Vec_8005E058 src[10]; u8 pad438[0xB0]; Vec_8005E058 dst[10]; };

struct Obj_8005E0C0 { u8 pad[0x34]; s32 f34; u8 pad38[0x24]; s32 f5c; s32 f60; s32 f64; u8 pad68[0x90]; s32 ff8; u8 pad_fc[0x3C0 - 0xFC]; u8 f3c0[0x100]; s32 f4c0; };

typedef char RecoveredGlobal_8005E17C_lbl_8043797C_size[sizeof(RecoveredGlobal_8005E17C_lbl_8043797C) == 0x40 ? 1 : -1];

typedef char RecoveredGlobal_8005E17C_lbl_804FF5C0_size[sizeof(RecoveredGlobal_8005E17C_lbl_804FF5C0) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8005E1E8_lbl_804FF5CC_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5CC) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8005E1E8_lbl_804FF5D8_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5D8) == 0x10 ? 1 : -1];

struct Obj_8005E4D4 { u8 pad[0x734]; void *parts[16]; };

struct Obj_8005E52C { u8 pad[0x734]; void *parts[16]; };

struct Vec_8005E39C { f32 x, y, z; };

struct IVec_8005E39C { s32 x, y, z; };

struct Res_8005E39C { u8 pad[0x18]; s32 f18; s32 f1C; s32 f20; };

struct Obj_8005E39C {
    u8 pad0[0x60];
    s32 ang;
    u8 pad64[0x444 - 0x64];
    Vec_8005E39C pos;
    u8 pad450[0x5F0 - 0x450];
    Res_8005E39C *res;
    u8 pad5F4[0x724 - 0x5F4];
    void *eff[3];
};

struct E_8005E9D8 { s32 a; s32 b; };

struct O_8005E9D8 { u8 pad[8]; E_8005E9D8 e[1]; };

struct O_8005F740 { u8 pad[0x4a8]; u8 buf[0x14]; u8 *cur; u32 flags; };

struct P_8005F740 { u8 pad[0x30]; };

struct Obj_8005F968 { u8 pad[0x60]; s32 f60; u8 pad64[0x480 - 0x64]; s32 f480; };

struct O_8005FCE4 { u8 pad[0x4c0]; u32 flags; };

struct Vec_8005FBC4 { f32 x, y, z; };

struct Shot_8005FBC4 { f32 v[3]; };

struct Obj_8005FBC4 {
    u8 pad0[0x38];
    Vec_8005FBC4 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x474 - 0x64];
    Vec_8005FBC4 vel;
    s32 f480;
    u8 pad484[0x4c0 - 0x484];
    s32 flags;
    u8 pad4c4[0x4e4 - 0x4c4];
    s32 f4e4;
};

struct VBase_80062550 { char pad[0x18]; };

struct VObj_80062550 : VBase_80062550 {
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
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Vec_80062550 { f32 x, y, z; };

struct Tgt_80062550 {
    u8 pad0[4];
    s32 f4;
    s32 f8;
    f32 fc;
    f32 f10;
};

struct Obj_80062550 {
    u8 pad0[0x38];
    Vec_80062550 pos;
    u8 pad44[0xb8 - 0x44];
    s16 fb8;
    u8 padba[0x490 - 0xba];
    s32 f490;
    u8 pad494[0x4bc - 0x494];
    Tgt_80062550 *f4bc;
};

struct VBase_80060F4C { char pad[0x18]; };

struct VObj_80060F4C : VBase_80060F4C {
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
};

struct Obj_80060F4C {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fb8;
    u8 padba[0x4C0 - 0xBA];
    u32 flags;
};

struct Base_80065370_80062BA0 { char pad[0x18]; };

struct VObj_80065370_80062BA0 : Base_80065370_80062BA0 {
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
    virtual void vcall(s16 a, int b);
};

struct M2CCopy_10 { u8 bytes[0x10]; };

struct Stack_80063F34 {
    M2C_UNK sp8;
    f32 spC;
};

struct Stack_800646F0 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_800646F0_lbl_80437944 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800646F0_lbl_804FF5B4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8006435C {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_8006435C_lbl_80437D2C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8006435C_lbl_804FF5A0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064CFC_lbl_80487848 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80064CFC_lbl_804FF5A0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_80064694_lbl_80437CF0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064114_lbl_80437D68 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064114_lbl_804FF5B4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct O_80064AB0 { u8 pad[0x1c]; u16 id; u8 pad2[0x38c - 0x1e]; u16 kind; u8 pad3[6]; f32 x; u8 pad4[4]; f32 z; };

struct P_80064AB0 { u16 a; u16 id; u32 kind; f32 x; f32 z; };

struct VBase_8006369C { u8 pad[0x18]; };

struct Obj_8006369C : VBase_8006369C {
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
    u8 pad1C[0xB8 - 0x1C];
    s16 f_B8;
};

struct Vec_80064968 { f32 x, y, z; };

struct Atk_80064968 {
    u8 pad0[8];
    s32 f8;
};

struct Obj_80064968 {
    u8 pad0[0x3c0];
    Vec_80064968 parts[16];
    u8 pad480[0x578 - 0x480];
    s32 f578;
    u8 pad57c[0x5f0 - 0x57c];
    Atk_80064968 *f5f0;
};

struct VBase_80065658 { char pad[0x18]; };

struct VObj_80065658 : VBase_80065658 {
    virtual ~VObj_80065658();
};

struct Obj_80065658 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x4c4 - 0x1c];
    u8 f4c4[0x578 - 0x4c4];
    u32 f578;
    VObj_80065658 *f57c;
    u8 f580[0x734 - 0x580];
    void *objs[16];
};

struct VBase_80063570 { char pad[0x18]; };

struct VObj_80063570 : VBase_80063570 {
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
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Obj_80063570 {
    u8 pad0[0xb8];
    s16 fb8;
    u8 padba[0x490 - 0xba];
    s32 f490;
    u8 pad494[0x4c0 - 0x494];
    s32 flags;
};

struct VBase_18_444bc5 { char pad[0x18]; };

struct VObj_18_444bc5 : VBase_18_444bc5 {
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
    virtual M2C_UNK m94();
};

struct VBase_80062E94 { char pad[0x18]; };

struct VObj_80062E94 : VBase_80062E94 {
virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
};

struct Vec_80062E94 { f32 x, y, z; };

struct VBase_80063320 { char pad[0x18]; };

struct VObj_80063320 : VBase_80063320 {
virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
};

struct Base_80098E4C_80098DB0 { char pad[0x18]; };

struct VObj_80098E4C_80098DB0 : Base_80098E4C_80098DB0 {
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
    virtual int m97();
};

typedef char RecoveredGlobal_800646F0_lbl_80437944_size[sizeof(RecoveredGlobal_800646F0_lbl_80437944) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_800646F0_lbl_804FF5B4_size[sizeof(RecoveredGlobal_800646F0_lbl_804FF5B4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8006435C_lbl_80437D2C_size[sizeof(RecoveredGlobal_8006435C_lbl_80437D2C) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_8006435C_lbl_804FF5A0_size[sizeof(RecoveredGlobal_8006435C_lbl_804FF5A0) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80064114_lbl_80437D68_size[sizeof(RecoveredGlobal_80064114_lbl_80437D68) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80064114_lbl_804FF5B4_size[sizeof(RecoveredGlobal_80064114_lbl_804FF5B4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80064694_lbl_80437CF0_size[sizeof(RecoveredGlobal_80064694_lbl_80437CF0) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80064CFC_lbl_80487848_size[sizeof(RecoveredGlobal_80064CFC_lbl_80487848) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_80064CFC_lbl_804FF5A0_size[sizeof(RecoveredGlobal_80064CFC_lbl_804FF5A0) == 0x14 ? 1 : -1];

struct Vec_8005D880 { f32 x, y, z; };

struct Obj_8005D880 {
    u8 pad0[0x38];
    Vec_8005D880 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
};

struct Vec_8005D9BC { f32 x, y, z; };

struct Ent_8005E868 { s32 a; s32 b; s32 f8[]; };

struct Ent2_8005E868 { s32 a; s32 b; s32 f8; };

struct Seg_80063CDC { f32 x, y, z, w; };

int VecCopy__FP3VecPC3Vec(void*, void*);
f32 calc_random_ratio__10TObjPlayerFv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
void queue_destruction__7TObjectFv(void *);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TBoss1Dragon__sub_80027A80(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK fill_value_array(int);
s32 get_flag_bit6__12TBoss8DragonFPv();
s32 TBoss8Dragon__sub_8005D700();
s32 get_player_pos_in_arc__12TBoss8DragonFPviiPvPv(Obj_8005D880 *arg0, s32 arg1, s32 arg2, Vec_8005D880 *org, Vec_8005D880 *out);
void render_nodes_with_flag__12TBoss8DragonFi(s32 arg0);
s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0);
void render_with_fade__12TBoss8DragonFPvi(u8 *arg0, s32 arg1);
void render_model__12TBoss8DragonFPv(u8 *arg0);
void update_unless_demo__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_8005E040(void *arg0);
void draw_body__12TBoss8DragonFPv(Obj_8005E0C0 *self);
void TBoss8Dragon__sub_8005E17C(void);
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0);
void free_parts__12TBoss8DragonFPv(void *arg0);
void update_particle_positions__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_8005E39C(Obj_8005E39C *self);
void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self);
void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self);
s32 TBoss8Dragon__sub_8005E868(s32 arg0, Ent_8005E868 *arg1, s32 arg2);
s32 calc_product__12TBoss8DragonFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TBoss8Dragon__sub_8005E944(s32 arg0, s32 arg1, s32 arg2);
s32 TBoss8Dragon__sub_8005E9D8(void *self, O_8005E9D8 *o, s32 i);
s32 TBoss8Dragon__sub_8005E9E8(s32, s32, s32);
f32 TBoss8Dragon__sub_8005EA5C(f32 farg0, f32 farg1);
f32 TBoss8Dragon__sub_8005EAD0(void *arg0, void *arg1, int arg2);
void TBoss8Dragon__sub_8005EB6C(s32 arg0, u8 *arg1, s32 arg2);
void TBoss8Dragon__sub_8005EBDC(u8 *arg0, u8 *arg1, u8 *arg2);
void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2);
void TBoss8Dragon__sub_8005ED6C(s32 arg0, u8 *arg1, s32 arg2);
void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src);
void update_target_from_state__12TBoss8DragonFPv(void *arg0);
void play_animation_index__12TBoss8DragonFPvi(u8 *arg0, s32 arg1);
void set_animation_by_state__12TBoss8DragonFPv(void *arg0);
void init_state_zero__12TBoss8DragonFPv(void *arg0);
M2C_UNK TBoss8Dragon__sub_8005F684(void *, void *);
void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005F740(O_8005F740 *self);
void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void fire_at_angle__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005F968(void *selfv, s32 arg1, s32 arg2);
void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0);
void move_along_angle__12TBoss8DragonFPvif(void *arg0, s32 arg1, f32 farg0);
s32 TBoss8Dragon__sub_8005FAE0(u8 *arg0);
void advance_motion_entry__12TBoss8DragonFPv(void *arg0);
void advance_motion_timer__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_8005FB90(u8 *arg0);
void apply_velocity__12TBoss8DragonFPv(Obj_8005FBC4 *arg0);
void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg);
void state_move__12TBoss8DragonFPvi(Obj_80060F4C *arg0, s32 arg1);
void TBoss8Dragon__sub_80062550(Obj_80062550 *arg0, s32 arg1);
void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1);
void TBoss3Volopt__sub_800627E4(u8 *arg0, u32 arg1);
void TBoss8Dragon__sub_80062E94(u8 *arg0, u32 arg1);
void TBoss8Dragon__sub_80063320(u8 *arg0, u32 arg1);
void TBoss8Dragon__sub_80063570(Obj_80063570 *arg0, s32 arg1);
void TBoss8Dragon__sub_8006369C(Obj_8006369C *self, u32 arg1);
void TBoss8Dragon__sub_80063714(void);
void spawn_switch_attack__12TBoss8DragonFPv(void *arg0);
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_80063EF4(s32 arg0);
void spawn_ground_splash__12TBoss8DragonFPv(u8 *arg0);
void TBoss8Dragon__sub_80064114(s32 arg0, s32 arg1);
void TBoss8Dragon__sub_800641A8(u8 *arg0);
void TBoss8Dragon__sub_8006435C(u8 *arg0);
void TBoss8Dragon__sub_80064694(s32 arg0);
void TBoss8Dragon__sub_800646F0(s32 arg0);
void run_default_state__12TBoss8DragonFPv(void* p);
int update_state_3__12TBoss8DragonFPv(void* p);
int set_state_2__12TBoss8DragonFPv(void* p);
int attack_default__12TBoss8DragonFPv(void* p);
int query_default__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_80064828(u8 *arg0);
void TBoss8Dragon__sub_800648C8(u8 *arg0);
int emit_part_attack_effect__12TBoss8DragonFPvi(void *arg0, int arg1);
void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1);
void TBoss8Dragon__sub_80064AB0(O_80064AB0 *self);
void TBoss8Dragon__sub_80064B08(u8 *arg0, u8 *arg1);
void TBoss8Dragon__sub_80064B90(u8 *arg0, u8 *arg1);
void handle_6xA0_gal_gryphon_boss_actions(void *arg0);
void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1);
void handle_6x9F_gal_gryphon_boss_actions(void *arg0);
void TBoss8Dragon__sub_80064CFC(s32 arg0);
void reset_radius__12TBoss8DragonFPv(void* a0);
void set_anim_speed__12TBoss8DragonFPv(void* a0);
void reset_float_3c__12TBoss8DragonFPv(void* a0);
void reset_angle__12TBoss8DragonFPv(void* a0);
void set_phase__12TBoss8DragonFPv(void* p);
void set_attack_phase__12TBoss8DragonFPv(void* p);
void set_flag_4e4__12TBoss8DragonFPv(void* p);
void clear_timer__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_80064DB8(u8 *arg0);
void TBoss8Dragon__sub_80064E3C(u8 *arg0);
void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
void update_epsilon_position__12TBoss8DragonFv(void);
void shift_position_history__12TBoss8DragonFi(s32 arg0);
void TBoss8Dragon__sub_80065360(void);
void TBoss8Dragon__sub_80065364(void);
void TBoss8Dragon__sub_80065368(void);
void TBoss8Dragon__sub_8006536C(void);
void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370_80062BA0 *obj);
Obj_80065658 * TBoss8Dragon__sub_80065658(Obj_80065658 *o, s16 flag);
M2C_UNK init_color__12TBoss8DragonFPv(void *);
int TBoss8Dragon__sub_80065F4C(void*);
void TBoss8Dragon__sub_80065F80(void *);
void TBoss8Dragon__sub_8006602C(void *);
void bswap_boss_actions__12TBoss8DragonFi(void *);
void TBoss8Dragon__sub_800660A4(void *);
M2C_UNK attach_particle_model(s32, s32, s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK __ct__17TBoss5GryphonDemoFv(void *, s32, void *, f32);
M2C_UNK fn_800666C4(s32);
M2C_UNK TBoss8Dragon__sub_80067074(void *, void *);
M2C_UNK TBoss8Dragon__sub_800670E0(int, void *);
M2C_UNK play_pillar_sound__13TObjBoss5CtrlFv();
void get_camera_target_id__11TCameraCtrlFi(s32);
M2C_UNK TCameraCtrl__sub_8006A044(s32, f32);
M2C_UNK set_shake_preset__11TCameraCtrlFi(s32);
u8 * csnVecterUnder(M2C_UNK *, M2C_UNK);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
int check_demo_mode__10TObjPlayerFv(void*);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
void * spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void enable__13TParticleCtrlFPv(void *);
void TObjEneEpsilon__sub_800B9384(u8 *arg0, s32 arg1, f32 farg0);
s32 enemy_validate_retained_target(void *);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, M2C_UNK *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK enemy_set_target_id(void *, u16);
M2C_UNK update_velocity__9TObjEneDDFPv();
void __dt__9TObjEneDDFv(void *, int);
M2C_UNK get_target_state_a__9TObjEneDDFPv(void *);
M2C_UNK get_target_state_b__9TObjEneDDFPv(void *);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 reload_stats_keep_hp_tp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
M2C_UNK emit_effect_at_position__9TObjEneDDFPvPv(void *, void *);
M2C_UNK emit_enemy_effect__9TObjEneDDFiiPvi(void *, int, void *, int);
void setup_instance__9TObjEneDDFiiPvi(s32, s32, void *, s32);
u8 * try_move_actor_xz_on_ground(u8 *arg0, u8 *arg1);
void calc_shot_position__9TObjEneDDFPvPvfff(void *, void *, f32, f32, f32);
M2C_UNK transition_enemy_state(void *, s16);
void delete_buffer__12TBoss8DragonFis(u32, int);
s32 isFading__15RenderFadeStateCFv(int);
M2C_UNK restore__15RenderFadeStateFv(void *);
M2C_UNK fadeOut__15RenderFadeStateFv(void *);
void TObjPlayer__sub_800D7C58(void);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
void * get_enemy_entity(int);
M2C_UNK TObjLight__sub_801337F8(void *);
s32 angle_diff_s16(s32, s32);
f32 get_speed_or_default__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void advance_animation_playback(void *);
u8 * find_entity_by_id();
void free_collision_body_parts(void *);
u32 get_player_by_client_id(M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
void render_model_tree__12TBoss8DragonFPvPv(void* p, void* a1);
M2C_UNK play_persistent_sound(s32, s32, s32, M2C_UNK, M2C_UNK);
s32 play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(u32);
M2C_UNK render_nodes__7TObjectFv(s32, s32);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(int, int);
M2C_UNK init_all_slots__11TWindowCtrlFv();
M2C_UNK init_all_slots2__11TWindowCtrlFv();
M2C_UNK copy_position__12TBoss8DragonFii(u32, void *);
M2C_UNK TBoss5GryphonLightningEff__sub_80325064(void *);
void * __ct__25TBoss5GryphonLightningEffFv(void *, void *, void *, s32, f32, f32, f32);
M2C_UNK spawn_lightning_wing__12TBoss8DragonFiiiiii(void *, void *, void *, void *, s32, s32);
void __destroy_arr(void *, void *, int, int);
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vec3_dot(void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
void subtract_vector(void *, void *);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_current_scene__6TSceneFi(int);
M2C_UNK set_chunk_material_override_pair(int, int);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
void set_global_state__16TObjEneRe7BeruraFi(void *);

extern M2C_UNK lbl_80437938[];
extern RecoveredGlobal_800646F0_lbl_80437944 lbl_80437944;
extern RecoveredGlobal_8005E17C_lbl_8043797C lbl_8043797C;
extern s32 lbl_80437CCC[];
extern M2CCopy_14 lbl_80437CDC;
extern RecoveredGlobal_80064694_lbl_80437CF0 lbl_80437CF0;
extern RecoveredGlobal_8006435C_lbl_80437D2C lbl_80437D2C;
extern M2C_UNK lbl_80437D54[];
extern RecoveredGlobal_80064114_lbl_80437D68 lbl_80437D68;
extern M2C_UNK lbl_80437DC4[];
extern M2C_UNK lbl_80437DD0[];
extern M2C_UNK lbl_80437DDC[];
extern f32 lbl_80437DF4[];
extern f32 lbl_80437E04[];
extern f32 lbl_80437E14[];
extern s32 lbl_80437E6C[];
extern s32 lbl_80437E94[];
extern const f64 lbl_80437EB0;
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
extern RecoveredGlobal_800646F0_lbl_804FF5B4 lbl_804FF5B4;
extern RecoveredGlobal_8005E17C_lbl_804FF5C0 lbl_804FF5C0;
extern u8 lbl_804FF5CC[];
extern u8 lbl_804FF5D8[];
extern M2C_UNK lbl_805D4D98;
extern M2C_UNK lbl_805D4D9C;
extern u8 *lbl_805D4DA0;
extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern s32 lbl_805D4DAC;
extern s32 lbl_805D4DB0;
extern s32 lbl_805D4DB4;
extern s32 lbl_805D4DB8;
extern Obj_80065658 *lbl_805D4DBC;
extern f32 lbl_805D4DC0;
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5560;
extern s32 lbl_805D5660;
extern const f32 lbl_805D8D50;
extern const f32 lbl_805D8D54;
extern const f32 lbl_805D8D58;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D60;
extern const f32 lbl_805D8D64;
extern const f32 lbl_805D8D68;
extern const f32 lbl_805D8D6C;
extern const f32 lbl_805D8D70;
extern const f32 lbl_805D8D74;
extern const f32 lbl_805D8D78;
extern const f32 lbl_805D8D7C;
extern const f32 lbl_805D8D80;
extern const float lbl_805D8D84;
extern const f32 lbl_805D8D88;
extern const f32 lbl_805D8D8C;
extern const f32 lbl_805D8D98;
extern const f32 lbl_805D8D9C;
extern const f32 lbl_805D8DA0;
extern const f32 lbl_805D8DA4;
extern const f32 lbl_805D8DCC;
extern const f32 lbl_805D8DD0;
extern const f32 lbl_805D8DE4;
extern const float lbl_805D8DEC;
extern const f32 lbl_805D8DF4;
extern const f32 lbl_805D8DF8;
extern const f32 lbl_805D8E00;
extern const f32 lbl_805D8E04;
extern const f32 lbl_805D8E08;
extern const f32 lbl_805D8E0C;
extern const f32 lbl_805D8E10;
extern const f32 lbl_805D8E14;
extern const float lbl_805D8E20;
extern const f32 lbl_805D8E34;
extern const f32 lbl_805D8E5C;
extern const f32 lbl_805D8E60;
extern const f32 lbl_805D8E64;
extern const f32 lbl_805D8E68;
extern const f32 lbl_805D8E6C;
extern const f32 lbl_805D8E70;
extern const f32 lbl_805D8E74;
extern const f32 lbl_805D8E78;
extern const f32 lbl_805D8E7C;
extern const f32 lbl_805D8E8C;
extern const f32 lbl_805D8E90;
extern const f32 lbl_805D8E94;
extern const f32 lbl_805D8E98;
extern const f32 lbl_805D8EA4;
extern const f32 lbl_805D8EA8;
extern const f32 lbl_805D8EAC;
extern const f32 lbl_805D8EB0;
extern const f32 lbl_805D8EB4;
extern const f32 lbl_805D8EB8;
extern const f32 lbl_805D8EBC;
extern const f32 lbl_805D8EC0;
extern const float lbl_805D8EC4;
extern const f32 lbl_805D8EC8;
extern s32 some_id_805c6f74;
extern s32 tl_01;

#pragma push
#pragma fp_contract on
extern "C" {
void TBoss8Dragon__sub_8005F740(O_8005F740 *self);
void apply_velocity__12TBoss8DragonFPv(Obj_8005FBC4 *arg0);
void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370_80062BA0 *obj);
}

extern "C" {
extern M2CCopy_14 lbl_80437D40;
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
}

extern "C" {
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
}

extern "C" {
extern RecoveredGlobal_800646F0_lbl_804FF5B4 lbl_804FF5B4;
}

extern "C" {
s32 TBoss8Dragon__sub_8005E9D8(void *self, O_8005E9D8 *o, s32 i);
extern RecoveredGlobal_800646F0_lbl_804FF5B4 lbl_804FF5B4;
}

extern "C" {
void TBoss8Dragon__sub_8005D708();
}
extern "C" {
void TBoss8Dragon__sub_8005D860();
}
extern "C" {
void TBoss8Dragon__sub_8005DF60();
}
extern "C" {
void TBoss8Dragon__sub_8005FD34();
}
extern "C" {
void TBoss8Dragon__sub_8005FE18();
}
extern "C" {
void TBoss8Dragon__sub_8005FEF8();
}
extern "C" {
void TBoss8Dragon__sub_800605E8();
}
extern "C" {
void TBoss8Dragon__sub_80060788();
}
extern "C" {
void TBoss8Dragon__sub_8006084C();
}
extern "C" {
void TBoss8Dragon__sub_80060A58();
}
extern "C" {
void TBoss8Dragon__sub_80060B18();
}
extern "C" {
void TBoss8Dragon__sub_80060BF8();
}
extern "C" {
void TBoss8Dragon__sub_80060CA4();
}
extern "C" {
void TBoss8Dragon__sub_80060D9C();
}
extern "C" {
void TBoss8Dragon__sub_800610D0();
}
extern "C" {
void TBoss8Dragon__sub_8006116C();
}
extern "C" {
void TBoss8Dragon__sub_80061434(u8 *, s32);
}
extern "C" {
void TBoss8Dragon__sub_800615FC();
}
extern "C" {
void TBoss8Dragon__sub_800618CC();
}
extern "C" {
void TBoss8Dragon__sub_80061B8C();
}
extern "C" {
void TBoss8Dragon__sub_80061D34();
}
extern "C" {
void TBoss8Dragon__sub_80062018();
}
extern "C" {
void TBoss8Dragon__sub_80062114();
}
extern "C" {
void TBoss8Dragon__sub_800623E4();
}
extern "C" {
void TBoss8Dragon__sub_80062660();
}
extern "C" {
void TBoss8Dragon__sub_80063718();
}
extern "C" {
void TBoss8Dragon__sub_80065F1C();
}
extern "C" {
void TBoss8Dragon__sub_80065F20();
}
extern "C" {
void TBoss8Dragon__sub_80065F24();
}
extern "C" {
void TBoss8Dragon__sub_80065F28();
}
extern "C" {
void TBoss8Dragon__sub_80065F2C();
}
extern "C" {
void TBoss8Dragon__sub_80065F30();
}
extern "C" {
void TBoss8Dragon__sub_80065F34();
}
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
void TObjEneDD__vt86();
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
void TObjEneEpsilon__vt101();
}
extern "C" {
void TObjEneEpsilon__vt81();
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
void TObjPlayer__sub_80014890();
}
extern "C" {
void TObjPlayer__sub_80014894();
}
extern "C" {
void TObjPlayer__sub_80014898();
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
void apply_defense_stat_status__10TObjPlayerFv();
}
extern "C" {
void apply_knockback_from_attacker();
}
extern "C" {
void apply_object_set_data();
}
extern "C" {
void apply_set_data__9TObjEnemyFPvPv();
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
void is_target_in_attack_range__10TObjPlayerFv();
}
extern "C" {
extern u8 lbl_804378C8[];
}
extern "C" {
extern u8 lbl_804378D8[];
}
extern "C" {
extern u8 lbl_804378F0[];
}
extern "C" {
extern u8 lbl_80437908[];
}
extern "C" {
extern u8 lbl_80437918[];
}
extern "C" {
extern u8 lbl_804379BC[];
}
extern "C" {
extern u8 lbl_804379CC[];
}
extern "C" {
extern u8 lbl_804379E0[];
}
extern "C" {
extern u8 lbl_804379F4[];
}
extern "C" {
extern u8 lbl_80437A08[];
}
extern "C" {
extern u8 lbl_80437A20[];
}
extern "C" {
extern u8 lbl_80437A38[];
}
extern "C" {
extern u8 lbl_80437A50[];
}
extern "C" {
extern u8 lbl_80437A6C[];
}
extern "C" {
extern u8 lbl_80437A88[];
}
extern "C" {
extern u8 lbl_80437AA0[];
}
extern "C" {
extern u8 lbl_80437AB8[];
}
extern "C" {
extern u8 lbl_80437ACC[];
}
extern "C" {
extern u8 lbl_80437AE4[];
}
extern "C" {
extern u8 lbl_80437AFC[];
}
extern "C" {
extern u8 lbl_80437B18[];
}
extern "C" {
extern u8 lbl_80437B30[];
}
extern "C" {
extern u8 lbl_80437B4C[];
}
extern "C" {
extern u8 lbl_80437B64[];
}
extern "C" {
extern u8 lbl_80437B7C[];
}
extern "C" {
extern u8 lbl_80437B94[];
}
extern "C" {
extern u8 lbl_80437BAC[];
}
extern "C" {
extern u8 lbl_80437BC4[];
}
extern "C" {
extern u8 lbl_80437BE0[];
}
extern "C" {
extern u8 lbl_80437BF8[];
}
extern "C" {
extern u8 lbl_80437C14[];
}
extern "C" {
extern u8 lbl_80437C2C[];
}
extern "C" {
extern u8 lbl_80437C44[];
}
extern "C" {
extern u8 lbl_80437C5C[];
}
extern "C" {
extern u8 lbl_80437C74[];
}
extern "C" {
extern u8 lbl_80437C8C[];
}
extern "C" {
extern u8 lbl_80437CA4[];
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
extern void *lbl_80487848[4];
extern void *lbl_80487858[14];
extern void *lbl_80487A88[5];
extern void *lbl_80487A9C[140];
extern "C" {
void TBoss8Dragon__sub_8005EB00(u8 *arg0, u8 *arg1);
}
void *lbl_80487848[4] = {
    (void *)&lbl_804378C8, (void *)&lbl_804378D8, (void *)&lbl_804378F0, (void *)0x0,
};
void *lbl_80487858[14] = {
    (void *)&lbl_80437908, (void *)0x0, (void *)&lbl_80437918, (void *)&lbl_80487848,
    (void *)&lbl_80487858, (void *)0x30001, (void *)0x1e, (void *)0x1f,
    (void *)0x20, (void *)0x21, (void *)0x22, (void *)0x1e,
    (void *)0x1f, (void *)0x20,
};
void *lbl_80487890[3] = {
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_8048789C[3] = {
    (void *)0x0, (void *)0x1, (void *)0x2,
};
void *lbl_804878A8[3] = {
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804878B4[117] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41200000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x41200000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41200000, (void *)0x0, (void *)0x0, (void *)0x8003,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41200000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41200000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x41200000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41700000, (void *)0x0, (void *)0x0, (void *)0x8003,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41700000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x41700000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_80487A88[5] = {
    (void *)&lbl_804379BC, (void *)&lbl_804379CC, (void *)&lbl_804379E0, (void *)&lbl_804379F4,
    (void *)0x0,
};
void *lbl_80487A9C[140] = {
    (void *)&lbl_80437A08, (void *)&lbl_80437A20, (void *)&lbl_80437A38, (void *)&lbl_80437A50,
    (void *)&lbl_80437A6C, (void *)&lbl_80437A88, (void *)&lbl_80437AA0, (void *)&lbl_80437AB8,
    (void *)&lbl_80437ACC, (void *)&lbl_80437AE4, (void *)&lbl_80437AFC, (void *)&lbl_80437B18,
    (void *)&lbl_80437B30, (void *)&lbl_80437B4C, (void *)&lbl_80437B64, (void *)&lbl_80437B7C,
    (void *)&lbl_80437B94, (void *)&lbl_80437BAC, (void *)&lbl_80437BC4, (void *)&lbl_80437BE0,
    (void *)&lbl_80437BF8, (void *)&lbl_80437C14, (void *)&lbl_80437C2C, (void *)&lbl_80437C44,
    (void *)&lbl_80437C5C, (void *)&lbl_80437C74, (void *)&lbl_80437C8C, (void *)0x0,
    (void *)&lbl_80437CA4, (void *)&lbl_80487A88, (void *)&lbl_80487A9C, (void *)0x4001b,
    (void *)0x10000, (void *)0x9, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x10000, (void *)0xb, (void *)0x3f000000, (void *)0x0,
    (void *)0x30000, (void *)0x1, (void *)0x3edc28f6, (void *)0x0,
    (void *)0x30000, (void *)0xa, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0x0, (void *)0x3f451eb8, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3ef5c28f, (void *)0x0,
    (void *)0x20007, (void *)0x2, (void *)0x3f333333, (void *)0x6,
    (void *)0x10000, (void *)0x5, (void *)0x3f666666, (void *)0x7,
    (void *)0x30000, (void *)0x4, (void *)0x3f11eb85, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f333333, (void *)0x0,
    (void *)0x2000b, (void *)0x16, (void *)0x3f800000, (void *)0xa,
    (void *)0x10000, (void *)0x15, (void *)0x3f800000, (void *)0xb,
    (void *)0x30000, (void *)0x17, (void *)0x3f800000, (void *)0x0,
    (void *)0x2000e, (void *)0xf, (void *)0x3ecccccd, (void *)0xd,
    (void *)0x10000, (void *)0xe, (void *)0x3eb33333, (void *)0xe,
    (void *)0x30000, (void *)0xc, (void *)0x3ecccccd, (void *)0x0,
    (void *)0x20011, (void *)0x19, (void *)0x3f400000, (void *)0x10,
    (void *)0x10000, (void *)0x18, (void *)0x3eb33333, (void *)0x11,
    (void *)0x30000, (void *)0x1a, (void *)0x3f19999a, (void *)0x0,
    (void *)0x20014, (void *)0x13, (void *)0x3f000000, (void *)0x13,
    (void *)0x10000, (void *)0x11, (void *)0x3f800000, (void *)0x14,
    (void *)0x30000, (void *)0x14, (void *)0x3f000000, (void *)0x15,
    (void *)0x30000, (void *)0x12, (void *)0x3ecccccd, (void *)0x16,
    (void *)0x30000, (void *)0xd, (void *)0x3eb33333, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f266666, (void *)0x0,
    (void *)0x30000, (void *)0x7, (void *)0x3f800000, (void *)0x80000000,
    (void *)0x30000, (void *)0x10, (void *)0x3f000000, (void *)0x0,
};
void *lbl_80487CCC[3] = {
    (void *)0x0, (void *)0x419e6666, (void *)0xc0a00000,
};
void *lbl_80487CD8[213] = {
    (void *)0x0, (void *)0x41cb70a4, (void *)0x4235ae14, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80063714, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_8006369C, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80063570,
    (void *)0x0, (void *)0xffffffff, (void *)&update_active_player_count__19TPlayerBattleCtrl4PFPvi, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss3Volopt__sub_800627E4, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_80062BA0, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80063320,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80063088, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80062660, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_80062550, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_800623E4,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80062E94, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80062114, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_80062018, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80061D34,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80061B8C, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_800618CC, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_800615FC, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80061434,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8006116C, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_800610D0, (void *)0x0, (void *)0xffffffff,
    (void *)&state_move__12TBoss8DragonFPvi, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80060D9C,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80060CA4, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80060BF8, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_80060B18, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80060A58,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8006084C, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80060788, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_800605E8, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_80060020,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8005FEF8, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8005FE18, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_8005FD34, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8005FCE4,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_8048802C[16] = {
    (void *)0x0, (void *)0x42860000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x42d60000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x43130000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x42820000, (void *)0x0, (void *)0x0,
};
void *lbl_8048806C[16] = {
    (void *)0x0, (void *)0x42860000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x431d0000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x43998000, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x42820000, (void *)0x0, (void *)0x0,
};
void *lbl_804880AC[3] = {
    (void *)0xc1c80000, (void *)0x0, (void *)0x428a0000,
};
void *lbl_804880B8[126] = {
    (void *)0x41980000, (void *)0x0, (void *)0x428a0000, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8005ED6C, (void *)0x0, (void *)0xffffffff,
    (void *)&calc_params__12TBoss8DragonFiPvi, (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8005EBDC,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8005EB6C, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss8Dragon__sub_8005EB00, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss8Dragon__sub_8005EB00, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_804882B0[3] = {
    (void *)0x0, (void *)0xc61c4000, (void *)0x0,
};
void *lbl_804882BC[3] = {
    (void *)0x0, (void *)0xc61c4000, (void *)0x0,
};
void *lbl_804882C8[107] = {
    (void *)0x0, (void *)0x0, (void *)&TBoss8Dragon__sub_80065658, (void *)&update_main__12TBoss8DragonFPv,
    (void *)&TBoss8Dragon__sub_8005DF60, (void *)&update_unless_demo__12TBoss8DragonFPv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TBoss8Dragon__sub_8006536C, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&TBoss8Dragon__sub_80065F1C, (void *)&TBoss8Dragon__sub_80065F20, (void *)&TBoss8Dragon__sub_80065F24, (void *)&TBoss8Dragon__sub_80065F28,
    (void *)&TBoss8Dragon__sub_80065F2C, (void *)&TBoss8Dragon__sub_80065F30, (void *)&TBoss8Dragon__sub_80065F34, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TBoss8Dragon__sub_80065360, (void *)&TBoss8Dragon__sub_80065364, (void *)&TBoss8Dragon__sub_80065368,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TBoss8Dragon__sub_80063718,
    (void *)&TObjEneDD__sub_80064F50, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneEpsilon__vt101, (void *)&TBoss8Dragon__sub_8005D860, (void *)&TBoss8Dragon__sub_8005D708,
};
#define lbl_80487848 (*(RecoveredGlobal_80064CFC_lbl_80487848 *)lbl_80487848)
#define lbl_804882B0 ((u8 *)lbl_804882B0)
#define lbl_804882BC ((M2C_UNK *)lbl_804882BC)
#define lbl_804882C8 ((u8 *)lbl_804882C8)

s32 get_player_pos_in_arc__12TBoss8DragonFPviiPvPv(Obj_8005D880 *arg0, s32 arg1, s32 arg2, Vec_8005D880 *org, Vec_8005D880 *out) {
    Obj_8005D880 *p;
    f32 dx;
    f32 dz;
    f32 px;
    f32 pz;
    s32 ang;

    p = ((Obj_8005D880 * (*)(s32))get_player_by_client_id)(arg2);
    if (p == 0) {
        return 0;
    }
    pz = p->pos.z;
    px = p->pos.x;
    dz = pz - arg0->pos.z;
    dx = px - arg0->pos.x;
    if (dx * dx + dz * dz < lbl_805D8D60) {
        return 0;
    }
    ang = angle_diff_s16((s32)(((const f64 *)&lbl_80437EB0)[0] * get_ad_end_text_start__10TObjPlayerFv(px - org->x, pz - org->z)), arg0->f60);
    if (arg1 != 0) {
        if ((f32)(s32)(u16)ang > lbl_805D8D64) {
            return 0;
        }
    } else {
        if ((f32)(s32)(u16)ang < lbl_805D8D68) {
            return 0;
        }
    }
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(out, &p->pos);
    return 1;
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005D9BC(u8 *arg0, s32 arg1, s32 arg2) {
    Vec_8005D9BC pos;
    Vec_8005D9BC mid;
    Vec_8005D9BC out;
    Vec_8005D9BC tmp;
    f32 r;
    s32 ang;
    u8 *p;

    r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x5F4);
    r = lbl_805D8D6C * r + lbl_805D8D6C;
    ang = (s32)(lbl_805D8D64 * calc_random_ratio__10TObjPlayerFv(arg0 + 0x5F4) + (f32)M2C_FIELD(arg0, s32 *, 0x60));
    if (arg1 != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x6DC) == 0) return;
        copy_position__12TBoss8DragonFii(M2C_FIELD(arg0, u32 *, 0x6DC), &pos);
    } else {
        if (M2C_FIELD(arg0, u32 *, 0x6E0) == 0) return;
        copy_position__12TBoss8DragonFii(M2C_FIELD(arg0, u32 *, 0x6E0), &pos);
    }
    if (((s32 (*)(void *, s32, s32, void *, void *))get_player_pos_in_arc__12TBoss8DragonFPviiPvPv)(arg0, arg1, arg2, &pos, &out) == 0) {
        if (arg1 != 0) {
            ang = (s32)((f32)ang + lbl_805D8D68);
        }
        out.x = r * sin_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x38);
        out.y = M2C_FIELD(arg0, f32 *, 0x3C);
        out.z = r * cos_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x40);
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&tmp, &out);
        p = ((u8 * (*)(void *, s32))csnVecterUnder)(&tmp, 0x16EF);
        if (p == NULL || M2C_FIELD(M2C_FIELD(p, u8 **, 4), f32 *, 4) > lbl_805D8D70) {
            out.x = lbl_805D8D6C * sin_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x38);
            out.y = M2C_FIELD(arg0, f32 *, 0x3C);
            out.z = lbl_805D8D6C * cos_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x40);
        }
    }
    mid.x = lbl_805D8D74 * (pos.x + out.x);
    mid.y = lbl_805D8D78 + pos.y;
    mid.z = lbl_805D8D74 * (pos.z + out.z);
    spawn_lightning_wing__12TBoss8DragonFiiiiii(arg0, &pos, &mid, &out, 0x14, 0x11);
}
extern int fold_flush_1;
#pragma pop

void render_nodes_with_flag__12TBoss8DragonFi(s32 arg0) {
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x400;
    render_nodes__7TObjectFv(arg0 + 0x4C4, temp_r4);
    some_id_805c6f74 = lbl_805D5660;
}

s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0) {
    V_8005DC0C cam;
    V_8005DC0C dir;
    f32 len;
    u8 *pl;
    s32 i;
    if (lbl_805D4DF0 == 0) {
        return 0;
    }
    if (arg0->f326 == 4) {
        return 0;
    }
    if (get_flag_bit6__12TBoss8DragonFPv() != 0) {
        return 0;
    }
    if (arg0->f4e4 != 0) {
        return 0;
    }
    get_camera_target_id__11TCameraCtrlFi(-1);
    pl = find_entity_by_id();
    if (pl == 0) {
        return 0;
    }
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&cam, lbl_805D4DF0 + 0x178);
    cam.y = lbl_805D8D5C;
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&dir, pl + 0x38);
    subtract_vector(&dir, &cam);
    dir.y = lbl_805D8D5C;
    len = clamp_velocity__15TObjBoss2TunnelFPv(&dir);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(lbl_804FF5CC, &cam);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(lbl_804FF5D8, &dir);
    lbl_805D4DC0 = len;
    for (i = 0; i < 4; i++) {
        if (((s32 (*)(void *, void *, f32))TBoss8Dragon__sub_8005E1E8)(arg0, &arg0->pts[lbl_80437E94[i]], lbl_805D8D80) != 0) {
            return 1;
        }
    }
    return 0;
}

void render_with_fade__12TBoss8DragonFPvi(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    clear_global_flag_400__9TObjEneDDFv();
    lbl_805D5660 = some_id_805c6f74;
    set_current_scene__6TSceneFi((int) (0));
    if (TBoss8Dragon__sub_8005DC0C((Obj_8005DC0C *) (arg0)) != 0) {
        fadeOut__15RenderFadeStateFv(&((Boss_8005DD68 *)arg0)->fades[arg1]);
    } else {
        restore__15RenderFadeStateFv(&((Boss_8005DD68 *)arg0)->fades[arg1]);
    }
    temp_r31 = (u8 *)&((Boss_8005DD68 *)arg0)->fades[arg1];
    if (isFading__15RenderFadeStateCFv((int) (temp_r31)) != 0) {
        ((VObj_14 *)(temp_r31))->m6();
    }
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    scale_matrix((int) (0), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58));
    toggle_particle_effect__10TObjPlayerFv();
    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
    end_effect_render__13TParticleCtrlFv();
    TObjLight__sub_801337F8((void *) (lbl_805D5560));
    pop_matrix();
    set_chunk_material_override_pair((int) (0xFF00), (int) (0));
    set_current_scene__6TSceneFi((int) (0xBF));
    some_id_805c6f74 = lbl_805D5660;
}

void render_model__12TBoss8DragonFPv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r4;

    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    scale_matrix((int) (0), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58));
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r4 = (unsigned char *) (M2C_FIELD(lbl_805D4DA0, void **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 0x18);
    ((M2C_UNK (*)(void *, int))draw__16TObjEneRe7BeruraFPv)((void *) (arg0), (int) (temp_r4));
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
    pop_matrix();
}

void update_unless_demo__12TBoss8DragonFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { ((int (*)(void*))render_model__12TBoss8DragonFPv)(p); } }

void TBoss8Dragon__sub_8005E040(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (*(f32 *)&lbl_805D8D84);
    }
}

void TBoss8Dragon__sub_8005E058(Obj_8005E058 *self) {
    s32 i;
    Vec_8005E058 *d = self->dst;
    for (i = 0; i < 10; i++) {
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(d, &self->src[lbl_80437E6C[i]]);
        d++;
    }
}

void draw_body__12TBoss8DragonFPv(Obj_8005E0C0 *self) {
    lbl_805D4DAC = 0;
    lbl_805D4DB0 = 0;
    lbl_805D4DB4 = (s32)self->f3c0;
    lbl_805D4DB8 = self->f4c0;
    set_global_state__16TObjEneRe7BeruraFi((void *)TBoss8Dragon__sub_8005E17C);
    ((void (*)(void))push_matrix)();
    set_global_flag__10TObjPlayerFv();
    ((void (*)(void *))post_translate_matrix)((u8 *)self + 0x38);
    ((void (*)(int, int))rotate_matrix_y)(0, self->f60);
    ((void (*)(int, int))rotate_matrix_x)(0, self->f5c);
    ((void (*)(int, int))rotate_matrix_z)(0, self->f64);
    ((void (*)(int, f32, f32, f32))scale_matrix)(0, lbl_805D8D58, lbl_805D8D58, lbl_805D8D58);
    ((void (*)(void *))get_speed_or_default__10TObjPlayerFPv)(self);
    render_model_tree__12TBoss8DragonFPvPv((void *)self->f34, (void *)self->ff8);
    clear_global_state__10TObjPlayerFv();
    ((void (*)(void))pop_matrix)();
    set_global_state__16TObjEneRe7BeruraFi(0);
}

void TBoss8Dragon__sub_8005E17C(void) {
    s32 temp_r4;
    if ((s32) lbl_805D4DAC == (s32) M2C_FIELD(&lbl_8043797C.value, M2C_UNK *, (lbl_805D4DB0 * 4))) {
        temp_r4 = lbl_805D4DB4;
        lbl_805D4DB4 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_804FF5C0.value, temp_r4);
        lbl_805D4DB0 += 1;
    }
    lbl_805D4DAC += 1;
}

#pragma push
#pragma fp_contract on
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8005E1E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8005E1E8, spC) == 0x4) ? 1 : -1];
    Stack_8005E1E8 stack;
    f32 temp_f1;
    f32 temp_f31;
    ((M2C_UNK (*)(void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8));
    stack.spC = lbl_805D8D5C;
    ((M2C_UNK (*)(void *, void *))subtract_vector)((void *) (&stack.sp8), (void *) (&(*(RecoveredGlobal_8005E1E8_lbl_804FF5CC *)&lbl_804FF5CC).value));
    temp_f1 = clamp_velocity__15TObjBoss2TunnelFPv((void *) (&stack.sp8));
    if ((temp_f1 + farg0) < (*(const f32 *)&lbl_805D4DC0)) {
        temp_f31 = temp_f1 * (lbl_805D8D88 / newton_sqrtf((f32) ((temp_f1 * temp_f1) + (farg0 * farg0))));
        if (vec3_dot((void *) (&stack.sp8), (void *) (&(*(RecoveredGlobal_8005E1E8_lbl_804FF5D8 *)&lbl_804FF5D8).value)) >= temp_f31) {
            return 1;
        }
    }
    return 0;
}
extern int fold_flush_2;
#pragma pop

void free_parts__12TBoss8DragonFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x72C) != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x72C));
        M2C_FIELD(arg0, u32 *, 0x72C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x728) != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x728));
        M2C_FIELD(arg0, u32 *, 0x728) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x724) != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x724));
        M2C_FIELD(arg0, u32 *, 0x724) = 0U;
    }
}

void update_particle_positions__12TBoss8DragonFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x724) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x724), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x724));
    }
    if (M2C_FIELD(arg0, void **, 0x728) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x728), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x728));
    }
    if (M2C_FIELD(arg0, void **, 0x72C) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x72C), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x72C));
    }
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005E39C(Obj_8005E39C *self) {
    Vec_8005E39C pos;
    IVec_8005E39C rot;
    pos.x = lbl_805D8D8C * sin_table_lookup(self->ang) + self->pos.x;
    pos.y = self->pos.y;
    pos.z = lbl_805D8D8C * cos_table_lookup(self->ang) + self->pos.z;
    rot.x = 0;
    rot.y = self->ang;
    rot.x = 0x4000;
    if (self->eff[0] == NULL) {
        self->eff[0] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f18, 0x2040);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[0], &rot);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[0], &pos);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[0], &rot);
    }
    if (self->eff[1] == NULL) {
        self->eff[1] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f1C, 0x40);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[1], &pos);
    }
    if (self->eff[2] == NULL) {
        self->eff[2] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f20, 0x40);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[2], &rot);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[2], &pos);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[2], &rot);
    }
}
extern int fold_flush_3;
#pragma pop

void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self) {
    s32 i;
    for (i = 15; i >= 0; i--) {
        if (self->parts[i] != 0) {
            queue_destruction__7TObjectFv(self->parts[i]);
            self->parts[i] = 0;
        }
    }
}

void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (self->parts[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(self->parts[i], lbl_804882B0);
            enable__13TParticleCtrlFPv(self->parts[i]);
        }
    }
}

#pragma push
#pragma fp_contract on
void update_ground_effects__12TBoss8DragonFPv(Obj_8005E594 *arg0) {
    Vec_8005E594 pts[16];
    Vec_8005E594 *p;
    Vec_8005E594 *q;
    s32 i;
    p = pts;
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->cp[0]));
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->cp[1]));
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->cp[2]));
    VecCopy__FP3VecPC3Vec((void*)(p), (void*)(&arg0->cp[3]));
    p[1].x = (lbl_805D8D58 * arg0->cp[0].x + arg0->cp[1].x) / lbl_805D8D90;
    p[1].y = (lbl_805D8D58 * arg0->cp[0].y + arg0->cp[1].y) / lbl_805D8D90;
    p[1].z = (lbl_805D8D58 * arg0->cp[0].z + arg0->cp[1].z) / lbl_805D8D90;
    p[2].x = (lbl_805D8D58 * arg0->cp[1].x + arg0->cp[0].x) / lbl_805D8D90;
    p[2].y = (lbl_805D8D58 * arg0->cp[1].y + arg0->cp[0].y) / lbl_805D8D90;
    p[2].z = (lbl_805D8D58 * arg0->cp[1].z + arg0->cp[0].z) / lbl_805D8D90;
    p[3].x = lbl_805D8D74 * (arg0->cp[1].x + arg0->cp[2].x);
    p[3].y = lbl_805D8D74 * (arg0->cp[1].y + arg0->cp[2].y);
    p[3].z = lbl_805D8D74 * (arg0->cp[1].z + arg0->cp[2].z);
    p[4].x = lbl_805D8D74 * (arg0->cp[2].x + arg0->cp[3].x);
    p[4].y = lbl_805D8D74 * (arg0->cp[2].y + arg0->cp[3].y);
    p[4].z = lbl_805D8D74 * (arg0->cp[2].z + arg0->cp[3].z);
    p += 5;
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->cp[4]));
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->cp[5]));
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->cp[6]));
    VecCopy__FP3VecPC3Vec((void*)(p), (void*)(&arg0->cp[7]));
    p[1].x = (lbl_805D8D58 * arg0->cp[4].x + arg0->cp[5].x) / lbl_805D8D90;
    p[1].y = (lbl_805D8D58 * arg0->cp[4].y + arg0->cp[5].y) / lbl_805D8D90;
    p[1].z = (lbl_805D8D58 * arg0->cp[4].z + arg0->cp[5].z) / lbl_805D8D90;
    p[2].x = (lbl_805D8D58 * arg0->cp[5].x + arg0->cp[4].x) / lbl_805D8D90;
    p[2].y = (lbl_805D8D58 * arg0->cp[5].y + arg0->cp[4].y) / lbl_805D8D90;
    p[2].z = (lbl_805D8D58 * arg0->cp[5].z + arg0->cp[4].z) / lbl_805D8D90;
    p[3].x = lbl_805D8D74 * (arg0->cp[5].x + arg0->cp[6].x);
    p[3].y = lbl_805D8D74 * (arg0->cp[5].y + arg0->cp[6].y);
    p[3].z = lbl_805D8D74 * (arg0->cp[5].z + arg0->cp[6].z);
    p[4].x = lbl_805D8D74 * (arg0->cp[6].x + arg0->cp[7].x);
    p[4].y = lbl_805D8D74 * (arg0->cp[6].y + arg0->cp[7].y);
    p[4].z = lbl_805D8D74 * (arg0->cp[6].z + arg0->cp[7].z);
    q = pts;
    for (i = 0; i < 16; i++, q++) {
        Hit_8005E594 *hit = (Hit_8005E594 *)csnVecterUnder((M2C_UNK *)q, 0x16EF);
        if (hit == NULL) {
            q->y = lbl_805D8D94;
        } else {
            f32 y = hit->p->y;
            if (y > lbl_805D8D70) {
                q->y = lbl_805D8D70;
            } else {
                q->y = y;
            }
        }
        if (arg0->parts[i] == NULL) {
            arg0->parts[i] = spawn_continuous_particle_effect_with_flags(q, arg0->fx->f14, 0x40);
        } else {
            copy_pos__11TNowLoadingFPvPv(arg0->parts[i], q);
        }
    }
}
#pragma pop

s32 TBoss8Dragon__sub_8005E868(s32 arg0, Ent_8005E868 *arg1, s32 arg2) {
    s32 v;

    v = arg1[arg2].f8[0];
    if (v > 0) {
        return 1;
    }
    if (v < 0) {
        return -1;
    }
    if ((lbl_805D8D98 * (f32) rand()) >= lbl_805D8D74) {
        return 1;
    }
    return -1;
}

s32 calc_product__12TBoss8DragonFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;

    temp_r31 = TBoss8Dragon__sub_8005E9E8(arg0, arg1, arg3);
    return temp_r31 * ((s32 (*)(s32, s32, s32))TBoss8Dragon__sub_8005E868)(arg0, arg1, arg2);
}

#pragma push
#pragma fp_contract on
s32 TBoss8Dragon__sub_8005E944(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (((f32) arg2 * (lbl_805D8D98 * (f32) rand())) + (f32) arg1);
}
extern int fold_flush_4;
#pragma pop

s32 TBoss8Dragon__sub_8005E9D8(void *self, O_8005E9D8 *o, s32 i) {
    return o->e[i].a;
}

#pragma push
#pragma fp_contract on
f32 TBoss8Dragon__sub_8005EA5C(f32 farg0, f32 farg1) {
    return (farg1 * (lbl_805D8D98 * (f32) rand())) + farg0;
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma scheduling off
f32 TBoss8Dragon__sub_8005EAD0(void *arg0, void *arg1, int arg2) {
  u8 *temp_r4;
  temp_r4 = (u8 *)arg1 + (arg2 * 8);
  return ((f32 (*)(int, f32, f32))TBoss8Dragon__sub_8005EA5C)((int)arg0, (f32) (*((f32 *) (((s8 *) temp_r4) + 0x28))), (f32) (*((f32 *) (((s8 *) temp_r4) + 0x2C))));
}
extern int fold_flush_6;
#pragma pop

void TBoss8Dragon__sub_8005EB00(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = (s32) (lbl_805D8D9C * (lbl_805D8D98 * (f32) rand()));
}

void TBoss8Dragon__sub_8005EB6C(s32 arg0, u8 *arg1, s32 arg2) {
    f32 temp_f1;
    temp_f1 = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (temp_f1 * temp_f1);
    M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 0);
    M2C_FIELD(arg1, s32 *, 4) = ((s32 (*)(void *, void *, int, int))calc_product__12TBoss8DragonFiiii)((void *) (arg0), (void *) (arg2), (int) (0), (int) (1));
}

void TBoss8Dragon__sub_8005EBDC(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r3;
    temp_r3 = ((s32 (*)(void *, void *, int))TBoss8Dragon__sub_8005E9E8)((void *) (arg0), (void *) (arg2), (int) (0));
    switch (temp_r3) {
    case 0:
        temp_r31 = (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x40))));
        temp_f31 = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f31 * ((f32 (*)(int))sin_table_lookup)((int) (temp_r31)));
        M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f31 * ((f32 (*)(int))cos_table_lookup)((int) (temp_r31)));
        break;
    case 1:
        M2C_FIELD(arg1, f32 *, 4) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
        M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 2);
        break;
    }
    M2C_FIELD(arg1, f32 *, 0xC) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 0);
    M2C_FIELD(arg1, s32 *, 0x10) = ((s32 (*)(void *, void *, int))TBoss8Dragon__sub_8005E9E8)((void *) (arg0), (void *) (arg2), (int) (1));
}

void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 4) = TBoss8Dragon__sub_8005E9E8(arg0, arg2, 1);
    M2C_FIELD(arg1, f32 *, 0xC) = ((f32 (*)(s32, s32, M2C_UNK))TBoss8Dragon__sub_8005EAD0)(arg0, arg2, 0);
    M2C_FIELD(arg1, f32 *, 0x10) = ((f32 (*)(s32, s32, M2C_UNK))TBoss8Dragon__sub_8005EAD0)(arg0, arg2, 1);
    M2C_FIELD(arg1, s32 *, 8) = ((s32 (*)(s32, s32, M2C_UNK))TBoss8Dragon__sub_8005E868)(arg0, arg2, 0);
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005ED6C(s32 arg0, u8 *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 4) = calc_product__12TBoss8DragonFiiii(arg0, arg2, 0, 1);
    M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *) (arg0), (void *) (arg2), (int) (0));
}
extern int fold_flush_7;
#pragma pop

void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src) {
    M2C_FIELD(dst, s16 *, 0) = (s16) M2C_FIELD(src, s32 *, 0);
    M2C_FIELD(dst, s16 *, 2) = ((s16 (*)(void *, s16, s16))TBoss8Dragon__sub_8005E944)(arg0, M2C_FIELD(src, s16 *, 4), M2C_FIELD(src, s16 *, 6));
}

#define F(t, o) M2C_FIELD(arg0, t *, o)
#define TBL(o) M2C_FIELD(F(u8 *, 0x778), s32 *, o)
#define LEVEL M2C_FIELD(*(u8 **)(lbl_804FF5B4.remaining + 4), s32 *, 0x28)
void TBoss8Dragon__sub_8005F0B8(u8 *arg0, u32 *arg1) {
    f32 r;
    if (*arg1 != 0x21) {
        update_target_from_state__12TBoss8DragonFPv(arg0);
        return;
    }
    r = lbl_805D8D98 * (f32)rand();
    switch (TBoss8Dragon__sub_8005E9D8(arg0, (O_8005E9D8 *)arg1, 0)) {
    case 0:
        if (r < lbl_805D8DA0) {
            F(s32, 0x774) = TBL(8);
        } else if (r < lbl_805D8DA4) {
            F(s32, 0x774) = TBL(0xC);
        } else {
            F(s32, 0x774) = TBL(0x10);
        }
        break;
    case 1:
        if ((F(s32, 0x4C0) & 0x200) && LEVEL >= 5) {
            F(s32, 0x774) = TBL(0x24);
            F(s32, 0x4C0) &= ~0x200;
            break;
        }
        F(s32, 0x4C0) |= 0x200;
        if (r < lbl_80437E24[LEVEL]) {
            F(s32, 0x774) = TBL(0x24);
            break;
        }
        r = (f32)F(s16, 0x32C) / (f32)F(s16, 0x2B8);
        if (lbl_805D8D98 * (f32)rand() < lbl_80437E48[LEVEL]) {
            if (lbl_805D8D98 * (f32)rand() < r) {
                F(s32, 0x774) = TBL(0x1C);
            } else {
                F(s32, 0x774) = TBL(0x20);
            }
        } else {
            if (lbl_805D8D98 * (f32)rand() < r) {
                F(s32, 0x774) = TBL(0x14);
            } else {
                F(s32, 0x774) = TBL(0x18);
            }
        }
        break;
    case 2:
        if (r < lbl_80437E24[LEVEL]) {
            F(s32, 0x774) = TBL(0x24);
        } else {
            F(s32, 0x774) = TBL(0x28);
        }
        break;
    case 3:
        if (r < lbl_805D8DA8) {
            F(s32, 0x774) = TBL(0x2C);
        } else if (r < lbl_805D8DAC) {
            F(s32, 0x774) = TBL(0x30);
        } else if (r < lbl_805D8DA0) {
            F(s32, 0x774) = TBL(0x34);
        } else if (r < lbl_805D8DB0) {
            F(s32, 0x774) = TBL(0x38);
        } else {
            F(s32, 0x774) = TBL(0x3C);
        }
        break;
    case 4:
        if (r < lbl_805D8DB4) {
            if (LEVEL >= 2) {
                F(s32, 0x774) = TBL(0x4C);
            } else {
                F(s32, 0x774) = TBL(0x40);
            }
        } else if (r < lbl_805D8DA0) {
            if (LEVEL >= 4) {
                F(s32, 0x774) = TBL(0x50);
            } else {
                F(s32, 0x774) = TBL(0x44);
            }
        } else {
            if (LEVEL >= 6) {
                F(s32, 0x774) = TBL(0x54);
            } else {
                F(s32, 0x774) = TBL(0x48);
            }
        }
        break;
    case 5:
        F(s32, 0x774) = TBL(0x58);
        break;
    case 6:
        F(s32, 0x774) = TBL(0x10);
        break;
    }
}

void update_target_from_state__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x40);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 8);
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x60);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x5C);
        return;
    }
}

void play_animation_index__12TBoss8DragonFPvi(u8 *arg0, s32 arg1) {
    struct { u8 pad[0x30]; } sp8;
    s32 temp_r5;
    init_color__12TBoss8DragonFPv((void *) (&sp8));
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x778);
    M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(temp_r5, M2C_UNK *, (arg1 * 4));
    ((M2C_UNK (*)(void *, void *, int))trigger_effect__12TBoss8DragonFPvi)((void *) (arg0), (void *) (&sp8), (int) (temp_r5));
    TBoss8Dragon__sub_8005F684((void *) (arg0), (void *) (&sp8));
    ((M2C_UNK (*)(void *, void *))copy_spawn_params__12TBoss8DragonFPvPv)((void *) (arg0), (void *) (&sp8));
}

void set_animation_by_state__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) | 8);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        ((M2C_UNK (*)(void *, M2C_UNK))play_animation_index__12TBoss8DragonFPvi)(arg0, 0x19);
        return;
    case 1:
        ((M2C_UNK (*)(void *, M2C_UNK))play_animation_index__12TBoss8DragonFPvi)(arg0, 0x1A);
        return;
    case 3:
        ((M2C_UNK (*)(void *, M2C_UNK))play_animation_index__12TBoss8DragonFPvi)(arg0, 0x1B);
        return;
    case 2:
        ((M2C_UNK (*)(void *, M2C_UNK))play_animation_index__12TBoss8DragonFPvi)(arg0, 0x1C);
        return;
    }
}

void init_state_zero__12TBoss8DragonFPv(void *arg0) {
    ((M2C_UNK (*)(void *, M2C_UNK))play_animation_index__12TBoss8DragonFPvi)(arg0, 0);
}

void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    fn_800666C4(arg1 + 0x14);
}

void TBoss8Dragon__sub_8005F740(O_8005F740 *self) {
    P_8005F740 p;
    if ((self->flags & 2) && self->cur >= self->buf) {
        ((void (*)(void *))init_color__12TBoss8DragonFPv)(&p);
        ((void (*)(void *, void *))trigger_effect__12TBoss8DragonFPvi)(self, &p);
        ((void (*)(void *, void *))TBoss8Dragon__sub_8005F684)(self, &p);
        self->flags &= ~2;
        copy_spawn_params__12TBoss8DragonFPvPv(self, &p);
    }
}

void update_periodic_effect__12TBoss8DragonFPv(void *arg0) {
    ((M2C_UNK (*)(void))update_epsilon_position__12TBoss8DragonFv)();
    if (!(M2C_FIELD(arg0, s32 *, 0x490) & 0x1F)) {
        if (enemy_validate_retained_target(arg0) != 0) {
            enemy_copy_target_destination(arg0);
        } else {
            copy_position__14TObjEneEpsilonFPv(arg0, lbl_80437938);
        }
        ((M2C_UNK (*)(void *))TBoss8Dragon__sub_80064AB0)(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x490) = (s32) (M2C_FIELD(arg0, s32 *, 0x490) + 1);
}

void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) (M2C_FIELD(arg0, f32 *, 0x474) * farg0);
    M2C_FIELD(arg0, f32 *, 0x478) = (f32) (M2C_FIELD(arg0, f32 *, 0x478) * farg1);
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) (M2C_FIELD(arg0, f32 *, 0x47C) * farg0);
    M2C_FIELD(arg0, s32 *, 0x480) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x480) * farg2);
}

void fire_at_angle__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(-M2C_FIELD(arg0, f32 *, 0x38), -M2C_FIELD(arg0, f32 *, 0x40))));
}

void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    update_velocity__9TObjEneDDFPv();
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))));
}

void TBoss8Dragon__sub_8005F968(void *selfv, s32 arg1, s32 arg2) {
    s32 t;
    s32 v;

    t = angle_diff_s16(((Obj_8005F968 *)selfv)->f60, arg2);
    t = angle_diff_s16((s32)((f32)t * lbl_805D8DA0), ((Obj_8005F968 *)selfv)->f480);
    v = (t < -arg1) ? -arg1 : ((t < arg1) ? t : arg1);
    ((Obj_8005F968 *)selfv)->f480 = ((Obj_8005F968 *)selfv)->f480 - v;
}

void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0) {
    update_velocity__9TObjEneDDFPv();
    ((M2C_UNK (*)(void *, s32, f32))move_along_angle__12TBoss8DragonFPvif)(arg0, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), farg0);
}

#pragma push
#pragma fp_contract on
void move_along_angle__12TBoss8DragonFPvif(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) ((farg0 * sin_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x474));
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) ((farg0 * cos_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x47C));
}
extern int fold_flush_8;
#pragma pop

s32 TBoss8Dragon__sub_8005FAE0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xC8) <= lbl_805D8D5C;
}

void advance_motion_entry__12TBoss8DragonFPv(void *arg0) {
    s16 *ptr;
    ptr = (s16 *) (M2C_FIELD(arg0, s32 *, 0x4BC) + 0x14);
    M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) ptr;
    ptr = (s16 *) M2C_FIELD(arg0, s32 *, 0x4BC);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != *ptr) {
        transition_enemy_state(arg0, *ptr);
    }
}

void advance_motion_timer__12TBoss8DragonFPv(void *arg0) {
    int temp_r4;
    void *temp_r5;
    void *temp_r4b;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 4) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x4BC);
        temp_r4 = (s16) M2C_FIELD(temp_r5, s16 *, 2);
        if (temp_r4 > 0) {
            M2C_FIELD(temp_r5, s16 *, 2) = (s16) (temp_r4 - 1);
            temp_r4b = M2C_FIELD(arg0, void **, 0x4BC);
            if (M2C_FIELD(temp_r4b, s16 *, 2) == 0) {
                advance_motion_entry__12TBoss8DragonFPv((void *)(arg0));
            }
        }
    }
}

void TBoss8Dragon__sub_8005FB90(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
}

void apply_velocity__12TBoss8DragonFPv(Obj_8005FBC4 *arg0) {
    Shot_8005FBC4 shot;
    Vec_8005FBC4 v;
    f32 len;
    if (arg0->flags & 0x10) {
        arg0->pos.y += arg0->vel.y;
        arg0->f60 += arg0->f480;
        v.x = arg0->vel.x;
        v.y = lbl_805D8D5C;
        v.z = arg0->vel.z;
        len = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        calc_shot_position__9TObjEneDDFPvPvfff(arg0, &shot, v.x, v.z, len);
        try_move_actor_xz_on_ground((u8 *)arg0, (u8 *)&shot);
    } else {
        arg0->pos.x += arg0->vel.x;
        arg0->pos.y += arg0->vel.y;
        arg0->pos.z += arg0->vel.z;
        arg0->f60 += arg0->f480;
    }
    if (!(arg0->flags & 0x20)) {
        scale_size__12TBoss8DragonFPvfff(arg0, lbl_80437DF4[arg0->f4e4], lbl_80437E04[arg0->f4e4], lbl_80437E14[arg0->f4e4]);
    }
}

void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg) {
    switch (msg) {
    case 4:
        self->flags |= 0x80;
        queue_destruction__7TObjectFv(self);
        break;
    case 5:
        break;
    case 6: case 7: case 8: case 9: case 10: case 11:
        return;
    }
}

#pragma push
#pragma fp_contract on
#define PLAY_SE(o, id) ((void (*)(void *, s32))play_se__12TBoss8DragonFii)((o), (id))
void TBoss8Dragon__sub_80060020(Dragon_80060020 *self, u32 arg1) {
    Vec_80060020 w;
    Vec_80060020 v;
    Vec_80060020 p;
    switch (arg1) {
    case 4:
        self->fB8 = 0x14;
        self->m94();
        set_phase__12TBoss8DragonFPv(self);
        reset_radius__12TBoss8DragonFPv(self);
        self->f4C0 |= 4;
        PLAY_SE(self, 0x4003A818);
        subtractive_rng_seed(self->f5F4, self->f4BC->f4);
        self->f5C = 0x4000;
        self->f6E8 = 0;
        self->f6E0 = (f32)self->f4BC->h2 - round_away_from_zero__20TWindowSubStatusDispFf(lbl_805D8DBC);
        self->f6F4 = lbl_805D8DC4 / ((f32)self->f4BC->h2 - round_away_from_zero__20TWindowSubStatusDispFf(lbl_805D8DC0));
        self->f6DC = 0;
        break;
    case 0:
        advance_animation_playback(self);
        switch (self->f6DC) {
        case 0: {
            u8 *pl;
            s32 a2;
            s32 ang;
            s32 found;
            f32 r;
            f32 xx = self->pos.x * self->pos.x;
            f32 zz = self->pos.z * self->pos.z;
            if (xx + zz > lbl_805D8DC8) {
                fire_at_angle__12TBoss8DragonFPvi(self, 0x100);
            } else {
                update_heading__12TBoss8DragonFPvi(self, 0x100);
            }
            update_facing__12TBoss8DragonFPvf(self, lbl_805D8D90);
            self->pos.y -= self->f6F4;
            self->f64 += 0x3311;
            if (self->f6E8 >= self->f6E0) {
                self->fB8 = 0x16;
                fn_800660B8(self);
                self->f6DC = 1;
            }
            found = 0;
            ang = lbl_805D8D7C * calc_random_ratio__10TObjPlayerFv(self->f5F4);
            r = calc_random_ratio__10TObjPlayerFv(self->f5F4);
            if (calc_random_ratio__10TObjPlayerFv(self->f5F4) > lbl_805D8D74) {
                pl = ((u8 *(*)(u16))get_player_by_client_id)((s32)(lbl_805D8DCC * calc_random_ratio__10TObjPlayerFv(self->f5F4)));
                if (is_alive__9TObjEneDDFPv(pl) != 0) {
                    Hit_80060020 *hit;
                    r *= lbl_805D8DD0;
                    do {
                        v.x = r * sin_table_lookup(ang) + ((Vec_80060020 *)(pl + 0x38))->x;
                        v.y = lbl_805D8DD0 + ((Vec_80060020 *)(pl + 0x38))->y;
                        v.z = r * cos_table_lookup(ang) + ((Vec_80060020 *)(pl + 0x38))->z;
                        hit = (Hit_80060020 *)csnVecterUnder((M2C_UNK *)&v, 0x16EF);
                        ang += 0x2000;
                    } while (hit == NULL || hit->p->y > lbl_805D8D70);
                    found = 1;
                }
            }
            if (found == 0) {
                Hit_80060020 *hit;
                r *= lbl_805D8DD4;
                do {
                    v.x = r * sin_table_lookup(ang);
                    v.y = lbl_805D8D5C;
                    v.z = r * cos_table_lookup(ang);
                    hit = (Hit_80060020 *)csnVecterUnder((M2C_UNK *)&v, 0x16EF);
                    r -= lbl_805D8DCC;
                } while (hit == NULL || hit->p->y > lbl_805D8D70);
            }
            {
                a2 = lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(v.x - self->pos.x, v.z - self->pos.z);
                w.x = lbl_805D8DD0 * sin_table_lookup(a2) + self->pos.x;
                w.y = lbl_805D8DD0 + self->pos.y;
                w.z = lbl_805D8DD0 * cos_table_lookup(a2) + self->pos.z;
            }
            if (self->f6E8 % 5 == 0) {
                fn_80351DA8(self, &w, &v, 0x28, 0x11);
            }
            if (self->f6E8 == 0x14) {
                PLAY_SE(self, 0x40033C12);
            }
            self->f6E8++;
            break;
        }
        case 1: {
            f32 s;
            ((void (*)(f32, void *, s32))move_along_angle__12TBoss8DragonFPvif)(lbl_805D8D88, self, self->f60);
            self->pos.y -= self->f6F4;
            s = get_speed_or_default__10TObjPlayerFPv(self);
            self->f5C = lbl_805D8D7C - lbl_805D8DD8 * (lbl_805D8D88 - s / lbl_805D8DDC);
            self->f64 = lbl_805D8DE0 * (lbl_805D8DDC - s) * (lbl_805D8DDC - s);
            if (objInBand__FP7GameObjf(self, lbl_805D8DDC) != 0) {
                self->f5C = 0;
                self->f64 = 0;
                self->f6DC = 2;
            }
            break;
        }
        case 2:
            ((void (*)(f32, void *, s32))move_along_angle__12TBoss8DragonFPvif)(lbl_805D8D88, self, self->f60);
            self->pos.y -= self->f6F4;
            if (objInBand__FP7GameObjf(self, lbl_805D8DE4) != 0) {
                clear_timer__12TBoss8DragonFPv(self);
                reset_angle__12TBoss8DragonFPv(self);
                PLAY_SE(self, 0x40032D0D);
                p.x = self->pos.x;
                p.y = lbl_805D8D5C;
                p.z = self->pos.z;
                spawn_particle_effect_with_flags(&p, self->f5F0->f4, 0x40);
                set_shake_preset__11TCameraCtrlFi(1);
                ((void (*)(void *))TBoss8Dragon__sub_800646F0)(self);
                self->f6DC = 3;
            }
            break;
        case 3:
            break;
        }
        break;
    case 5:
        clear_timer__12TBoss8DragonFPv(self);
        reset_angle__12TBoss8DragonFPv(self);
        self->f5C = 0;
        self->f64 = 0;
        self->f4C0 &= ~4;
        break;
    case 8:
        switch (self->f6DC) {
        case 0:
        case 1:
            update_periodic_effect__12TBoss8DragonFPv(self);
            break;
        case 2:
        case 3:
            break;
        }
        break;
    case 11:
        break;
    }
}
#pragma pop

void state_move__12TBoss8DragonFPvi(Obj_80060F4C *arg0, s32 arg1) {
    f32 speed;
    f32 scale;
    f32 depth;
    f32 v;
    s32 ang;
    switch (arg1) {
    case 4:
        arg0->fb8 = 0xB;
        ((VObj_80060F4C *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv(arg0);
        reset_angle__12TBoss8DragonFPv(arg0);
        arg0->flags |= 0x30;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
        ((void (*)(void *))TBoss8Dragon__sub_80064DB8)(arg0);
        ((void (*)(void *))update_velocity__9TObjEneDDFPv)(arg0);
        TBoss8Dragon__sub_8006426C((Obj_8006426C *)(arg0));
        ((void (*)(void *))TBoss8Dragon__sub_80064828)(arg0);
        v = get_speed_or_default__10TObjPlayerFPv(arg0);
        if (v < lbl_805D8E10 || v >= lbl_805D8DE4) {
            depth = lbl_805D8E04;
            ang = 0;
            speed = lbl_805D8D5C;
            scale = lbl_805D8DA4;
        } else {
            depth = lbl_805D8E04;
            ang = 0xD0;
            speed = lbl_805D8D88;
            scale = lbl_805D8E08;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8D74) != 0) {
            ang += 0x500;
            speed += lbl_805D8E14;
        }
        scale_size__12TBoss8DragonFPvfff(arg0, scale, depth, depth);
        move_along_angle__12TBoss8DragonFPvif(arg0, arg0->f60, speed);
        update_heading__12TBoss8DragonFPvi(arg0, ang);
        return;
    case 5:
        arg0->flags &= ~0x30;
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

struct VBase_80061434 { char pad[0x18]; };
struct VObj_80061434 : VBase_80061434 {
#define V(n) virtual void m##n();
V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)V(90)V(91)V(92)V(93)V(94)
#undef V
};
struct Vec_80061434 { f32 x, y, z; };

M2C_UNK eval_bezier_curve__12TBoss8DragonFPviiPvf(void *, s32, s32, void *, f32);
extern const f32 lbl_805D8E38;

void TBoss8Dragon__sub_80061434(u8 *arg0, s32 arg1) {
    Vec_80061434 out;
    Vec_80061434 at;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0x16;
        ((VObj_80061434 *)arg0)->m94();
        set_flag_4e4__12TBoss8DragonFPv(arg0);
        reset_float_3c__12TBoss8DragonFPv(arg0);
        M2C_FIELD(arg0, u32 *, 0x4C0) |= 4;
        update_particle_positions__12TBoss8DragonFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x6DC)) {
        case 0:
            ((void (*)(f32, void *, s32))move_along_angle__12TBoss8DragonFPvif)(lbl_805D8E38, arg0, M2C_FIELD(arg0, s32 *, 0x60));
            eval_bezier_curve__12TBoss8DragonFPviiPvf(lbl_8048806C, 4, 0, &out, get_speed_or_default__10TObjPlayerFPv(arg0) / lbl_805D8DE4);
            M2C_FIELD(arg0, f32 *, 0x3C) = out.y;
            if (objInBand__FP7GameObjf(arg0, lbl_805D8DE4) != 0) {
                clear_timer__12TBoss8DragonFPv(arg0);
                reset_angle__12TBoss8DragonFPv(arg0);
                play_se__12TBoss8DragonFii((s32)arg0, 0x40032D0D);
                at.x = M2C_FIELD(arg0, f32 *, 0x38);
                at.y = lbl_805D8D5C;
                at.z = M2C_FIELD(arg0, f32 *, 0x40);
                spawn_particle_effect_with_flags(&at, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4), 0x40);
                set_shake_preset__11TCameraCtrlFi(1);
                TBoss8Dragon__sub_800646F0((s32)arg0);
                M2C_FIELD(arg0, s32 *, 0x6DC) = 1;
            }
            break;
        case 1:
            if (TBoss8Dragon__sub_8005FAE0(arg0) != 0) {
                advance_motion_entry__12TBoss8DragonFPv(arg0);
            }
            break;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8DCC) != 0) {
            spawn_ground_splash__12TBoss8DragonFPv(arg0);
        }
        break;
    case 5:
        M2C_FIELD(arg0, u32 *, 0x4C0) &= ~0x104;
        free_parts__12TBoss8DragonFPv(arg0);
        break;
    case 10: case 11:
    default:
        break;
    }
}

void TBoss8Dragon__sub_80062550(Obj_80062550 *arg0, s32 arg1) {
    s32 ofs;
    s32 ang;
    s32 a;
    Tgt_80062550 *t;
    switch (arg1) {
    case 4:
        arg0->fb8 = 4;
        ((VObj_80062550 *)arg0)->m94();
        set_flag_4e4__12TBoss8DragonFPv(arg0);
        reset_float_3c__12TBoss8DragonFPv(arg0);
        arg0->f490 = 0;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
        TBoss8Dragon__sub_80063EF4((s32)arg0);
        ofs = 0x4000;
        if (arg0->pos.x * arg0->pos.x + arg0->pos.z * arg0->pos.z > arg0->f4bc->f10 * arg0->f4bc->f10) {
            ofs = 0x5000;
        }
        a = (s32)(((const f64 *)&lbl_80437EB0)[0] * get_ad_end_text_start__10TObjPlayerFv(arg0->pos.x, arg0->pos.z));
        t = arg0->f4bc;
        ang = a - ofs;
        if (t->f8 > 0) {
            ang = a + ofs;
        }
        move_along_angle__12TBoss8DragonFPvif(arg0, ang, t->fc);
        update_heading__12TBoss8DragonFPvi(arg0, arg0->f4bc->f4);
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) > 0x96) {
            ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)(arg0, 0xB);
        }
    case 5:
    case 1:
        return;
    case 0:
        if ((get_player_by_client_id(0) != 0U) || (get_player_by_client_id(1) != 0U) || (get_player_by_client_id(2) != 0U) || (get_player_by_client_id(3) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x6DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6DC) + 1);
        }
        break;
    }
}

void TBoss3Volopt__sub_800627E4(u8 *arg0, u32 arg1) {
    s32 *p = (s32 *)(arg0 + 0x6E8);
    u8 sp8[0xC];
    void *obj;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((M2C_UNK (*)(void))set_flag_4e4__12TBoss8DragonFPv)();
        ((M2C_UNK (*)(void *))reset_float_3c__12TBoss8DragonFPv)((void *) (arg0));
        ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        switch (TBoss8Dragon__sub_8005D700()) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x4C0) |= 0x80;
        M2C_FIELD(arg0, s32 *, 0x6E4) = 0;
        M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
        *p = 1;
        obj = __nw__7TObjectFUl(0x28);
        if (obj != NULL) {
            __ct__17TBoss5GryphonDemoFv(obj, tl_01, p, lbl_805D8D88);
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 0x19;
        init_all_slots__11TWindowCtrlFv();
        get_target_state_b__9TObjEneDDFPv((void *) (arg0));
        return;
    case 2:
    case 9:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) == 1) {
            ((M2C_UNK (*)(void *))init_state_zero__12TBoss8DragonFPv)((void *) (arg0));
        }
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x6DC)) {
        case 0:
            ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x6DC) = 1;
                init_all_slots2__11TWindowCtrlFv();
                M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            }
            switch (M2C_FIELD(arg0, s32 *, 0x6E4)) {
            case 0:
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E60)) != 0) {
                    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (sp8), (void *) (lbl_80437DDC));
                    ((M2C_UNK (*)(void *, void *, int))spawn_particle_effect_with_flags)((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (int) (0x40));
                    queue_event_1D__12TBoss3VoloptFss((int) (0x1C), (int) (0x3C));
                } else if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E64)) != 0) {
                    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (sp8), (void *) ((u8 *)(lbl_80437DDC) + 0xC));
                    ((M2C_UNK (*)(void *, void *, int))spawn_particle_effect_with_flags)((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (int) (0x40));
                    queue_event_1D__12TBoss3VoloptFss((int) (0xC0), (int) (0xF));
                } else if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E68)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E6C)) != 0)) {
                    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (sp8), (void *) ((u8 *)(lbl_80437DDC) + 0xC));
                    ((M2C_UNK (*)(void *, void *, int))spawn_particle_effect_with_flags)((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 0)), (int) (0x40));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E70)) != 0) {
                    play_sound_effect((int) (0x40032A00), (void *) (0), (int) (0), (int) (0));
                    queue_event_1D__12TBoss3VoloptFss((int) (0xA0), (int) (0x3C));
                }
                if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8D6C)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E74)) != 0)) {
                    play_sound_effect((int) (0x40033409), (void *) (0), (int) (0), (int) (0));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E64)) != 0) {
                    play_sound_effect((int) (0x40032D0D), (void *) (0), (int) (0), (int) (0));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E78)) != 0) {
                    play_sound_effect((int) (0x40033409), (void *) (0), (int) (0), (int) (0));
                    queue_event_1D__12TBoss3VoloptFss((int) (0x80), (int) (7));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E7C)) != 0) {
                    play_pillar_sound__13TObjBoss5CtrlFv();
                }
                break;
            }
            break;
        case 1:
            ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80437DC4));
            copy_xyz__10TObjPlayerFPvPv((void *) ((u8 *)(arg0) + 0x5C), (void *) (lbl_80437DD0));
            ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
            return;
        }
        break;
    case 5:
        ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80437DC4));
        copy_xyz__10TObjPlayerFPvPv((void *) ((u8 *)(arg0) + 0x5C), (void *) (lbl_80437DD0));
        M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
        *p = 0;
        M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) & 0xFFFFFF7F);
        init_all_slots2__11TWindowCtrlFv();
        get_target_state_a__9TObjEneDDFPv((void *) (arg0));
        break;
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

#pragma push
#pragma fp_contract on
#define F(t, o) M2C_FIELD(arg0, t *, o)
void TBoss8Dragon__sub_80062BA0(u8 *arg0, u32 arg1) {
    Cam_80062BA0 cam;
    Vec_80062BA0 v;
    Vec_80062BA0 tmp;
    Vec_80062BA0 *p;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 0x1A;
        ((VObj_18_81e212 *)(arg0))->m93();
        set_flag_4e4__12TBoss8DragonFPv(arg0);
        reset_float_3c__12TBoss8DragonFPv(arg0);
        F(s32, 0x4C0) |= 0xC4;
        F(s32, 0x6DC) = 0;
        F(s32, 0x6E0) = 0;
        F(f32, 0x6F4) = lbl_805D8D5C;
        p = TBoss8Dragon__sub_80065F08();
        F(s32, 0x60) = (s32)(lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(p->x - F(f32, 0x38), p->z - F(f32, 0x40)));
        F(f32, 0x38) = p->x - lbl_805D8E80 * sin_table_lookup(F(s32, 0x60));
        F(f32, 0x3C) = lbl_805D8DD4;
        F(f32, 0x40) = p->z - lbl_805D8E80 * cos_table_lookup(F(s32, 0x60));
        play_cue_stream_file(lbl_80437EC0);
        init_all_slots__11TWindowCtrlFv();
        switch (TBoss8Dragon__sub_8005D700()) {
        case 0:
            cam.b = 0;
            cam.a = 2;
            cam.c = 0;
            cam.d = lbl_805D8D5C;
            cam.e = lbl_805D8D74;
            activate_camera_mode(5);
            cache_target_and_forward__11TCameraCtrlFii(&cam, 0x31C7);
            set_scripted_camera_pose(arg0 + 0x38, arg0 + 0x38, arg0 + 0x5C);
            break;
        }
        return;
    case 0:
        advance_animation_playback(arg0);
        switch (TBoss8Dragon__sub_8005D700()) {
        case 0:
        if (objInBand__FP7GameObjf(arg0, lbl_805D8E84) != 0) {
            v.x = F(f32, 0x38);
            v.y = lbl_805D8E88;
            v.z = F(f32, 0x40);
            spawn_particle_effect_with_flags(&v, 0x201, 0x40);
            spawn_particle_effect_with_flags(&v, 0x20D, 0x40);
            spawn_particle_effect_with_flags(&v, 0x20D, 0x40);
            spawn_particle_effect_with_flags(&v, 0x20D, 0x40);
            play_sound_effect(0x4003230C, 0, 0, 0);
        }
        }
        switch (F(s32, 0x6DC)) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                F(s32, 0x6DC) = 1;
                F(s32, 0x6E0) = 0;
            }
            break;
        case 1:
            F(s32, 0x6E0)++;
            if (F(s32, 0x6E0) >= 50) {
                advance_motion_entry__12TBoss8DragonFPv(arg0);
            }
            break;
        }
        break;
    case 5:
        F(s32, 0x4C0) &= ~0x84;
        VecCopy__FP3VecPC3Vec(&tmp, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, lbl_80437DB8);
        update_prev_position__10TObjPlayerFPv(arg0);
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x52);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &tmp);
        update_prev_position__10TObjPlayerFPv(arg0);
        F(s32, 0x30) = 0x12008;
        ((VObj_18_81e212 *)(arg0))->m72(0);
        init_all_slots2__11TWindowCtrlFv();
        restore_player_cameras();
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
#pragma pop

void TBoss8Dragon__sub_80062E94(u8 *arg0, u32 arg1) {
    Vec_80062E94 at;
    f32 d;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        ((VObj_80062E94 *)arg0)->m94();
        set_flag_4e4__12TBoss8DragonFPv((void*)(arg0));
        reset_float_3c__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, u32 *, 0x4C0) |= 4;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x6DC)) {
        case 0:
            ((void (*)(f32, void *, s32))move_along_angle__12TBoss8DragonFPvif)(lbl_805D8E04, arg0, M2C_FIELD(arg0, s32 *, 0x60));
            if (objInBand__FP7GameObjf(arg0, lbl_805D8D88) != 0) {
                M2C_FIELD(arg0, s32 *, 0x6DC) = 1;
            }
            break;
        case 1:
            d = get_speed_or_default__10TObjPlayerFPv(arg0) - lbl_805D8D88;
            M2C_FIELD(arg0, f32 *, 0x3C) = (*(const f32 *)&lbl_805D8DEC) + lbl_805D8E8C * -(d * d) / lbl_805D8E90;
            move_along_angle__12TBoss8DragonFPvif(arg0, M2C_FIELD(arg0, s32 *, 0x60), lbl_805D8E04);
            if (objInBand__FP7GameObjf(arg0, lbl_805D8E94) != 0) {
                clear_timer__12TBoss8DragonFPv((void*)(arg0));
                reset_angle__12TBoss8DragonFPv((void*)(arg0));
                play_se__12TBoss8DragonFii((s32)(arg0), (s32)(0x40032D0D));
                at.x = M2C_FIELD(arg0, f32 *, 0x38);
                at.y = lbl_805D8D5C;
                at.z = M2C_FIELD(arg0, f32 *, 0x40);
                spawn_particle_effect_with_flags((void *)(&at), (M2C_UNK)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (M2C_UNK)(0x40));
                set_shake_preset__11TCameraCtrlFi(1);
                TBoss8Dragon__sub_800646F0((s32)(arg0));
                M2C_FIELD(arg0, s32 *, 0x6DC) = 2;
            }
            break;
        case 2:
            if (((s32 (*)(void *))TBoss8Dragon__sub_8005FAE0)(arg0) != 0) {
                ((M2C_UNK (*)(void *))advance_motion_entry__12TBoss8DragonFPv)(arg0);
            }
            break;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8E98) != 0) {
            spawn_ground_splash__12TBoss8DragonFPv(arg0);
        }
        break;
    case 5:
        clear_timer__12TBoss8DragonFPv((void*)(arg0));
        reset_angle__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, u32 *, 0x4C0) &= ~4;
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_9;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on

void TBoss8Dragon__sub_80063088(Obj_80063088 *self, u32 arg1) {
    Vec_80063088 pos;
    Vec_80063088 vel;
    f32 speed;
    void *p;
    switch (arg1) {
    case 4:
        self->fB8 = 0x18;
        self->m94();
        set_flag_4e4__12TBoss8DragonFPv(self);
        reset_float_3c__12TBoss8DragonFPv(self);
        self->state = 0;
        self->f6E0 = 0;
        self->fx = NULL;
        self->f490 = 0;
        break;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(self);
        break;
    case 0:
        advance_animation_playback(self);
        switch (self->state) {
        case 0:
            self->state = 1;
        case 1:
            if (objInBand__FP7GameObjf(self, lbl_805D8D54) != 0) {
                play_se__12TBoss8DragonFii((s32)self, 0x40033203);
            }
            if (objInBand__FP7GameObjf(self, lbl_805D8D50) != 0) {
                play_se__12TBoss8DragonFii((s32)self, 0x40033204);
            }
            if (objInBand__FP7GameObjf(self, lbl_805D8D80) != 0) {
                spawn_ground_splash__12TBoss8DragonFPv((u8 *)self);
            }
            speed = get_speed_or_default__10TObjPlayerFPv(self);
            if (self->fx == NULL) {
                if (speed >= lbl_805D8D54 && speed <= lbl_805D8E5C) {
                    self->fx = spawn_continuous_particle_effect_with_flags(&self->fxPos, self->res->fC, 0x40);
                }
            } else if (speed <= lbl_805D8E5C) {
                copy_pos__11TNowLoadingFPvPv(self->fx, &self->fxPos);
            } else {
                queue_destruction__7TObjectFv(self->fx);
                self->fx = NULL;
            }
            if (objInBand__FP7GameObjf(self, lbl_805D8E9C) != 0) {
                pos.x = self->f394;
                pos.y = ((Vec_80063088 *)lbl_80437938)->y;
                pos.z = self->f39C;
                vel.x = lbl_805D8EA0 * sin_table_lookup(self->angle);
                vel.y = lbl_805D8D74 * -(self->fxPos.y - ((Vec_80063088 *)lbl_80437938)->y);
                vel.z = lbl_805D8EA0 * cos_table_lookup(self->angle);
                p = __nw__7TObjectFUl(0x70);
                if (p != NULL) {
                    ((void (*)(void *, void *, void *, void *, void *, void *, u16))TBoss5GryphonShockWave__ct)(
                        p, self->f4C4, self, &self->fxPos, &pos, &vel, self->f38C);
                }
                spawn_particle_effect_with_flags(&self->fxPos, self->res->f10, 0x40);
                self->state = 2;
            }
            break;
        case 2:
            if (TBoss8Dragon__sub_8005FAE0((u8 *)self) != 0) {
                advance_motion_entry__12TBoss8DragonFPv(self);
            }
            break;
        }
        break;
    case 5:
        if (self->fx != NULL) {
            queue_destruction__7TObjectFv(self->fx);
            self->fx = NULL;
        }
        break;
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
        break;
    }
}

void TBoss8Dragon__sub_80063320(u8 *arg0, u32 arg1) {
    f32 d;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((VObj_80063320 *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv((void*)(arg0));
        reset_angle__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x6E0)) {
        case 0:
            if (objInBand__FP7GameObjf(arg0, lbl_805D8DF4) != 0) {
                ((void (*)(f32, void *, s32))move_along_angle__12TBoss8DragonFPvif)(lbl_805D8DF8, arg0, M2C_FIELD(arg0, s32 *, 0x60));
                M2C_FIELD(arg0, u32 *, 0x4C0) |= 4;
                run_default_state__12TBoss8DragonFPv((void*)(arg0));
                set_flag_4e4__12TBoss8DragonFPv((void*)(arg0));
                TCameraCtrl__sub_8006A044(0x14, lbl_805D8EA4);
                play_se__12TBoss8DragonFii((s32)(arg0), (s32)(0x40033409));
                M2C_FIELD(arg0, s32 *, 0x6E0) = 1;
            }
            break;
        case 1:
            d = get_speed_or_default__10TObjPlayerFPv(arg0) - lbl_805D8DF4;
            d = lbl_805D8DD0 * (d * d);
            M2C_FIELD(arg0, f32 *, 0x3C) = d * lbl_805D8E34 + (*(const f32 *)&lbl_805D8D84);
            move_along_angle__12TBoss8DragonFPvif(arg0, M2C_FIELD(arg0, s32 *, 0x60), lbl_805D8D88);
            if (objInBand__FP7GameObjf(arg0, lbl_805D8EA8) != 0) {
                M2C_FIELD(arg0, s32 *, 0x6E0) = 2;
            }
            break;
        case 2:
            d = lbl_805D8EAC - get_speed_or_default__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, f32 *, 0x3C) = (*(const f32 *)&lbl_805D8DEC) + (*(const f32 *)&lbl_805D8D84) * -(d * d) / lbl_805D8E14;
            move_along_angle__12TBoss8DragonFPvif(arg0, M2C_FIELD(arg0, s32 *, 0x60), lbl_805D8D88);
            if (objInBand__FP7GameObjf(arg0, lbl_805D8EAC) != 0) {
                M2C_FIELD(arg0, f32 *, 0x3C) = (*(const f32 *)&lbl_805D8DEC);
                M2C_FIELD(arg0, s32 *, 0x6E0) = 3;
            }
            break;
        case 3:
            ((void (*)(f32, void *, s32))move_along_angle__12TBoss8DragonFPvif)(lbl_805D8D88, arg0, M2C_FIELD(arg0, s32 *, 0x60));
            if (((s32 (*)(void *))TBoss8Dragon__sub_8005FAE0)(arg0) != 0) {
                ((M2C_UNK (*)(void *))advance_motion_entry__12TBoss8DragonFPv)(arg0);
            }
            break;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0 || objInBand__FP7GameObjf(arg0, lbl_805D8EB0) != 0) {
            spawn_ground_splash__12TBoss8DragonFPv(arg0);
        }
        break;
    case 5:
        set_flag_4e4__12TBoss8DragonFPv((void*)(arg0));
        reset_float_3c__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, u32 *, 0x4C0) &= ~4;
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_10;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80063570(Obj_80063570 *arg0, s32 arg1) {
    f32 spd;
    switch (arg1) {
    case 4:
        arg0->fb8 = 1;
        ((VObj_80063570 *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv((void*)(arg0));
        reset_angle__12TBoss8DragonFPv((void*)(arg0));
        arg0->flags |= 0x10;
        arg0->f490 = 0;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        advance_animation_playback(arg0);
        TBoss8Dragon__sub_80064E3C((u8 *)arg0);
        ((M2C_UNK (*)(void *))update_velocity__9TObjEneDDFPv)(arg0);
        TBoss8Dragon__sub_800648C8((u8 *)arg0);
        spd = get_speed_or_default__10TObjPlayerFPv(arg0);
        if (spd < lbl_805D8DCC) {
            TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
        } else if (!(spd < lbl_805D8E10)) {
            if (spd < lbl_805D8E5C) {
                TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
            } else if (!(spd < lbl_805D8DF4)) {
                TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
            }
        }
        break;
    case 5:
        arg0->flags &= ~0x10;
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_11;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_8006369C(Obj_8006369C *self, u32 arg1) {
    switch (arg1) {
    case 4:
        self->f_B8 = 0;
        self->m94();
        clear_timer__12TBoss8DragonFPv((void*)(self));
        reset_angle__12TBoss8DragonFPv((void*)(self));
        return;
    case 0:
        advance_animation_playback(self);
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_12;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80063714(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_switch_attack__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x211, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 2), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}
extern int fold_flush_13;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x210, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 1), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}
extern int fold_flush_14;
#pragma pop

#pragma push
#pragma fp_contract on
void spawn_lightning_effect__12TBoss8DragonFPv(u8 *arg0) {
    Seg_80063CDC segs[3];
    s32 a;
    s32 b;
    void *o;

    a = (s32)(lbl_805D8D7C * (lbl_805D8D98 * (f32)rand()));
    b = (s32)(lbl_805D8D7C * (lbl_805D8D98 * (f32)rand()));
    segs[0].x = lbl_805D8EB8 * sin_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x38);
    segs[0].y = lbl_805D8D5C;
    segs[0].z = lbl_805D8EB8 * cos_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x40);
    segs[0].w = lbl_805D8D5C;
    segs[2].x = lbl_805D8EB8 * sin_table_lookup(b) + M2C_FIELD(arg0, f32 *, 0x38);
    segs[2].y = lbl_805D8D5C;
    segs[2].z = lbl_805D8EB8 * cos_table_lookup(b) + M2C_FIELD(arg0, f32 *, 0x40);
    segs[2].w = lbl_805D8D5C;
    a = (s32)(lbl_805D8D74 * (f32)(a + b));
    if (lbl_805D8D98 * (f32)rand() > lbl_805D8D74) {
        a += 0x8000;
    }
    segs[1].x = lbl_805D8EB8 * sin_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x38);
    segs[1].y = lbl_805D8E10;
    segs[1].z = lbl_805D8EB8 * cos_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x40);
    segs[1].w = lbl_805D8D5C;
    o = __nw__7TObjectFUl(0x264);
    if (o != NULL) {
        o = __ct__25TBoss5GryphonLightningEffFv(o, arg0, segs, 3, lbl_805D8D5C, lbl_805D8D88, lbl_805D8D54);
    }
    TBoss5GryphonLightningEff__sub_80325064(o);
}
extern int fold_flush_15;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80063EF4(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, (f32) (lbl_805D8EBC)) != 0) {
        spawn_ground_splash__12TBoss8DragonFPv((u8 *)((void *) (arg0)));
    }
}
extern int fold_flush_16;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_ground_splash__12TBoss8DragonFPv(u8 *arg0) {
    Stack_80063F34 stack;
    f32 temp_f1;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void*)((void *) (&stack.sp8)), (void*)((void *) (arg0 + 0x38)));
    temp_r3 = csnVecterUnder(&stack.sp8, 0x16EF);
    if (temp_r3 != NULL) {
        temp_f1 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4);
        if (!(temp_f1 > lbl_805D8D70)) {
            stack.spC = temp_f1;
            spawn_particle_effect_with_flags((void *)((void *) (&stack.sp8)), (M2C_UNK)((void *) (*M2C_FIELD(arg0, s32 **, 0x5F0))), (M2C_UNK)((int) (0x40)));
            play_se__12TBoss8DragonFii((s32)((void *) (arg0)), (s32)((int) (0x40032D01)));
        }
    }
}
extern int fold_flush_17;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064114(s32 arg0, s32 arg1) {
    struct CopyStack_80064114 { u8 bytes[0x14]; };
    CopyStack_80064114 copy_storage_80064114;
    u8 *temp_r4;
    temp_r4 = (u8 *)&lbl_80437D68.value - 4;
    *(M2CCopy_14 *)(copy_storage_80064114.bytes) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
    (*(f32 *)(copy_storage_80064114.bytes + 0x4)) = M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_80064114_lbl_804FF5B4 *)&lbl_804FF5B4).value, u8 **, 8), f32 *, 4);
    TBoss8Dragon__sub_80067074((void *)(arg1), (void *)((s32) (copy_storage_80064114.bytes)));
    setup_instance__9TObjEneDDFiiPvi(arg0, arg1, (copy_storage_80064114.bytes), 0);
}
extern int fold_flush_18;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_800641A8(u8 *arg0) {
    struct CopyStack_800641A8 { u8 bytes[0x14]; };
    CopyStack_800641A8 copy_storage_800641A8;
    u8 *temp_r4;
    u8 *pos;
    temp_r4 = (u8 *)lbl_80437D54 - 4;
    *(M2CCopy_14 *)(copy_storage_800641A8.bytes) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
    pos = arg0 + 0x468;
    if (!(M2C_FIELD(arg0, f32 *, 0x46C) > lbl_805D8E00)) {
        fill_value_array((int) (M2C_FIELD(arg0, s32 *, 0x578)));
        reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 4)), (int) (0));
        emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (pos), (void *) ((copy_storage_800641A8.bytes)), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
        reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0)), (int) (0));
    }
}
extern int fold_flush_19;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8006426C(Obj_8006426C *arg0) {
    Vec_8006426C mid;
    M2CCopy_14 prm;
    prm = lbl_80437D40;
    mid.x = 0.5f * (arg0->a.x - arg0->b.x) + arg0->b.x;
    mid.y = 0.5f * (arg0->a.y - arg0->b.y) + arg0->b.y;
    mid.z = 0.5f * (arg0->a.z - arg0->b.z) + arg0->b.z;
    fill_value_array(arg0->f578);
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0x10), 0);
    emit_enemy_effect__9TObjEneDDFiiPvi(arg0, (int)&mid, &prm, arg0->f578);
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0), 0);
}
#pragma pop

void TBoss8Dragon__sub_8006435C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8006435C, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8006435C, sp10) == 0x8) ? 1 : -1];
    Stack_8006435C stack;
    u8 *temp_r31;
    u8 *temp_r31_2;
    TBoss1Dragon__sub_80027A80((void *) (&stack.sp8), (void *) (&lbl_80437D2C.value));
    fill_value_array((int) (M2C_FIELD(arg0, s32 *, 0x578)));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0xC)), (int) (0));
    temp_r31 = (u8 *)(arg0 + 0x444);
    stack.sp10 = lbl_805D8EAC;
    TBoss8Dragon__sub_800670E0((int) (temp_r31), (void *) (&stack.sp8));
    emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (temp_r31), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
    temp_r31_2 = (u8 *)(arg0 + 0x3C0);
    stack.sp10 = lbl_805D8DD0;
    TBoss8Dragon__sub_800670E0((int) (temp_r31_2), (void *) (&stack.sp8));
    emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (temp_r31_2), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0)), (int) (0));
}
extern int fold_flush_20;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

void TBoss8Dragon__sub_8006442C(Dragon_8006442C *arg0) {
    Fx_8006442C fx;
    Vec_8006442C pts[10];
    Vec_8006442C *p;
    s32 i;
    TBoss1Dragon__sub_80027A80(&fx, lbl_80437D18);
    fill_value_array(arg0->f578);
    p = pts;
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->a));
    VecCopy__FP3VecPC3Vec((void*)(p), (void*)(&arg0->e));
    p[1].x = lbl_805D8D74 * (arg0->a.x + arg0->b.x);
    p[1].y = lbl_805D8D74 * (arg0->a.y + arg0->b.y);
    p[1].z = lbl_805D8D74 * (arg0->a.z + arg0->b.z);
    p[2].x = lbl_805D8D74 * (arg0->e.x + arg0->f.x);
    p[2].y = lbl_805D8D74 * (arg0->e.y + arg0->f.y);
    p[2].z = lbl_805D8D74 * (arg0->e.z + arg0->f.z);
    p[3].x = lbl_805D8D74 * (arg0->b.x + arg0->c.x);
    p[3].y = lbl_805D8D74 * (arg0->b.y + arg0->c.y);
    p[3].z = lbl_805D8D74 * (arg0->b.z + arg0->c.z);
    p[4].x = lbl_805D8D74 * (arg0->f.x + arg0->g.x);
    p[4].y = lbl_805D8D74 * (arg0->f.y + arg0->g.y);
    p[4].z = lbl_805D8D74 * (arg0->f.z + arg0->g.z);
    p[5].x = lbl_805D8D74 * (arg0->c.x + arg0->d.x);
    p[5].y = lbl_805D8D74 * (arg0->c.y + arg0->d.y);
    p[5].z = lbl_805D8D74 * (arg0->c.z + arg0->d.z);
    p[6].x = lbl_805D8D74 * (arg0->g.x + arg0->h.x);
    p[6].y = lbl_805D8D74 * (arg0->g.y + arg0->h.y);
    p[6].z = lbl_805D8D74 * (arg0->g.z + arg0->h.z);
    p += 7;
    VecCopy__FP3VecPC3Vec((void*)(p++), (void*)(&arg0->d));
    VecCopy__FP3VecPC3Vec((void*)(p), (void*)(&arg0->h));
    reset_hp__9TObjEneDDFPv(arg0, 0, ((s32 *)&lbl_804FF5A0)[3], 0);
    p = pts;
    for (i = 0; i < 5; i++) {
        fx.scale = lbl_80437D04[i];
        TBoss8Dragon__sub_800670E0((int)p, &fx);
        emit_enemy_effect__9TObjEneDDFiiPvi(arg0, (int)p++, &fx, arg0->f578);
        TBoss8Dragon__sub_800670E0((int)p, &fx);
        emit_enemy_effect__9TObjEneDDFiiPvi(arg0, (int)p++, &fx, arg0->f578);
    }
    reset_hp__9TObjEneDDFPv(arg0, 0, ((s32 *)&lbl_804FF5A0)[0], 0);
}

void TBoss8Dragon__sub_80064694(s32 arg0) {
    struct CopyStack_80064694 { u8 bytes[0x14]; };
    CopyStack_80064694 copy_storage_80064694;
    u8 *temp_r5;
    temp_r5 = (u8 *)&lbl_80437CF0.value - 4;
    *(M2CCopy_14 *)(copy_storage_80064694.bytes) = *(const M2CCopy_14 *)((s32) temp_r5 + 4);
    TBoss8Dragon__sub_800670E0((int)((void *) (arg0 + 0x3C0)), (void *)((void *) ((copy_storage_80064694.bytes))));
}
extern int fold_flush_21;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_800646F0(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800646F0, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800646F0, sp10) == 0x8) ? 1 : -1];
    Stack_800646F0 stack;
    TBoss1Dragon__sub_80027A80((void *) (&stack.sp8), (void *) (&lbl_80437944.value));
    stack.sp10 = M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 8), f32 *, 0x10);
    TBoss8Dragon__sub_80064C94((void *)((void *) (arg0)), (void *)((void *) (M2C_FIELD(&lbl_804FF5B4.value, u8 **, 8))));
    TBoss8Dragon__sub_80067074((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    emit_effect_at_position__9TObjEneDDFPvPv((void *) (arg0), (void *) (&stack.sp8));
    TBoss8Dragon__sub_80064CFC((s32)((void *) (arg0)));
}
extern int fold_flush_22;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void run_default_state__12TBoss8DragonFPv(void* p) { query_default__12TBoss8DragonFPv((void*)((void*)(p))); attack_default__12TBoss8DragonFPv((void*)((void*)(p))); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int update_state_3__12TBoss8DragonFPv(void* p) { return emit_part_attack_effect__12TBoss8DragonFPvi((void *)(p), (int)(3)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int set_state_2__12TBoss8DragonFPv(void* p) { return emit_part_attack_effect__12TBoss8DragonFPvi((void *)(p), (int)(2)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int attack_default__12TBoss8DragonFPv(void* p) { return emit_part_attack_effect__12TBoss8DragonFPvi((void *)(p), (int)(1)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int query_default__12TBoss8DragonFPv(void* p) { return emit_part_attack_effect__12TBoss8DragonFPvi((void *)(p), (int)(0)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064828(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D80) != 0) {
        query_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) {
        attack_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8E00) != 0) {
        set_state_2__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8E0C) != 0) {
        update_state_3__12TBoss8DragonFPv((void*)(arg0));
    }
}
extern int fold_flush_23;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_800648C8(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805D8EC0) != 0) {
        query_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8DF8) != 0) {
        attack_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0) {
        set_state_2__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) {
        update_state_3__12TBoss8DragonFPv((void*)(arg0));
    }
}
extern int fold_flush_24;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int emit_part_attack_effect__12TBoss8DragonFPvi(void *arg0, int arg1) {
    M2CCopy_14 prm;
    Vec_80064968 *p;
    prm = lbl_80437CDC;
    fill_value_array(((Obj_80064968 *)arg0)->f578);
    p = &((Obj_80064968 *)arg0)->parts[lbl_80437CCC[arg1]];
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0), 0);
    TBoss8Dragon__sub_80067074(p, &prm);
    emit_enemy_effect__9TObjEneDDFiiPvi(arg0, (int)p, &prm, ((Obj_80064968 *)arg0)->f578);
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0), 0);
    spawn_particle_effect_with_flags(p, ((Obj_80064968 *)arg0)->f5f0->f8, 0x40);
    spawn_attack_effect__12TBoss8DragonFPv(p);
}
extern int fold_flush_25;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1) { *(short*)((char*)a1 + 0x2) = *(unsigned short*)((char*)p + 0x1c); VecCopy__FP3VecPC3Vec((void*)((char*)a1 + 0x4), (void*)((char*)p + 0x38)); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x60); TBoss8Dragon__sub_80065F4C(a1); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064AB0(O_80064AB0 *self) {
    P_80064AB0 p;
    TBoss8Dragon__sub_800660A4(&p);
    p.id = self->id;
    p.kind = self->kind;
    p.x = self->x;
    p.z = self->z;
    TBoss8Dragon__sub_8006602C(&p);
}
extern int fold_flush_26;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064B08(u8 *arg0, u8 *arg1) {
    s16 temp_r4;
    VecCopy__FP3VecPC3Vec((void*)((void *) (arg0 + 0x484)), (void*)((void *) (arg1 + 4)));
    ((f32 (*)(void *, void *))subtract_vector)((void *) (arg0 + 0x484), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    TBoss8Dragon__sub_80064B90((u8 *)((void *) (arg0 + 0x494)), (u8 *)((void *) (arg1 + 0x14)));
    M2C_FIELD(arg0, s16 **, 0x4BC) = (s16 *) (arg0 + 0x494);
    temp_r4 = *M2C_FIELD(arg0, s16 **, 0x4BC);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != temp_r4) {
        ((s32 (*)(void *, int))transition_enemy_state)((void *) (arg0), (int) (temp_r4));
    }
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) | 2);
}
extern int fold_flush_27;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064B90(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    *(M2CCopy_10 *)((s32) arg0 + 4) = *(const M2CCopy_10 *)((s32) arg1 + 4);
}
extern int fold_flush_28;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6xA0_gal_gryphon_boss_actions(void *arg0) {
    void *x;
    TBoss8Dragon__sub_80065F80(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        TBoss8Dragon__sub_80064B08((u8 *)(x), (u8 *)(arg0));
    }
}
extern int fold_flush_29;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1) {
    enemy_set_target_id(arg0, (u16) M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}
extern int fold_flush_30;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6x9F_gal_gryphon_boss_actions(void *arg0) {
    void *x;
    bswap_boss_actions__12TBoss8DragonFi(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_target_from_action__12TBoss8DragonFPvPv((void *)(x), (void *)(arg0));
    }
}
extern int fold_flush_31;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

M2C_UNK TBoss8Dragon__sub_80064C94(void *arg0, void *) {
    reload_stats_keep_hp_tp__9TObjEneDDFPv((void *)(arg0), (int)(((s32 *)&lbl_805D4D98)[((s32 *)lbl_80487890)[2]]), (int)(((s32 *)&lbl_804FF5A0)[((s32 *)lbl_8048789C)[2]]), (int)(((s32 *)&lbl_805D4D9C)[((s32 *)lbl_804878A8)[2]]));
}

void TBoss8Dragon__sub_80064CFC(s32 arg0) {
    reload_stats_keep_hp_tp__9TObjEneDDFPv((void *) (arg0), (int) (M2C_FIELD(&lbl_805D4D98, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x48) * 4))), (int) (M2C_FIELD(&(*(RecoveredGlobal_80064CFC_lbl_804FF5A0 *)&lbl_804FF5A0).value, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x54) * 4))), (int) (M2C_FIELD(&lbl_805D4D9C, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x60) * 4))));
}
extern int fold_flush_32;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_radius__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8EC4; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_anim_speed__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8E20; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_float_3c__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8DEC; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_angle__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8D84; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 3; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_attack_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 2; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_flag_4e4__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 1; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_timer__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 0; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064DB8(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D8D80) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8E00) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8E0C) != 0)) {
        play_se__12TBoss8DragonFii((s32) arg0, 0x40032D08);
    }
}
extern int fold_flush_33;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064E3C(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D8EC0) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8DF8) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0)) {
        play_se__12TBoss8DragonFii((s32) arg0, 0x40032D08);
    }
}
extern int fold_flush_34;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    play_persistent_sound(arg1, arg0, arg0 + 0x560, 0, 0);
}
extern int fold_flush_35;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    ((M2C_UNK (*)(s32, s32, M2C_UNK, M2C_UNK))play_sound_effect)(arg1, arg0 + 0x560, 0, 0);
}
extern int fold_flush_36;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_epsilon_position__12TBoss8DragonFv(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D8EC8);
}
extern int fold_flush_37;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

#define CFG M2C_FIELD(&lbl_804FF5B4.value, Cfg_80064F50 **, 8)
void TObjEneDD__sub_80064F50(Obj_80064F50 *arg0) {
    if (arg0->flags4C0 & 0x80) {
        for (s32 i = 0; i < 10; i++) {
            arg0->parts[i].flags &= ~1;
        }
        return;
    }
    update_local_colliders_from_world(arg0, arg0->pos4E8);
    {
        f32 lim = lbl_805D8EAC;
        s32 i;
        for (i = 0; i < 10; i++) {
            Part_80064F50 *p;
            arg0->parts[i].flags |= 1;
            p = &arg0->parts[i];
            if (p->f4 + p->f20 >= lim) {
                set_collider_contact_high(p);
            } else {
                set_collider_contact_low(p);
            }
        }
    }
    if (arg0->mode4E4 == 2) {
        arg0->parts[0].flags |= 0x300;
        arg0->parts[1].flags |= 0x300;
        arg0->parts[2].flags |= 0x300;
        arg0->parts[3].flags |= 0x300;
        arg0->parts[2].flags |= 0x300;
        arg0->parts[6].flags &= ~1;
        arg0->parts[7].flags &= ~1;
        arg0->parts[8].flags &= ~1;
        arg0->parts[9].flags &= ~1;
        arg0->parts[0].fC = lbl_805D8E84;
        set_collider_contact_low(&arg0->parts[0]);
        set_collider_contact_low(&arg0->parts[1]);
        set_collider_contact_low(&arg0->parts[2]);
        set_collider_contact_low(&arg0->parts[3]);
        set_collider_contact_low(&arg0->parts[2]);
    } else {
        arg0->parts[0].flags &= ~0x300;
        arg0->parts[1].flags &= ~0x300;
        arg0->parts[2].flags &= ~0x300;
        arg0->parts[3].flags &= ~0x300;
        arg0->parts[2].flags &= ~0x300;
        arg0->parts[6].flags |= 1;
        arg0->parts[7].flags |= 1;
        arg0->parts[8].flags |= 1;
        arg0->parts[9].flags |= 1;
        arg0->parts[0].fC = lbl_805D8E10;
    }
    arg0->parts[0].f28 = CFG->i20;
    arg0->parts[1].f28 = CFG->i1C;
    arg0->parts[2].f28 = CFG->i1C;
    arg0->parts[3].f28 = CFG->i1C;
    arg0->parts[4].f28 = CFG->i1C;
    arg0->parts[5].f28 = CFG->i18;
    arg0->parts[6].f28 = CFG->i24;
    arg0->parts[7].f28 = CFG->i24;
    arg0->parts[8].f28 = CFG->i24;
    arg0->parts[9].f28 = CFG->i24;
}

void shift_position_history__12TBoss8DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x2FC), (void*)(arg0 + 0x3C0));
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x74), (void*)(arg0 + 0x2FC));
}
extern int fold_flush_38;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80065360(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80065364(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80065368(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_8006536C(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370_80062BA0 *obj) {
    if (!(M2C_FIELD(obj, s32 *, 0x4C0) & 0xC) && (M2C_FIELD(obj, s16 *, 0x32C) <= 0)) {
        ((M2C_UNK (*)(void))set_animation_by_state__12TBoss8DragonFPv)();
    } else {
        obj->vcall(M2C_FIELD(obj, s16 *, 0x326), 9);
    }
}
extern int fold_flush_39;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct O_8005F740;
struct Obj_8005FBC4;
struct VObj_80065370_80062BA0;
void update_main__12TBoss8DragonFPv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r30;
    s32 var_r31;
    if (((int (*)())check_demo_mode__10TObjPlayerFv)() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C0) & 1) {
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x4E0);
        if (update_lobby_state__9TObjEneDDFPv((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x4E0) = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4E0) != temp_r31) {
                M2C_FIELD(arg0, s32 *, 0x730) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x4E0) = 1;
        }
    }
    temp_r31_2 = query_teammate_state__9TObjEneDDFPv();
    ((VObj_18 *)(arg0))->m39();
    ((VObj_18 *)(arg0))->m40();
    if (temp_r31_2 == 0) {
        if (((s32 (*)(void *))get_flag_bit6__12TBoss8DragonFPv)((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800);
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E0) != 1) {
            if (((VObj_18 *)(arg0))->m30() != 0) {
                clear_attack_receipts((void *) (arg0));
            }
            update_animation_by_state__12TBoss8DragonFPv((VObj_80065370_80062BA0 *) (arg0));
            TBoss8Dragon__sub_8005F740((O_8005F740 *) (arg0));
            ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 8);
            ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
        } else {
            if (((VObj_18 *)(arg0))->m30() != 0) {
                clear_attack_receipts((void *) (arg0));
            }
            ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
        }
    }
    TObjEneDD__sub_800BBA0C((void *) (arg0));
    apply_velocity__12TBoss8DragonFPv((Obj_8005FBC4 *) (arg0));
    TBoss8Dragon__sub_8005FB90(arg0);
    advance_motion_timer__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m86();
    ((void (*)(void *))shift_position_history__12TBoss8DragonFi)(arg0);
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805D8D58));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x56C), (void *) (arg0 + 0x2FC));
    if (temp_r31_2 == 0) {
        run_tasks__7TObjectFv((void *) (arg0 + 0x4C4));
    }
    project_sound_origin_from_camera((void *) (arg0 + 0x38), (void *) (arg0 + 0x560), (f32) (lbl_805D8DAC));
    for (var_r31 = 0; var_r31 < 4; var_r31++) {
        update_obstruction_fade(&((Dragon_800653C4 *)arg0)->fade[var_r31]);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) != 0) {
        ((void (*)(void *))TBoss8Dragon__sub_80064694)(arg0);
    }
}

Obj_80065658 *TBoss8Dragon__sub_80065658(Obj_80065658 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_804882C8;
        for (i = 15; i >= 0; i--) {
            if (o->objs[i] != 0) {
                queue_destruction__7TObjectFv(o->objs[i]);
                o->objs[i] = 0;
            }
        }
        if (o->f57c != 0) {
            delete o->f57c;
            o->f57c = 0;
        }
        if (o->f578 != 0) {
            delete_buffer__12TBoss8DragonFis(o->f578, 1);
            o->f578 = 0;
        }
        free_collision_body_parts(o);
        if (lbl_805D4DBC == o) {
            lbl_805D4DBC = 0;
        }
        __destroy_arr(o->f580, (void *)TObjPlayer__sub_800D7C58, 0x1c, 4);
        __dt__7TObjectFv(o->f4c4, -1);
        __dt__9TObjEneDDFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}
extern int fold_flush_40;
#pragma pop

}
