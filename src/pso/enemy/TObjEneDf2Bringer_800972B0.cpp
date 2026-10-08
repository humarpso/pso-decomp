#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Bringer_80097714;
struct Bringer_800993E8;
struct Obj_80098EFC;
struct Obj_80098FF4;
struct VBase_800996EC { char pad[0x18]; };

struct VObj_800996EC : VBase_800996EC {
    virtual void m0(s32);
};

extern "C" {
M2C_UNK TObjPlayer__sub_800A05B8(void *, int);
M2C_UNK __dt__9TObjEneDDFv(void *, int);
M2C_UNK delete_buffer__12TBoss8DragonFis(int, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __destroy_arr(void *, void *, int, int);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
u8 *__dt__17TObjEneDf2BringerFv(u8 *arg0, s16 arg1);
}

extern "C" {
void render__17TObjEneDf2BringerFv(u8 *arg0);
void step_cutscene_frame__17TObjEneDf2BringerFv(void);
void TObjEneDf2Bringer__sub_80097620(u8 *arg0, s32 arg1);
void TObjEneDf2Bringer__sub_80097714(Bringer_80097714 *obj, s32 mode);
void TObjEneDf2Bringer__sub_80097820(u8 *arg0, s32 arg1);
void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
void TObjEneDf2Bringer__sub_80097E9C(u8 *arg0, s32 arg1);
void TObjEneDf2Bringer__sub_8009813C(u8 *arg0, s32 arg1);
void TObjEneDf2Bringer__sub_8009859C(u8 *arg0, s32 arg1);
void TObjEneDf2Bringer__sub_800987E8(u8 *arg0, s32 arg1);
void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
void TObjEneDf2Bringer__sub_80098BAC(u8 *arg0, s32 arg1);
void handle_state__17TObjEneDf2BringerFPvi(void *arg0, s32 arg1);
void TObjEneDf2Bringer__vt85(s32 arg0, u32 arg1, s32 arg2);
s32 check_stage_advance__17TObjEneDf2BringerFPv(void *arg0);
void TObjEneDf2Bringer__sub_80098DEC(u8 *arg0);
void TObjEneDf2Bringer__vt102(void *arg0, f32 farg0);
void TObjEneDf2Bringer__sub_80098EB4(s32 arg0);
s32 attack_visible_players__17TObjEneDf2BringerFPv(Obj_80098EFC *self);
s32 TObjEneDf2Bringer__sub_80098FF4(Obj_80098FF4 *self);
void update_flag_0x3C0__17TObjEneDf2BringerFPv(void *arg0);
void update_if_in_band__17TObjEneDf2BringerFi(s32 arg0);
void spawn_particle_if_in_band__17TObjEneDf2BringerFPv(u8 *arg0);
void spawn_offset_particle__17TObjEneDf2BringerFPv(u8 *arg0);
void update_attack_child__17TObjEneDf2BringerFPv(Bringer_800993E8 *obj);
void TObjEneDf2Bringer__sub_800994F8(void);
void TObjEneDf2Bringer__vt86(void);
void set_effect_pos_above_self__17TObjEneDf2BringerFPv(u8 *arg0);
void TObjEneDf2Bringer__vt59(void);
void TObjEneDf2Bringer__vt60(u8 *arg0);
void TObjEneDf2Bringer__vt61(void* p);
void TObjEneDf2Bringer__vt26(void);
void run_task__17TObjEneDf2BringerFv(u8 *arg0);
void init_enemy__17TObjEneDf2BringerFPv(u8 *arg0);
void * TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2);
void set_entry_value_clamped__17TObjEneDf2BringerFif(s32 arg0, f32 farg0);
void free_resources__17TObjEneDf2BringerFv(void);
void * create__17TObjEneDf2BringerFPv(void *arg0);
}

struct RecoveredGlobal_8031B170_lbl_804E8880
{
  M2C_UNK value;
  u8 remaining[0xCC];
};
extern "C" {
extern "C" u8 lbl_80439F70[];
extern "C" u8 lbl_80439F84[];
extern "C" u8 lbl_80439F9C[];
extern "C" u8 lbl_80439FB4[];
extern "C" u8 lbl_80439FD0[];
extern "C" u8 lbl_80439FE8[];
extern "C" u8 lbl_8043A000[];
extern "C" u8 lbl_8043A018[];
extern "C" u8 lbl_8043A030[];
extern "C" u8 lbl_8043A048[];
extern "C" u8 lbl_8043A060[];
extern "C" u8 lbl_8043A078[];
extern "C" u8 lbl_8043A090[];
extern void *lbl_8048FAB0[2];
extern void *lbl_8048FAB8[12];
void *lbl_8048FA10[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_8048FA2C[33] = {
    (void *)0x0, (void *)0x41a00000, (void *)0x41000000, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x40400000, (void *)0x0,
    (void *)0x0, (void *)0x9d03, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x40400000, (void *)0x0, (void *)0x0,
    (void *)0x9d03, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
__declspec(section ".data") void *lbl_8048FAB0[2] = {
    (void *)&lbl_80439F70, (void *)0x0,
};
void *lbl_8048FAB8[12] = {
    (void *)&lbl_80439F84, (void *)&lbl_80439F9C, (void *)&lbl_80439FB4, (void *)&lbl_80439FD0,
    (void *)&lbl_80439FE8, (void *)&lbl_8043A000, (void *)&lbl_8043A018, (void *)&lbl_8043A030,
    (void *)&lbl_8043A048, (void *)&lbl_8043A060, (void *)&lbl_8043A078, (void *)0x0,
};
void *lbl_8048FAE8[4] = {
    (void *)&lbl_8043A090, (void *)&lbl_8048FAB0, (void *)&lbl_8048FAB8, (void *)0x1000b,
};
void *lbl_8048FAF8[44] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x10000, (void *)0xa, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x7, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x0, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x2, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10000, (void *)0x1, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3ecccccd, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f19999a, (void *)0x0,
};
#define lbl_8048FAF8 (*(RecoveredGlobal_8031B170_lbl_804E8880 *)lbl_8048FAF8)
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
extern "C" void TObjEneDf2Bringer__vt103();
extern "C" void TObjEneDf2Bringer__vt104();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
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
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
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
void *__vt__17TObjEneDf2Bringer[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__17TObjEneDf2BringerFv, (void *)&run_task__17TObjEneDf2BringerFv,
    (void *)&render__17TObjEneDf2BringerFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneDf2Bringer__vt26, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneDf2Bringer__vt59, (void *)&TObjEneDf2Bringer__vt60, (void *)&TObjEneDf2Bringer__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneDf2Bringer__vt85,
    (void *)&TObjEneDf2Bringer__vt86, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneDf2Bringer__vt102, (void *)&TObjEneDf2Bringer__vt103, (void *)&TObjEneDf2Bringer__vt104,
};
#define __vt__17TObjEneDf2Bringer ((M2C_UNK *)__vt__17TObjEneDf2Bringer)

}

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

struct RecoveredGlobal_800975A8_lbl_805008A8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_80097714 { f32 x, y, z; };

struct BringerBase_80097714 { char pad[0x18]; };

struct Bringer_80097714 : BringerBase_80097714 {
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

struct Fields_80097714 {
    u8 pad0[0xB8];
    s16 fieldB8;
    u8 padBA[0x308 - 0xBA];
    Vec_80097714 vel;
    u8 pad314[0x378 - 0x314];
    s32 field378;
    u8 pad37C[0x484 - 0x37C];
    s32 timer;
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

struct VB2_800987E8 { u8 pad0[0x14]; };

struct V2_800987E8 : VB2_800987E8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
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

struct Vec_800972B0 { f32 x, y, z; };

struct Ent_800972B0 { s32 a, b, c; };

struct Fade_800972B0 { u8 pad[0x1C]; };

struct Fields_800972B0 {
    u8 pad0[0x24];
    Ent_800972B0 **f24;
    u8 pad28[0x2FC - 0x28];
    Vec_800972B0 pos;
    u8 pad308[0x3E0 - 0x308];
    Fade_800972B0 fades[4];
    Vec_800972B0 pts[4];
    s32 f480;
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

struct Vec_8009813C { f32 x, y, z; };

struct Sub_8009813C { u8 pad[0x18]; s32 flags; };

struct Prm_8009813C { f32 speed; u8 pad4[0x18]; s32 i1C; };

struct VB_80097820 { char pad[0x18]; };

struct VO_80097820 : VB_80097820 {
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

struct Vec_80097820 { f32 x, y, z; };

#include <stddef.h>
struct VBase_18_d3b6b2 { char pad[0x18]; };

struct VObj_18_d3b6b2 : VBase_18_d3b6b2 {
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

struct Stack_80097E9C {
    f32 sp8[3];
    f32 sp14[3];
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

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TObjPlayer__sub_800A04F0(void *);
s32 refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
s32 request_two_effects__10TObjPlayerFPv(void *);
s32 apply_effect_variant_b__10TObjPlayerFii(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneDf2Bringer__sub_80097620(u8 *arg0, s32 arg1);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(void *, int);
M2C_UNK rotate_matrix_x(int, int);
extern RecoveredGlobal_800975A8_lbl_805008A8 lbl_805008A8;
extern s32 TObjEneDf2Bringer__data_805D4FBC;
extern s32 TObjEneDf2Bringer__data_805D4FC0;
extern s32 TObjEneDf2Bringer__data_805D4FC4;
void step_cutscene_frame__17TObjEneDf2BringerFv(void);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 check_stage_advance__17TObjEneDf2BringerFPv(void *);
void clear_field_388__9TObjEneDDFPv(void *p);
void set_active__9TObjEneDDFPv(void *p);
void move_clamped_on_ground__9TObjEneDDFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void clear_attack_receipts(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D97E4;
void TObjEneDf2Bringer__sub_80097714(Bringer_80097714 *obj, s32 mode);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
extern f32 TObjEneDf2Bringer__data_805D9820;
void TObjEneDf2Bringer__sub_800987E8(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, void *, int);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK scroll_strip_uvs(int, int, int);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void step_cutscene_frame__17TObjEneDf2BringerFv(void);
extern Vec_800972B0 lbl_8043A0D4[];
extern s32 TObjEneDf2Bringer__data_805D4FBC;
extern s32 TObjEneDf2Bringer__data_805D4FC0;
extern s32 TObjEneDf2Bringer__data_805D4FC4;
extern s32 TObjEneDf2Bringer__data_805D4FCC;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D97D8;
extern const f32 lbl_805D97DC;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void render__17TObjEneDf2BringerFv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, const void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
void fill_value_array(s32);
s32 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(s32, s32, s32, s32, s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 check_stage_advance__17TObjEneDf2BringerFPv(void *);
#define update_if_in_band__17TObjEneDf2BringerFi ((void (*)(void *))update_if_in_band__17TObjEneDf2BringerFi)
#define spawn_particle_if_in_band__17TObjEneDf2BringerFPv ((void (*)(void *))spawn_particle_if_in_band__17TObjEneDf2BringerFPv)
#define spawn_offset_particle__17TObjEneDf2BringerFPv ((void (*)(void *))spawn_offset_particle__17TObjEneDf2BringerFPv)
s32 TObjEneDf2Bringer__sub_80099248(void *);
s32 enemy_validate_retained_target(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
void clear_field_388__9TObjEneDDFPv(void *p);
void set_active__9TObjEneDDFPv(void *p);
s32 has_move_failures__9TObjEneDDFPvi(void *, s32);
void move_clamped_on_ground__9TObjEneDDFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
u32 enemy_probe_wall_ahead(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
s32 play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
s32 play_sound_effect(void *, void *, int, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
M2C_UNK subtract_vector(void *, void *);
extern const f64 TObjEneDf2Bringer__data_8043A0F8;
extern Prm_8009813C *TObjEneDf2Bringer__data_805D4FB4;
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 TObjEneDf2Bringer__data_805D97F4;
extern const f32 lbl_805D9810;
extern const f32 lbl_805D9814;
extern const f32 lbl_805D9818;
extern const f32 lbl_805D981C;
void TObjEneDf2Bringer__sub_8009813C(u8 *arg0, s32 arg1);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
u32 create_particle_emitter(void *, M2C_UNK);
M2C_UNK copy_vec3__11TBoss4Type2FPvPv(void *, void *);
M2C_UNK set_flags__11TBoss4Type2FPvUi(void *, u32);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);
#define TObjEneDf2Bringer__sub_80098EB4 ((M2C_UNK (*)(void *))TObjEneDf2Bringer__sub_80098EB4)
#define attack_visible_players__17TObjEneDf2BringerFPv ((s32 (*)(void *))attack_visible_players__17TObjEneDf2BringerFPv)
#define TObjEneDf2Bringer__sub_80098FF4 ((s32 (*)(void *))TObjEneDf2Bringer__sub_80098FF4)
M2C_UNK setup_dir_shot__17TObjEneDf2BringerFPvPvif(void *, void *, int, f32);
M2C_UNK fn_8009A704(void *, void *, void *, f32);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
s32 play_sound_effect(void *, void *, int, int);
void *__nw__7TObjectFUl(u32);
extern const f64 TObjEneDf2Bringer__data_8043A0F8;
extern Prm_8009813C *TObjEneDf2Bringer__data_805D4FB4;
extern const f32 lbl_805D97E8;
extern const f32 lbl_805D97EC;
extern const f32 lbl_805D97F0;
extern const f32 TObjEneDf2Bringer__data_805D97F4;
extern const f32 lbl_805D97F8;
extern const f32 lbl_805D97FC;
extern const f32 lbl_805D9800;
extern const f32 lbl_805D9804;
extern const f32 TObjEneDf2Bringer__data_805D9808;
void TObjEneDf2Bringer__sub_80097820(u8 *arg0, s32 arg1);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
void fill_value_array(s32);
s32 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(s32, s32, s32, s32, s32);
s32 check_stage_advance__17TObjEneDf2BringerFPv(void *);
#define update_attack_child__17TObjEneDf2BringerFPv ((M2C_UNK (*)(void *))update_attack_child__17TObjEneDf2BringerFPv)
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK reset_timer__11TBoss4Type3FPv(void *);
s32 lookup_entry_by_value__10TObjPlayerFPvf(int, f32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 play_sound_effect(void *, void *, int, int);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK set_matrix_identity__10TObjPlayerFPv(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern Prm_8009813C *TObjEneDf2Bringer__data_805D4FB4;
extern s32 TObjEneDf2Bringer__data_805D4FC8;
extern const f32 TObjEneDf2Bringer__data_805D97F4;
extern const f32 lbl_805D980C;
void TObjEneDf2Bringer__sub_80097E9C(u8 *arg0, s32 arg1);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(s32, s32, s32, s32, s32);
#define update_flag_0x3C0__17TObjEneDf2BringerFPv ((s32 (*)(void *))update_flag_0x3C0__17TObjEneDf2BringerFPv)
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
void move_clamped_on_ground__9TObjEneDDFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK advance_animation_playback(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f64 TObjEneDf2Bringer__data_8043A0F8;
extern Prm_8009813C *TObjEneDf2Bringer__data_805D4FB4;
void TObjEneDf2Bringer__sub_8009859C(u8 *arg0, s32 arg1);
}

extern "C" {

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
u32 create_particle_emitter(void *, M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK enable__13TParticleCtrlFPv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

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
    virtual M2C_UNK v87();
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
    virtual M2C_UNK v100();
};

typedef char RecoveredGlobal_800975A8_lbl_805008A8_size[sizeof(RecoveredGlobal_800975A8_lbl_805008A8) == 0x10 ? 1 : -1];

#define S ((Fields_800972B0 *)arg0)
#pragma push
#pragma opt_loop_invariants off
void render__17TObjEneDf2BringerFv(u8 *arg0) {
    s32 var_r31;
    s32 temp_r29;
    Fade_800972B0 *temp_r28;
    s32 var_r27;
    s32 temp_r27;
    s32 mode;
    s32 i;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_1fdb47 *)(arg0))->m104();
        return;
    }
    mode = 0;
    if (is_split_screen() != 0) {
        mode = get_camera_mode__11TCameraCtrlFv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 1) {
        var_r31 = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        var_r31 = ((VObj_18_1fdb47 *)(arg0))->m9(lbl_805D9E88, lbl_805D9E84, lbl_805D97DC);
    } else if (((VObj_18_1fdb47 *)(arg0))->m8(lbl_805D97D8, lbl_805D97DC) != 0) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        {
            Vec_800972B0 v = lbl_8043A0D4[0];
            update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        }
        update_secondary_light__9TObjEneDDFPv((void *) (arg0));
        TObjEneDf2Bringer__data_805D4FBC = 0;
        TObjEneDf2Bringer__data_805D4FC0 = S->f480;
        TObjEneDf2Bringer__data_805D4FC4 = (s32) S->pts;
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        temp_r28 = &S->fades[mode];
        var_r27 = 1;
        update_obstruction_fade(temp_r28);
        temp_r29 = updateFromCamera__15RenderFadeStateFPCf(temp_r28, (void *) ((u8 *)(arg0) + 0x2FC));
        if (M2C_FIELD(arg0, s32 *, 0x3C0) & 2) {
            ((VObj_14_aa9368 *)((u8 *)(arg0) + (964)))->m6();
            if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
                var_r27 = 0;
            }
        } else if (temp_r29 != 0) {
            ((VObj_14_aa9368 *)(temp_r28))->m6();
            if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
                var_r27 = 0;
            }
        }
        scroll_strip_uvs(TObjEneDf2Bringer__data_805D4FCC, (s16) M2C_FIELD(arg0, s32 *, 0x4A8), 0);
        set_global_param__8TObjFishFi(S->f24);
        {
            Ent_800972B0 *e = *S->f24;
            temp_r27 = M2C_FIELD(e, s32 *, 0x14);
            M2C_FIELD(e, s32 *, 0x14) = e[M2C_FIELD(arg0, s32 *, 0x488)].c;
        }
        if (var_r27 != 0) {
            push_matrix();
            post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_state__16TObjEneRe7BeruraFi((void *) (&step_cutscene_frame__17TObjEneDf2BringerFv));
            set_global_flag__10TObjPlayerFv();
            if (var_r31 == 1) {
                draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            } else {
                render_world_model__10TObjPlayerFPv((void *) (arg0));
            }
            clear_global_state__10TObjPlayerFv();
            set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
            pop_matrix();
        }
        if (M2C_FIELD(arg0, s32 *, 0x3C0) & 2) {
            ((VObj_14_aa9368 *)((u8 *)(arg0) + (964)))->m7();
        } else if (temp_r29 != 0) {
            ((VObj_14_aa9368 *)(temp_r28))->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv((void *) (arg0));
        M2C_FIELD(*S->f24, s32 *, 0x14) = temp_r27;
        return;
    }
    for (i = 0; i < 4; i++) {
        VecCopy__FP3VecPC3Vec(&S->pts[i], &S->pos);
    }
}
#pragma pop

void step_cutscene_frame__17TObjEneDf2BringerFv(void) {
    s32 temp_r4;
    switch (TObjEneDf2Bringer__data_805D4FBC) {
    case 8:
        rotate_matrix_x((int) (0), (int) (TObjEneDf2Bringer__data_805D4FC0));
        break;
    case 11:
    case 16:
    case 26:
    case 41:
        temp_r4 = TObjEneDf2Bringer__data_805D4FC4;
        TObjEneDf2Bringer__data_805D4FC4 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((void *) (&lbl_805008A8.value), (int) (temp_r4));
        break;
    }
    TObjEneDf2Bringer__data_805D4FBC += 1;
}

void TObjEneDf2Bringer__sub_80097620(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((VObj_18_beae68 *)(arg0))->m92();
        refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) (arg0));
        request_two_effects__10TObjPlayerFPv((void *) (arg0 + 0x2FC));
        TObjPlayer__sub_800A04F0((void *) (arg0 + 0x3C4));
        play_sound_effect((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003A511))))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x200));
        return;
    case 0:
        ((s32)advance_animation_playback((void *)((void *) (arg0))));
        if (((VObj_14_c1c33b *)((u8 *)(arg0) + (964)))->m4() != 0) {
            apply_effect_variant_b__10TObjPlayerFii((void *) (arg0 + 0x38), (int) (0));
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    case 3:
    case 5:
        return;
    }
}

void TObjEneDf2Bringer__sub_80097714(Bringer_80097714 *obj, s32 mode) {
    Fields_80097714 *self = (Fields_80097714 *)obj;
    Vec_80097714 v;
    f32 speed;
    switch (mode) {
    case 4:
        self->fieldB8 = 6;
        advance_animation_playback(self);
        set_active__9TObjEneDDFPv(self);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(self) != 0 &&
            check_stage_advance__17TObjEneDf2BringerFPv(self) == 0) {
            transition_enemy_state((void *)(self), (M2C_UNK)(self->field378));
        }
        break;
    case 0:
        ((s32)advance_animation_playback(self));
        self->timer--;
        VecCopy__FP3VecPC3Vec(&v, &self->vel);
        speed = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        move_clamped_on_ground__9TObjEneDDFPvfff(self, v.x, v.z, speed);
        self->vel.x *= lbl_805D97E4;
        self->vel.z *= lbl_805D97E4;
        obj->m87();
        break;
    case 5:
        clear_attack_receipts(self);
        clear_field_388__9TObjEneDDFPv(self);
        break;
    }
}

#define F_8009(off, T) M2C_FIELD(arg0, T *, off)
#define get_ad_end_text_start__10TObjPlayerFv ((f32 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)
void TObjEneDf2Bringer__sub_80097820(u8 *arg0, s32 arg1) {
    void *e;
    switch (arg1) {
    case 4:
        F_8009(0xB8, s16) = 9;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        F_8009(0x3C0, s32) &= ~3;
        F_8009(0x3C0, s32) |= 4;
        F_8009(0x4AC, s32) = 0;
        F_8009(0x4B0, s32) = 0;
        F_8009(0x4B4, s32) = 0;
        F_8009(0x4B8, s32) = 0;
        F_8009(0x4C4, u32) = 0;
        break;
    case 3:
        if (F_8009(0x4AC, s32) == 4) {
            transition_enemy_state(arg0, 4);
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (F_8009(0x4AC, s32)) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                if (TObjEneDf2Bringer__sub_80098FF4(arg0) != 0) {
                    enemy_copy_target_destination(arg0);
                    update_velocity__9TObjEneDDFPv(arg0);
                    F_8009(0x4B8, s32) = (u16)(s32)(((const f64 *)&TObjEneDf2Bringer__data_8043A0F8)[0] * ((f32)get_ad_end_text_start__10TObjPlayerFv(F_8009(0x3A0, f32), F_8009(0x3A8, f32))));
                    F_8009(0x4AC, s32) = 1;
                    F_8009(0xB8, s16) = 1;
                } else {
                    F_8009(0x4AC, s32) = 4;
                }
            } else {
                if (objInBand__FP7GameObjf(arg0, lbl_805D97E8) != 0) {
                    Vec_80097820 v = M2C_FIELD(arg0, Vec_80097820 *, 0x38);
                    void *o;
                    v.y += lbl_805D97E8;
                    o = __nw__7TObjectFUl(0x100);
                    if (o != 0) {
                        fn_8009A704(o, arg0, &v, lbl_805D97EC);
                    }
                }
                if (objInBand__FP7GameObjf(arg0, lbl_805D97F0) != 0) {
                    F_8009(0x4B4, s32) = attack_visible_players__17TObjEneDf2BringerFPv(arg0);
                    play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B20B), arg0 + 0x38, 0, 0);
                }
                if ((e = F_8009(0x4C4, void *)) == 0) {
                    F_8009(0x4C4, u32) = create_particle_emitter(arg0 + 0x474, 0xEB);
                    if (F_8009(0x4C4, u32) != 0) {
                        enable__13TParticleCtrlFPv(F_8009(0x4C4, void *));
                    }
                } else if (F_8009(0xC0, f32) < TObjEneDf2Bringer__data_805D97F4 || F_8009(0xC0, f32) > lbl_805D97F8) {
                    enable__13TParticleCtrlFPv(e);
                } else {
                    copy_pos__11TNowLoadingFPvPv(e, arg0 + 0x474);
                }
            }
            break;
        case 1:
            F_8009(0x60, s32) = approach_angle_limited((s32)(F_8009(0x60, s32)), (s32)(F_8009(0x4B8, s32)), (s32)(0x300));
            if ((u16)F_8009(0x60, s32) == F_8009(0x4B8, s32)) {
                F_8009(0x4AC, s32) = 2;
                F_8009(0xB8, s16) = 5;
                play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A80A), arg0 + 0x38, 0, 0);
            }
            if (F_8009(0x4C4, u32) != 0) {
                queue_destruction__7TObjectFv(F_8009(0x4C4, void *));
                F_8009(0x4C4, u32) = 0;
            }
            TObjEneDf2Bringer__sub_80098EB4(arg0);
            break;
        case 2:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                if (check_v2_mode__9TObjEneDDFv() != 0) {
                    F_8009(0x4B0, s32)++;
                    if (F_8009(0x4B0, s32) < 3) {
                        if (TObjEneDf2Bringer__sub_80098FF4(arg0) != 0) {
                            enemy_copy_target_destination(arg0);
                            update_velocity__9TObjEneDDFPv(arg0);
                            F_8009(0x4B8, s32) = (u16)(s32)(((const f64 *)&TObjEneDf2Bringer__data_8043A0F8)[0] * ((f32)get_ad_end_text_start__10TObjPlayerFv(F_8009(0x3A0, f32), F_8009(0x3A8, f32))));
                            F_8009(0x4AC, s32) = 1;
                            F_8009(0xB8, s16) = 1;
                        } else {
                            F_8009(0x4AC, s32) = 4;
                        }
                    } else {
                        F_8009(0x4B0, s32) = 0;
                        F_8009(0x4AC, s32) = 3;
                        F_8009(0x494, s32) = 0;
                        F_8009(0x488, s32) = 1;
                        F_8009(0x3C0, s32) &= ~8;
                    }
                } else {
                    F_8009(0x4AC, s32) = 3;
                    F_8009(0x494, s32) = 0;
                    F_8009(0x488, s32) = 1;
                    F_8009(0x3C0, s32) &= ~8;
                }
            }
            if (objInBand__FP7GameObjf(arg0, lbl_805D97FC) != 0) {
                f32 spd = (f32)M2C_FIELD((*(u8 * *)&TObjEneDf2Bringer__data_805D4FB4), s32 *, 0x24);
                if (F_8009(0x4B4, s32) > 150) {
                    spd *= lbl_805D9800;
                } else if (F_8009(0x4B4, s32) > 70) {
                    spd *= lbl_805D9804;
                }
                setup_dir_shot__17TObjEneDf2BringerFPvPvif(F_8009(0x4A0, void *), arg0 + 0x468, F_8009(0x4B8, s32), spd);
            }
            if ((e = F_8009(0x4C4, void *)) == 0) {
                F_8009(0x4C4, u32) = create_particle_emitter(arg0 + 0x38, 0xED);
                if (F_8009(0x4C4, u32) != 0) {
                    s32 ang[3];
                    ang[0] = 0;
                    ang[1] = F_8009(0x4B8, s32) - 0x4000;
                    ang[2] = -0x4000;
                    set_flags__11TBoss4Type2FPvUi(F_8009(0x4C4, void *), 2);
                    copy_vec3__11TBoss4Type2FPvPv(F_8009(0x4C4, void *), ang);
                    enable__13TParticleCtrlFPv(F_8009(0x4C4, void *));
                }
            } else if (F_8009(0xC0, f32) < TObjEneDf2Bringer__data_805D9808 || F_8009(0xC0, f32) > lbl_805D97FC) {
                enable__13TParticleCtrlFPv(e);
            } else {
                copy_pos__11TNowLoadingFPvPv(e, arg0 + 0x468);
            }
            break;
        case 3:
            F_8009(0x4B0, s32)++;
            if (F_8009(0x4B0, s32) >= 60) {
                F_8009(0x4AC, s32) = 4;
            }
            break;
        }
        ((VO_80097820 *)arg0)->m100();
        ((VO_80097820 *)arg0)->m87();
        break;
    case 5:
        F_8009(0x3C0, s32) &= ~8;
        F_8009(0x494, s32) = 0;
        if (F_8009(0x4C4, u32) != 0) {
            queue_destruction__7TObjectFv(F_8009(0x4C4, void *));
            F_8009(0x4C4, u32) = 0;
        }
        break;
    }
}
#undef get_ad_end_text_start__10TObjPlayerFv

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 7);
        M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x484) <= 0) {
            transition_enemy_state(arg0, 4);
        }
        return;
    case 0:
        advance_animation_playback((void *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x484) = (s32) (M2C_FIELD(arg0, s32 *, 0x484) - 1);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x4C4) = create_particle_emitter(arg0 + 0x450, 0x100);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x4C4));
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x484) & 1) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x450);
        } else {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x45C);
        }
        ((TObj *)arg0)->v100();
        ((TObj *)arg0)->v87();
        play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD0F), arg0, arg0 + 0x38, 0, 0);
        return;
    case 5:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C4));
            M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        }
        break;
    }
}

void TObjEneDf2Bringer__sub_80097E9C(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80097E9C, sp8) == 0x0) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80097E9C, sp14) == 0xC) ? 1 : -1];
    Stack_80097E9C stack;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    u8 *temp_r3_3;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        fill_value_array((s32)((int) (M2C_FIELD(arg0, s32 *, 0x49C))));
        reset_timer__11TBoss4Type3FPv((void *) (M2C_FIELD(arg0, u8 **, 0x4A4)));
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        break;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4B0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x48C) = (s32) (M2C_FIELD(arg0, s32 *, 0x48C) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x48C) >= 2) {
                M2C_FIELD(arg0, s32 *, 0x48C) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
            }
            if (check_stage_advance__17TObjEneDf2BringerFPv((void *) (arg0)) == 0) {
                transition_enemy_state((void *) (arg0), (int) (4));
            }
        }
        break;
    case 0:
        ((M2C_UNK (*)())advance_animation_playback)();
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x480) = turn_toward_angle_limited__15TObjBoss2TunnelFiiiii((s32)((int) (temp_r3)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x480))), (s32)((int) (temp_r3)), (s32)((int) (0x200)), (s32)((int) (0x2000)));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B0);
        switch (temp_r0) {
        case 0:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDf2Bringer__data_805D97F4)) != 0) {
                spawn_offset_particle__17TObjEneDf2BringerFPv((void *) (arg0));
            }
            temp_r3_2 = lookup_entry_by_value__10TObjPlayerFPvf((int) (TObjEneDf2Bringer__data_805D4FC8), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
            if (temp_r3_2 != 0) {
                push_matrix();
                set_matrix_identity__10TObjPlayerFPv((int) (0));
                post_translate_matrix((void *) (arg0 + 0x38));
                rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
                matrix_mult_vec((int) (0), (void *) (temp_r3_2 + 0x18), (void *) (&stack.sp8));
                matrix_mult_vec((int) (0), (void *) (temp_r3_2), (void *) (&stack.sp14));
                pop_matrix();
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x4A4));
                ((VObj_18_d3b6b2 *)(temp_r3_3))->m4((M2C_UNK *)stack.sp8, (M2C_UNK *)stack.sp14);
            }
            update_attack_child__17TObjEneDf2BringerFPv((void *) (arg0));
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D980C)) != 0) {
                play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A30C)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                play_effect_if_v2__10TObjPlayerFi((int) (-0x200));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x4B0) = 1;
                M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) + 1);
            if ((f32) M2C_FIELD(arg0, s32 *, 0x4AC) >= M2C_FIELD((*(u8 * *)&TObjEneDf2Bringer__data_805D4FB4), f32 *, 0x14)) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 2;
            }
            break;
        }
        ((VObj_18_d3b6b2 *)(arg0))->m100();
        ((VObj_18_d3b6b2 *)(arg0))->m87();
        break;
    case 5:
        break;
    }
}

#pragma push
#pragma fp_contract on
#define F(t, o) M2C_FIELD(arg0, t *, o)
#define PRM TObjEneDf2Bringer__data_805D4FB4
#define VO ((VObj_18_313dd8 *)(arg0))
void TObjEneDf2Bringer__sub_8009813C(u8 *arg0, s32 arg1) {
    Vec_8009813C d;
    s32 hit;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 7;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        F(s32, 0x3C0) &= ~7;
        F(s32, 0x4AC) = 0;
        F(s32, 0x4B0) = 0;
        F(f32, 0x4BC) = PRM->speed;
        fill_value_array(F(s32, 0x49C));
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (F(s32, 0x4AC) == 3) {
            F(s32, 0x48C) = 0;
            F(s32, 0x490)++;
            F(s32, 0x3C0) &= ~8;
            if (check_stage_advance__17TObjEneDf2BringerFPv(arg0) == 0) {
                transition_enemy_state(arg0, 7);
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (F(s32, 0x4AC)) {
        case 0:
            if (objInBand__FP7GameObjf(arg0, TObjEneDf2Bringer__data_805D97F4) != 0 || objInBand__FP7GameObjf(arg0, lbl_805D9810) != 0) {
                spawn_offset_particle__17TObjEneDf2BringerFPv(arg0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                F(s16, 0xB8) = 2;
                F(s32, 0x4AC) = 1;
                F(s32, 0x3C0) |= 4;
                F(Sub_8009813C *, 0xA4)->flags |= 0x700;
            }
            if (enemy_validate_retained_target(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
            }
            F(s32, 0x60) = approach_angle_limited(F(s32, 0x60), (s32)(TObjEneDf2Bringer__data_8043A0F8 * get_ad_end_text_start__10TObjPlayerFv(F(f32, 0x3A0), F(f32, 0x3A8))), 0x280);
            F(s32, 0x480) = turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(F(s32, 0x60), F(s32, 0x480), F(s32, 0x60), 0x200, 0x2000);
            VO->m87();
            break;
        case 1:
            spawn_particle_if_in_band__17TObjEneDf2BringerFPv(arg0);
            hit = 0;
            if (enemy_probe_wall_ahead(arg0, F(f32, 0x3A0), F(f32, 0x3A8), lbl_805D9814 * PRM->speed) != 0) {
                hit = 1;
            }
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, F(f32, 0x3A0), F(f32, 0x3A8), PRM->speed);
            if (has_move_failures__9TObjEneDDFPvi(arg0, 1) != 0) {
                hit = 1;
            }
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            if (F(Sub_8009813C *, 0xA4)->flags & 0x200000) {
                hit = 1;
            }
            if (TObjEneDf2Bringer__sub_80099248(arg0) != 0) {
                hit = 1;
            }
            if (enemy_validate_retained_target(arg0) != 0) {
                VecCopy__FP3VecPC3Vec(&d, F(u8 *, 0x390) + 0x38);
                subtract_vector(&d, arg0 + 0x38);
                if (clamp_velocity__15TObjBoss2TunnelFPv(&d) >= lbl_805D9814) {
                    if (d.x * sin_table_lookup(F(s32, 0x60)) + d.z * cos_table_lookup(F(s32, 0x60)) < TObjEneDf2Bringer__data_805D97E0) {
                        hit = 1;
                    }
                }
            }
            if (hit != 0) {
                F(s32, 0x4AC) = 2;
                F(s32, 0x4B0) = 0;
                F(s32, 0x484) = PRM->i1C;
                F(s32, 0x3C0) &= ~4;
                set_field_378__9TObjEneDDFPvi(arg0, 7);
                play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B40E), arg0 + 0x38, 0, 0);
                play_effect_if_v2__10TObjPlayerFi(-0x200);
            }
            play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD09), arg0, arg0 + 0x38, 0, 0);
            break;
        case 2:
            F(s32, 0x4B0)++;
            if (F(s32, 0x4B0) >= 10) {
                F(s16, 0xB8) = 3;
                update_if_in_band__17TObjEneDf2BringerFi(arg0);
                if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                    F(s32, 0x4AC) = 3;
                }
                F(f32, 0x4BC) *= lbl_805D9818;
            }
            if (F(f32, 0x4BC) >= lbl_805D981C) {
                TObjEneDf2Bringer__sub_80099248(arg0);
            } else {
                VO->m87();
            }
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, F(f32, 0x3A0), F(f32, 0x3A8), F(f32, 0x4BC));
            break;
        }
        break;
    case 5:
        F(s32, 0x3C0) &= ~4;
        F(Sub_8009813C *, 0xA4)->flags &= ~0x700;
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneDf2Bringer__sub_8009859C(u8 *arg0, s32 arg1) {
    f32 t;
    s32 temp_r30;
    u8 *temp_r30_2;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        ((VObj_18_4225ac *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF8);
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(3));
        } else if ((M2C_FIELD(arg0, f32 *, 0x3AC) >= (f32) M2C_FIELD((*(u8 * *)&TObjEneDf2Bringer__data_805D4FB4), s32 *, 0x2C)) && (M2C_FIELD(arg0, s32 *, 0x490) < 2)) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(5));
        } else if (M2C_FIELD(arg0, s32 *, 0x4AC) == 1) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(6));
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (update_flag_0x3C0__17TObjEneDf2BringerFPv(arg0) != 0) {
            enemy_copy_target_destination(arg0);
            update_velocity__9TObjEneDDFPv(arg0);
        }
        {
        s32 ang;
        M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited((s32)(M2C_FIELD(arg0, s32 *, 0x60)), (s32)(ang = (s32) (TObjEneDf2Bringer__data_8043A0F8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)))), (s32)(0x300));
        M2C_FIELD(arg0, s32 *, 0x480) = turn_toward_angle_limited__15TObjBoss2TunnelFiiiii((s32)(M2C_FIELD(arg0, s32 *, 0x60)), (s32)(M2C_FIELD(arg0, s32 *, 0x480)), (s32)(ang), (s32)(0x200), (s32)(0x2000));
        }
        temp_r30_2 = (*(u8 * *)&TObjEneDf2Bringer__data_805D4FB4);
        if (M2C_FIELD(arg0, f32 *, 0x3AC) <= (f32) M2C_FIELD(temp_r30_2, s32 *, 0x28)) {
            t = M2C_FIELD(arg0, f32 *, 0x3A8) * cos_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x60)));
            t = (M2C_FIELD(arg0, f32 *, 0x3A0) * sin_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x60)))) + t;
            if (t >= cos_table_lookup((s32)(0x1800))) {
                M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
            }
        } else {
            t = cos_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x60)));
            move_clamped_on_ground__9TObjEneDDFPvfff(arg0, sin_table_lookup((s32)(M2C_FIELD(arg0, s32 *, 0x60))), t, M2C_FIELD(temp_r30_2, f32 *, 4));
        }
        ((VObj_18_4225ac *)(arg0))->m87();
        TObjEneDf2Bringer__sub_80098EB4(arg0);
        break;
    }
}
#pragma pop

void TObjEneDf2Bringer__sub_800987E8(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF8);
        ((VObj_18 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x4AC) == 2) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(4));
        } else if (M2C_FIELD(arg0, s32 *, 0x4AC) == 3) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(1));
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4AC);
        switch (temp_r0_2) {
        case 0:
            if (update_linked_position__14TObjEneEpsilonFPv((void *) (arg0), (f32) (TObjEneDf2Bringer__data_805D9820)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4AC) = 2;
            } else {
                M2C_FIELD(arg0, s32 *, 0x4B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B0) + 1);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x4B0) >= 0x3C) {
                    M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
                    ((V2_800987E8 *)(arg0 + 0x3C4))->m2();
                    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
                }
            }
            break;
        case 1:
            if (((V2_800987E8 *)(arg0 + 0x3C4))->m4() != 0) {
                M2C_FIELD(arg0, s32 *, 0x4AC) = 3;
            }
            break;
        }
        ((VObj_18 *)(arg0))->m100();
        ((VObj_18 *)(arg0))->m87();
        break;
    }
}

}
#undef S
#undef F
#undef PRM
#undef VO
#undef F_8009
#undef update_flag_0x3C0__17TObjEneDf2BringerFPv
#undef update_attack_child__17TObjEneDf2BringerFPv
#undef TObjEneDf2Bringer__sub_80098FF4
#undef attack_visible_players__17TObjEneDf2BringerFPv
#undef TObjEneDf2Bringer__sub_80098EB4
#undef spawn_offset_particle__17TObjEneDf2BringerFPv
#undef spawn_particle_if_in_band__17TObjEneDf2BringerFPv
#undef update_if_in_band__17TObjEneDf2BringerFi

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

extern "C" {
#define get_ad_end_text_start__10TObjPlayerFv ((f32 (*)(f64, f64))get_ad_end_text_start__10TObjPlayerFv)
s32 enemy_copy_target_destination(void *);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
s32 update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
extern const f64 TObjEneDf2Bringer__data_8043A0F8;
#define TObjEneDf2Bringer__data_805D9820 (*(const f32 *)&TObjEneDf2Bringer__data_805D9820)
void TObjEneDf2Bringer__sub_80098BAC(u8 *arg0, s32 arg1);
#define TObjEneDf2Bringer__sub_80097620 ((s32 (*)(void *, void *))TObjEneDf2Bringer__sub_80097620)
#define TObjEneDf2Bringer__sub_80097714 ((s32 (*)(void *, void *))TObjEneDf2Bringer__sub_80097714)
#define TObjEneDf2Bringer__sub_80097820 ((s32 (*)(void *, void *))TObjEneDf2Bringer__sub_80097820)
#define action__17TObjEneDf2BringerFPvi ((s32 (*)(void *, void *))action__17TObjEneDf2BringerFPvi)
#define TObjEneDf2Bringer__sub_80097E9C ((s32 (*)(void *, void *))TObjEneDf2Bringer__sub_80097E9C)
#define TObjEneDf2Bringer__sub_8009813C ((s32 (*)(void *, void *))TObjEneDf2Bringer__sub_8009813C)
#define TObjEneDf2Bringer__sub_8009859C ((s32 (*)(void *, void *))TObjEneDf2Bringer__sub_8009859C)
#define TObjEneDf2Bringer__sub_800987E8 ((s32 (*)(void *, void *))TObjEneDf2Bringer__sub_800987E8)
void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
void TObjEneDf2Bringer__sub_80098BAC(u8 *arg0, s32 arg1);
void handle_state__17TObjEneDf2BringerFPvi(void *arg0, s32 arg1);
void TObjEneDf2Bringer__vt85(s32 arg0, u32 arg1, s32 arg2);
}

extern "C" {

struct TBase_80098970 { char pad[0x18]; };
struct TObj_80098970 : TBase_80098970 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual M2C_UNK v3();
    virtual void v4();
    virtual M2C_UNK v5();
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
};
struct SubBase_80098970 { char pad[0x14]; };
struct SubObj_80098970 : SubBase_80098970 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual M2C_UNK v3();
    virtual void v4();
    virtual M2C_UNK v5();
};

void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
void handle_state__17TObjEneDf2BringerFPvi(void *arg0, s32 arg1);
#define advance_animation_playback ((M2C_UNK (*)())advance_animation_playback)
#define play_sound_effect ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
#define TObjEneDf2Bringer__sub_80098EB4 ((M2C_UNK (*)(void *))TObjEneDf2Bringer__sub_80098EB4)
#define update_if_in_band__17TObjEneDf2BringerFi ((M2C_UNK (*)(void *))update_if_in_band__17TObjEneDf2BringerFi)
#define spawn_particle_if_in_band__17TObjEneDf2BringerFPv ((M2C_UNK (*)(void *))spawn_particle_if_in_band__17TObjEneDf2BringerFPv)
#define VecCopy__FP3VecPC3Vec ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
#define play_effect_if_v2__10TObjPlayerFi ((M2C_UNK (*)(M2C_UNK))play_effect_if_v2__10TObjPlayerFi)
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);

#define TObjEneDf2Bringer__data_805D9820 (*(const f32 *)&TObjEneDf2Bringer__data_805D9820)
extern const f32 lbl_805D9824;

void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((TObj_80098970 *)arg0)->v93();
        ((SubObj_80098970 *)(arg0 + 0x3C4))->v3();
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3640D), arg0 + 0x38, 0, 0);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
        M2C_FIELD(arg0, s32 *, 0x494) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4B0) == 2) {
            transition_enemy_state(arg0, 4);
        }
        return;
    case 0:
        advance_animation_playback();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneDf2Bringer__data_805D9820);
        M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B0);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4AC) > 0x14) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 1;
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B40E), arg0 + 0x38, 0, 0);
                play_effect_if_v2__10TObjPlayerFi(-0x200);
            }
            spawn_particle_if_in_band__17TObjEneDf2BringerFPv(arg0);
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), lbl_805D9824);
            TObjEneDf2Bringer__sub_80098EB4(arg0);
            break;
        case 1:
            update_if_in_band__17TObjEneDf2BringerFi(arg0);
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 2;
            }
            break;
        }
        if (((SubObj_80098970 *)(arg0 + 0x3C4))->v5() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
            ((TObj_80098970 *)arg0)->v94();
            ((TObj_80098970 *)arg0)->v87();
            return;
        }
        break;
    case 5:
        ((TObj_80098970 *)arg0)->v94();
        break;
    }
}

void TObjEneDf2Bringer__sub_80098BAC(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((s32)set_field_378__9TObjEneDDFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (1))));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 1);
        ((VObj_18_599a64 *)(arg0))->m93();
        return;
    case 3:
        if (((s32)update_linked_position__14TObjEneEpsilonFPv((void *) (arg0), (f32) (TObjEneDf2Bringer__data_805D9820))) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (TObjEneDf2Bringer__data_8043A0F8 * get_ad_end_text_start__10TObjPlayerFv((f64) M2C_FIELD(arg0, f32 *, 0x3A0), (f64) M2C_FIELD(arg0, f32 *, 0x3A8)));
            transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (2)));
        }
    case 5:
    case 0:
        return;
    }
}

void handle_state__17TObjEneDf2BringerFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        return;
    case 3:
        transition_enemy_state(arg0, 1);
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) + 1);
    case 5:
        return;
    }
}
void TObjEneDf2Bringer__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        handle_state__17TObjEneDf2BringerFPvi((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        TObjEneDf2Bringer__sub_80098BAC((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 2:
        exec__17TObjEneDf2BringerFPvi((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 3:
        TObjEneDf2Bringer__sub_800987E8((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        TObjEneDf2Bringer__sub_8009859C((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneDf2Bringer__sub_8009813C((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneDf2Bringer__sub_80097E9C((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        action__17TObjEneDf2BringerFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        TObjEneDf2Bringer__sub_80097820((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        TObjEneDf2Bringer__sub_80097714((void *) (arg0), (void *) (arg2));
        return;
    case 10:
        TObjEneDf2Bringer__sub_80097620((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

}
#undef TObjEneDf2Bringer__data_805D9820
#undef play_effect_if_v2__10TObjPlayerFi
#undef VecCopy__FP3VecPC3Vec
#undef spawn_particle_if_in_band__17TObjEneDf2BringerFPv
#undef update_if_in_band__17TObjEneDf2BringerFi
#undef play_sound_effect
#undef advance_animation_playback
#undef TObjEneDf2Bringer__sub_800987E8
#undef TObjEneDf2Bringer__sub_8009859C
#undef TObjEneDf2Bringer__sub_8009813C
#undef TObjEneDf2Bringer__sub_80097E9C
#undef action__17TObjEneDf2BringerFPvi
#undef TObjEneDf2Bringer__sub_80097820
#undef TObjEneDf2Bringer__sub_80097714
#undef TObjEneDf2Bringer__sub_80097620
#undef TObjEneDf2Bringer__data_805D9820
#undef get_ad_end_text_start__10TObjPlayerFv
#undef TObjEneDf2Bringer__sub_80098EB4

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

extern "C" {
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D9810;
void update_if_in_band__17TObjEneDf2BringerFi(s32 arg0);
void set_target_player__13TBoss2DeRolLeFPvPv(void *, u32);
s32 get_player_by_client_id(u32);
void TObjEneDf2Bringer__sub_80098DEC(u8 *arg0);
M2C_UNK rotate_xz_pair_by_angle(f32 *, f32 *, s32, f32, f32);
M2C_UNK spawn_particle_effect(f32 *, M2C_UNK);
M2C_UNK vec3_add_to(f32 *, void *);
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 TObjEneDf2Bringer__data_805D9808;
extern const f32 lbl_805D9830;
void spawn_offset_particle__17TObjEneDf2BringerFPv(u8 *arg0);
M2C_UNK spawn_particle_effect(f32 *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 lbl_805D97E8;
void spawn_particle_if_in_band__17TObjEneDf2BringerFPv(u8 *arg0);
#define copy_target_state__14TObjEnePanarmsFPvPv ((s32 (*)(void *, int))copy_target_state__14TObjEnePanarmsFPvPv)
#define play_persistent_sound ((s32 (*)(void *, void *, void *, int, int))play_persistent_sound)
void TObjEneDf2Bringer__sub_80098EB4(s32 arg0);
Obj_80098FF4 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv(void);
u32 csnLookAt(void *, void *);
void enemy_clear_target(void *);
void enemy_set_target_id(void *, u16);
s32 is_alive__9TObjEneDDFPv(void *);
f32 horizontal_distance_squared(void *, void *);
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 lbl_805D982C;
s32 TObjEneDf2Bringer__sub_80098FF4(Obj_80098FF4 *self);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 check_v2_mode__9TObjEneDDFv(void);
#define lookup_entry_by_value__10TObjPlayerFPvf ((Entry_800993E8 * (*)(void *, f32))lookup_entry_by_value__10TObjPlayerFPvf)
void refresh_collision_body_centers(void *);
extern Pair_800993E8 lbl_8043A0CC[];
#define TObjEneDf2Bringer__data_805D4FC8 (*(void * *)&TObjEneDf2Bringer__data_805D4FC8)
extern const f32 lbl_805D980C;
extern const f32 lbl_805D9838;
extern const f32 lbl_805D983C;
void update_attack_child__17TObjEneDf2BringerFPv(Bringer_800993E8 *obj);
void check_can_act__10TObjPlayerFii(void *, s16);
s16 obj_getS16_32E(void *);
Obj_80098FF4 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv(void);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
u32 csnLookAt(void *, void *);
u8 *fn_8009A398(void *, void *, void *, void *);
s32 is_alive__9TObjEneDDFPv(void *);
f32 horizontal_distance_squared(void *, void *);
#define __nw__7TObjectFUl ((void * (*)(int))__nw__7TObjectFUl)
extern const f32 lbl_805D9828;
s32 attack_visible_players__17TObjEneDf2BringerFPv(Obj_80098EFC *self);
}

extern "C" {

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

void TObjEneDf2Bringer__vt102(void *arg0, f32 farg0);
s32 check_stage_advance__17TObjEneDf2BringerFPv(void *arg0);
void update_flag_0x3C0__17TObjEneDf2BringerFPv(void *arg0);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
#define enemy_validate_retained_target ((s32 (*)())enemy_validate_retained_target)
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
#define update_linked_position__14TObjEneEpsilonFPv ((M2C_UNK (*)(f32))update_linked_position__14TObjEneEpsilonFPv)

s32 check_stage_advance__17TObjEneDf2BringerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x494) >= 5) {
        transition_enemy_state(arg0, 8);
        return 1;
    }
    return 0;
}

void TObjEneDf2Bringer__sub_80098DEC(u8 *arg0) {
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
    M2C_FIELD(arg0, s32 *, 0x494) = (s32) (M2C_FIELD(arg0, s32 *, 0x494) + 1);
}

void TObjEneDf2Bringer__vt102(void *arg0, f32 farg0) {
    if (((VObj_80098E4C_80098DB0 *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

extern f32 TObjEneDf2Bringer__data_805D9820;

void TObjEneDf2Bringer__sub_80098EB4(s32 arg0) {
    play_persistent_sound((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003B708))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

s32 attack_visible_players__17TObjEneDf2BringerFPv(Obj_80098EFC *self) {
    s32 count;
    Obj_80098EFC *player;
    s32 total;
    s32 i;
    s32 dmg;
    void *o;
    count = get_game_mode__6TLobbyFv();
    total = 0;
    for (i = 0; i < count; i++) {
        player = ((Obj_80098EFC *)get_player_data__10TObjPlayerFi(i));
        if (is_alive__9TObjEneDDFPv(player) != 0) {
            horizontal_distance_squared(self->field2FC, player->pos);
            if (csnLookAt(self->field2FC, player->field2FC) == 0) {
                dmg = get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805D9828 * (f32)obj_getS16_32E(player));
                check_can_act__10TObjPlayerFii(player, dmg);
                total += dmg;
                o = __nw__7TObjectFUl(0x54);
                if (o != 0) {
                    fn_8009A398(o, self, player->field2FC, self->field474);
                }
            }
        }
    }
    return total;
}

s32 TObjEneDf2Bringer__sub_80098FF4(Obj_80098FF4 *self) {
    s32 count;
    Obj_80098FF4 *player;
    u16 id;
    s32 i;
    f32 dist;
    f32 best;
    best = TObjEneDf2Bringer__data_805D97E0;
    id = 0xFFFF;
    count = get_game_mode__6TLobbyFv();
    for (i = 0; i < count; i++) {
        player = get_player_data__10TObjPlayerFi(i);
        if (is_alive__9TObjEneDDFPv(player) != 0) {
            dist = horizontal_distance_squared(self->field2FC, player->pos);
            if (dist < lbl_805D982C && dist > best &&
                csnLookAt(self->field2FC, player->field2FC) == 0) {
                id = obj_getField1c(player);
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

void update_flag_0x3C0__17TObjEneDf2BringerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 8)) {
        update_linked_position__14TObjEneEpsilonFPv(TObjEneDf2Bringer__data_805D9820);
        return;
    }
    if (enemy_validate_retained_target() == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
    }
}

void update_if_in_band__17TObjEneDf2BringerFi(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, (f32) (lbl_805D9810)) != 0) {
        spawn_offset_particle__17TObjEneDf2BringerFPv((u8 *)((void *) (arg0)));
    }
}

void spawn_particle_if_in_band__17TObjEneDf2BringerFPv(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneDf2Bringer__data_805D97E0) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D97E8) != 0)) {
        spawn_particle_effect((f32 *)((s32) (arg0 + 0x38)), (M2C_UNK)(0xF0));
    }
}

void spawn_offset_particle__17TObjEneDf2BringerFPv(u8 *arg0) {
    Stack_800991E0 stack;
    stack.sp8 = lbl_805D9830;
    stack.spC = TObjEneDf2Bringer__data_805D97E0;
    stack.sp10 = TObjEneDf2Bringer__data_805D9808;
    rotate_xz_pair_by_angle(&stack.sp8, &stack.sp10, M2C_FIELD(arg0, s32 *, 0x60), TObjEneDf2Bringer__data_805D97E0, lbl_805D9830);
    vec3_add_to(&stack.sp8, arg0 + 0x38);
    spawn_particle_effect(&stack.sp8, 0xF3);
}
void update_attack_child__17TObjEneDf2BringerFPv(Bringer_800993E8 *obj) {
    Fields_800993E8 *self = (Fields_800993E8 *)obj;
    Entry_800993E8 *entry;
    f32 start;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        start = lbl_805D9838;
    } else {
        start = lbl_805D980C;
    }
    if (self->frame >= start && self->frame <= lbl_805D983C) {
        entry = lookup_entry_by_value__10TObjPlayerFPvf(TObjEneDf2Bringer__data_805D4FC8, self->frame);
        VecCopy__FP3VecPC3Vec(&((ChildFields_800993E8 *)self->child)->pos, &self->pos);
        ((ChildFields_800993E8 *)self->child)->angle = self->angle;
        VecCopy__FP3VecPC3Vec(((ChildFields_800993E8 *)self->child)->model, &entry->a);
        VecCopy__FP3VecPC3Vec(&((ChildFields_800993E8 *)self->child)->model->b, &entry->b);
        refresh_collision_body_centers(self->child);
        Pair_800993E8 pair = lbl_8043A0CC[0];
        if (obj->m97() != 0) {
            pair.flags |= 2;
        }
        self->child->m15(&pair, self->field49C);
    }
}

}
#undef lookup_entry_by_value__10TObjPlayerFPvf
#undef play_persistent_sound
#undef copy_target_state__14TObjEnePanarmsFPvPv
#undef update_linked_position__14TObjEneEpsilonFPv
#undef enemy_validate_retained_target
#undef __nw__7TObjectFUl
#undef TObjEneDf2Bringer__data_805D4FC8

extern "C" {
#define TObjEneDf2Bringer__sub_80098DEC ((M2C_UNK (*)())TObjEneDf2Bringer__sub_80098DEC)
#define clear_attack_receipts ((M2C_UNK (*)(void *))clear_attack_receipts)
#define transition_enemy_state ((int (*)(void*, void*))transition_enemy_state)
void TObjEneDf2Bringer__vt60(u8 *arg0);
#define VecCopy__FP3VecPC3Vec ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)
extern const f32 lbl_805D9840;
void set_effect_pos_above_self__17TObjEneDf2BringerFPv(u8 *arg0);
}

extern "C" {

void TObjEneDf2Bringer__sub_800994F8(void);
void TObjEneDf2Bringer__vt59(void);
void TObjEneDf2Bringer__vt86(void);
void TObjEneDf2Bringer__vt26(void);
void TObjEneDf2Bringer__vt61(void* p);

void TObjEneDf2Bringer__sub_800994F8(void) {  }
void TObjEneDf2Bringer__vt86(void) {  }

void set_effect_pos_above_self__17TObjEneDf2BringerFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D9840);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneDf2Bringer__vt59(void) {  }

void TObjEneDf2Bringer__vt60(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 9) && (temp_r0 != 8)) {
        TObjEneDf2Bringer__sub_80098DEC();
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 4) {
        clear_attack_receipts((void *) (arg0));
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        transition_enemy_state((void*)((void *) (arg0)), (void*)((int) (9)));
    }
}

}
#undef VecCopy__FP3VecPC3Vec
#undef transition_enemy_state
#undef clear_attack_receipts
#undef TObjEneDf2Bringer__sub_80098DEC

struct VBase_18_p5 { char pad[0x18]; };
struct VObj_18_p5 : VBase_18_p5 {
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

struct VBase_14_fa0828 { char pad[0x14]; };
struct VObj_14_fa0828 : VBase_14_fa0828 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
};
struct VBase_18_be4a70 { char pad[0x18]; };
struct VObj_18_be4a70 : VBase_18_be4a70 {
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
};

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
#define set_effect_pos_above_self__17TObjEneDf2BringerFPv ((M2C_UNK (*)(void *))set_effect_pos_above_self__17TObjEneDf2BringerFPv)
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void run_task__17TObjEneDf2BringerFv(u8 *arg0);
extern const f32 lbl_805D9844;
void set_entry_value_clamped__17TObjEneDf2BringerFif(s32 arg0, f32 farg0);
}

extern "C" {

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDf2Bringer__vt26(void);
void TObjEneDf2Bringer__vt61(void* p);
void *create__17TObjEneDf2BringerFPv(void *arg0);
void free_resources__17TObjEneDf2BringerFv(void);
void TLobby__sub_8001FE7C(void*, int);
#define transition_enemy_state ((int (*)(void*, void*))transition_enemy_state)
#define TObjEneDf2Bringer__sub_800994F8 ((void (*)(void *))TObjEneDf2Bringer__sub_800994F8)
void init_enemy__17TObjEneDf2BringerFPv(u8 *);
void TObjEneDf2Bringer__vt59(void);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009A7A0();
void __construct_array(void *, void *, void *, int, int);
void __dt__11TBoss4Type3FPvs(void*, int);
#define __nw__7TObjectFUl ((void * (*)(int))__nw__7TObjectFUl)
void destroy_buffer_pair(void*, int);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

void TObjEneDf2Bringer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 10) { transition_enemy_state(p, (void*)10); } }
void TObjEneDf2Bringer__vt26(void) {  }

extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D29A0;

void run_task__17TObjEneDf2BringerFv(u8 *arg0) {
    s32 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_p5 *)(arg0))->m103();
        return;
    }
    if (((VObj_18_p5 *)(arg0))->m81() != 4) {
        ((VObj_18_p5 *)(arg0))->m83();
        M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4A8) + 0xC);
        M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) (u8) M2C_FIELD(arg0, s32 *, 0x4A8);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x494);
        if (temp_r0 <= 2) {
            M2C_FIELD(arg0, s32 *, 0x488) = 1;
        } else if (temp_r0 <= 4) {
            M2C_FIELD(arg0, s32 *, 0x488) = 5;
        } else if (temp_r0 <= 5) {
            M2C_FIELD(arg0, s32 *, 0x488) = 6;
        }
    }
    set_effect_pos_above_self__17TObjEneDf2BringerFPv((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18_p5 *)(arg0))->m98();
}

struct Vec_80099800 { f32 x, y, z; };
struct Slot_80099800 { u8 pad[0x1C]; };
struct Tbl_80099800 { u8 pad0[0x1C]; u8 model[0x2C]; u8 sub[0xBC - 0x2C]; u8 padE8[0x10]; };

#define VecCopy__FP3VecPC3Vec ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *init__17TObjEneDf2BringerFPviii(void *a0, int a1, int a2, int a3);
void enemy_init_validate_period(void *, s32);
void enemy_init_acquire_period(void *, s32);
s32 reset_hp__9TObjEneDDFPv(void *, int, int, int);
void initialize_enemy_state__9TObjEneDDFPv(void *, s32);
void set_state_8__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, s32);
void init_position_vectors__9TObjEneDDFPv(void *);
void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TBoss8Dragon__sub_800BC5EC(void *, s32);
void activate_and_dispatch__10TObjPlayerFPv(void *);
s32 create__12TObjEneSaverFPvPv(s32, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
extern s32 lbl_805D4FA8;
extern s32 lbl_805D4FAC;
extern s32 lbl_805D4FB0;
extern u32 TObjEneDf2Bringer__data_805D4FB8;
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 lbl_805D9840;
struct Arr_80099800 { u8 pad[0x3E0]; Slot_80099800 slot[4]; Vec_80099800 v[4]; };

u8 *__dt__17TObjEneDf2BringerFv(u8 *arg0, s16 arg1) {
    VObj_800996EC *o;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneDf2Bringer;
        if (M2C_FIELD(arg0, void **, 0x4C4) != NULL) {
            queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x4C4)));
            M2C_FIELD(arg0, void **, 0x4C4) = NULL;
        }
        queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x4A4)));
        M2C_FIELD(arg0, s32 *, 0x4A4) = 0;
        o = M2C_FIELD(arg0, VObj_800996EC **, 0x4A0);
        if (o != NULL) {
            o->m0(1);
        }
        M2C_FIELD(arg0, void **, 0x4A0) = NULL;
        delete_buffer__12TBoss8DragonFis(M2C_FIELD(arg0, s32 *, 0x49C), 1);
        M2C_FIELD(arg0, s32 *, 0x49C) = 0;
        o = M2C_FIELD(arg0, VObj_800996EC **, 0x498);
        if (o != NULL) {
            o->m0(1);
        }
        M2C_FIELD(arg0, void **, 0x498) = NULL;
        free_collision_body_parts(arg0);
        __destroy_arr(arg0 + 0x3E0, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8(arg0 + 0x3C4, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void init_enemy__17TObjEneDf2BringerFPv(u8 *arg0) {
    s32 i;
    void *p;

    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(TObjEneDf2Bringer__data_805D4FB8, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(TObjEneDf2Bringer__data_805D4FB8, u8 **, 0x42C), s32 *, 0xC);
    init_model__9TObjEneDDFPv(arg0, lbl_8048FA2C, 1);
    set_field_d8__10TObjPlayerFPvi(arg0, &lbl_8048FAF8);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(TObjEneDf2Bringer__data_805D4FB8, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    reset_hp__9TObjEneDDFPv(arg0, lbl_805D4FA8, lbl_805D4FAC, lbl_805D4FB0);
    set_state_8__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, void **, 0x350) = lbl_8048FA10;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x24);
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805D9840;
    enemy_init_acquire_period(arg0, 0x1E);
    enemy_init_validate_period(arg0, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C0) |= 1;
    ((VObj_14_fa0828 *)(arg0 + 0x3C4))->m3();
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Arr_80099800 *)arg0)->slot[i]);
    }
    for (i = 0; i < 4; i++) {
        VecCopy__FP3VecPC3Vec(&((Arr_80099800 *)arg0)->v[i], arg0 + 0x38);
    }
    M2C_FIELD(arg0, s32 *, 0x480) = 0;
    M2C_FIELD(arg0, s32 *, 0x484) = 0;
    M2C_FIELD(arg0, s32 *, 0x488) = 1;
    M2C_FIELD(arg0, s32 *, 0x494) = 0;
    M2C_FIELD(arg0, s32 *, 0x48C) = 0;
    M2C_FIELD(arg0, s32 *, 0x490) = 0;
    p = __nw__7TObjectFUl(0xB0);
    if (p != NULL) {
        p = init_instance__16TObjEneDellBiterFPvPvPvPvPv(p, arg0, arg0, (u8 *)lbl_8048FA2C + 0x2C, (void *)2);
    }
    M2C_FIELD(arg0, void **, 0x498) = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != NULL) {
        p = TBoss8Dragon__sub_800BC5EC(p, 8);
    }
    M2C_FIELD(arg0, void **, 0x49C) = p;
    p = __nw__7TObjectFUl(0xD4);
    if (p != NULL) {
        p = init__17TObjEneDf2BringerFPviii(p, (int)arg0, (int)arg0, M2C_FIELD(arg0, s32 *, 0x49C));
    }
    M2C_FIELD(arg0, void **, 0x4A0) = p;
    M2C_FIELD(arg0, s32 *, 0x4A4) = create__12TObjEneSaverFPvPv(0xFF5050FF, 0x80000080);
    M2C_FIELD(arg0, s32 *, 0x4A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B8) = 0;
    M2C_FIELD(arg0, f32 *, 0x4BC) = TObjEneDf2Bringer__data_805D97E0;
    M2C_FIELD(arg0, f32 *, 0x4C0) = TObjEneDf2Bringer__data_805D97E0;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s16 *, 0x326) = 1;
    ((VObj_18_be4a70 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
}

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneDf2Bringer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 964));
    __construct_array((void *)((char *)arg0 + 992), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29A0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneDf2Bringer__sub_800994F8(arg0);
    init_enemy__17TObjEneDf2BringerFPv((u8 *)arg0);
    return arg0;
}

extern u32 TObjEneDf2Bringer__data_805D4FB8;
#define TObjEneDf2Bringer__data_805D4FC8 (*(u32 *)&TObjEneDf2Bringer__data_805D4FC8)
#define TObjEneDf2Bringer__data_805D4FCC (*(u32 *)&TObjEneDf2Bringer__data_805D4FCC)

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;
typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];
void set_entry_value_clamped__17TObjEneDf2BringerFif(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < lbl_805D9844)
  {
    var_f1 = lbl_805D9844;
  }
  new_var = (u8 *) (&lbl_8048FAF8.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}

void free_resources__17TObjEneDf2BringerFv(void) {
    TObjEneMe1CanadinLeader__sub_8009A7A0();
    if ((u32) TObjEneDf2Bringer__data_805D4FCC != 0U) {
        destroy_buffer_pair((void*)TObjEneDf2Bringer__data_805D4FCC, 1);
        TObjEneDf2Bringer__data_805D4FCC = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FC8 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDf2Bringer__data_805D4FC8, 1);
        TObjEneDf2Bringer__data_805D4FC8 = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FB8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDf2Bringer__data_805D4FB8, 1);
        TObjEneDf2Bringer__data_805D4FB8 = 0U;
    }
}

extern void *tl_04;

void *create__17TObjEneDf2BringerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C8);
    if (o != NULL) {
        o = TObjEneDf2Bringer__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

}

#undef TObjEneDf2Bringer__data_805D4FCC
#undef TObjEneDf2Bringer__data_805D4FC8
#undef TObjEneDf2Bringer__sub_800994F8
#undef set_effect_pos_above_self__17TObjEneDf2BringerFPv
#undef VecCopy__FP3VecPC3Vec
#undef __nw__7TObjectFUl
#undef transition_enemy_state
