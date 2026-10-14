#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
struct VBase_18_1fdb47 { char pad[0x18]; };
struct VObj_18_1fdb47 : VBase_18_1fdb47 {
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
    virtual M2C_UNK m104();
};

struct Vec_80303574 { f32 x, y, z; };
struct Fade_80303574 { u8 b[0x1C]; };
struct Obj_80303574 { u8 pad[0x3F0]; Fade_80303574 arr[2]; };
struct VBase_80303BC0 { char pad[0x18]; };

struct VObj_80303BC0 : VBase_80303BC0 {
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

struct VBase_14_80304B88 { char pad[0x14]; };

struct VObj_14_80304B88 : VBase_14_80304B88 {
    virtual void m0();
    virtual void m1();
    virtual s32 m2();
    virtual void m3();
    virtual s32 m4();
};

struct VB_803062D4 { u8 pad0[0x18]; };
struct VD_803062D4 : VB_803062D4 {
    virtual ~VD_803062D4();
};

struct VBase_14_0d3ae4 { char pad[0x14]; };

struct VObj_14_0d3ae4 : VBase_14_0d3ae4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
    virtual void m4();
    virtual s32 m5();
};

struct VBase_18_eeb1dd { char pad[0x18]; };

struct VObj_18_eeb1dd : VBase_18_eeb1dd {
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

struct VBase_18_313dd8 { char pad[0x18]; };

struct VObj_18_313dd8 : VBase_18_313dd8 {
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
};

extern "C" {
f64 atan2_float(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
void * __nw__7TObjectFUl(int);
M2C_UNK fn_80302FD8(void *, void *, void *, void *, int, int, f32);
void noop__16TObjEneDellBiterFv(void);
extern const f64 TObjEneDellBiter__data_80475328;
extern u8 *TObjEneDellBiter__movement_params;
extern const f32 lbl_805DEFCC;
extern const f32 lbl_805DEFD0;
extern const f32 lbl_805DEFD4;
extern const f32 TObjEneDellBiter__data_805DEFD8;
void TObjEneDellBiter__sub_80303BC0(u8 *arg0, s32 arg1);
f64 atan2_float(f32, f32);
s32 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(int, int, int, int, int);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
void noop__16TObjEneDellBiterFv(void);
void clear_active_flag__16TObjEneDellBiterFPv(void *arg0);
void update_attack_effect__16TObjEneDellBiterFi(s32 arg0);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f64 TObjEneDellBiter__data_80475328;
extern u8 *TObjEneDellBiter__movement_params;
extern const f32 lbl_805DF004;
extern const f32 lbl_805DF008;
void TObjEneDellBiter__sub_8030492C(u8 *arg0, s32 arg1);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK advance_animation_playback(void *);
extern const f32 TObjEneDellBiter__data_805DF00C;
void TObjEneDellBiter__sub_80304B88(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
void TObjEneDellBiter__sub_803058DC(s32 arg0);
void TObjEneDellBiter__sub_8030591C(s32 arg0);
s32 TObjEneDellBiter__sub_80305C40(u8 *arg0);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern u8 *TObjEneDellBiter__movement_params;
extern const f32 lbl_805DF000;
extern const f32 lbl_805DF010;
void TObjEneDellBiter__sub_80304D10(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK fill_value_array(int);
s32 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(int, int, int, int, int);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 enemy_validate_retained_target();
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
s32 has_move_failures__9TObjEneDDFPvi(void *, int);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
u32 enemy_probe_wall_ahead(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 TObjEneDellBiter__sub_803054A8(u8 *arg0);
s32 TObjEneDellBiter__sub_803054FC(u8 *arg0);
void clear_active_flag__16TObjEneDellBiterFPv(void *arg0);
void TObjEneDellBiter__sub_803058DC(s32 arg0);
void TObjEneDellBiter__sub_8030591C(s32 arg0);
void spawn_front_particle__16TObjEneDellBiterFPv(u8 *arg0);
s32 TObjEneDellBiter__sub_80305C40(u8 *arg0);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
f32 subtract_vector(void *, void *);
extern const f64 TObjEneDellBiter__data_80475328;
extern u8 *TObjEneDellBiter__movement_params;
extern const f32 TObjEneDellBiter__data_805DEFE8;
extern const f32 TObjEneDellBiter__data_805DEFF4;
extern const f32 lbl_805DEFF8;
extern const f32 lbl_805DEFFC;
extern const f32 lbl_805DF000;
void TObjEneDellBiter__sub_803044AC(u8 *arg0, s32 arg1);
}

extern "C" {

struct Stack_80303204 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_80303204_lbl_804E6B54 { M2C_UNK value; u8 remaining[0x18]; };

typedef char RecoveredGlobal_80303204_lbl_804E6B54_size[sizeof(RecoveredGlobal_80303204_lbl_804E6B54) == 0x1C ? 1 : -1];

struct VBase_18_c44d0a { char pad[0x18]; };

struct VObj_18_c44d0a : VBase_18_c44d0a {
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
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Stack_803040D0 {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_18_beae68 { char pad[0x18]; };

struct VObj_18_beae68 : VBase_18_beae68 {
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
};

struct VBase_14_c1c33b { char pad[0x14]; };

struct VObj_14_c1c33b : VBase_14_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct RecoveredFields_8030390C_arg0 {
    u8 unknown_0[0xB8];
    s16 field_B8;
    u8 unknown_BA[0x306];
    s32 field_3C0;
    u8 unknown_3C4[0x108];
    s32 field_4CC;
};

struct RecoveredGlobal_80303894_lbl_80541E48 {
    M2C_UNK value;
    u8 remaining[0xC];
};

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

struct Vec_80303AA0 { f32 x; f32 y; f32 z; };

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

struct Vec_8030338C { s32 x; s32 y; s32 z; };

struct VObjBase_803042b0_803030D4 { char pad_[0x18]; };

struct VObj_803042b0_803030D4 : VObjBase_803042b0_803030D4 {
    virtual M2C_UNK m00(); virtual M2C_UNK m01(); virtual M2C_UNK m02(); virtual M2C_UNK m03(); virtual M2C_UNK m04(); virtual M2C_UNK m05(); virtual M2C_UNK m06(); virtual M2C_UNK m07(); virtual M2C_UNK m08(); virtual M2C_UNK m09(); virtual M2C_UNK m10(); virtual M2C_UNK m11(); virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14(); virtual M2C_UNK m15(); virtual M2C_UNK m16(); virtual M2C_UNK m17(); virtual M2C_UNK m18(); virtual M2C_UNK m19(); virtual M2C_UNK m20(); virtual M2C_UNK m21(); virtual M2C_UNK m22(); virtual M2C_UNK m23(); virtual M2C_UNK m24(); virtual M2C_UNK m25(); virtual M2C_UNK m26(); virtual M2C_UNK m27(); virtual M2C_UNK m28(); virtual M2C_UNK m29(); virtual M2C_UNK m30(); virtual M2C_UNK m31(); virtual M2C_UNK m32(); virtual M2C_UNK m33(); virtual M2C_UNK m34(); virtual M2C_UNK m35(); virtual M2C_UNK m36(); virtual M2C_UNK m37(); virtual M2C_UNK m38(); virtual M2C_UNK m39(); virtual M2C_UNK m40(); virtual M2C_UNK m41(); virtual M2C_UNK m42(); virtual M2C_UNK m43(); virtual M2C_UNK m44(); virtual M2C_UNK m45(); virtual M2C_UNK m46(); virtual M2C_UNK m47(); virtual M2C_UNK m48(); virtual M2C_UNK m49(); virtual M2C_UNK m50(); virtual M2C_UNK m51(); virtual M2C_UNK m52(); virtual M2C_UNK m53(); virtual M2C_UNK m54(); virtual M2C_UNK m55(); virtual M2C_UNK m56(); virtual M2C_UNK m57(); virtual M2C_UNK m58(); virtual M2C_UNK m59(); virtual M2C_UNK m60(); virtual M2C_UNK m61(); virtual M2C_UNK m62(); virtual M2C_UNK m63(); virtual M2C_UNK m64(); virtual M2C_UNK m65(); virtual M2C_UNK m66(); virtual M2C_UNK m67(); virtual M2C_UNK m68(); virtual M2C_UNK m69(); virtual M2C_UNK m70(); virtual M2C_UNK m71(); virtual M2C_UNK m72(); virtual M2C_UNK m73(); virtual M2C_UNK m74(); virtual M2C_UNK m75(); virtual M2C_UNK m76(); virtual M2C_UNK m77(); virtual M2C_UNK m78(); virtual M2C_UNK m79(); virtual M2C_UNK m80(); virtual M2C_UNK m81(); virtual M2C_UNK m82(); virtual M2C_UNK m83(); virtual M2C_UNK m84(); virtual M2C_UNK m85(); virtual M2C_UNK m86(); virtual M2C_UNK m87(); virtual M2C_UNK m88(); virtual M2C_UNK m89(); virtual M2C_UNK m90(); virtual M2C_UNK m91(); virtual M2C_UNK m92(); virtual M2C_UNK m93(); virtual M2C_UNK m94(); virtual M2C_UNK m95(); virtual M2C_UNK m96(); virtual M2C_UNK m97(); virtual M2C_UNK m98(); virtual M2C_UNK m99();
    virtual M2C_UNK m100();
};

typedef char RecoveredFields_8030390C_arg0_B8_offset[offsetof(RecoveredFields_8030390C_arg0, field_B8) == 0xB8 ? 1 : -1];

typedef char RecoveredFields_8030390C_arg0_3C0_offset[offsetof(RecoveredFields_8030390C_arg0, field_3C0) == 0x3C0 ? 1 : -1];

typedef char RecoveredFields_8030390C_arg0_4CC_offset[offsetof(RecoveredFields_8030390C_arg0, field_4CC) == 0x4CC ? 1 : -1];

typedef char RecoveredGlobal_80303894_lbl_80541E48_size[sizeof(RecoveredGlobal_80303894_lbl_80541E48) == 0x10 ? 1 : -1];

struct VBase_80305034 { char pad[0x18]; };

struct VObj_80305034 : VBase_80305034 {
    virtual M2C_UNK m0();virtual M2C_UNK m1();virtual M2C_UNK m2();virtual M2C_UNK m3();virtual M2C_UNK m4();virtual M2C_UNK m5();virtual M2C_UNK m6();virtual M2C_UNK m7();virtual M2C_UNK m8();virtual M2C_UNK m9();virtual M2C_UNK m10();virtual M2C_UNK m11();virtual M2C_UNK m12();virtual M2C_UNK m13();virtual M2C_UNK m14();virtual M2C_UNK m15();
    virtual M2C_UNK m16();virtual M2C_UNK m17();virtual M2C_UNK m18();virtual M2C_UNK m19();virtual M2C_UNK m20();virtual M2C_UNK m21();virtual M2C_UNK m22();virtual M2C_UNK m23();virtual M2C_UNK m24();virtual M2C_UNK m25();virtual M2C_UNK m26();virtual M2C_UNK m27();virtual M2C_UNK m28();virtual M2C_UNK m29();virtual M2C_UNK m30();
    virtual M2C_UNK m31();virtual M2C_UNK m32();virtual M2C_UNK m33();virtual M2C_UNK m34();virtual M2C_UNK m35();virtual M2C_UNK m36();virtual M2C_UNK m37();virtual M2C_UNK m38();virtual M2C_UNK m39();virtual M2C_UNK m40();virtual M2C_UNK m41();virtual M2C_UNK m42();virtual M2C_UNK m43();virtual M2C_UNK m44();virtual M2C_UNK m45();
    virtual M2C_UNK m46();virtual M2C_UNK m47();virtual M2C_UNK m48();virtual M2C_UNK m49();virtual M2C_UNK m50();virtual M2C_UNK m51();virtual M2C_UNK m52();virtual M2C_UNK m53();virtual M2C_UNK m54();virtual M2C_UNK m55();virtual M2C_UNK m56();virtual M2C_UNK m57();virtual M2C_UNK m58();virtual M2C_UNK m59();virtual M2C_UNK m60();
    virtual M2C_UNK m61();virtual M2C_UNK m62();virtual M2C_UNK m63();virtual M2C_UNK m64();virtual M2C_UNK m65();virtual M2C_UNK m66();virtual M2C_UNK m67();virtual M2C_UNK m68();virtual M2C_UNK m69();virtual M2C_UNK m70();virtual M2C_UNK m71();virtual M2C_UNK m72();virtual M2C_UNK m73();virtual M2C_UNK m74();virtual M2C_UNK m75();
    virtual M2C_UNK m76();virtual M2C_UNK m77();virtual M2C_UNK m78();virtual M2C_UNK m79();virtual M2C_UNK m80();virtual M2C_UNK m81();virtual M2C_UNK m82();virtual M2C_UNK m83();virtual M2C_UNK m84();virtual M2C_UNK m85();virtual M2C_UNK m86();virtual M2C_UNK m87();virtual M2C_UNK m88();virtual M2C_UNK m89();virtual M2C_UNK m90();
    virtual M2C_UNK m91();virtual M2C_UNK m92();virtual M2C_UNK m93();virtual M2C_UNK m94();
};

struct WBase_80305034 { char pad[0x14]; };

struct WObj_80305034 : WBase_80305034 {
    virtual M2C_UNK w0();virtual M2C_UNK w1();virtual M2C_UNK w2();virtual M2C_UNK w3();virtual M2C_UNK w4();virtual M2C_UNK w5();
};

struct VBase_80305268 { char pad[0x18]; };

struct VObj_80305268 : VBase_80305268 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

struct Base_8030561C_8030535C { char pad[0x18]; };

struct VObj_8030561C_8030535C : Base_8030561C_8030535C {
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
    virtual s32 m97();
};

struct Stack_80305B60 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Stack_800991E0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Obj_80098FF4 {
    u8 pad0[0x38];
    u8 pos[0x2FC - 0x38];
    u8 field2FC[4];
};

struct Pair_800993E8 { s32 a; u32 flags; };

struct ChildBase_800993E8 { char pad[0x18]; };

struct Child_800993E8 : ChildBase_800993E8 {
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
    virtual void m15(Pair_800993E8 *, s32);
};

struct BringerBase_800993E8 { char pad[0x18]; };

struct Bringer_800993E8 : BringerBase_800993E8 {
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
    virtual s32 m97();
};

struct Vec_800993E8 { f32 x, y, z; };

struct Entry_800993E8 { u8 pad0[0xC]; Vec_800993E8 a; u8 pad18[0x24 - 0x18]; Vec_800993E8 b; };

struct Model_800993E8 { u8 pad0[0x2C]; Vec_800993E8 b; };

struct ChildFields_800993E8 {
    u8 pad0[0x38];
    Vec_800993E8 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Model_800993E8 *model;
};

struct Fields_800993E8 {
    u8 pad0[0x38];
    Vec_800993E8 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xC0 - 0x64];
    f32 frame;
    u8 padC4[0x498 - 0xC4];
    Child_800993E8 *child;
    s32 field49C;
};

struct Obj_80098EFC {
    u8 pad0[0x38];
    u8 pos[0x2FC - 0x38];
    u8 field2FC[0x474 - 0x2FC];
    u8 field474[4];
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

struct Vec_803059BC { f32 x, y, z; };

struct Hit_803059BC { u32 flags; u8 *obj; };

struct Base_80306994_80305BDC { char pad[0x18]; };

struct VObj_80306994_80305BDC : Base_80306994_80305BDC {
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
    virtual M2C_UNK m103();
};

struct Stack_80305FDC {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_8031B170_lbl_804E8880
{
  M2C_UNK value;
  u8 remaining[0xCC];
};

struct VBase_18_cf2ce9 { char pad[0x18]; };

struct VObj_18_cf2ce9 : VBase_18_cf2ce9 {
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
    virtual void m15(void *, s32);
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
    virtual s32 m97();
};

struct S_80305E1C { f32 f; s32 flags; };

struct Obj_80305E1C { u8 pad[0x46C]; u8 pos[0x28]; VObj_18_cf2ce9 *a; VObj_18_cf2ce9 *b; u8 pad2[4]; s32 v; };

struct VBase_18_257559 { char pad[0x18]; };

struct VObj_18_257559 : VBase_18_257559 {
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
    virtual M2C_UNK m21(void *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, f64);
};

typedef struct Atk_80305C40 { s32 type; f32 val; } Atk_80305C40;

struct Obj_80305C40 : VBase_18_257559 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Atk_80305C40, s32, s32, s32);
};

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;

typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];

struct VBase_18_289c96 { char pad[0x18]; };

struct VObj_18_289c96 : VBase_18_289c96 {
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
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Vec_80303F04 { f32 x; f32 y; f32 z; };

f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324(void *);
s16 get_attack_params_atp_min(s32);
s32 obj_is_hit_receivable(void);
Obj_80098FF4 * get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, s32);
M2C_UNK obj_getField1c(void *);
void obj_setFlags30(void *, s32);
f64 atan2_float(f32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
void TLobby__sub_8001FE7C(void*, int);
s32 get_game_mode__6TLobbyFv(void);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK fill_value_array(int);
Obj_80305C40 * get_battle_param__10TObjPlayerFi(s32);
void attach_particle_model(void *, s32, s32, s32, s32, f32);
s32 get_mode__11TCameraCtrlFPv(void *);
u32 csnLookAt(void *, void *);
Hit_803059BC * csnVectorUnder(Vec_803059BC *, void *, s32);
s32 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(int, int, int, int, int);
s32 rotate_xz_pair_by_angle(void *, void *, int);
s32 is_vec_xz_cross_negative(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
s32 get_particle_model__13TParticleCtrlFi(s32);
int get_instance__13TParticleCtrlFv(void);
M2C_UNK spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
M2C_UNK TObjPlayer__sub_800A04F0(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
s32 enemy_validate_retained_target();
M2C_UNK enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);
void enemy_clear_target(void *);
void set_target_player__13TBoss2DeRolLeFPvPv(void *, u32);
void enemy_set_target_id(void *, u16);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
void init_object__9TObjEneDDFPv(void *);
M2C_UNK update_player_state__9TObjEneDDFPv(void *, void *, int);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(void *, int);
s32 is_alive__9TObjEneDDFPv(void *);
s32 is_player_entity_id();
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK clear_attack_receipts(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
int get_target_info__9TObjEneDDFPv(void*);
s32 pack_debug_text_position(s32, s32);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
s32 attack_target_history_add(s32, void *);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
s32 fn_800D8830(void *, void *);
M2C_UNK TObjEneGibbles__sub_800D8988(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK request_two_effects__10TObjPlayerFPv(void *);
M2C_UNK apply_effect_variant_b__10TObjPlayerFii(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void * get_item_field_2__9TItemDataFPv(s32);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
f32 horizontal_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK advance_animation_playback(void *);
void init_all_slots__10TObjPlayerFv(void);
M2C_UNK refresh_collision_body_centers(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(u32);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_persistent_sound(void *, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __dt__7TObjectFv(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK TObjPlayer__sub_8023DEE0(void *, int, int, int);
s32 push_reflect_matrix__12TObjEneReconFPv(void *);
M2C_UNK restore_render_scissor(int);
M2C_UNK set_active__12TObjEneReconFv();
void TObjEneDellBiter__sub_803030D4(void);
void TObjEneDellBiter__sub_803030D8(u8 *arg0);
void * __dt__25TObjEneDellBiter_Eff_RushFv(void *arg0, s16 arg1);
u8 * TObjEneDellBiter_Eff_Rush__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0);
s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0);
void TObjEneDellBiter__vt104(u8 *arg0);
void TObjEneDellBiter__vt103(void* p);
void step_demo_script__16TObjEneDellBiterFv(void);
void state_death__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
void TObjEneDellBiter__sub_80303AA0(u8 *arg0, s32 arg1);
void TObjEneDellBiter__sub_80303F04(u8 *arg0, s32 arg1);
void TObjEneDellBiter__sub_803040D0(u8 *arg0, s32 arg1);
void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
void run_task__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
void handle_movement_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
void update_state__16TObjEneDellBiterFPvi(void *arg0, s32 arg1);
void TObjEneDellBiter__vt85(s32 arg0, u32 arg1, s32 arg2);
s32 TObjEneDellBiter__sub_803054A8(u8 *arg0);
s32 TObjEneDellBiter__sub_803054FC(u8 *arg0);
s32 check_low_hp_transition__16TObjEneDellBiterFPv(u8 *arg0);
void TObjEneDellBiter__sub_803055C8(u8 *arg0);
void TObjEneDellBiter__vt102(void *arg0, f32 farg0);
void noop__16TObjEneDellBiterFv(void);
s32 TObjEneDellBiter__sub_80305688(void *);
s32 TObjEneDellBiter__sub_80305788(Obj_80098FF4 *self);
void clear_active_flag__16TObjEneDellBiterFPv(void *arg0);
void TObjEneDellBiter__sub_803058DC(s32 arg0);
void TObjEneDellBiter__sub_8030591C(s32 arg0);
s32 TObjEneDellBiter__sub_803059BC(void *arg0, void *arg1);
void spawn_front_particle__16TObjEneDellBiterFPv(u8 *arg0);
void update_attack_effect__16TObjEneDellBiterFi(s32 arg0);
s32 TObjEneDellBiter__sub_80305C40(u8 *arg0);
void TObjEneDellBiter__sub_80305E1C(u8 *arg0);
void init_target_offsets__16TObjEneDellBiterFPv(u8 *arg0);
void update_particle_emitters__16TObjEneDellBiterFPv(u8 *arg0);
void TObjEneDellBiter__vt86(void);
void set_effect_pos_above_self__16TObjEneDellBiterFPv(u8 *arg0);
void TObjEneDellBiter__vt59(void);
void TObjEneDellBiter__vt60(u8 *arg0);
void TObjEneDellBiter__vt61(void* p);
void TObjEneDellBiter__vt26(void);
void run_task__16TObjEneDellBiterFv(u8 *arg0);
void init_params__16TObjEneDellBiterFPv(void *);
void * TObjEneDellBiter__ct(void *arg0, void *arg1, void *arg2);
void set_min_clamped_entry_value__16TObjEneDellBiterFif(s32 arg0, f32 farg0);
void destroy_static_instance__16TObjEneDellBiterFv(void);
void * TObjEneDellBiter__create(void *arg0);
void apply_armor_add_slot(void *arg0);
void * item_object_variant_deleting_dtor_803069D0(void *arg0, s16 arg1);
void * TItemObject__sub_80306A28(void *arg0);
void __construct_array(void *, void *, void *, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
M2C_UNK debug_printf_at(s32, const char *, ...);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
f32 subtract_vector(void *, void *);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern const f64 TObjEneDellBiter__data_80475328;
extern s32 TObjEneDellBiter__data_805D6A24;
extern u8 *TObjEneDellBiter__movement_params;
extern u32 TObjEneDellBiter__data_805D6A30;
extern s32 TObjEneDellBiter__data_805D6A34;
extern s32 TObjEneDellBiter__data_805D6A38;
extern s32 TObjEneDellBiter__data_805D6A3C;
extern const f32 TObjEneDellBiter__data_805DEFB8;
extern const f32 TObjEneDellBiter__data_805DEFC0;
extern const f32 TObjEneDellBiter__data_805DEFD8;
extern const f32 TObjEneDellBiter__data_805DEFE0;
extern const f32 TObjEneDellBiter__data_805DEFE4;
extern const f32 TObjEneDellBiter__data_805DEFE8;
extern const f32 TObjEneDellBiter__data_805DEFF4;
extern const f32 TObjEneDellBiter__data_805DF00C;
void TObjPlayer__sub_800A05B8(void *, s32);
void __dt__9TObjEneDDFv(void *, s32);
void delete_buffer__12TBoss8DragonFis(void *, s32);
void free_collision_body_parts(void *);
void __destroy_arr(void *, void *, s32, s32);
u8 *__dt__16TObjEneDellBiterFv(u8 *arg0, s16 arg1);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern S_80305E1C lbl_8047528C[];
extern M2C_UNK lbl_804752A0[];
extern char lbl_804752AC[];
extern char lbl_804752BC[];
extern char lbl_804752D0[];
extern char lbl_804752E4[];
extern char lbl_804752F8[];
extern char lbl_8047530C[];
extern char lbl_80475318[];
extern M2C_UNK __vt__25TObjEneDellBiter_Eff_Rush[];
extern M2C_UNK lbl_804E6FA8[];
extern RecoveredGlobal_80303894_lbl_80541E48 lbl_80541E48;
extern s32 TObjEneDellBiter_Eff_Rush__name;
extern void *TObjEneDellBiter__class_name;
extern s32 actor_frame_tick;
extern s32 game_difficulty_selection;
extern s32 TObjEneDellBiter__scrolling_uv_polygon_list;
extern s32 TObjEneDellBiter__last_uv_scroll_tick;
extern const f32 lbl_805DEFAC;
extern const f32 lbl_805DEFB0;
extern const f32 lbl_805DEFB4;
extern const f32 lbl_805DEFBC;
extern const f32 lbl_805DEFC8;
extern const f32 lbl_805DEFDC;
extern const f32 lbl_805DEFEC;
extern const f32 lbl_805DEFF0;
extern const f32 lbl_805DF004;
extern const f32 lbl_805DF008;
extern const f32 lbl_805DF014;
extern const f32 lbl_805DF018;
extern const f32 lbl_805DF01C;
extern const f32 lbl_805DF020;
extern const f32 lbl_805DF024;
extern const f32 lbl_805DF028;
extern const f32 lbl_805DF02C;
extern const f32 lbl_805DF030;
extern const f32 lbl_805DF034;
extern const f32 lbl_805DF03C;
extern M2C_UNK main_task[];
extern void *tl_04;

struct VB14_80306468 { u8 pad[0x14]; };
struct V3D4_80306468 : VB14_80306468 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
};

struct VB18_80306468 { u8 pad[0x18]; };
struct Self_80306468 : VB18_80306468 {
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
    virtual void m84();
    virtual void m85(s16, s32);
};

struct Part_80306468 { u8 pad[0x2C]; };

struct Data_80306468 {
    u8 pad0[0x1C];
    Part_80306468 parts[4];
    u8 padCC[0x154 - 0xCC];
    u8 f154[4];
};

struct Vec_80306468 { f32 x, y, z; };
struct Sub3F0_80306468 { u8 pad[0x1C]; };

struct Cfg_80306468 { u8 pad[8]; s32 f8; s32 fC; };
struct Glob_80306468 { u8 pad[0x42C]; Cfg_80306468 *cfg; s32 f430; };

struct Obj_80306468 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_80306468 pos;
    u8 pad44[0xA4 - 0x44];
    u8 *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 f326;
    u8 pad328[0x350 - 0x328];
    void *f350;
    u8 pad354[0x37C - 0x354];
    f32 f37C;
    u8 pad380[0x3C0 - 0x380];
    s32 f3C0;
    s32 f3C4;
    Vec_80306468 v3C8;
    u8 sub3D4[0x1C];
    Sub3F0_80306468 arr3F0[4];
    Vec_80306468 v460[3];
    s32 f484;
    s32 f488;
    s32 f48C;
    s32 f490;
    void *f494;
    void *f498;
    void *f49C;
    void *f4A0;
    s32 f4A4;
    u8 pad4A8[0x4C0 - 0x4A8];
    s32 f4C0;
    s32 f4C4;
    s32 f4C8;
    s32 f4CC;
    s32 f4D0;
    s32 f4D4;
    s32 f4D8;
    f32 f4DC;
    f32 f4E0;
};
extern "C" {
s32 is_split_screen();
s32 VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK enemy_init_validate_period(void *, int);
M2C_UNK enemy_init_acquire_period(void *, int);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK initialize_enemy_state__9TObjEneDDFPv(void *, int);
M2C_UNK set_state_8__9TObjEneDDFPv(void *);
M2C_UNK init_model__9TObjEneDDFPv(void *, void *, int);
M2C_UNK init_position_vectors__9TObjEneDDFPv(void *);
void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *, void *, void *, void *, int);
void *TBoss8Dragon__sub_800BC5EC(s32, s32);
M2C_UNK activate_and_dispatch__10TObjPlayerFPv(void *);
s32 create__12TObjEneSaverFPvPv(s32, s32);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, s16);
s32 init_collision_body_parts(void *, void *, int);
void *construct_collider_proxy__10TObjPlayerFPv(void *, s32);
void *__nw__7TObjectFUl(int);
s32 get_camera_mode__11TCameraCtrlFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
extern Vec_80303574 lbl_80475294[];
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805DEFC4;
s32 TObjEneDellBiter__sub_80305788(Obj_80098FF4 *self);
}

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt86();
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
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_80475138[];
extern "C" u8 lbl_80475148[];
extern "C" u8 lbl_80475160[];
extern "C" u8 lbl_80475174[];
extern "C" u8 lbl_8047518C[];
extern "C" u8 lbl_804751A0[];
extern "C" u8 lbl_804751B8[];
extern "C" u8 lbl_804751CC[];
extern "C" u8 lbl_804751E0[];
extern "C" u8 lbl_804751F8[];
extern "C" u8 lbl_8047520C[];
extern "C" u8 lbl_80475220[];
extern "C" u8 lbl_80475238[];
extern "C" u8 lbl_8047524C[];
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
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
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_804E6C3C[2];
extern void *TObjEneDellBiter__resource_descriptor[11];
extern void *lbl_804E6C80[2];
extern void *lbl_804E6C88[11];
void render__16TObjEneDellBiterFv(u8 *arg0);
struct V3_80306858 { f32 x; f32 y; f32 z; };
struct S16_80306858 { s32 a; s32 b; s32 c; s32 d; };
struct L4_80306858 { u8 pad[4]; s32 v; };
struct L3_80306858 { u8 pad[4]; L4_80306858 *p; };
struct L2_80306858 { u8 pad[0x2C]; L3_80306858 *p; };
struct L1_80306858 { u8 pad[8]; L2_80306858 *p; s32 c; };
struct Obj_80306858 { u8 pad[0x42C]; L1_80306858 *p; s32 v; };
struct Ent_80306858 { u8 pad[0xC]; f32 f; };
struct G_80306858 { u8 pad[0x1C]; Ent_80306858 e; u8 pad2[0x100 - 0x2C]; u8 a[0x44]; u8 b[4]; };

extern "C" {
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void *load_enemy_bml_resource(void *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern S16_80306858 ene_dell_biter_attack_def;
void load_resources__16TObjEneDellBiterFv(void);
}
void *TObjEneDellBiter__param_table[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804E6B8C[44] = {
    (void *)0x0, (void *)0x41400000, (void *)0x0, (void *)0x41200000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41700000, (void *)0x0,
    (void *)0x0, (void *)0x9d03, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x41700000, (void *)0x0, (void *)0x0,
    (void *)0x9d03, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41400000, (void *)0x0,
    (void *)0x41700000, (void *)0x0, (void *)0x0, (void *)0x8003,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
__declspec(section ".data") void *lbl_804E6C3C[2] = {
    (void *)&lbl_80475138, (void *)0x0,
};
void *TObjEneDellBiter__resource_descriptor[11] = {
    (void *)&lbl_80475148, (void *)&lbl_80475160, (void *)&lbl_80475174, (void *)&lbl_8047518C,
    (void *)&lbl_804751A0, (void *)&lbl_804751B8, (void *)&lbl_804751CC, (void *)&lbl_804751E0,
    (void *)&lbl_804751F8, (void *)&lbl_8047520C, (void *)0x0,
};
void *lbl_804E6C70[4] = {
    (void *)&lbl_80475220, (void *)&lbl_804E6C3C, (void *)&TObjEneDellBiter__resource_descriptor, (void *)0x1000a,
};
__declspec(section ".data") void *lbl_804E6C80[2] = {
    (void *)&lbl_80475238, (void *)0x0,
};
void *lbl_804E6C88[11] = {
    (void *)&lbl_80475148, (void *)&lbl_80475160, (void *)&lbl_80475174, (void *)&lbl_8047518C,
    (void *)&lbl_804751A0, (void *)&lbl_804751B8, (void *)&lbl_804751CC, (void *)&lbl_804751E0,
    (void *)&lbl_804751F8, (void *)&lbl_8047520C, (void *)0x0,
};
void *lbl_804E6CB4[4] = {
    (void *)&lbl_8047524C, (void *)&lbl_804E6C80, (void *)&lbl_804E6C88, (void *)0x1000a,
};
void *dell_biter_param_table[40] = {
    (void *)0x10000, (void *)0x8, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0x9, (void *)0x3f333333, (void *)0x0,
    (void *)0x10000, (void *)0x5, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f666666, (void *)0x0,
    (void *)0x30000, (void *)0x0, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x1, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x2, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x7, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f333333, (void *)0x0,
};
void *__vt__16TObjEneDellBiter[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__16TObjEneDellBiterFv, (void *)&run_task__16TObjEneDellBiterFv,
    (void *)&render__16TObjEneDellBiterFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneDellBiter__vt26, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneDellBiter__vt59, (void *)&TObjEneDellBiter__vt60, (void *)&TObjEneDellBiter__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneDellBiter__vt85,
    (void *)&TObjEneDellBiter__vt86, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneDellBiter__vt102, (void *)&TObjEneDellBiter__vt103, (void *)&TObjEneDellBiter__vt104,
};
#define dell_biter_param_table (*(RecoveredGlobal_8031B170_lbl_804E8880 *)dell_biter_param_table)
#define __vt__16TObjEneDellBiter ((M2C_UNK *)__vt__16TObjEneDellBiter)

void TObjEneDellBiter__sub_803030D4(void) {  }

void TObjEneDellBiter__sub_803030D8(u8 *arg0) {
    f32 temp_f1;
    obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
    if (is_player_entity_id() != 0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    if (is_alive__9TObjEneDDFPv((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) == 0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    if (obj_isState2_324((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) != 0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x2C);
    if (temp_f1 <= lbl_805DEFB0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * temp_f1);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x2C));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * lbl_805DEFB4);
}

void *__dt__25TObjEneDellBiter_Eff_RushFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TObjEneDellBiter_Eff_Rush;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneDellBiter_Eff_Rush__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_80303204, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80303204, spC) == 0x4) ? 1 : -1];
    Stack_80303204 stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80303204_lbl_804E6B54 *)&__vt__25TObjEneDellBiter_Eff_Rush).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjEneDellBiter_Eff_Rush__name;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg3 + 0x38));
    subtract_vector((void *) (&stack.sp8), (void *) (arg2 + 0x38));
    stack.spC = lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0x20) = sin_table_lookup((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0x28) = cos_table_lookup((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    if (is_vec_xz_cross_negative((void *) (arg0 + 0x20), (void *) (&stack.sp8)) != 0) {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (-0x1800));
    } else {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (0x1800));
    }
    return arg0;
}

s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (push_reflect_matrix__12TObjEneReconFPv((void *) (arg0 + 0x3C8)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            scale_matrix((int) (0), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

void TObjEneDellBiter__vt104(u8 *arg0) {
    if (get_target_info__9TObjEneDDFPv(arg0) != 0) {
        debug_printf_at(pack_debug_text_position(0, 2), lbl_804752AC);
        debug_printf_at(pack_debug_text_position(0, 3), lbl_804752BC);
        debug_printf_at(pack_debug_text_position(0, 4), lbl_804752D0);
        debug_printf_at(pack_debug_text_position(0, 5), lbl_804752E4);
        debug_printf_at(pack_debug_text_position(0, 6), lbl_804752F8);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4BC) == 1) {
            debug_printf_at(pack_debug_text_position(0, 9), lbl_8047530C);
        } else {
            debug_printf_at(pack_debug_text_position(0, 9), lbl_80475318);
        }
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DEFBC, TObjEneDellBiter__data_805DEFC0) != 0) {
        Vec_8030338C v = *(Vec_8030338C *)lbl_804752A0;
        update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        scale_matrix((int) (0), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8));
        set_global_flag__10TObjPlayerFv();
        draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void TObjEneDellBiter__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { ((int (*)(void*))init_target_offsets__16TObjEneDellBiterFPv)(p); } }

#define F(t, o) M2C_FIELD(arg0, t *, o)
#define VO ((VObj_18_1fdb47 *)(arg0))

void render__16TObjEneDellBiterFv(u8 *arg0) {
    s32 cam;
    s32 vis;
    u8 *fade;
    s32 draw;
    s32 i;

    if (check_demo_mode__10TObjPlayerFv() != 0) {
        VO->m104();
        return;
    }
    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    if (F(s32, 0x3C0) & 1) {
        vis = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
            vis = VO->m9(600.0f, 600.0f, 15.0f);
        } else {
            vis = VO->m9(lbl_805D9E88, lbl_805D9E84, TObjEneDellBiter__data_805DEFC0);
        }
    } else if (VO->m8(lbl_805DEFBC, TObjEneDellBiter__data_805DEFC0) != 0) {
        vis = 1;
    } else {
        vis = 0;
    }
    if (vis != 0) {
        if (render_model_if_visible__16TObjEneDellBiterFPv(arg0) != 0) {
            return;
        }
        if (!(F(s32, 0x3C4) & 0x4000)) {
            Vec_80303574 v = lbl_80475294[0];
            update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        }
        update_secondary_light__9TObjEneDDFPv(arg0);
        TObjEneDellBiter__data_805D6A34 = 0;
        TObjEneDellBiter__data_805D6A38 = F(s32, 0x484);
        TObjEneDellBiter__data_805D6A3C = (s32)(arg0 + 0x460);
        lbl_805D5660 = model_render_flags;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        draw = 1;
        fade = ((Obj_80303574 *)arg0)->arr[cam].b;
        update_obstruction_fade(fade);
        cam = updateFromCamera__15RenderFadeStateFPCf(fade, arg0 + 0x2FC);
        if (F(s32, 0x3C0) & 2) {
            ((VObj_14_aa9368 *)(arg0 + 0x3D4))->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
                draw = 0;
            }
        } else if (cam != 0) {
            ((VObj_14_aa9368 *)fade)->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
                draw = 0;
            }
        }
        set_global_param__8TObjFishFi(F(s32, 0x24));
        if (draw != 0) {
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, F(s32, 0x60));
            scale_matrix(0, TObjEneDellBiter__data_805DEFB8, TObjEneDellBiter__data_805DEFB8, TObjEneDellBiter__data_805DEFB8);
            set_global_state__16TObjEneRe7BeruraFi((void *)step_demo_script__16TObjEneDellBiterFv);
            if (vis == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
            set_global_state__16TObjEneRe7BeruraFi(NULL);
            pop_matrix();
        }
        if (F(s32, 0x3C0) & 2) {
            ((VObj_14_aa9368 *)(arg0 + 0x3D4))->m7();
        } else if (cam != 0) {
            ((VObj_14_aa9368 *)fade)->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        model_render_flags = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv(arg0);
    } else if (is_split_screen() == 0) {
        for (i = 0; i < 3; i++) {
            VecCopy__FP3VecPC3Vec(arg0 + i * 0xC + 0x460, arg0 + 0x2FC);
        }
    }
}
#undef F
#undef VO

void step_demo_script__16TObjEneDellBiterFv(void) {
    s32 temp_r4;
    switch (TObjEneDellBiter__data_805D6A34) {
    case 9:
    case 10:
    case 11:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
        break;
    case 8:
        rotate_matrix_x((int) (0), (int) (TObjEneDellBiter__data_805D6A38));
        break;
    case 12:
    case 22:
    case 32:
        temp_r4 = TObjEneDellBiter__data_805D6A3C;
        TObjEneDellBiter__data_805D6A3C = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((void *) (&lbl_80541E48.value), (int) (temp_r4));
        break;
    }
    TObjEneDellBiter__data_805D6A34 += 1;
}

void state_death__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    switch (arg1) {
    case 4:
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_B8 = 9;
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 = (s32) (((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 & 0xFFFFFFFC);
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 = (s32) (((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 | 2);
        ((VObj_18_beae68 *)(arg0))->m92();
        refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) (arg0));
        TObjPlayer__sub_800A04F0((void *) (arg0 + 0x3D4));
        if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
            play_sound_effect((int)(0x4003A358), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
        } else {
            play_sound_effect((int)(copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (void *)((int) (0x4003A31A)))), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
        }
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 0;
        return;
    case 3:
        if ((s32) ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC == 2) {
            queue_destruction__7TObjectFv((void *)(arg0));
        }
        return;
    case 0:
        advance_animation_playback((void *)(arg0));
        temp_r0 = ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC;
        switch (temp_r0) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                request_two_effects__10TObjPlayerFPv((void *) (arg0 + 0x2FC));
                play_sound_effect((int)(0x4003A830), (void *)((u32) (arg0 + 0x2FC)), (int)(0), (int)(0));
                ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 1;
                return;
            }
            break;
        case 1:
            if (((VObj_14_c1c33b *)((u8 *)(arg0) + (980)))->m4() != 0) {
                apply_effect_variant_b__10TObjPlayerFii((void *) (arg0 + 0x38), (int) (0));
                ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 2;
                return;
            }
            break;
        default:
            ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 2;
            return;
        }
        break;
    case 5:
        queue_destruction__7TObjectFv((void *)(arg0));
        break;
    }
}

void TObjEneDellBiter__sub_80303AA0(u8 *arg0, s32 arg1) {
    Vec_80303AA0 v;
    f32 len;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        advance_animation_playback(arg0);
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0 && ((s32 (*)(void *))check_low_hp_transition__16TObjEneDellBiterFPv)(arg0) == 0 &&
            ((s32 (*)(void *))TObjEneDellBiter__sub_803054A8)(arg0) == 0 && ((s32 (*)(void *))TObjEneDellBiter__sub_803054FC)(arg0) == 0) {
            transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        len = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        move_clamped_on_ground__9TObjEneDDFPvfff(arg0, v.x, v.z, len);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805DEFC8;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805DEFC8;
        ((VObj_18_fd6cbb *)(arg0))->m87();
        break;
    case 5:
        clear_attack_receipts(arg0);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

struct Obj_80098FF4;
void TObjEneDellBiter__sub_80303BC0(u8 *arg0, s32 arg1) {
    f32 var_f31;
    s32 temp_r0;
    s32 temp_r5;
    void *p;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D4) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D8) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) == 4) {
            transition_enemy_state(arg0, 5);
        }
        return;
    case 0:
        advance_animation_playback(arg0);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4CC);
        switch (temp_r0) {
        case 0:
            if (TObjEneDellBiter__sub_80305788((Obj_80098FF4 *)arg0) != 0) {
                enemy_copy_target_destination((void *) (arg0));
                update_velocity__9TObjEneDDFPv((void *) (arg0));
                M2C_FIELD(arg0, s32 *, 0x4D8) = (s32) (u16) (s32) (TObjEneDellBiter__data_80475328 * atan2_float((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8))));
                M2C_FIELD(arg0, s32 *, 0x4CC) = 1;
            } else {
                M2C_FIELD(arg0, s32 *, 0x4CC) = 4;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x4D8)), (int) (0x300));
            if ((s32) (u16) M2C_FIELD(arg0, s32 *, 0x60) == (s32) M2C_FIELD(arg0, s32 *, 0x4D8)) {
                M2C_FIELD(arg0, s32 *, 0x4CC) = 2;
                M2C_FIELD(arg0, s16 *, 0xB8) = 5;
            }
            ((M2C_UNK (*)(void *))noop__16TObjEneDellBiterFv)(arg0);
            break;
        case 2:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                if (check_v2_mode__9TObjEneDDFv() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x4D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4D0) + 1);
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) < 3) {
                        if (TObjEneDellBiter__sub_80305788((Obj_80098FF4 *)arg0) != 0) {
                            enemy_copy_target_destination((void *) (arg0));
                            update_velocity__9TObjEneDDFPv((void *) (arg0));
                            M2C_FIELD(arg0, s32 *, 0x4D8) = (s32) (u16) (s32) (TObjEneDellBiter__data_80475328 * atan2_float((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8))));
                            M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
                            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                        } else {
                            M2C_FIELD(arg0, s32 *, 0x4CC) = 4;
                        }
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x4CC) = 4;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0x4CC) = 4;
                }
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFCC)) != 0) {
                temp_r5 = M2C_FIELD(arg0, s32 *, 0x4D4);
                var_f31 = (f32) M2C_FIELD(TObjEneDellBiter__movement_params, s32 *, 0x24);
                if (temp_r5 > 0x96) {
                    var_f31 *= lbl_805DEFD0;
                } else if (temp_r5 > 0x46) {
                    var_f31 *= lbl_805DEFD4;
                }
                p = __nw__7TObjectFUl(0xD0);
                if (p != NULL) {
                    fn_80302FD8(p, arg0, arg0, arg0 + 0x460, M2C_FIELD(arg0, s32 *, 0x4D8), M2C_FIELD(arg0, s32 *, 0x4A0), var_f31);
                }
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, (void *)0x40039F17), arg0 + 0x38, 0, 0);
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFD8)) != 0) {
                spawn_particle_effect((void *) (arg0 + 0x460), (int) (0x21F));
            }
            break;
        }
        ((VObj_80303BC0 *)arg0)->m100();
        ((VObj_80303BC0 *)arg0)->m87();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
        break;
    }
}

void TObjEneDellBiter__sub_80303F04(u8 *arg0, s32 arg1) {
    Vec_80303F04 sp8;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) == 1) {
            transition_enemy_state(arg0, 5);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFDC)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&sp8), (void *) ((u8 *)(arg0) + 0x38));
            sp8.y += TObjEneDellBiter__data_805DEFE0;
            if ((s32) game_difficulty_selection == 3) {
                spawn_particle_effect((void *) (&sp8), (int) (0x21D));
                spawn_particle_effect((void *) (&sp8), (int) (0x21E));
            } else {
                spawn_particle_effect((void *) (&sp8), (int) (0x21B));
                spawn_particle_effect((void *) (&sp8), (int) (0x21C));
            }
        }
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, (void *)0x40039E15), arg0 + 0x38, 0, 0);
        }
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x4CC) = 1;
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x10);
            M2C_FIELD(arg0, s32 *, 0x490) = (s32) (TObjEneDellBiter__data_805DEFE8 * (f32) M2C_FIELD(TObjEneDellBiter__movement_params, s32 *, 0x2C));
        }
        ((VObj_18_289c96 *)(arg0))->m100();
        ((VObj_18_289c96 *)(arg0))->m87();
        break;
    }
}

void TObjEneDellBiter__sub_803040D0(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_803040D0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803040D0, spC) == 0x4) ? 1 : -1];
    Stack_803040D0 stack;
    f32 temp_f1;
    u32 temp_r3;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) == 1) {
            transition_enemy_state((void *) (arg0), (int) (5));
        }
        return;
    case 0:
        ((s32)advance_animation_playback((void *)((void *)((void *) (arg0)))));
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x4CC) = 1;
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x4C0) != 0U) {
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFEC)) != 0) {
                    queue_destruction__7TObjectFv((void *)((void *)((int) (M2C_FIELD(arg0, u32 *, 0x4C0)))));
                    M2C_FIELD(arg0, u32 *, 0x4C0) = 0U;
                } else {
                    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
                    if ((temp_f1 >= TObjEneDellBiter__data_805DEFD8) && (temp_f1 <= lbl_805DEFEC)) {
                        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
                        stack.spC += TObjEneDellBiter__data_805DEFE0;
                        copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x4C0)), (void *) (&stack.sp8));
                    }
                }
            } else if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFD8)) != 0) {
                M2C_FIELD(arg0, u32 *, 0x4C0) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0x211));
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
                TObjEneDellBiter__sub_80305688((void *) (arg0));
                play_sound_effect((int)((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (void *)((int) (0x40039E15))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
            }
        }
        ((VObj_18_c44d0a *)(arg0))->m100();
        ((VObj_18_c44d0a *)(arg0))->m87();
        return;
    case 5:
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x4C0);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((void *)((void *)((int) (temp_r3))));
            M2C_FIELD(arg0, u32 *, 0x4C0) = 0U;
        }
        break;
    }
}

void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        fill_value_array((int) (M2C_FIELD(arg0, s32 *, 0x4A0)));
        reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x4A4)));
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x488) = (s32) (M2C_FIELD(arg0, s32 *, 0x488) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x488) >= 2) {
                M2C_FIELD(arg0, s32 *, 0x488) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
            }
            if (((s32 (*)(void *))TObjEneDellBiter__sub_803054FC)((void *) (arg0)) == 0) {
                transition_enemy_state((void *) (arg0), (int) (5));
            }
        }
        break;
    case 0:
        advance_animation_playback((void *)((void *)(arg0)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x484) = turn_toward_angle_limited__15TObjBoss2TunnelFiiiii((int) (temp_r3), (int) (M2C_FIELD(arg0, s32 *, 0x484)), (int) (temp_r3), (int) (0x200), (int) (0x2000));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
                ((M2C_UNK (*)(void *))spawn_front_particle__16TObjEneDellBiterFPv)((void *) (arg0));
            }
            ((M2C_UNK (*)(void *))TObjEneDellBiter__sub_80305E1C)((void *) (arg0));
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFF0)) != 0) {
                play_sound_effect((int) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (void *) (0x40039E16))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) >= (s32) M2C_FIELD(TObjEneDellBiter__movement_params, s32 *, 0x18)) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        ((VObj_803042b0_803030D4 *) arg0)->m100();
        ((VObj_803042b0_803030D4 *) arg0)->m87();
        break;
    case 5:
        break;
    }
}

#pragma fp_contract on

#pragma push
#pragma fp_contract on
typedef struct { f32 x, y, z; } Vec_803044AC;
#define F(t, o) M2C_FIELD(arg0, t *, o)
#define G(t, o) M2C_FIELD(TObjEneDellBiter__movement_params, t *, o)
void TObjEneDellBiter__sub_803044AC(u8 *arg0, s32 arg1) {
    s32 hit;
    f32 t;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 7;
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        F(s32, 0x3C0) &= ~3;
        F(s32, 0x3C0) |= 4;
        F(s32, 0x4CC) = 0;
        F(s32, 0x4D0) = 0;
        F(f32, 0x4DC) = G(f32, 0);
        F(f32, 0x4E0) = TObjEneDellBiter__data_805DEFF4;
        fill_value_array(F(s32, 0x4A0));
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (F(s32, 0x4CC) == 3) {
            F(s32, 0x488) = 0;
            F(s32, 0x48C)++;
            F(s32, 0x3C0) &= ~8;
            if (TObjEneDellBiter__sub_803054A8(arg0) == 0 && TObjEneDellBiter__sub_803054FC(arg0) == 0) {
                transition_enemy_state(arg0, 5);
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (F(s32, 0x4CC)) {
        case 0:
            if (objInBand__FP7GameObjf(arg0, lbl_805DEFF8) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DEFFC) != 0) {
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, (void *)0x40039E12), arg0 + 0x38, 0, 0);
                spawn_front_particle__16TObjEneDellBiterFPv(arg0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                F(s16, 0xB8) = 2;
                F(s32, 0x4CC) = 1;
                M2C_FIELD(F(u8 *, 0xA4), s32 *, 0x18) |= 0x700;
            }
            if (((s32 (*)(void *))enemy_validate_retained_target)(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
            }
            F(s32, 0x60) = approach_angle_limited(F(s32, 0x60), (s32)(TObjEneDellBiter__data_80475328 * atan2_float(F(f32, 0x3A0), F(f32, 0x3A8))), 0x280);
            F(s32, 0x484) = turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(F(s32, 0x60), F(s32, 0x484), F(s32, 0x60), 0x200, 0x2000);
            ((VObj_18_313dd8 *)(arg0))->m87();
            break;
        case 1:
            TObjEneDellBiter__sub_8030591C((s32)arg0);
            if (((s32 (*)(void *))clear_active_flag__16TObjEneDellBiterFPv)(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
            }
            hit = 0;
            if (enemy_probe_wall_ahead(arg0, F(f32, 0x3A0), F(f32, 0x3A8), TObjEneDellBiter__data_805DEFE8 * G(f32, 0)) != 0) {
                hit = 1;
            }
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, F(f32, 0x3A0), F(f32, 0x3A8), G(f32, 0));
            F(f32, 0x4E0) += G(f32, 0);
            if (has_move_failures__9TObjEneDDFPvi(arg0, 1) != 0) {
                hit = 1;
            }
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            if (M2C_FIELD(F(u8 *, 0xA4), s32 *, 0x18) & 0x200000) {
                hit = 1;
            }
            if (TObjEneDellBiter__sub_80305C40(arg0) != 0) {
                hit = 1;
            }
            if (((s32 (*)(void *))enemy_validate_retained_target)(arg0) != 0) {
                Vec_803044AC v;
                VecCopy__FP3VecPC3Vec(&v, F(u8 *, 0x390) + 0x38);
                subtract_vector(&v, arg0 + 0x38);
                if (clamp_velocity__15TObjBoss2TunnelFPv(&v) >= TObjEneDellBiter__data_805DEFE8) {
                    if (v.x * sin_table_lookup(F(s32, 0x60)) + v.z * cos_table_lookup(F(s32, 0x60)) < TObjEneDellBiter__data_805DEFF4) {
                        hit = 1;
                    }
                }
            }
            if (hit != 0 || F(f32, 0x4E0) >= G(f32, 0x10)) {
                F(s32, 0x4CC) = 2;
                F(s32, 0x4D0) = 0;
                set_field_378__9TObjEneDDFPvi(arg0, 5);
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, (void *)0x40039B14), arg0 + 0x38, 0, 0);
            }
            break;
        case 2:
            F(s32, 0x4D0)++;
            if (F(s32, 0x4D0) >= 10) {
                F(s16, 0xB8) = 3;
                TObjEneDellBiter__sub_803058DC((s32)arg0);
                if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                    F(s32, 0x3C0) &= ~4;
                    F(s32, 0x4CC) = 3;
                }
                F(f32, 0x4DC) *= lbl_805DF000;
            }
            TObjEneDellBiter__sub_80305C40(arg0);
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, F(f32, 0x3A0), F(f32, 0x3A8), F(f32, 0x4DC));
            break;
        }
        break;
    case 5:
        F(s32, 0x3C0) &= ~4;
        M2C_FIELD(F(u8 *, 0xA4), s32 *, 0x18) &= ~0x700;
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}
#pragma pop

void TObjEneDellBiter__sub_8030492C(u8 *arg0, s32 arg1) {
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    s32 temp_r30;
    u8 *temp_r30_2;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        ((VObj_18_4225ac *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF8);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            transition_enemy_state(arg0, 4);
        } else if ((M2C_FIELD(arg0, f32 *, 0x3AC) >= M2C_FIELD(TObjEneDellBiter__movement_params, f32 *, 0x14)) && ((s32) M2C_FIELD(arg0, s32 *, 0x48C) < 2)) {
            transition_enemy_state(arg0, 6);
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) == 1) {
            transition_enemy_state(arg0, 7);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (((s32 (*)(void *))clear_active_flag__16TObjEneDellBiterFPv)(arg0) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited((int) (M2C_FIELD(arg0, s32 *, 0x60)), temp_r30 = (s32) (TObjEneDellBiter__data_80475328 * atan2_float((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)))), (int) (0x300));
        M2C_FIELD(arg0, s32 *, 0x484) = turn_toward_angle_limited__15TObjBoss2TunnelFiiiii((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x484)), (int) (temp_r30), (int) (0x200), (int) (0x2000));
        temp_r30_2 = (u8 *)(TObjEneDellBiter__movement_params);
        if (M2C_FIELD(arg0, f32 *, 0x3AC) <= (f32) M2C_FIELD(temp_r30_2, s32 *, 0x28)) {
            temp_f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            temp_f31_2 = (M2C_FIELD(arg0, f32 *, 0x3A0) * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)))) + temp_f31;
            if (temp_f31_2 >= cos_table_lookup((int) (0x1800))) {
                M2C_FIELD(arg0, s32 *, 0x4CC) = 1;
            }
        } else {
            temp_f31_3 = cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            move_clamped_on_ground__9TObjEneDDFPvfff((void *) (arg0), sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60))), temp_f31_3, M2C_FIELD(temp_r30_2, f32 *, 4));
        }
        ((VObj_18_4225ac *)(arg0))->m87();
        ((M2C_UNK (*)(void *))noop__16TObjEneDellBiterFv)(arg0);
        if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DF004)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DF008)) != 0)) {
            ((void (*)(void *))update_attack_effect__16TObjEneDellBiterFi)(arg0);
        }
        break;
    }
}

void TObjEneDellBiter__sub_80304B88(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF8);
        ((VObj_18 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x4CC) == 2) {
            transition_enemy_state(arg0, 5);
        } else if (M2C_FIELD(arg0, s32 *, 0x4CC) == 3) {
            transition_enemy_state(arg0, 1);
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x4CC)) {
        case 0:
            if (((s32 (*)(void *, f32))update_linked_position__14TObjEneEpsilonFPv)(arg0, TObjEneDellBiter__data_805DF00C) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4CC) = 2;
            } else {
                M2C_FIELD(arg0, s32 *, 0x4D0) = M2C_FIELD(arg0, s32 *, 0x4D0) + 1;
                if (M2C_FIELD(arg0, s32 *, 0x4D0) >= 0x3C) {
                    M2C_FIELD(arg0, s32 *, 0x4CC) = 1;
                    ((VObj_14_80304B88 *)(arg0 + 0x3D4))->m2();
                    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
                }
            }
            break;
        case 1:
            if (((VObj_14_80304B88 *)(arg0 + 0x3D4))->m4() != 0) {
                M2C_FIELD(arg0, s32 *, 0x4CC) = 3;
            }
            break;
        }
        ((VObj_18 *)(arg0))->m100();
        ((VObj_18 *)(arg0))->m87();
        break;
    case 5:
        break;
    }
}

#pragma push
#pragma fp_contract on
#define F(t, o) M2C_FIELD(arg0, t *, o)
#define VO ((VObj_18_eeb1dd *)(arg0))
#define FADE ((VObj_14_0d3ae4 *)(arg0 + 0x3D4))
void TObjEneDellBiter__sub_80304D10(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 2;
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        F(s32, 0x3C0) &= ~1;
        F(s32, 0x3C0) |= 6;
        M2C_FIELD(F(u8 *, 0xA4), s32 *, 0x18) |= 0x700;
        VO->m94();
        FADE->m3();
        F(f32, 0x4DC) = *(f32 *)TObjEneDellBiter__movement_params;
        F(s32, 0x4D0) = 0;
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, (void *)0x40039E12), arg0 + 0x38, 0, 0);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
        F(f32, 0x38) -= lbl_805DF010 * sin_table_lookup(F(s32, 0x60));
        F(f32, 0x40) -= lbl_805DF010 * cos_table_lookup(F(s32, 0x60));
        F(s32, 0x4CC) = (s32)(lbl_805DF010 / *(f32 *)TObjEneDellBiter__movement_params);
        F(s32, 0x488) = 0;
        F(s32, 0x48C) = 0;
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (F(s32, 0x4D0) == 2) {
            transition_enemy_state(arg0, 5);
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (F(s32, 0x4D0)) {
        case 0:
            TObjEneDellBiter__sub_8030591C((s32)arg0);
            F(f32, 0x38) = F(f32, 0x4DC) * sin_table_lookup(F(s32, 0x60)) + F(f32, 0x38);
            F(f32, 0x40) = F(f32, 0x4DC) * cos_table_lookup(F(s32, 0x60)) + F(f32, 0x40);
            TObjEneDellBiter__sub_80305C40(arg0);
            F(s32, 0x4CC)--;
            if (F(s32, 0x4CC) <= 0) {
                F(s32, 0x4D0) = 1;
                F(s32, 0x4CC) = 0;
                F(s32, 0x3C0) &= ~4;
                set_field_378__9TObjEneDDFPvi(arg0, 5);
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, (void *)0x40039B14), arg0 + 0x38, 0, 0);
            }
            VO->m100();
            break;
        case 1:
            F(s32, 0x4CC)++;
            if (F(s32, 0x4CC) >= 10) {
                F(s16, 0xB8) = 3;
                TObjEneDellBiter__sub_803058DC((s32)arg0);
                if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                    F(s32, 0x4D0) = 2;
                }
                F(f32, 0x4DC) *= lbl_805DF000;
            }
            TObjEneDellBiter__sub_80305C40(arg0);
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, F(f32, 0x3A0), F(f32, 0x3A8), F(f32, 0x4DC));
            break;
        }
        if (FADE->m5() != 0) {
            F(s32, 0x3C0) &= ~2;
            VO->m87();
        }
        break;
    case 5:
        F(s32, 0x3C0) &= ~4;
        M2C_FIELD(F(u8 *, 0xA4), s32 *, 0x18) &= ~0x700;
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}
#pragma pop

void run_task__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((VObj_80305034 *) arg0)->m93();
        ((WObj_80305034 *) (arg0 + 0x3D4))->w3();
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        M2C_FIELD(arg0, s32 *, 0x488) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        ((M2C_UNK (*)(void *, void *, int, int))play_sound_effect)(((void * (*)(void *, int))copy_target_state__14TObjEnePanarmsFPvPv)((void *) (arg0), (int) (0x40039E12)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            transition_enemy_state((void *) (arg0), (int) (5));
        }
        return;
    case 0:
        ((M2C_UNK (*)(void))advance_animation_playback)();
        ((M2C_UNK (*)(void *, f32))update_linked_position__14TObjEneEpsilonFPv)((void *) (arg0), (f32) (TObjEneDellBiter__data_805DF00C));
        M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) > 0x14) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                ((M2C_UNK (*)(void *, void *, int, int))play_sound_effect)(((void * (*)(void *, int))copy_target_state__14TObjEnePanarmsFPvPv)((void *) (arg0), (int) (0x40039B14)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            ((M2C_UNK (*)(void *))TObjEneDellBiter__sub_8030591C)((void *) (arg0));
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (lbl_805DF014));
            ((M2C_UNK (*)(void *))noop__16TObjEneDellBiterFv)((void *) (arg0));
            break;
        case 1:
            ((M2C_UNK (*)(void *))TObjEneDellBiter__sub_803058DC)((void *) (arg0));
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        if (((WObj_80305034 *) (arg0 + 0x3D4))->w5() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
            ((VObj_80305034 *) arg0)->m94();
            ((VObj_80305034 *) arg0)->m87();
            return;
        }
        break;
    case 5:
        ((VObj_80305034 *) arg0)->m94();
        break;
    }
}

void handle_movement_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (1));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 1);
        ((VObj_80305268 *) arg0)->m93();
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
        return;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv((f32) (TObjEneDellBiter__data_805DF00C)) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (TObjEneDellBiter__data_80475328 * atan2_float((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8))));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4BC) == 1) {
                transition_enemy_state((void *) (arg0), (int) (3));
                return;
            }
            transition_enemy_state((void *) (arg0), (int) (2));
        } else {
        case 5:
        case 0:
            return;
        }
        break;
    }
}

void update_state__16TObjEneDellBiterFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)(arg0, 1);
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
    case 5:
        return;
    }
}

void TObjEneDellBiter__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        update_state__16TObjEneDellBiterFPvi((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        ((s32 (*)(void *, void *))handle_movement_event__16TObjEneDellBiterFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        ((s32 (*)(void *, void *))run_task__16TObjEneDellBiterFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneDellBiter__sub_80304D10((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 4:
        TObjEneDellBiter__sub_80304B88((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 5:
        TObjEneDellBiter__sub_8030492C((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 6:
        TObjEneDellBiter__sub_803044AC((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 7:
        ((s32 (*)(void *, void *))handle_attack_event__16TObjEneDellBiterFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        ((s32 (*)(void *, void *))TObjEneDellBiter__sub_803040D0)((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        TObjEneDellBiter__sub_80303BC0((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 12:
        ((s32 (*)(void *, void *))TObjEneDellBiter__sub_80303F04)((void *) (arg0), (void *) (arg2));
        return;
    case 10:
        ((s32 (*)(void *, void *))TObjEneDellBiter__sub_80303AA0)((void *) (arg0), (void *) (arg2));
        return;
    case 11:
        ((s32 (*)(void *, void *))state_death__16TObjEneDellBiterFPvi)((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

s32 TObjEneDellBiter__sub_803054A8(u8 *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi((s32)(arg0)) <= M2C_FIELD(arg0, f32 *, 0x4A8)) {
        ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)((void *)((void *) (arg0)), (M2C_UNK)((int) (8)));
        return 1;
    }
    return 0;
}

s32 TObjEneDellBiter__sub_803054FC(u8 *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi((s32)(arg0)) <= M2C_FIELD(arg0, f32 *, 0x4B4)) {
        ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)((void *)((void *) (arg0)), (M2C_UNK)((int) (9)));
        return 1;
    }
    return 0;
}

s32 check_low_hp_transition__16TObjEneDellBiterFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x10) && ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2)) && (calc_boss4_scale__10TObjPlayerFi((s32)((s32) arg0)) <= M2C_FIELD(arg0, f32 *, 0x4B8))) {
        ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)((void *)((void *) (arg0)), (M2C_UNK)((int) (0xC)));
        return 1;
    }
    return 0;
}

void TObjEneDellBiter__sub_803055C8(u8 *arg0) {
    s32 temp_r3_2;
    u16 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x2D4);
    if (temp_r3 < 0x1000U) {
        temp_r3_2 = get_player_by_client_id((u32) temp_r3);
        if (temp_r3_2 != 0) {
            set_target_player__13TBoss2DeRolLeFPvPv(arg0, (u32) temp_r3_2);
        }
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 8);
    }
}

void TObjEneDellBiter__vt102(void *arg0, f32 farg0) {
    if (((VObj_8030561C_8030535C *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

void noop__16TObjEneDellBiterFv(void) {  }

s32 TObjEneDellBiter__sub_80305788(Obj_80098FF4 *self) {
    s32 count;
    Obj_80098FF4 *player;
    u16 id;
    s32 i;
    f32 dist;
    f32 best;
    best = TObjEneDellBiter__data_805DEFF4;
    id = 0xFFFF;
    count = get_game_mode__6TLobbyFv();
    for (i = 0; i < count; i++) {
        player = get_player_data__10TObjPlayerFi(i);
        if (is_alive__9TObjEneDDFPv(player) != 0) {
            dist = horizontal_distance_squared(self->field2FC, player->pos);
            if (dist < lbl_805DF018 && dist > best &&
                csnLookAt(self->field2FC, player->field2FC) == 0) {
                id = ((u16 (*)(void *))obj_getField1c)(player);
                best = dist;
            }
        }
    }
    if (id != 0xFFFF) {
        enemy_set_target_id(self, id);
        return 1;
    }
    enemy_clear_target(self);
    return 0;
}

void clear_active_flag__16TObjEneDellBiterFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 8)) {
        update_linked_position__14TObjEneEpsilonFPv((*(f32 *)&TObjEneDellBiter__data_805DF00C));
        return;
    }
    if (enemy_validate_retained_target() == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
    }
}

void TObjEneDellBiter__sub_803058DC(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, lbl_805DF008) != 0) {
        spawn_front_particle__16TObjEneDellBiterFPv((u8 *)((void *) (arg0)));
    }
}

void TObjEneDellBiter__sub_8030591C(s32 arg0) {
    if ((objInBand__FP7GameObjf((void *)((void *) (arg0)), (f32) (TObjEneDellBiter__data_805DEFF4)) != 0) || (objInBand__FP7GameObjf((void *)((void *) (arg0)), (f32) (lbl_805DF01C)) != 0)) {
        if (TObjEneDellBiter__sub_803059BC((void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x38))) != 0) {
            fn_800D8830((void *) (arg0), (void *) (arg0 + 0x38));
            return;
        }
        play_persistent_sound((void *) (((s32 (*)(void *, int))copy_target_state__14TObjEnePanarmsFPvPv)((void *) (arg0), (int) (0x40039E13))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
    }
}

s32 TObjEneDellBiter__sub_803059BC(void *arg0, void *arg1) {
    Vec_803059BC pos;
    Hit_803059BC *hit;
    void *e;
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&pos, arg1);
    pos.y += TObjEneDellBiter__data_805DEFC0;
    hit = csnVectorUnder(&pos, (u8 *)arg0 + 0x120, 0x4007);
    if (hit != NULL) {
        M2C_FIELD(arg0, u32 *, 0x3C4) = M2C_FIELD(hit->obj, u32 *, 0x18);
        if (M2C_FIELD(arg0, u32 *, 0x3C4) & 0x4000) {
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((u8 *)arg0 + 0x3C8, hit->obj);
        } else {
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((u8 *)arg0 + 0x3C8, (u8 *)arg0 + 0x38);
        }
        if (hit->flags & 4) {
            e = (void *)spawn_particle_effect(hit->obj + 0x38, 0x49);
            if (e != NULL) {
                attach_particle_model(e, get_particle_model__13TParticleCtrlFi(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneDellBiter__data_805DEFD8);
                set_position_xy__10TObjPlayerFPvff(e, lbl_805DF020, lbl_805DF020);
            }
            e = (void *)spawn_particle_effect(hit->obj + 0x38, 0xA4);
            if (e != NULL) {
                set_position_xy__10TObjPlayerFPvff(e, lbl_805DF020, lbl_805DF020);
            }
            return 1;
        }
        if (hit->flags & 2) {
            e = (void *)spawn_particle_effect(hit->obj + 0x54, 0x49);
            if (e != NULL) {
                attach_particle_model(e, get_particle_model__13TParticleCtrlFi(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneDellBiter__data_805DEFD8);
                set_position_xy__10TObjPlayerFPvff(e, lbl_805DF020, lbl_805DF020);
            }
            e = (void *)spawn_particle_effect(hit->obj + 0x54, 0xA4);
            if (e != NULL) {
                set_position_xy__10TObjPlayerFPvff(e, lbl_805DF020, lbl_805DF020);
            }
            return 1;
        }
    }
    return 0;
}

void spawn_front_particle__16TObjEneDellBiterFPv(u8 *arg0) {
    Stack_80305B60 stack;
    stack.sp8 = lbl_805DF024;
    stack.spC = TObjEneDellBiter__data_805DEFF4;
    stack.sp10 = lbl_805DF004;
    ((M2C_UNK (*)(void *, void *, int, f32, f32))rotate_xz_pair_by_angle)((void *) (&stack.sp8), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (f32) (TObjEneDellBiter__data_805DEFF4), (f32) (lbl_805DF024));
    vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    if (TObjEneDellBiter__sub_803059BC((void *)((void *) (arg0)), (void *)((void *) (&stack.sp8))) == 0) {
        spawn_particle_effect((void *) (&stack.sp8), (int) (0xF3));
    }
}

void update_attack_effect__16TObjEneDellBiterFi(s32 arg0) {
    if (((s32 (*)(s32, s32))TObjEneDellBiter__sub_803059BC)(arg0, arg0 + 0x38) != 0) {
        TObjEneGibbles__sub_800D8988(arg0 + 0x38);
        return;
    }
    ((M2C_UNK (*)(s32, s32, M2C_UNK, M2C_UNK))play_sound_effect)((s32)((s32 (*)(s32, M2C_UNK))copy_target_state__14TObjEnePanarmsFPvPv)(arg0, 0x40039E11), arg0 + 0x38, 0, 0);
}

s32 TObjEneDellBiter__sub_80305C40(u8 *arg0) {
    s32 hit;
    Obj_80305C40 *p;
    s32 i;
    Atk_80305C40 atk;
    void *n;
    hit = 0;
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(M2C_FIELD(arg0, u8 **, 0x49C) + 0x38, arg0 + 0x38);
    init_all_slots__10TObjPlayerFv();
    check_object_collisions__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x49C));
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x49C), u8 **, 0xA4), s32 *, 0x18) & 0x180000) {
        hit = 1;
        for (i = 0; i < 0x10; i++) {
            p = get_battle_param__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            if (obj_is_hit_receivable() != 0 && attack_target_history_add(M2C_FIELD(arg0, s32 *, 0x4A0), p) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x10) {
                    if (game_difficulty_selection == 3) {
                        atk.type = 5;
                        atk.val = M2C_FIELD(TObjEneDellBiter__movement_params, s32 *, 0x1C);
                    } else {
                        atk.type = 3;
                        atk.val = M2C_FIELD(TObjEneDellBiter__movement_params, s32 *, 0x1C);
                    }
                } else {
                    atk.type = 0;
                    atk.val = M2C_FIELD(TObjEneDellBiter__movement_params, s32 *, 0x20);
                }
                p->m21(arg0, atk, 0, -1, -1);
                if (obj_testFlags30(p, 0x04000000) == 0) {
                    obj_setFlags30(p, 0x600);
                }
                n = __nw__7TObjectFUl(0x34);
                if (n != NULL) {
                    ((void (*)(void *, void *, void *, void *, f32))TObjEneDellBiter_Eff_Rush__ct)(n, arg0, arg0, p, lbl_805DF028);
                }
            }
        }
    }
    return hit;
}

void TObjEneDellBiter__sub_80305E1C(u8 *arg0) {
    Obj_80305E1C *o = (Obj_80305E1C *)arg0;
    f32 f = M2C_FIELD(arg0, f32 *, 0xC0);
    if (f >= lbl_805DEFF0 && f <= lbl_805DF02C) {
        M2C_FIELD(o->a, s32 *, 0x60) = M2C_FIELD(arg0, s32 *, 0x60);
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((u8 *)o->a + 0x38, o->pos);
        refresh_collision_body_centers(o->a);
        M2C_FIELD(o->b, s32 *, 0x60) = M2C_FIELD(arg0, s32 *, 0x60);
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((u8 *)o->b + 0x38, o->pos);
        refresh_collision_body_centers(o->b);
        S_80305E1C sp = lbl_8047528C[0];
        sp.f = get_attack_params_atp_min(TObjEneDellBiter__data_805D6A24);
        if (((VObj_18_cf2ce9 *)arg0)->m97() != 0) {
            sp.flags |= 2;
        }
        o->a->m15(&sp, o->v);
        o->b->m15(&sp, o->v);
    }
}

void init_target_offsets__16TObjEneDellBiterFPv(u8 *arg0) {
  const f32 *new_var;
  *((f32 *) (((s8 *) arg0) + 0x4A8)) = (f32) (lbl_805DF030 + (*((f32 *) (((s8 *) arg0) + 0x354))));
  *((f32 *) (((s8 *) arg0) + 0x4AC)) = (f32) (lbl_805DF030 + (*((f32 *) (((s8 *) arg0) + 0x358))));
  *((f32 *) (((s8 *) arg0) + 0x4B0)) = (f32) (TObjEneDellBiter__data_805DEFE8 + (*((f32 *) (((s8 *) arg0) + 0x35C))));
  if ((*((f32 *) (((s8 *) arg0) + 0x4B0))) < (*(new_var = &TObjEneDellBiter__data_805DEFE0)))
  {
    *((f32 *) (((s8 *) arg0) + 0x4B0)) = (f32) (*new_var);
  }
  *((f32 *) (((s8 *) arg0) + 0x4B4)) = (f32) (lbl_805DF030 + (*((f32 *) (((s8 *) arg0) + 0x360))));
  *((f32 *) (((s8 *) arg0) + 0x4B8)) = (f32) (lbl_805DF034 + (*((f32 *) (((s8 *) arg0) + 0x364))));
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x368)))) >= 1)
  {
    *((s32 *) (((s8 *) arg0) + 0x4BC)) = 1;
    return;
  }
  *((s32 *) (((s8 *) arg0) + 0x4BC)) = 0;
}

void update_particle_emitters__16TObjEneDellBiterFPv(u8 *arg0) {
    Stack_80305FDC stack;
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    u8 *temp_r3_5;
    u8 *temp_r3_6;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C0);
    if (temp_r3 & 0x10) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x490) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (temp_r3 & 0xFFFFFFEF);
        } else {
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
            stack.spC += TObjEneDellBiter__data_805DEFE0;
            if ((s32) game_difficulty_selection == 3) {
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x4C4));
                if (temp_r3_2 == NULL) {
                    M2C_FIELD(arg0, u8 **, 0x4C4) = ((u8 * (*)(M2C_UNK *, M2C_UNK))create_particle_emitter)(&stack.sp8, 0x216);
                } else {
                    ((void (*)(void *, void *))copy_pos__11TNowLoadingFPvPv)(temp_r3_2, &stack.sp8);
                }
            } else {
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x4C4));
                if (temp_r3_3 == NULL) {
                    M2C_FIELD(arg0, u8 **, 0x4C4) = ((u8 * (*)(M2C_UNK *, M2C_UNK))create_particle_emitter)(&stack.sp8, 0x215);
                } else {
                    ((void (*)(void *, void *))copy_pos__11TNowLoadingFPvPv)(temp_r3_3, &stack.sp8);
                }
                temp_r3_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x4C8));
                if (temp_r3_4 == NULL) {
                    M2C_FIELD(arg0, u8 **, 0x4C8) = ((u8 * (*)(M2C_UNK *, M2C_UNK))create_particle_emitter)(&stack.sp8, 0x219);
                } else {
                    ((void (*)(void *, void *))copy_pos__11TNowLoadingFPvPv)(temp_r3_4, &stack.sp8);
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x490) = (s32) (M2C_FIELD(arg0, s32 *, 0x490) - 1);
        return;
    }
    temp_r3_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x4C4));
    if (temp_r3_5 != NULL) {
        ((void (*)(void *))queue_destruction__7TObjectFv)(temp_r3_5);
        M2C_FIELD(arg0, u8 **, 0x4C4) = NULL;
    }
    temp_r3_6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x4C8));
    if (temp_r3_6 != NULL) {
        ((void (*)(void *))queue_destruction__7TObjectFv)(temp_r3_6);
        M2C_FIELD(arg0, u8 **, 0x4C8) = NULL;
    }
}

void TObjEneDellBiter__vt86(void) {  }

void set_effect_pos_above_self__16TObjEneDellBiterFPv(u8 *arg0) {
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805DF028);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneDellBiter__vt59(void) {  }

void TObjEneDellBiter__vt60(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        ((M2C_UNK (*)(void))TObjEneDellBiter__sub_803055C8)();
        if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x14) {
            clear_attack_receipts((void *) (arg0));
            return;
        }
        ((int (*)(void*, void*))transition_enemy_state)((void*)((void *) (arg0)), (void*)((int) (0xA)));
    }
}

void TObjEneDellBiter__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { ((int (*)(void*, void*))transition_enemy_state)(p, (void*)11); } }

void TObjEneDellBiter__vt26(void) {  }

void run_task__16TObjEneDellBiterFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        if ((s32) TObjEneDellBiter__last_uv_scroll_tick != (s32) actor_frame_tick) {
            TObjEneDellBiter__last_uv_scroll_tick = actor_frame_tick;
            TObjPlayer__sub_8023DEE0((void *) (TObjEneDellBiter__scrolling_uv_polygon_list), (int) (0xC), (int) (0), (int) (0));
        }
    }
    update_particle_emitters__16TObjEneDellBiterFPv((u8 *)((void *) (arg0)));
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
    set_effect_pos_above_self__16TObjEneDellBiterFPv((u8 *)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

u8 *__dt__16TObjEneDellBiterFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneDellBiter;
        if (M2C_FIELD(arg0, void **, 0x4C0) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C0));
            M2C_FIELD(arg0, void **, 0x4C0) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x4C4) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C4));
            M2C_FIELD(arg0, void **, 0x4C4) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x4C8) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C8));
            M2C_FIELD(arg0, void **, 0x4C8) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x4A4) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4A4));
            M2C_FIELD(arg0, void **, 0x4A4) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x4A0) != NULL) {
            delete_buffer__12TBoss8DragonFis(M2C_FIELD(arg0, void **, 0x4A0), 1);
            M2C_FIELD(arg0, void **, 0x4A0) = NULL;
        }
        if (M2C_FIELD(arg0, VD_803062D4 **, 0x498) != NULL) {
            delete M2C_FIELD(arg0, VD_803062D4 **, 0x498);
            M2C_FIELD(arg0, VD_803062D4 **, 0x498) = NULL;
        }
        if (M2C_FIELD(arg0, VD_803062D4 **, 0x494) != NULL) {
            delete M2C_FIELD(arg0, VD_803062D4 **, 0x494);
            M2C_FIELD(arg0, VD_803062D4 **, 0x494) = NULL;
        }
        if (M2C_FIELD(arg0, VD_803062D4 **, 0x49C) != NULL) {
            free_collision_body_parts(M2C_FIELD(arg0, VD_803062D4 **, 0x49C));
            delete M2C_FIELD(arg0, VD_803062D4 **, 0x49C);
            M2C_FIELD(arg0, VD_803062D4 **, 0x49C) = NULL;
        }
        free_collision_body_parts(arg0);
        __destroy_arr(arg0 + 0x3F0, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8(arg0 + 0x3D4, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D6A20;
extern s32 lbl_805D6A28;
extern const f32 lbl_805DF038;
void init_params__16TObjEneDellBiterFPv(void *arg0_) {
    Obj_80306468 *self = (Obj_80306468 *)arg0_;
    s32 i;
    void *n;

    init_position_vectors__9TObjEneDDFPv(self);
    self->f34 = ((Glob_80306468 *)TObjEneDellBiter__data_805D6A30)->cfg->f8;
    self->f24 = ((Glob_80306468 *)TObjEneDellBiter__data_805D6A30)->cfg->fC;
    init_model__9TObjEneDDFPv(self, (Part_80306468 *)lbl_804E6B8C, 1);
    *(u32 *)(self->fA4 + 0x18) |= 0x400000;
    set_field_d8__10TObjPlayerFPvi(self, &dell_biter_param_table);
    set_field_dc__10TObjPlayerFPvi(self, ((Glob_80306468 *)TObjEneDellBiter__data_805D6A30)->f430);
    self->fB8 = 0;
    set_animation__10TObjPlayerFPvs(self, self->fB8);
    set_field_b8__14TObjEnePanarmsFPvs(self, self->fB8);
    reset_hp__9TObjEneDDFPv(self, lbl_805D6A20, TObjEneDellBiter__data_805D6A24, lbl_805D6A28);
    set_state_8__9TObjEneDDFPv(self);
    self->f350 = TObjEneDellBiter__param_table;
    initialize_enemy_state__9TObjEneDDFPv(self, 0x48);
    self->f37C = lbl_805DF038;
    enemy_init_acquire_period(self, 30);
    enemy_init_validate_period(self, 30);
    self->f3C0 = 0;
    self->f3C4 = 0;
    VecCopy__FP3VecPC3Vec(&self->v3C8, &self->pos);
    self->f3C0 |= 1;
    ((V3D4_80306468 *)self->sub3D4)->m3();
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&self->arr3F0[i]);
    }
    for (i = 0; i < 3; i++) {
        VecCopy__FP3VecPC3Vec(&self->v460[i], &self->pos);
    }
    self->f484 = 0;
    self->f488 = 0;
    self->f48C = 0;
    self->f490 = 0;
    n = __nw__7TObjectFUl(0xB0);
    if (n != NULL) {
        n = init_instance__16TObjEneDellBiterFPvPvPvPvPv(n, self, self, &((Part_80306468 *)lbl_804E6B8C)[1], 1);
    }
    self->f494 = n;
    n = __nw__7TObjectFUl(0xB0);
    if (n != NULL) {
        n = init_instance__16TObjEneDellBiterFPvPvPvPvPv(n, self, self, &((Part_80306468 *)lbl_804E6B8C)[2], 1);
    }
    self->f498 = n;
    n = __nw__7TObjectFUl(0xAC);
    if (n != NULL) {
        n = construct_collider_proxy__10TObjPlayerFPv(n, 0);
    }
    self->f49C = n;
    init_collision_body_parts(self->f49C, &((Part_80306468 *)lbl_804E6B8C)[3], 1);
    n = (void *)alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (n != NULL) {
        n = TBoss8Dragon__sub_800BC5EC((s32)n, 8);
    }
    self->f4A0 = n;
    self->f4A4 = create__12TObjEneSaverFPvPv(0xFF5050FF, 0x80000080);
    self->f4CC = 0;
    self->f4D0 = 0;
    self->f4D4 = 0;
    self->f4D8 = 0;
    self->f4DC = TObjEneDellBiter__data_805DEFF4;
    self->f4E0 = TObjEneDellBiter__data_805DEFF4;
    self->f326 = 1;
    ((Self_80306468 *)self)->m85(self->f326, 4);
    self->f4C0 = 0;
    self->f4C4 = 0;
    self->f4C8 = 0;
}
void *TObjEneDellBiter__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneDellBiter;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 980));
    __construct_array((void *)((char *)arg0 + 1008), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = TObjEneDellBiter__class_name;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    init_target_offsets__16TObjEneDellBiterFPv((u8 *)(arg0));
    init_params__16TObjEneDellBiterFPv(arg0);
    return arg0;
}

void set_min_clamped_entry_value__16TObjEneDellBiterFif(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < lbl_805DF03C)
  {
    var_f1 = lbl_805DF03C;
  }
  new_var = (u8 *) (&dell_biter_param_table.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}

void destroy_static_instance__16TObjEneDellBiterFv(void) {
    if ((u32) TObjEneDellBiter__data_805D6A30 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDellBiter__data_805D6A30, 1);
        TObjEneDellBiter__data_805D6A30 = 0U;
    }
}

void *TObjEneDellBiter__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneDellBiter__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

#define G_80306858 (*(V3_80306858 *)&lbl_80541E48)
void load_resources__16TObjEneDellBiterFv(void) {
    G_80306858.x = TObjEneDellBiter__data_805DEFF4;
    G_80306858.y = TObjEneDellBiter__data_805DEFF4;
    G_80306858.z = TObjEneDellBiter__data_805DEFF4;
    if (is_split_screen() != 0) {
        TObjEneDellBiter__data_805D6A30 = (u32)load_enemy_bml_resource(lbl_804E6CB4);
    } else {
        TObjEneDellBiter__data_805D6A30 = (u32)load_enemy_bml_resource(lbl_804E6C70);
    }
    lbl_805D6A20 = register_boss__6TLobbyFPv(0xD);
    TObjEneDellBiter__data_805D6A24 = dispatch_shared_handler_b__6TLobbyFPv(0xD);
    lbl_805D6A28 = register_object__6TLobbyFPv(0xD);
    TObjEneDellBiter__movement_params = dispatch_shared_handler_a__6TLobbyFPv(0xD);
    TObjEneDellBiter__data_805D6A34 = 0;
    TObjEneDellBiter__data_805D6A38 = 0;
    TObjEneDellBiter__data_805D6A3C = 0;
    set_min_clamped_entry_value__16TObjEneDellBiterFif(4, M2C_FIELD(TObjEneDellBiter__movement_params, f32 *, 8));
    set_min_clamped_entry_value__16TObjEneDellBiterFif(5, M2C_FIELD(TObjEneDellBiter__movement_params, f32 *, 0xC));
    {
        Obj_80306858 *o = (Obj_80306858 *)TObjEneDellBiter__data_805D6A30;
        Ent_80306858 *ent = (Ent_80306858 *)lbl_804E6B8C;
        TObjEneDellBiter__scrolling_uv_polygon_list = o->p->p->p->p->v;
        TObjEneDellBiter__last_uv_scroll_tick = 0;
        S16_80306858 sp = ene_dell_biter_attack_def;
        sp.a = o->v;
        spawn_npc_enemy__6TLobbyFsiiiff(0x46, (int)o->p->p, o->p->c, &sp, ent->f, TObjEneDellBiter__data_805DEFF4);
    }
}
#undef G_80306858

void apply_armor_add_slot(void *arg0) {
    struct VObj_80306994_80305BDC *o = (struct VObj_80306994_80305BDC *)get_item_field_2__9TItemDataFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (o != NULL) {
        o->m38();
    }
}

void *item_object_variant_deleting_dtor_803069D0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6FA8;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void *TItemObject__sub_80306A28(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6FA8;
    return arg0;
}

}
