#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_800AC9DC { u8 pad[8]; s32 x8; s32 xc; };

struct G_800AC9DC { u8 pad[0x42c]; E_800AC9DC *tbl; };

struct O_800AC9DC { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

struct Sub_800ACA10 { u8 pad[0x18]; s32 level; };

struct Obj_800ACA10 { u8 pad[0x2B0]; Sub_800ACA10 *sub; };

typedef struct O_800AC5EC {
    u8 pad0[0x18];
    void *vptr;
    u8 pad1c[0x3C4 - 0x1C];
    void *objs[2];
} O_800AC5EC;

struct Anim_800AC318 { s32 motions; void *actions; s32 initial_action; s32 counts; };

struct Pair_800AC318 { s32 a; s32 b; };

struct Bodies_800AC318 { s32 a; s32 b; s32 model; s32 textures; };

struct Res_800AC318 { u8 pad[0x42C]; Bodies_800AC318 *bodies; Pair_800AC318 *motions; };

struct Act_800AC318 { s32 a; s32 idx; f32 c; s32 d; };

extern "C" {
extern u32 lbl_805D50B8;
void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i);
extern s32 game_difficulty_selection;
s32 calc_technique_level__11TObjEneMojaFPv(Obj_800ACA10 *self);
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
extern u8 TObjPlayer__sub_800D7C58[];
O_800AC5EC *TObjPlayer__sub_800AC5EC(O_800AC5EC *arg0, s16 arg1);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u8 *load_enemy_bml_resource_named(void *, void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void draw_trail_with_colors(void *, s32, s32, s32, s32);
void *init_trail_buffer__11TBoss4Type3FPvifff(void *, s32, f32, f32, f32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
void spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern u8 lbl_8043AEDC[];
extern u32 TObjEneShark__resource_node;
extern u32 TObjEneShark__resource_buf;
extern u32 shark_resource_data;
extern u32 shark_resource_buffer;
extern u32 lbl_805D50B8;
extern u32 lbl_805D50BC;
extern u32 lbl_805D50C0;
extern s32 lbl_805D50C4;
extern const f32 lbl_805D9BA0;
extern const f32 lbl_805D9BAC;
extern const f32 lbl_805D9BC0;
extern const f32 lbl_805D9BC8;
extern const f32 lbl_805D9BCC;
void load_shark_resources__6TLobbyFv(void);
}

extern "C" {

void TObjPlayer__sub_800AC9D8(void);
void TObjPlayer__sub_800ACA0C(void);
void * create__12TObjEneSharkFPv(void *arg0);
void free_resources__12TObjEneSharkFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneShark__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_80092A7C();
extern "C" void TObjPlayer__sub_800AB970();
extern "C" void TObjPlayer__sub_800AB974();
extern "C" void TObjPlayer__sub_800AB9C0();
extern "C" void TObjPlayer__sub_800ABA50();
extern "C" void TObjPlayer__sub_800ABB38();
extern "C" void TObjPlayer__sub_800ABCBC();
extern "C" void TObjPlayer__sub_800ABDD8();
extern "C" void TObjPlayer__sub_800C53B4();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_slow_status__10TObjPlayerFPv();
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
extern "C" void clear_lobby_object_state();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
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
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_lying_down__12TObjEneBeastFv();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_8043AD10[];
extern "C" u8 lbl_8043AD24[];
extern "C" u8 lbl_8043AD3C[];
extern "C" u8 lbl_8043AD50[];
extern "C" u8 lbl_8043AD6C[];
extern "C" u8 lbl_8043AD88[];
extern "C" u8 lbl_8043ADA4[];
extern "C" u8 lbl_8043ADC0[];
extern "C" u8 lbl_8043ADDC[];
extern "C" u8 lbl_8043ADF8[];
extern "C" u8 lbl_8043AE14[];
extern "C" u8 lbl_8043AE30[];
extern "C" u8 lbl_8043AE48[];
extern "C" u8 lbl_8043AE64[];
extern "C" u8 lbl_8043AE80[];
extern "C" u8 lbl_8043AE9C[];
extern "C" void play_sound_4003A60D__10TObjPlayerFi();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void request_stand_action__12TObjEneBeastFPv();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__12TObjEneBeastFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void spawn_front_ground_effect__10TObjPlayerFPv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void tick_freeze_and_reset_appearance();
extern "C" void tick_freeze_state__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold__12TObjEneBeastFPv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void update_turn_toward_target__10TObjPlayerFPv();
extern void *lbl_804914B0[4];
extern void *lbl_804914C0[13];
void *lbl_804914B0[4] = {
    (void *)&lbl_8043AD10, (void *)&lbl_8043AD24, (void *)&lbl_8043AD3C, (void *)0x0,
};
void *lbl_804914C0[13] = {
    (void *)&lbl_8043AD50, (void *)&lbl_8043AD6C, (void *)&lbl_8043AD88, (void *)&lbl_8043ADA4,
    (void *)&lbl_8043ADC0, (void *)&lbl_8043ADDC, (void *)&lbl_8043ADF8, (void *)&lbl_8043AE14,
    (void *)&lbl_8043AE30, (void *)&lbl_8043AE48, (void *)&lbl_8043AE64, (void *)&lbl_8043AE80,
    (void *)0x0,
};
void *lbl_804914F4[4] = {
    (void *)&lbl_8043AE9C, (void *)&lbl_804914B0, (void *)&lbl_804914C0, (void *)0x3000c,
};
void *lbl_80491504[44] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f19999a, (void *)0x1,
    (void *)0x20000, (void *)0x7, (void *)0x3f19999a, (void *)0x20,
    (void *)0x10002, (void *)0xb, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f800000, (void *)0x4,
    (void *)0x20000, (void *)0x2, (void *)0x3f800000, (void *)0x4,
    (void *)0x10000, (void *)0x8, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x3, (void *)0x3f800000, (void *)0x8,
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x20,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x10,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x10,
    (void *)0x20000, (void *)0x6, (void *)0x3f19999a, (void *)0x20,
};
void *lbl_804915B4[21] = {
    (void *)0x43610000, (void *)0x3f400000, (void *)0x400, (void *)0x0,
    (void *)0x1e0000, (void *)0x1, (void *)0x0, (void *)0x437a0000,
    (void *)0x3f666666, (void *)0x400, (void *)0x0, (void *)0x1e0000,
    (void *)0x1, (void *)0x0, (void *)0x43960000, (void *)0x3f800000,
    (void *)0x400, (void *)0x0, (void *)0x1e0000, (void *)0x1,
    (void *)0x0,
};
void *lbl_80491608[33] = {
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
void *lbl_8049168C[103] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_800AC5EC, (void *)&run_task__12TObjEneBeastFPv,
    (void *)&TObjPlayer__sub_800ABDD8, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
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
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjPlayer__sub_800ABCBC,
    (void *)&beast_idle_update, (void *)&update_turn_toward_target__10TObjPlayerFPv, (void *)&beast_update_approach, (void *)&beast_update_group_chase,
    (void *)&beast_update_attack, (void *)&TObjPlayer__sub_800C53B4, (void *)&beast_update_hurt, (void *)&beast_update_dead,
    (void *)&beast_retire_corpse, (void *)&TObjPlayer__sub_800ABB38, (void *)&spawn_front_ground_effect__10TObjPlayerFPv, (void *)&TObjPlayer__sub_800ABA50,
    (void *)&play_sound_4003A60D__10TObjPlayerFi, (void *)&TObjPlayer__sub_800AB9C0, (void *)&TObjPlayer__sub_800AB974, (void *)&TObjPlayer__sub_800AC9D8,
    (void *)&TObjPlayer__sub_80092A7C, (void *)&TObjPlayer__sub_800AB970, (void *)&request_stand_action__12TObjEneBeastFPv,
};
#define lbl_804914F4 ((u8 *)lbl_804914F4)
#define lbl_80491504 ((Act_800AC318 *)lbl_80491504)
#define lbl_8049168C ((u8 *)lbl_8049168C)

void * create__12TObjEneSharkFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x43C);
    if (o2 != NULL) {
        o2 = TObjEneShark__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjEneShark__resource_node;
extern u32 TObjEneShark__resource_buf;
extern u32 shark_resource_data;
extern u32 shark_resource_buffer;
extern u32 lbl_805D50B8;
extern u32 lbl_805D50BC;
extern u32 lbl_805D50C0;

void free_resources__12TObjEneSharkFv(void) {
    if ((u32) TObjEneShark__resource_node != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneShark__resource_node);
        TObjEneShark__resource_node = 0U;
    }
    if ((u32) TObjEneShark__resource_buf != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneShark__resource_buf);
        TObjEneShark__resource_buf = 0U;
    }
    if ((u32) shark_resource_data != 0U) {
        free__11TOBoss4RockFUi((void*)shark_resource_data);
        shark_resource_data = 0U;
    }
    if ((u32) shark_resource_buffer != 0U) {
        free__11TOBoss4RockFUi((void*)shark_resource_buffer);
        shark_resource_buffer = 0U;
    }
    if ((u32) lbl_805D50C0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50C0, 1);
        lbl_805D50C0 = 0U;
    }
    if ((u32) lbl_805D50BC != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50BC, 1);
        lbl_805D50BC = 0U;
    }
    if ((u32) lbl_805D50B8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D50B8, 1);
        lbl_805D50B8 = 0U;
    }
}

#define G_A8 (*(s32 **)&TObjEneShark__resource_node)
#define G_AC (*(s32 **)&TObjEneShark__resource_buf)
#define G_B0 (*(s32 **)&shark_resource_data)
#define G_B4 (*(s32 **)&shark_resource_buffer)
#define G_B8 (*(u8 **)&lbl_805D50B8)
#define G_BC (*(void **)&lbl_805D50BC)
#define G_C0 (*(void **)&lbl_805D50C0)
#define RES ((Res_800AC318 *)G_B8)
void load_shark_resources__6TLobbyFv(void) {
    void *p;
    s32 i;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        G_B8 = load_enemy_bml_resource_named(lbl_804914F4, lbl_8043AEDC);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804914F4, 0, 0, 0);
        }
        G_B8 = (u8 *)p;
    }
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9BC8, lbl_805D9BAC, lbl_805D9BC0);
    }
    G_BC = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9BC8, lbl_805D9BAC, lbl_805D9BC0);
    }
    G_C0 = p;
    draw_trail_with_colors(G_BC, RES->bodies->model, RES->motions[lbl_80491504[3].idx].b, 5, 8);
    draw_trail_with_colors(G_C0, RES->bodies->model, RES->motions[lbl_80491504[4].idx].b, 0xA, 0xD);
    G_A8 = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_AC = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_B0 = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_B4 = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_A8[0] = register_boss__6TLobbyFPv(0x4F);
    G_A8[1] = register_boss__6TLobbyFPv(0x50);
    G_A8[2] = register_boss__6TLobbyFPv(0x51);
    G_AC[0] = dispatch_shared_handler_b__6TLobbyFPv(0x54);
    G_AC[1] = dispatch_shared_handler_b__6TLobbyFPv(0x55);
    G_AC[2] = dispatch_shared_handler_b__6TLobbyFPv(0x56);
    G_B0[0] = register_object__6TLobbyFPv(0x4E);
    G_B0[1] = register_object__6TLobbyFPv(0x4F);
    G_B0[2] = register_object__6TLobbyFPv(0x50);
    G_B4[0] = dispatch_shared_handler_a__6TLobbyFPv(0x4E);
    G_B4[1] = dispatch_shared_handler_a__6TLobbyFPv(0x4F);
    G_B4[2] = dispatch_shared_handler_a__6TLobbyFPv(0x50);
    lbl_805D50C4 = 0;
    {
        s16 ids[3] = { 0x2F, 0x30, 0x31 };
        Anim_800AC318 anim = { (s32)RES->motions, lbl_80491504, 2, 0xC0000 };
        for (i = 0; i < 3; i++) {
            spawn_npc_enemy__6TLobbyFsiiiff(ids[i], RES->bodies[i].model, RES->bodies[i].textures, &anim,
                lbl_805D9BCC, lbl_805D9BA0);
        }
    }
}

O_800AC5EC *TObjPlayer__sub_800AC5EC(O_800AC5EC *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = lbl_8049168C;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        unlink_enemy_group_relations(arg0);
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x3CC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

struct SubBase_800AC6B0 { u8 pad[0x14]; };
struct Sub_800AC6B0 : SubBase_800AC6B0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
};
struct VBase_800AC6B0 { u8 pad[0x18]; };
struct VObj_800AC6B0 : VBase_800AC6B0 {
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

struct Shark_800AC6B0 : VObj_800AC6B0 {
    u8 pad1c[0x30 - 0x1c];
    u32 f30;
    u8 pad34[0xb8 - 0x34];
    s16 fB8;
    u8 padba[0xd8 - 0xba];
    void *fD8;
    s32 fDC;
    u8 pade0[0x2ac - 0xe0];
    s32 f2AC;
    u8 pad2b0[0x328 - 0x2b0];
    s16 f328;
    u8 pad32a[0x32c - 0x32a];
    s16 f32C;
    u8 pad32e[0x334 - 0x32e];
    s32 f334;
    u8 pad338[0x33a - 0x338];
    s16 f33A;
    s16 f33C;
    s16 f33E;
    u8 pad340[0x350 - 0x340];
    void *f350;
    u8 pad354[0x368 - 0x354];
    s32 f368;
    u8 pad36c[0x374 - 0x36c];
    s16 f374;
    s16 f376;
    s32 f378;
    s32 f37C;
    u8 pad380[0x390 - 0x380];
    s32 f390;
    u8 pad394[0x398 - 0x394];
    f32 f398;
    f32 f39C;
    f32 f3A0;
    f32 f3A4;
    Sub_800AC6B0 f3A8;
    u8 pad3c0[0x3c4 - 0x3c0];
    void *f3C4;
    void *f3C8;
    u8 f3CC[4][0x1C];
};

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void init_position_vectors__10TObjPlayerFi(void *);
void apply_clamped_mode_param__10TObjPlayerFPv(void *);
void init_enemy_base__10TObjPlayerFPv(void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
void *create__12TObjEneSaverFPvPv(s32, s32);
void initialize_enemy_photon_effect(void *);
void update_prev_position__10TObjPlayerFPv(void *);
void bind_enemy_combat_stats(void *, s32, s32, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, s32);
void *__construct_array(void *, void *, void *, s32, s32);
void init_and_activate__10TObjPlayerFPv(void *);
extern s32 lbl_805D2A00;
extern const f32 lbl_805D9BD0;
extern const f32 lbl_805D9BD4;
#define lbl_804915B4 ((u8 *)lbl_804915B4)
#define lbl_80491608 ((u8 *)lbl_80491608)
void *TObjEneShark__ct(void *arg0, void *arg1, void *arg2) {
#define self ((Shark_800AC6B0 *)arg0)
    s32 color;
    s32 i;

    ((void (*)(void *, void *))init_enemy_base__10TObjPlayerFPv)(self, arg1);
    *(void **)((u8 *)self + 0x18) = lbl_8049168C;
    init_common__18TObjEneMe3SinowZoaFPv((u8 *)arg0 + 0x3A8);
    __construct_array(self->f3CC, (void *)init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 0x1C, 4);
    *(s32 *)self = lbl_805D2A00;
    self->m79(arg2);
    init_position_vectors__10TObjPlayerFi(self);
    self->f334 = self->f368;
    apply_clamped_mode_param__10TObjPlayerFPv(self);
    TObjPlayer__sub_800AC9DC((O_800AC9DC *)self, self->f368);
    self->fD8 = lbl_80491504;
    set_field_d8__10TObjPlayerFPvi(self, self->fD8);
    self->fDC = *(s32 *)(lbl_805D50B8 + 0x430);
    self->fB8 = 0;
    set_animation__10TObjPlayerFPvs(self, self->fB8);
    set_field_b8__14TObjEnePanarmsFPvs(self, self->fB8);
    init_collision_body_parts(self, lbl_80491608 + self->f334 * 0x2C, 1);
    bind_enemy_combat_stats(self, ((s32 *)TObjEneShark__resource_node)[self->f334], ((s32 *)TObjEneShark__resource_buf)[self->f334],
                            ((s32 *)shark_resource_data)[self->f334]);
    self->f350 = lbl_804915B4 + self->f334 * 0x1C;
    self->f33E = self->f32C;
    update_prev_position__10TObjPlayerFPv(self);
    copy_position__20TBoss3VoloptHiraisinFi(self);
    initialize_enemy_photon_effect(self);
    self->f2AC = (s32)(lbl_805D9BD0 * (lbl_805D9BD4 * calc_boss4_scale__10TObjPlayerFi(self)));
    self->f33A = 0xF;
    self->f33C = self->f33A;
    self->f328 = 0;
    self->f374 = 0;
    self->f376 = 0;
    self->f378 = 0;
    self->f37C = 0;
    add_flags_2e4__10TObjPlayerFPvUi(self, 2);
    self->f30 |= 0x40000;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        switch (self->f334) {
        case 0:
        default:
            color = 0xFF20FF20;
            break;
        case 1:
            color = 0xFFFF0040;
            break;
        case 2:
            color = 0xFFFFFF00;
            break;
        }
    } else {
        switch (self->f334) {
        default:
            color = 0xFF0000FF;
            break;
        case 1:
            color = 0xFFFF0000;
            break;
        case 2:
            color = 0xFFFFFF00;
            break;
        }
    }
    self->f3A8.m3();
    self->f390 = 1;
    self->f3C4 = create__12TObjEneSaverFPvPv(0xA0303030, color);
    self->f3C8 = create__12TObjEneSaverFPvPv(0xA0303030, color);
    self->f398 = (*(f32 **)(shark_resource_buffer + self->f334 * 4))[0];
    self->f3A0 = (*(f32 **)(shark_resource_buffer + self->f334 * 4))[1];
    self->f39C = (*(f32 **)(shark_resource_buffer + self->f334 * 4))[2];
    self->f3A4 = (*(f32 **)(shark_resource_buffer + self->f334 * 4))[3];
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(self->f3CC[i]);
    }
    self->m80();
    return self;
#undef self
}
}
#undef lbl_804915B4
#undef lbl_80491608

extern "C" {
void TObjPlayer__sub_800AC9D8(void) {  }

void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i) {
    self->x34 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].x8;
    self->x24 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].xc;
}

void TObjPlayer__sub_800ACA0C(void) {  }
s32 calc_technique_level__11TObjEneMojaFPv(Obj_800ACA10 *self) {
    Sub_800ACA10 *p = self->sub;
    s32 v = 0;
    if (p != 0) {
        v = p->level;
        if (v < 0) {
            return 0;
        }
        if (game_difficulty_selection == 3) {
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

}
