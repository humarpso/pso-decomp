#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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

struct VBase_18_9c7b63
{
  char pad[0x18];
};

struct VObj_18_9c7b63 : VBase_18_9c7b63 {
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
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Stack_802CF1B4
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct VBase_18_9e83f9
{
  char pad[0x18];
};

struct VObj_18_9e83f9 : VBase_18_9e83f9 {
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
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase_18_3b55b6
{
  char pad[0x18];
};

struct VObj_18_3b55b6 : VBase_18_3b55b6 {
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
    virtual M2C_UNK m89();
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
    virtual M2C_UNK m100(s32);
};

struct E_800AC9DC { u8 pad[8]; s32 x8; s32 xc; };

struct G_800AC9DC { u8 pad[0x42c]; E_800AC9DC *tbl; };

struct O_800AC9DC { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

struct Sub_800ACA10 { u8 pad[0x18]; s32 level; };

struct Obj_800ACA10 { u8 pad[0x2B0]; Sub_800ACA10 *sub; };

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

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual void m87();
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

struct Vec_802CFB64 { f32 x, y, z; };

struct Vec_802CEDA0 { f32 x, y, z; };

struct VBase_18_9aa5d1 { char pad[0x18]; };

struct VObj_18_9aa5d1 : VBase_18_9aa5d1 {
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
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase_18_9e4fef { char pad[0x18]; };

struct VObj_18_9e4fef : VBase_18_9e4fef {
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
    virtual f32 m21(void *, s32 *, s32, s32, s32);
};

typedef struct Arg_802CF6AC { s32 a; f32 b; } Arg_802CF6AC;

typedef struct Ene_802CF6AC { u8 pad0[0xA4]; u8 *fa4; u8 padA8[0x488 - 0xA8]; s32 f488; } Ene_802CF6AC;

extern "C" {
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 spawn_dead_spot_here__10TObjPlayerFii(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
f32 vec3_add_to(void *, void *);
extern const f32 lbl_805DE70C;
extern const f32 lbl_805DE710;
extern const f32 lbl_805DE714;
extern const f32 lbl_805DE718;
void state_burrow__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK clear_attack_receipts();
s32 TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
extern const f32 lbl_805DE71C;
void TObjEneBm9Mericarol__sub_802CF368(u8 *arg0, s32 arg1);
s32 is_alive__9TObjEneDDFPv(int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 set_facing__10TObjPlayerFPvs(int, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(int);
M2C_UNK TObjEneBm9Mericarol__sub_802D073C(void *);
s32 find_nearby_target__19TObjEneBm9MericarolFi(void *);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
s32 construct__19TObjEneBm9MericarolFPvii(int, void *, int);
void TObjEneBm9Mericarol__sub_802CF4F8(u8 *arg0, s32 arg1);
void queue_destruction__7TObjectFv(void *self);
void handle_state_message__19TObjEneBm9MericarolFPvi(void *self, s32 msg);
extern s32 lbl_805D5550;
s32 TObjEneBm9Mericarol__sub_802CED50(Obj_800ACA10 *self);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK fill_value_array(int, int, int, f32);
s32 enemy_validate_retained_target(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
s32 has_move_failures__9TObjEneDDFPvi(void *, int);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
u32 enemy_probe_wall_ahead(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(int, int, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_802CE510(void *);
M2C_UNK sync_center_position__19TObjEneBm9MericarolFPv(void *);
extern const f64 lbl_804724B8;
extern const f32 lbl_805DE70C;
extern const f32 lbl_805DE718;
extern const f32 lbl_805DE720;
extern const f32 lbl_805DE724;
extern const f32 lbl_805DE728;
void TObjEneDD__sub_802CF7B4(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_is_hit_receivable();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u8 *get_battle_param__10TObjPlayerFi(s32);
s32 enemy_validate_retained_target(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(int, int, void *);
s32 objInBand__FP7GameObjf(f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D073C(void *);
s32 get_phase__19TObjEneBm9MericarolFPv(void *, int);
M2C_UNK TObjEneBm9Mericarol__sub_802D0940(void *);
M2C_UNK mult_vec_array__10TObjPlayerFUii(int, int, void *, int);
M2C_UNK set_matrix_identity__10TObjPlayerFPv(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern const f64 lbl_804724B8;
extern u8 *lbl_80540B7C[];
extern s32 TBoss4Type3_shared_instance;
extern s32 lbl_805D6864;
extern const f32 lbl_805DE6F4;
extern const f32 lbl_805DE70C;
extern const f32 lbl_805DE72C;
extern const f32 lbl_805DE730;
void TObjPlayer__sub_802CFB64(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 enemy_validate_retained_target(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void create__9TTecKafunFiiiiiiff(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1);
s32 TObjEneBm9Mericarol__sub_802CED50(Obj_800ACA10 *self);
s32 get_phase__19TObjEneBm9MericarolFPv(void *, int);
extern u8 *lbl_80540B7C[];
extern const f32 lbl_805DE704;
extern const f32 lbl_805DE710;
void TObjEneBm9Mericarol__sub_802CEDA0(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void queue_destruction__7TObjectFv(void *self);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(int, int, void *);
s32 objInBand__FP7GameObjf(f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_802CE68C(void *, void *, int);
M2C_UNK TObjEneBm9Mericarol__sub_802D073C(void *);
s32 get_phase__19TObjEneBm9MericarolFPv(void *, int);
s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv();
M2C_UNK TObjEneBm9Mericarol__sub_802D0940(void *);
M2C_UNK TObjEneBm9Mericarol__sub_802D1880(void *, void *, void *, void *, s32, f32, f32);
extern const f64 lbl_804724B8;
extern u8 *lbl_80540B7C[];
extern const f32 lbl_805DE710;
extern const f32 lbl_805DE720;
void handle_shot_state__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK enemy_set_target_id(void *, u16);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
u16 set_squared_value__9TObjEneDDFf(void *, f32);
u16 enemy_find_nearest_player_in_range(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 tick_period_counter(void *, void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 angle_difference_abs(int, int);
s32 approach_angle_limited(int, int, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D073C(void *);
s32 get_phase__19TObjEneBm9MericarolFPv(void *, int);
s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv();
M2C_UNK TObjEneBm9Mericarol__sub_802D0940(void *);
extern const f64 lbl_804724B8;
extern u8 *lbl_80540B7C[];
extern const f32 lbl_805DE718;
extern const f32 lbl_805DE734;
extern const f32 lbl_805DE738;
void TObjEneBm9Mericarol__sub_802D01D8(u8 *arg0, s32 arg1);
s32 obj_is_hit_receivable();
void obj_setFlags30(void *, int);
u8 *get_battle_param__10TObjPlayerFi(s32);
s32 attack_target_history_add(int, void *);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s32 get_phase__19TObjEneBm9MericarolFPv(void *, int);
extern u8 *lbl_80540B7C[];
extern const f32 lbl_805DE70C;
s32 check_attack_hits__19TObjEneBm9MericarolFPv(Ene_802CF6AC *o);
}

extern "C" {

void TObjEneBm9Mericarol__sub_802CED3C(void);
void TObjEneBm9Mericarol__sub_802CED40(void* p);
void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1);
void update_particle_effect__19TObjEneBm9MericarolFv(void);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 objInBand__FP7GameObjf(f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);

extern s32 lbl_805D686C;

void update_particle_effect__19TObjEneBm9MericarolFv(void) {
    switch (lbl_805D686C) {
    case 0x21:
    case 0x2B:
    case 0x64:
        begin_effect_render__13TParticleCtrlFv();
        break;
    default:
        end_effect_render__13TParticleCtrlFv();
        break;
    }
    lbl_805D686C += 1;
}

void TObjEneBm9Mericarol__sub_802CED3C(void) {  }
void TObjEneBm9Mericarol__sub_802CED40(void* p) { *(u32*)((char*)p + 0x438) |= 0x2; }

extern const f32 lbl_805DE6F4;

s32 TObjEneBm9Mericarol__sub_802CED50(Obj_800ACA10 *self) {
    Sub_800ACA10 *p = self->sub;
    s32 v = 0;
    if (p != 0) {
        v = p->level;
        if (v < 0) {
            return 0;
        }
        if (lbl_805D5550 == 3) {
            if (v > 0x1D) {
                v = 0x1D;
            }
            return v;
        }
        if (v > 0xE) {
            v = 0xE;
        }
    }
    return v;
}

#define OBJINBAND(o, f) ((s32 (*)(void *, f32))objInBand__FP7GameObjf)((o), (f))
#define PHASE(o) ((s32 (*)(void *))get_phase__19TObjEneBm9MericarolFPv)(o)
void TObjEneBm9Mericarol__sub_802CEDA0(u8 *arg0, s32 arg1) {
    Vec_802CEDA0 sp8;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x438) &= ~8;
        M2C_FIELD(arg0, s32 *, 0x438) |= 0x20;
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        M2C_FIELD(arg0, s32 *, 0x494) = M2C_FIELD(lbl_80540B7C[PHASE(arg0)], s32 *, 0x24);
        break;
    case 3:
        switch (M2C_FIELD(arg0, s32 *, 0x490)) {
        case 3:
            transition_enemy_state(arg0, 3);
            break;
        case 2:
            transition_enemy_state(arg0, 8);
            break;
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x490)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x494)--;
            if (M2C_FIELD(arg0, s32 *, 0x494) <= 0) {
                f32 lim = M2C_FIELD(lbl_80540B7C[PHASE(arg0)], f32 *, 0x14);
                if (((f32 (*)(void *))calc_boss4_scale__10TObjPlayerFi)(arg0) <= lim) {
                    M2C_FIELD(arg0, s32 *, 0x490) = 2;
                } else {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                    M2C_FIELD(arg0, s32 *, 0x490) = 1;
                }
            }
            if (enemy_validate_retained_target(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
            }
            ((VObj_18_313dd8 *)(arg0))->m87();
            if (M2C_FIELD(arg0, s32 *, 0x494) % 14 == 0) {
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A809), arg0 + 0x38, 0, 0);
            }
            break;
        case 1:
            if (OBJINBAND(arg0, lbl_805DE710) != 0) {
                VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x38);
                sp8.y += lbl_805DE704;
                ((void (*)(void *, void *, s32, s32, s32, f32, s32, f32))create__9TTecKafunFiiiiiiff)(arg0, &sp8, 5, 0x20B, 0x20C,
                    M2C_FIELD(lbl_80540B7C[PHASE(arg0)], f32 *, 0x4), TObjEneBm9Mericarol__sub_802CED50((Obj_800ACA10 *)arg0),
                    M2C_FIELD(lbl_80540B7C[PHASE(arg0)], f32 *, 0x10));
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A80A), arg0 + 0x38, 0, 0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x490) = 3;
            }
            break;
        }
        break;
    case 5:
        break;
    }
}

void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        ((V_A_802cf040_802CECE0 *) arg0)->m94();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r5 & ~0x28);
        set_field_378__9TObjEneDDFPvi(arg0, 3, temp_r5);
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD0F), arg0 + 0x38, 0, 0);
        return;
    case 3:
        if (objInBand__FP7GameObjf(M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DE6F4) != 0) {
            transition_enemy_state(arg0, 3);
        }
        ((V_A_802cf040_802CECE0 *) arg0)->m100();
        ((V_A_802cf040_802CECE0 *) arg0)->m86();
        return;
    case 0:
        advance_animation_playback((void *)((void *)(arg0)));
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x490);
        M2C_FIELD(arg0, s32 *, 0x490) = (s32) (temp_r4 + 1);
        TObjEneBm9Mericarol__sub_802D073C((void *)((void *)(arg0)));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFFD);
    case 1:
        return;
    }
}
typedef struct Stack_802CF1B4 Stack_802CF1B4;
typedef struct VBase_18_9c7b63 VBase_18_9c7b63;
typedef struct VObj_18_9c7b63 VObj_18_9c7b63;
#define PSO_VCALL_VObj_18_9c7b63_m94(_self) (((VObj_18_9c7b63 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9c7b63_m100(_self) (((VObj_18_9c7b63 *)(_self))->m100())

void handle_state_message__19TObjEneBm9MericarolFPvi(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        queue_destruction__7TObjectFv(self);
        return;
    }
}

void state_burrow__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1) {
  f32 temp_f1;
  Stack_802CF1B4 stack;
  s32 temp_r0;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 6;
      PSO_VCALL_VObj_18_9c7b63_m94(arg0);
      TObjEneBm9Mericarol__sub_802D093C((void *) arg0);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & (~0x28));
      refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) arg0);
      TBoss8Dragon__sub_800BB7D4((void *) arg0, (int) 0xF2);
      *((s32 *) (((s8 *) arg0) + 0x490)) = 0;
      *((f32 *) (((s8 *) arg0) + 0x4A4)) = (f32) lbl_805DE70C;
      play_sound_effect((M2C_UNK)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3AA0B)))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
      return;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x490)))) == 2)
    {
      transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 0xC));
    }
    case 5:
      return;
    case 0:
      temp_r0 = *((s32 *) (((s8 *) arg0) + 0x490));
      switch (temp_r0)
    {
      case 0:
        ((s32)advance_animation_playback((void *)((void *)((void *) arg0))));
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) arg0) != 0)
      {
        *((s32 *) (((s8 *) arg0) + 0x490)) = 1;
        temp_f1 = lbl_805DE710 * sin_table_lookup((int) (*((s32 *) (((s8 *) arg0) + 0x60))));
        stack.spC = lbl_805DE70C;
        stack.sp8 = temp_f1;
        stack.sp10 = lbl_805DE710 * cos_table_lookup((int) (*((s32 *) (((s8 *) arg0) + 0x60))));
        vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        spawn_dead_spot_here__10TObjPlayerFii((void *) (&stack.sp8), (int) 0x32);
        spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) 0x46);
      }
        PSO_VCALL_VObj_18_9c7b63_m100(arg0);
        return;
      case 1:
        *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3C))) - lbl_805DE714);
        *((f32 *) (((s8 *) arg0) + 0x4A4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x4A4))) + lbl_805DE714);
        if ((*((f32 *) (((s8 *) arg0) + 0x4A4))) > lbl_805DE718)
      {
        *((s32 *) (((s8 *) arg0) + 0x490)) = 2;
      }
        break;
    }
      break;
  }
}
typedef struct VBase_18_9e83f9 VBase_18_9e83f9;
typedef struct VObj_18_9e83f9 VObj_18_9e83f9;
#define PSO_VCALL_VObj_18_9e83f9_m94(_self) (((VObj_18_9e83f9 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9e83f9_m100(_self) (((VObj_18_9e83f9 *)(_self))->m100())
#define PSO_VCALL_VObj_18_9e83f9_m86(_self) (((VObj_18_9e83f9 *)(_self))->m86())
void TObjEneBm9Mericarol__sub_802CF368(u8 *arg0, s32 arg1) {
  s16 temp_r3;
  s16 temp_r4;
  s32 temp_r5;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 5;
      PSO_VCALL_VObj_18_9e83f9_m94(arg0);
      TObjEneBm9Mericarol__sub_802D093C((void *) arg0);
      temp_r5 = *((s32 *) (((s8 *) arg0) + 0x438));
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) (temp_r5 & (~0x28));
      TBoss8Dragon__sub_800BB7D4((void *)((void *) arg0), (int)((int) 0xF2));
      play_sound_effect((M2C_UNK)(((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3AA0C)))), (void *)((u32) (arg0 + 0x38)), (M2C_UNK)(0), (M2C_UNK)(0));
      return;
    case 3:
      if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0)
    {
      temp_r3 = *((s16 *) (((s8 *) arg0) + 0x2B8));
      temp_r4 = *((s16 *) (((s8 *) arg0) + 0x32C));
      if (((temp_r4 <= ((s32) (temp_r3 / 2))) && (temp_r4 >= ((s32) (temp_r3 / 5)))) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= (*((f32 *) (((s8 *) arg0) + 0x440)))))
      {
        transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 6));
        return;
      }
      if (calc_boss4_scale__10TObjPlayerFi((s32) arg0) < lbl_805DE71C)
      {
        transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 7));
        return;
      }
      transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) (*((s32 *) (((s8 *) arg0) + 0x378)))));
    }
      return;
    return;
    case 0:
      advance_animation_playback((void *)(arg0));
      PSO_VCALL_VObj_18_9e83f9_m100(arg0);
      PSO_VCALL_VObj_18_9e83f9_m86(arg0);
      TObjEneBm9Mericarol__sub_802D073C((void *)((void *)((void *) arg0)));
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFFDFF);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & 0xFFFFFFFD);
      clear_attack_receipts();
      break;
  }
}
typedef struct VBase_18_3b55b6 VBase_18_3b55b6;
typedef struct VObj_18_3b55b6 VObj_18_3b55b6;
#define PSO_VCALL_VObj_18_3b55b6_m94(_self) (((VObj_18_3b55b6 *)(_self))->m94())
#define PSO_VCALL_VObj_18_3b55b6_m89(_self) (((VObj_18_3b55b6 *)(_self))->m89())
#define PSO_VCALL_VObj_18_3b55b6_m100(_self, _arg0) (((VObj_18_3b55b6 *)(_self))->m100((_arg0)))
#define PSO_VCALL_VObj_18_3b55b6_m86(_self) (((VObj_18_3b55b6 *)(_self))->m86())
void TObjEneBm9Mericarol__sub_802CF4F8(u8 *arg0, s32 arg1) {
  s32 temp_r0;
  s32 temp_r3;
  s32 temp_r4;
  u32 temp_r3_2;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 2;
      PSO_VCALL_VObj_18_3b55b6_m94(arg0);
      PSO_VCALL_VObj_18_3b55b6_m89(arg0);
      TObjEneBm9Mericarol__sub_802D093C((void *) arg0);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & 0xFFFFFFF7);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) | 0x20);
      *((s32 *) (((s8 *) arg0) + 0x490)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x494)) = 0;
      return;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x490)))) >= 0x1E)
    {
      transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 3));
    }
      return;
    case 0:
      ((s32)advance_animation_playback((void *) arg0));
      temp_r0 = *((s32 *) (((s8 *) arg0) + 0x490));
      if (temp_r0 == 6)
    {
      temp_r3 = find_nearby_target__19TObjEneBm9MericarolFi((void *) arg0);
      if (temp_r3 != 0)
      {
        temp_r3_2 = __nw__7TObjectFUl((int) 0x28);
        if (temp_r3_2 != 0U)
        {
          construct__19TObjEneBm9MericarolFPvii((int) temp_r3_2, (void *) arg0, (int) temp_r3);
        }
        *((s32 *) (((s8 *) arg0) + 0x390)) = temp_r3;
        *((s32 *) (((s8 *) arg0) + 0x494)) = 1;
        play_sound_effect((M2C_UNK)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3A808)))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
      }
    }
    else
      if (((temp_r0 == 0x19) && (((s32) (*((s32 *) (((s8 *) arg0) + 0x494)))) != 0)) && (is_alive__9TObjEneDDFPv((int) (*((s32 *) (((s8 *) arg0) + 0x390)))) != 0))
    {
      set_facing__10TObjPlayerFPvs((int) (*((s32 *) (((s8 *) arg0) + 0x390))), (int) 0);
    }
      temp_r4 = *((s32 *) (((s8 *) arg0) + 0x490));
      *((s32 *) (((s8 *) arg0) + 0x490)) = (s32) (temp_r4 + 1);
      PSO_VCALL_VObj_18_3b55b6_m100(arg0, temp_r4);
      PSO_VCALL_VObj_18_3b55b6_m86(arg0);
      TObjEneBm9Mericarol__sub_802D073C((void *)((void *) arg0));
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFBFFFFFF);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & 0xFFFFFFFD);
      break;
  }
}

s32 check_attack_hits__19TObjEneBm9MericarolFPv(Ene_802CF6AC *o) {
    s32 ret;
    s32 i;
    VObj_18_9e4fef *p;
    ret = 0;
    init_all_slots__10TObjPlayerFv();
    check_object_collisions__10TObjPlayerFPv(o);
    if (*(u32 *)(o->fa4 + 0x18) & 0x80000) {
        ret = 1;
        for (i = 0; i < 16; i++) {
            p = (VObj_18_9e4fef *)get_battle_param__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            if (obj_is_hit_receivable() != 0 && attack_target_history_add(o->f488, p) != 0) {
                Arg_802CF6AC t;
                t.a = 0;
                t.b = *(f32 *)lbl_80540B7C[((s32 (*)(void *))get_phase__19TObjEneBm9MericarolFPv)(o)];
                Arg_802CF6AC arg = t;
                if (p->m21(o, (s32 *)&arg, 0, -1, -1) > lbl_805DE70C) {
                    obj_setFlags30(p, 0x600);
                }
            }
        }
    }
    return ret;
}

void TObjEneDD__sub_802CF7B4(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r30;
    u8 *temp_r4_2;
    u8 *temp_r5_2;
    switch (arg1) {
    case 4:
        sync_center_position__19TObjEneBm9MericarolFPv((void *) (arg0));
        if (enemy_probe_wall_ahead((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (lbl_805DE720)) != 0U) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
            M2C_FIELD(arg0, s32 *, 0x490) = 3;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 3);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
        temp_r4 = temp_r5 & ~0x28;
        M2C_FIELD(arg0, s32 *, 0x438) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        M2C_FIELD(arg0, s32 *, 0x494) = 0;
        M2C_FIELD(arg0, s32 *, 0x498) = 0xA;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x444);
        M2C_FIELD(arg0, f32 *, 0x4A4) = temp_f1;
        M2C_FIELD(arg0, f32 *, 0x4A8) = (f32) lbl_805DE70C;
        fill_value_array((int) (M2C_FIELD(arg0, s32 *, 0x488)), (int) (temp_r4), (int) (temp_r5), (f32) (temp_f1));
        set_active__9TObjEneDDFPv((void *) (arg0));
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x490) == 3) {
            transition_enemy_state(arg0, 3);
        }
        return;
    case 0:
        ((M2C_UNK (*)())advance_animation_playback)();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x490);
        switch (temp_r0) {
        case 0:
            sync_center_position__19TObjEneBm9MericarolFPv((void *) (arg0));
            if (enemy_probe_wall_ahead((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (lbl_805DE720)) != 0U) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                M2C_FIELD(arg0, s32 *, 0x490) = 3;
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD0E), arg0 + 0x38, 0, 0);
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x498) = (s32) (M2C_FIELD(arg0, s32 *, 0x498) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x498) <= 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                M2C_FIELD(arg0, s32 *, 0x490) = 1;
                M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x20);
                temp_r5_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
                M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x18) | 0x700);
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD0E), arg0 + 0x38, 0, 0);
            }
            if (enemy_validate_retained_target((void *) (arg0)) != 0) {
                enemy_copy_target_destination((void *) (arg0));
                update_velocity__9TObjEneDDFPv((void *) (arg0));
            }
            M2C_FIELD(arg0, s32 *, 0x4A0) = (s32) (lbl_804724B8 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8))));
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x4A0)), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)));
            ((VObj_18_313dd8 *)(arg0))->m87();
            return;
        case 1:
            fn_802CE510((void *) (arg0));
            var_r30 = 0;
            sync_center_position__19TObjEneBm9MericarolFPv((void *) (arg0));
            if (enemy_probe_wall_ahead((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (lbl_805DE718 * M2C_FIELD(arg0, f32 *, 0x444))) != 0U) {
                var_r30 = 1;
            }
            move_clamped_on_ground__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (M2C_FIELD(arg0, f32 *, 0x444)));
            if (has_move_failures__9TObjEneDDFPvi((void *) (arg0), (int) (1)) != 0) {
                var_r30 = 1;
            }
            update_enemy_collision_flags__10TObjPlayerFPv((void *) (arg0));
            if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) & 0x200000) {
                var_r30 = 1;
            }
            check_attack_hits__19TObjEneBm9MericarolFPv((Ene_802CF6AC *)((void *) (arg0)));
            M2C_FIELD(arg0, f32 *, 0x4A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x4A8) + M2C_FIELD(arg0, f32 *, 0x444));
            if (M2C_FIELD(arg0, f32 *, 0x4A8) >= lbl_805DE724) {
                var_r30 = 1;
            }
            if (var_r30 != 0) {
                M2C_FIELD(arg0, s32 *, 0x490) = 2;
                M2C_FIELD(arg0, s32 *, 0x494) = 0;
                M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFDF);
                ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 3);
                return;
            }
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x494) = (s32) (M2C_FIELD(arg0, s32 *, 0x494) + 1);
            M2C_FIELD(arg0, f32 *, 0x4A4) = (f32) (M2C_FIELD(arg0, f32 *, 0x4A4) * lbl_805DE728);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x494) >= 0xA) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                M2C_FIELD(arg0, s32 *, 0x490) = 3;
            }
            ((VObj_18_313dd8 *)(arg0))->m87();
            move_clamped_on_ground__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (M2C_FIELD(arg0, f32 *, 0x4A4)));
            return;
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFDF);
        temp_r4_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x18) & 0xFFFFF8FF);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}
#define OBJINBAND(o, f) ((s32 (*)(void *, f32))objInBand__FP7GameObjf)((o), (f))
void TObjPlayer__sub_802CFB64(u8 *arg0, s32 arg1) {
    Vec_802CFB64 sp2C;
    Vec_802CFB64 sp20;
    Vec_802CFB64 sp14;
    Vec_802CFB64 sp8;
    s32 i;
    s32 e1;
    s32 e0;
    u8 *p;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        ((VObj_18 *)(arg0))->m94();
        TObjEneBm9Mericarol__sub_802D0940(arg0);
        M2C_FIELD(arg0, s32 *, 0x438) &= ~8;
        M2C_FIELD(arg0, s32 *, 0x438) |= 0x20;
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        M2C_FIELD(arg0, s32 *, 0x494) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x490) == 2) {
            transition_enemy_state(arg0, 3);
        }
        break;
    case 1:
        break;
    case 0:
        ((M2C_UNK (*)(void *, s32))advance_animation_playback)(arg0, arg1);
        enemy_validate_retained_target(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x490)) {
        case 2:
            break;
        case 0:
            if (OBJINBAND(arg0, M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DE6F4 - M2C_FIELD(arg0, f32 *, 0xC8)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x490) = 1;
                M2C_FIELD(arg0, s32 *, 0x438) &= ~0x20;
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                M2C_FIELD(arg0, s32 *, 0x494) = 0;
                M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DE70C;
            } else {
                if (OBJINBAND(arg0, lbl_805DE72C) != 0) {
                    VecCopy__FP3VecPC3Vec(M2C_FIELD(arg0, u8 **, 0x48C) + 0x38, arg0 + 0x38);
                    init_all_slots__10TObjPlayerFv();
                    check_object_collisions__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x48C));
                    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x48C), u8 **, 0xA4), s32 *, 0x18) & 0x80000) {
                        for (i = 0; i < 0x10; i++) {
                            p = get_battle_param__10TObjPlayerFi(i);
                            if (p == NULL) {
                                break;
                            }
                            if (obj_is_hit_receivable() != 0 && ((VObj_18 *)p)->m18(arg0, lbl_805DE6F4) != 0) {
                                ((VObj_18 *)p)->m23(arg0, lbl_805DE6F4);
                                ((VObj_18 *)p)->m20(arg0, lbl_805DE6F4);
                            }
                        }
                    }
                } else if (OBJINBAND(arg0, lbl_805DE730) != 0) {
                    play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A40D), arg0 + 0x38, 0, 0);
                }
                e0 = lookup_entry_by_value__10TObjPlayerFPvf((void *)TBoss4Type3_shared_instance, M2C_FIELD(arg0, f32 *, 0xC0));
                e1 = lookup_entry_by_value__10TObjPlayerFPvf((void *)lbl_805D6864, M2C_FIELD(arg0, f32 *, 0xC0));
                push_matrix();
                set_matrix_identity__10TObjPlayerFPv(0);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                mult_vec_array__10TObjPlayerFUii(0, e0, &sp20, 2);
                mult_vec_array__10TObjPlayerFUii(0, e1, &sp8, 2);
                pop_matrix();
                if (M2C_FIELD(arg0, u8 **, 0x3C0) != NULL) {
                    ((VObj_18 *)M2C_FIELD(arg0, u8 **, 0x3C0))->m4((M2C_UNK *)&sp20, (M2C_UNK *)&sp2C);
                }
                if (M2C_FIELD(arg0, u8 **, 0x3C4) != NULL) {
                    ((VObj_18 *)M2C_FIELD(arg0, u8 **, 0x3C4))->m4((M2C_UNK *)&sp8, (M2C_UNK *)&sp14);
                }
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x494)++;
            if (M2C_FIELD(arg0, s32 *, 0x494) >= M2C_FIELD(lbl_80540B7C[((s32 (*)(void *))get_phase__19TObjEneBm9MericarolFPv)(arg0)], s32 *, 0x28)) {
                M2C_FIELD(arg0, s32 *, 0x490) = 2;
            }
            break;
        }
        enemy_copy_target_destination(arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x4A0) = (s32)(lbl_804724B8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)));
        M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x4A0), (void *)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
        M2C_FIELD(arg0, s32 *, 0x60) = (s16)M2C_FIELD(arg0, s32 *, 0x60);
        ((VObj_18 *)(arg0))->m100();
        ((VObj_18 *)(arg0))->m86();
        TObjEneBm9Mericarol__sub_802D073C(arg0);
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x438) &= ~2;
        break;
    }
}
#define OBJINBAND(o, f) ((s32 (*)(void *, f32))objInBand__FP7GameObjf)((o), (f))
#define PHASE(o) ((s32 (*)(void *))get_phase__19TObjEneBm9MericarolFPv)(o)
void handle_shot_state__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1) {
    u32 obj;
    s32 cmp;
    f32 lim;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((VObj_18_9e83f9 *)(arg0))->m94();
        TObjEneBm9Mericarol__sub_802D0940(arg0);
        M2C_FIELD(arg0, s32 *, 0x438) &= ~8;
        M2C_FIELD(arg0, s32 *, 0x438) |= 0x20;
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 3);
        M2C_FIELD(arg0, u32 *, 0x4AC) = 0;
        break;
    case 3:
        if (try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv() == 0 && get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            transition_enemy_state(arg0, 3);
        }
        break;
    case 1:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (OBJINBAND(arg0, lbl_805DE710) != 0) {
            TObjPlayer__sub_802CE68C(arg0, arg0 + 0x460, 0x43);
            obj = __nw__7TObjectFUl(0x118);
            if (obj != 0) {
                ((M2C_UNK (*)(void *, void *, void *, void *, f32, f32, s32))TObjEneBm9Mericarol__sub_802D1880)((void *)obj, arg0, arg0 + 0x460, (void *)(M2C_FIELD(arg0, s32 *, 0x390) + 0x38),
                    M2C_FIELD(lbl_80540B7C[PHASE(arg0)], f32 *, 0x8), M2C_FIELD(lbl_80540B7C[PHASE(arg0)], f32 *, 0xC),
                    ((f32 (*)(void *))calc_boss4_scale__10TObjPlayerFi)(arg0) <= (f32)M2C_FIELD(lbl_80540B7C[PHASE(arg0)], s32 *, 0x2C) / lbl_805DE720);
            }
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A307), arg0 + 0x460, 0, 0);
        }
        enemy_copy_target_destination(arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x4A0) = (s32)(lbl_804724B8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)));
        M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x4A0), (void *)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
        M2C_FIELD(arg0, s32 *, 0x60) = (s16)M2C_FIELD(arg0, s32 *, 0x60);
        ((VObj_18_9e83f9 *)(arg0))->m100();
        ((VObj_18_9e83f9 *)(arg0))->m86();
        TObjEneBm9Mericarol__sub_802D073C(arg0);
        break;
    case 5:
        if (M2C_FIELD(arg0, u32 *, 0x4AC) != 0) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4AC));
            M2C_FIELD(arg0, u32 *, 0x4AC) = 0;
        }
        break;
    }
}
void TObjEneBm9Mericarol__sub_802D01D8(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    s32 temp_r3;
    s32 temp_r5;
    u16 var_r30;
    switch (arg1) {
    case 4:
        if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 2) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD0E), (void *) ((u8 *)(arg0) + 0x38), 0, 0);
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        }
        ((VObj_18_9aa5d1 *)(arg0))->m94();
        TObjEneBm9Mericarol__sub_802D0940((void *) (arg0));
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r5 & ~0x28);
        set_field_378__9TObjEneDDFPvi((void *) (arg0), 3, temp_r5);
        M2C_FIELD(arg0, s32 *, 0x494) = 0;
        M2C_FIELD(arg0, s32 *, 0x4A0) = 0;
        break;
    case 3:
        if (try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv() != 0) {
            break;
        }
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DE734) || (M2C_FIELD(arg0, u32 *, 0x390) == 0U)) {
            transition_enemy_state((void *) (arg0), 2);
            break;
        }
        if (temp_f1 < lbl_805DE738) {
            if (angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x4A0)) < 0x4000) {
                if (calc_boss4_scale__10TObjPlayerFi((s32) (arg0)) <= M2C_FIELD(arg0, f32 *, 0x448)) {
                    transition_enemy_state((void *) (arg0), 9);
                    break;
                }
                transition_enemy_state((void *) (arg0), 5);
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x494) > M2C_FIELD(lbl_80540B7C[((s32 (*)(void *))get_phase__19TObjEneBm9MericarolFPv)(arg0)], s32 *, 0x20)) {
            transition_enemy_state((void *) (arg0), 4);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        var_r30 = 0xFFFF;
        if (tick_period_counter((void *) (arg0), (void *) ((u8 *)(arg0) + 0x450), 0x14) != 0) {
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805DE718) {
                if (((VObj_18_9aa5d1 *)(arg0))->m97() != 0) {
                    var_r30 = set_squared_value__9TObjEneDDFf((void *) (arg0), M2C_FIELD(arg0, f32 *, 0x3AC) - lbl_805DE718);
                }
                if (var_r30 == 0xFFFF) {
                    var_r30 = enemy_find_nearest_player_in_range((void *) (arg0), M2C_FIELD(arg0, f32 *, 0x3AC) - lbl_805DE718);
                }
                if (var_r30 != 0xFFFF) {
                    enemy_set_target_id((void *) (arg0), var_r30);
                }
            }
        } else if (update_death_check__14TObjEneEpsilonFPv((void *) (arg0)) == 0) {
            break;
        }
        enemy_copy_target_destination((void *) (arg0));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x494)++;
        M2C_FIELD(arg0, s32 *, 0x4A0) = (s32) (lbl_804724B8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)));
        M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x4A0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)));
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (s16) M2C_FIELD(arg0, s32 *, 0x60);
        ((VObj_18_9aa5d1 *)(arg0))->m100();
        ((VObj_18_9aa5d1 *)(arg0))->m86();
        TObjEneBm9Mericarol__sub_802D073C((void *) (arg0));
        break;
    }
}

}
