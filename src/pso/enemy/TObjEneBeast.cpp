#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8009241C { u8 pad0[0xC]; f32 radius; u8 pad10[0x2C - 0x10]; };
struct Res_8009241C {
    u8 pad0[0x44];
    u8 desc[0x10];
    s32 parts[(0x168 - 0x54) / 4];
    Ent_8009241C ents[3];
};
struct Mdl_8009241C { u8 pad0[8]; s32 f8; s32 fC; };
struct Mot_8009241C { u8 pad0[4]; s32 f4; };
struct Data_8009241C { u8 pad0[0x42C]; Mdl_8009241C *f42c; Mot_8009241C *f430; };
struct Quad_8009241C { s32 a; s32 b; s32 c; s32 d; };
struct Ids_8009241C { s16 id[3]; };

struct O_80092724 { u8 pad0[0x18]; void *vptr; u8 pad1c[0x38c]; void *objs[2]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
extern u8 TObjPlayer__sub_800D7C58[];
O_80092724 *TObjPlayer__sub_80092724(O_80092724 *arg0, s16 arg1);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
u8 *load_resource_from_descriptor(void *, int, void *, int, int, int);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u8 *load_enemy_bml_resource_named(void *, void *);
M2C_UNK draw_trail_with_colors(void *, s32, s32, int, int);
u8 *init_trail_buffer__11TBoss4Type3FPvifff(void *, int, f32, f32, f32);
s32 *alloc_buffer__11TOBoss4RockFPv(int);
M2C_UNK spawn_npc_enemy__6TLobbyFsiiiff(int, s32, s32, Quad_8009241C *, f32, f32);
extern Ids_8009241C lbl_80439D68[];
extern Quad_8009241C lbl_80439D70[];
extern M2C_UNK lbl_80439D80[];
}

extern "C" {

void * create__12TObjEneBeastFPv(void *arg0);
void free_boss4_rock_pool(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneBeast__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneBalClawClaw__sub_80091CD0();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_80092A7C();
extern "C" void TObjPlayer__sub_800C53B4();
extern "C" void update_turn_toward_target__10TObjPlayerFPv();
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
extern "C" void beast_enter_approach();
extern "C" void beast_idle_update();
extern "C" void beast_retire_corpse();
extern "C" void beast_select_target();
extern "C" void beast_start_attack();
extern "C" void beast_update_approach();
extern "C" void beast_update_attack();
extern "C" void beast_update_dead();
extern "C" void beast_update_group_chase();
extern "C" void beast_update_hurt();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_vt78__10TObjPlayerFPv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_flag_0x100__10TObjPlayerFPv();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void enter_state7__10TObjPlayerFPv();
extern "C" void enter_state_8__10TObjPlayerFPv();
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
extern "C" void is_lying_down__12TObjEneBeastFv();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_80439BA0[];
extern "C" u8 lbl_80439BBC[];
extern "C" u8 lbl_80439BD8[];
extern "C" u8 lbl_80439BF4[];
extern "C" u8 lbl_80439C10[];
extern "C" u8 lbl_80439C2C[];
extern "C" u8 lbl_80439C48[];
extern "C" u8 lbl_80439C64[];
extern "C" u8 lbl_80439C80[];
extern "C" u8 lbl_80439C9C[];
extern "C" u8 lbl_80439CB8[];
extern "C" u8 lbl_80439CD4[];
extern "C" u8 lbl_80439CEC[];
extern "C" u8 lbl_80439D08[];
extern "C" u8 lbl_80439D24[];
extern "C" u8 lbl_80439D40[];
extern "C" void on_attack_cooldown_expired__12TObjEneBeastFv();
extern "C" void play_claw_effect__18TObjEneBalClawClawFi();
extern "C" void play_claw_sound__18TObjEneBalClawClawFi();
extern "C" void play_hit_effect__18TObjEneBalClawClawFi();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render__12TObjEneBeastFPv();
extern "C" void render_actor_shadows_default();
extern "C" void request_stand_action__12TObjEneBeastFPv();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__12TObjEneBeastFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void spawn_claw_effect__18TObjEneBalClawClawFi();
extern "C" void spawn_death_fire__12TObjEneBeastFPv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void tick_freeze_and_reset_appearance();
extern "C" void tick_freeze_state__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold__12TObjEneBeastFPv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_appearance__12TObjEneBeastFPv();
extern "C" void update_attack_stat_status();
extern "C" void update_claw_trail__12TObjEneBeastFPv();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_8048F2C8[4];
extern void *lbl_8048F2D8[13];
void *lbl_8048F2C8[4] = {
    (void *)&lbl_80439BA0, (void *)&lbl_80439BBC, (void *)&lbl_80439BD8, (void *)0x0,
};
void *lbl_8048F2D8[13] = {
    (void *)&lbl_80439BF4, (void *)&lbl_80439C10, (void *)&lbl_80439C2C, (void *)&lbl_80439C48,
    (void *)&lbl_80439C64, (void *)&lbl_80439C80, (void *)&lbl_80439C9C, (void *)&lbl_80439CB8,
    (void *)&lbl_80439CD4, (void *)&lbl_80439CEC, (void *)&lbl_80439D08, (void *)&lbl_80439D24,
    (void *)0x0,
};
void *lbl_8048F30C[4] = {
    (void *)&lbl_80439D40, (void *)&lbl_8048F2C8, (void *)&lbl_8048F2D8, (void *)0x3000c,
};
void *lbl_8048F31C[48] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f19999a, (void *)0x1,
    (void *)0x20000, (void *)0x7, (void *)0x3f19999a, (void *)0x20,
    (void *)0x10002, (void *)0xb, (void *)0x3f000000, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f266666, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f59999a, (void *)0x4,
    (void *)0x10000, (void *)0x8, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x3, (void *)0x3fc00000, (void *)0x8,
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x10,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20000, (void *)0x6, (void *)0x3f19999a, (void *)0x20,
    (void *)0x20000, (void *)0x0, (void *)0x3f000000, (void *)0x20,
};
void *lbl_8048F3DC[21] = {
    (void *)0x43610000, (void *)0x3ecccccd, (void *)0x400, (void *)0x0,
    (void *)0x1e0000, (void *)0x1, (void *)0x0, (void *)0x437a0000,
    (void *)0x3f0ccccd, (void *)0x400, (void *)0x0, (void *)0x1e0000,
    (void *)0x1, (void *)0x0, (void *)0x43960000, (void *)0x3f333333,
    (void *)0x400, (void *)0x0, (void *)0x1e0000, (void *)0x1,
    (void *)0x0,
};
void *lbl_8048F430[33] = {
    (void *)0x0, (void *)0x41480000, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41480000, (void *)0x0, (void *)0x40e00000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x41000000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_8048F4B4[103] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_80092724, (void *)&run_task__12TObjEneBeastFPv,
    (void *)&render__12TObjEneBeastFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
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
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&tick_freeze_state__10TObjPlayerFPv, (void *)&beast_enter_approach,
    (void *)&beast_start_attack, (void *)&clear_flag_0x100__10TObjPlayerFPv, (void *)&enter_state7__10TObjPlayerFPv, (void *)&enter_state_8__10TObjPlayerFPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&update_appearance__12TObjEneBeastFPv,
    (void *)&beast_idle_update, (void *)&update_turn_toward_target__10TObjPlayerFPv, (void *)&beast_update_approach, (void *)&beast_update_group_chase,
    (void *)&beast_update_attack, (void *)&TObjPlayer__sub_800C53B4, (void *)&beast_update_hurt, (void *)&beast_update_dead,
    (void *)&beast_retire_corpse, (void *)&update_claw_trail__12TObjEneBeastFPv, (void *)&spawn_death_fire__12TObjEneBeastFPv, (void *)&play_claw_effect__18TObjEneBalClawClawFi,
    (void *)&spawn_claw_effect__18TObjEneBalClawClawFi, (void *)&play_claw_sound__18TObjEneBalClawClawFi, (void *)&play_hit_effect__18TObjEneBalClawClawFi, (void *)&TObjEneBalClawClaw__sub_80091CD0,
    (void *)&TObjPlayer__sub_80092A7C, (void *)&on_attack_cooldown_expired__12TObjEneBeastFv, (void *)&request_stand_action__12TObjEneBeastFPv,
};
#define lbl_8048F4B4 ((u8 *)lbl_8048F4B4)

void * create__12TObjEneBeastFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x420);
    if (o2 != NULL) {
        o2 = TObjEneBeast__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 ene_beast_boss_id_buffer;
extern u32 TObjEneBeast__boss4_rock_handler_ids;
extern u32 boss4_rock_pool;
extern u32 boss4_rock_shared_handler_ids;
extern u32 ene_beast_bml_resource;
extern u32 beast_claw_trail_instance;
extern u32 boss4_type3_instance;

void free_boss4_rock_pool(void) {
    if ((u32) ene_beast_boss_id_buffer != 0U) {
        free__11TOBoss4RockFUi((void*)ene_beast_boss_id_buffer);
        ene_beast_boss_id_buffer = 0U;
    }
    if ((u32) TObjEneBeast__boss4_rock_handler_ids != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneBeast__boss4_rock_handler_ids);
        TObjEneBeast__boss4_rock_handler_ids = 0U;
    }
    if ((u32) boss4_rock_pool != 0U) {
        free__11TOBoss4RockFUi((void*)boss4_rock_pool);
        boss4_rock_pool = 0U;
    }
    if ((u32) boss4_rock_shared_handler_ids != 0U) {
        free__11TOBoss4RockFUi((void*)boss4_rock_shared_handler_ids);
        boss4_rock_shared_handler_ids = 0U;
    }
    if ((u32) boss4_type3_instance != 0U) {
        __dt__11TBoss4Type3FPvs((void*)boss4_type3_instance, 1);
        boss4_type3_instance = 0U;
    }
    if ((u32) beast_claw_trail_instance != 0U) {
        __dt__11TBoss4Type3FPvs((void*)beast_claw_trail_instance, 1);
        beast_claw_trail_instance = 0U;
    }
    if ((u32) ene_beast_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)ene_beast_bml_resource, 1);
        ene_beast_bml_resource = 0U;
    }
}
extern const f32 lbl_805D96D8;
extern const f32 lbl_805D96DC;
extern const f32 lbl_805D96E4;
extern const f32 lbl_805D96F8;
extern const f32 lbl_805D9700;
extern const f32 lbl_805D9704;
extern const f32 lbl_805D9708;

#pragma push
#pragma opt_propagation off
void load_resources__12TObjEneBeastFv(void) {
    u8 *p;
    s32 i;

    if (check_v2_mode__9TObjEneDDFv() != 0) {
        ene_beast_bml_resource = (u32)load_enemy_bml_resource_named(lbl_8048F30C, lbl_80439D80);
        ((Ent_8009241C *)lbl_8048F430)[0].radius = lbl_805D96DC;
        ((Ent_8009241C *)lbl_8048F430)[1].radius = lbl_805D96DC;
        ((Ent_8009241C *)lbl_8048F430)[2].radius = lbl_805D9700;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_8048F30C, 0, 0, 0);
        }
        ene_beast_bml_resource = (u32)p;
        ((Ent_8009241C *)lbl_8048F430)[0].radius = lbl_805D9704;
        ((Ent_8009241C *)lbl_8048F430)[1].radius = lbl_805D9704;
        ((Ent_8009241C *)lbl_8048F430)[2].radius = lbl_805D9708;
    }
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9704, lbl_805D96E4, lbl_805D96F8);
    }
    beast_claw_trail_instance = (u32)p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9704, lbl_805D96E4, lbl_805D96F8);
    }
    boss4_type3_instance = (u32)p;
    draw_trail_with_colors((void *)beast_claw_trail_instance, ((Data_8009241C *)ene_beast_bml_resource)->f42c->f8,
                           ((Data_8009241C *)ene_beast_bml_resource)->f430[((s32 *)lbl_8048F31C)[13]].f4, 5, 8);
    draw_trail_with_colors((void *)boss4_type3_instance, ((Data_8009241C *)ene_beast_bml_resource)->f42c->f8,
                           ((Data_8009241C *)ene_beast_bml_resource)->f430[((s32 *)lbl_8048F31C)[17]].f4, 10, 13);
    ene_beast_boss_id_buffer = (u32)alloc_buffer__11TOBoss4RockFPv(0xC);
    TObjEneBeast__boss4_rock_handler_ids = (u32)alloc_buffer__11TOBoss4RockFPv(0xC);
    boss4_rock_pool = (u32)alloc_buffer__11TOBoss4RockFPv(0xC);
    boss4_rock_shared_handler_ids = (u32)alloc_buffer__11TOBoss4RockFPv(0xC);
    ((s32 *)ene_beast_boss_id_buffer)[0] = register_boss__6TLobbyFPv(0x4B);
    ((s32 *)ene_beast_boss_id_buffer)[1] = register_boss__6TLobbyFPv(0x4C);
    ((s32 *)ene_beast_boss_id_buffer)[2] = register_boss__6TLobbyFPv(0x4D);
    ((s32 *)TObjEneBeast__boss4_rock_handler_ids)[0] = dispatch_shared_handler_b__6TLobbyFPv(0x4E);
    ((s32 *)TObjEneBeast__boss4_rock_handler_ids)[1] = dispatch_shared_handler_b__6TLobbyFPv(0x4F);
    ((s32 *)TObjEneBeast__boss4_rock_handler_ids)[2] = dispatch_shared_handler_b__6TLobbyFPv(0x50);
    ((s32 *)boss4_rock_pool)[0] = register_object__6TLobbyFPv(0x4A);
    ((s32 *)boss4_rock_pool)[1] = register_object__6TLobbyFPv(0x4B);
    ((s32 *)boss4_rock_pool)[2] = register_object__6TLobbyFPv(0x4C);
    ((s32 *)boss4_rock_shared_handler_ids)[0] = dispatch_shared_handler_a__6TLobbyFPv(0x4A);
    ((s32 *)boss4_rock_shared_handler_ids)[1] = dispatch_shared_handler_a__6TLobbyFPv(0x4B);
    ((s32 *)boss4_rock_shared_handler_ids)[2] = dispatch_shared_handler_a__6TLobbyFPv(0x4C);
    {
        Ids_8009241C ids = lbl_80439D68[0];
        Quad_8009241C q = lbl_80439D70[0];
        q.a = (s32)((Data_8009241C *)ene_beast_bml_resource)->f430;
        for (i = 0; i < 3; i++) {
            spawn_npc_enemy__6TLobbyFsiiiff(ids.id[i], ((Data_8009241C *)ene_beast_bml_resource)->f42c[i].f8,
                                            ((Data_8009241C *)ene_beast_bml_resource)->f42c[i].fC, &q,
                                            ((Ent_8009241C *)lbl_8048F430)[i].radius, lbl_805D96D8);
        }
    }
}

#pragma pop
O_80092724 *TObjPlayer__sub_80092724(O_80092724 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = lbl_8048F4B4;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        unlink_enemy_group_relations(arg0);
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x3B0, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#define F(o, T, off) (*(T *)((u8 *)(o) + (off)))
struct VBase_800927DC { char pad[0x18]; };
struct VObj_800927DC : VBase_800927DC {
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
    virtual void m76(); virtual void m77(); virtual void m78();
    virtual void m79(void *);
    virtual void m80();
};

f32 calc_boss4_scale__10TObjPlayerFi(void *);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void obj_setFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void select_subtype__12TObjEneBeastFPv(void *);
void init_position_vectors__10TObjPlayerFi(void *);
void select_model_record__12TObjEneBeastFPvi(void *, s32);
void init_enemy_base__10TObjPlayerFPv(void *, void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
void *create__12TObjEneSaverFPvPv(void *, void *);
void update_prev_position__10TObjPlayerFPv(void *);
void bind_enemy_combat_stats(void *, u32, u32, u32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void reset_photon_effect__10TObjPlayerFPv(void *);
void init_collision_body_parts(void *, void *, s32);
void __construct_array(void *, void *, void *, int, int);
extern u8 init_and_activate__10TObjPlayerFPv[];
struct Rec2C_800927DC { u8 b[0x2C]; };
struct Rec1C_800927DC { u8 b[0x1C]; };
struct Tbl_800927DC {
    u8 pad0[0x54];
    u8 x54[0x114 - 0x54];
    Rec1C_800927DC x114[3];
    Rec2C_800927DC x168[3];
    u8 x1EC[4];
};
struct Elem_800927DC { u8 b[0x1C]; };
struct Obj_800927DC { u8 pad[0x3B0]; Elem_800927DC arr[4]; };
extern s32 lbl_805D2980;
extern const f32 lbl_805D96D8;
extern const f32 lbl_805D970C;
extern const f32 lbl_805D9710;

#define arg0 ((u8 *)arg0v)

void *TObjEneBeast__ct(void *arg0v, void *arg1, void *arg2) {
    s32 i;

    init_enemy_base__10TObjPlayerFPv(arg0, arg1);
    F(arg0, u8 *, 0x18) = (u8 *)lbl_8048F4B4;
    __construct_array(arg0 + 0x3B0, init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 0x1C, 4);
    F(arg0, s32, 0) = lbl_805D2980;
    ((VObj_800927DC *)arg0)->m79(arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    F(arg0, s32, 0x334) = F(arg0, s32, 0x368);
    select_subtype__12TObjEneBeastFPv(arg0);
    select_model_record__12TObjEneBeastFPvi(arg0, F(arg0, s32, 0x368));
    F(arg0, u8 *, 0xD8) = (u8 *)lbl_8048F31C;
    set_field_d8__10TObjPlayerFPvi(arg0, F(arg0, u8 *, 0xD8));
    F(arg0, u32, 0xDC) = F(ene_beast_bml_resource, u32, 0x430);
    F(arg0, s16, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, F(arg0, s16, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, F(arg0, s16, 0xB8));
    init_collision_body_parts(arg0, &((Rec2C_800927DC *)lbl_8048F430)[F(arg0, s32, 0x334)], 1);
    bind_enemy_combat_stats(arg0, ((u32 *)ene_beast_boss_id_buffer)[F(arg0, s32, 0x334)],
                            ((u32 *)TObjEneBeast__boss4_rock_handler_ids)[F(arg0, s32, 0x334)],
                            ((u32 *)boss4_rock_pool)[F(arg0, s32, 0x334)]);
    F(arg0, void *, 0x350) = &((Rec1C_800927DC *)lbl_8048F3DC)[F(arg0, s32, 0x334)];
    F(arg0, s16, 0x33E) = F(arg0, s16, 0x32C);
    update_prev_position__10TObjPlayerFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    F(arg0, s32, 0x2AC) = (s32)(lbl_805D970C * (lbl_805D9710 * calc_boss4_scale__10TObjPlayerFi(arg0)));
    F(arg0, s16, 0x33A) = 0xF;
    F(arg0, s16, 0x33C) = F(arg0, s16, 0x33A);
    F(arg0, s16, 0x328) = 0;
    F(arg0, s16, 0x374) = 0;
    F(arg0, s16, 0x376) = 0;
    F(arg0, s32, 0x378) = 0;
    F(arg0, s32, 0x37C) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 1);
    obj_setFlags30(arg0, 0x40000);
    F(arg0, f32, 0x380) = lbl_805D96D8;
    F(arg0, void *, 0x3A8) = create__12TObjEneSaverFPvPv((void *)0xA0303030, (void *)0xFF303030);
    F(arg0, void *, 0x3AC) = create__12TObjEneSaverFPvPv((void *)0xA0303030, (void *)0xFF303030);
    F(arg0, f32, 0x398) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][0];
    F(arg0, f32, 0x3A0) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][1];
    F(arg0, f32, 0x39C) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][2];
    F(arg0, f32, 0x3A4) = ((f32 **)boss4_rock_shared_handler_ids)[F(arg0, s32, 0x334)][3];
    F(arg0, s32, 0x390) = 1;
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Obj_800927DC *)arg0)->arr[i]);
    }
    ((VObj_800927DC *)arg0)->m80();
    return arg0;
}
#undef arg0
#undef F

}
