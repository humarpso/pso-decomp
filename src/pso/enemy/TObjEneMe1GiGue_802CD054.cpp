#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_802CD5C0_802CD390 { char pad[0xC]; };

struct VObj_802CD5C0_802CD390 : Base_802CD5C0_802CD390 {
    virtual void m0(int);
};

struct Mdl_802CD62C { u8 pad[8]; s32 a; s32 b; };

struct Obj_802CD62C { u8 pad[0x42C]; Mdl_802CD62C *mdl; s32 v430; };

struct Spawn_802CD62C { s32 w[4]; };

struct Sub_802CD62C { u8 pad[0xC]; f32 f; };

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
M2C_UNK TLobby__sub_8001FE7C(M2C_UNK, M2C_UNK);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 TBreakUpMdl__sub_8009705C(s32, s32);
M2C_UNK TObjPlayer__sub_800C6A18(void *);
s32 update_state_machine__15TObjEnemyCustomFPv(void *);
M2C_UNK update_obstruction_fade(void *);
s32 find_active_entity_by_id(int);
void * TObjControl__ct(void *, void *);
f32 xz_distance_squared(void *, void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
void * __nw__7TObjectFUl(int);
M2C_UNK TObjEneMe1GiGue__sub_802CAF24(void *);
s32 init__15TObjEneMe1GiGueFPv(void *);
s32 TObjEneMe1GiGue__sub_802CB378(void *);
M2C_UNK TObjEneMe1GiGue__sub_802CB6D4(void *);
s32 TObjEneMe1GiGue__sub_802CB9E4(void *);
s32 TObjEneMe1GiGue__sub_802CBA98(void *);
s32 TObjEneMe1GiGue__sub_802CBCC0(void *);
s32 action__15TObjEneMe1GiGueFPv(void *);
s32 TObjEneMe1GiGue__sub_802CC45C(void *);
s32 TObjEneMe1GiGue__sub_802CC614(void *);
s32 TObjEneMe1GiGue__sub_802CC900(void *);
s32 TObjEneMe1GiGue__sub_802CCBAC(void *);
s32 TObjEneMe1GiGue__sub_802CCF2C(void *);
void TObjEneMe1GiGue__sub_802CD054(void);
void TObjEneMe1GiGue__sub_802CD2EC(u8 *arg0);
void update_movement__15TObjEneMe1GiGueFPv(u8 *arg0);
void * create__15TObjEneMe1GiGueFPv(void *arg0);
void delete_barrier__15TObjEneMe1GiGueFv(void);
void * TObjEneMe1GiGue__ct(void *, void *, void *);
s32 TObjEneMe1GiGue__sub_802CDAE8();
M2C_UNK TObjEneMe1GiGue__sub_802CE4E8();
void TObjEneMe1GiGue__sub_802CE4EC();
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC0();
void init_global__22TObjEneMe1GiGueBarrierFv();

extern s32 TObjEneMe1GiGue__data_805D6834;
extern u32 TObjEneMe1GiGue__data_805D6838;
extern void *TObjEneMe1GiGue__data_805D683C;
extern const f32 TObjEneMe1GiGue__data_805DE6A4;
extern const f32 TObjEneMe1GiGue__data_805DE6A8;
extern Spawn_802CD62C lbl_80472264;
extern s32 lbl_805D6828;
extern s32 lbl_805D682C;
extern s32 lbl_805D6830;
extern const f32 lbl_805DE6B8;
extern const f32 lbl_805DE6BC;
extern void *tl_04;

extern "C" void TBoss3Volopt__sub_800C762C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneMe1GiGue__sub_802CAAF0();
extern "C" void TObjEneMe1GiGue__sub_802CCE50();
extern "C" void TObjEneMe1GiGue__sub_802CCE9C();
extern "C" void TObjEneMe1GiGue__sub_802CD058();
extern "C" void TObjEneMe1GiGue__sub_802CDAB4();
extern "C" void TObjEneMe1GiGue__sub_802CDAB8();
extern "C" void TObjEneMe1GiGue__sub_802CDABC();
extern "C" void TObjEneMe1GiGue__sub_802CDAC0();
extern "C" void TObjEnemyCustom__sub_800C7DF4();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80015884();
extern "C" void TObjPlayer__sub_80016C54();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void TObjPlayer__sub_800F673C();
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
extern "C" void calc_attack_range__15TObjEneMe1GiGueFPv();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_player_preserving_field__15TObjEnemyCustomFPv();
extern "C" void check_and_trigger__15TObjEneMe1GiGueFi();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void deleting_dtor__15TObjEneMe1GiGueFPvs();
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
extern "C" void get_target_range__15TObjEneMe1GiGueFPv();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_80472118[];
extern "C" u8 lbl_80472128[];
extern "C" u8 lbl_8047213C[];
extern "C" u8 lbl_80472150[];
extern "C" u8 lbl_80472168[];
extern "C" u8 lbl_8047217C[];
extern "C" u8 lbl_80472194[];
extern "C" u8 lbl_804721A8[];
extern "C" u8 lbl_804721BC[];
extern "C" u8 lbl_804721D4[];
extern "C" u8 lbl_804721E8[];
extern "C" u8 lbl_804721FC[];
extern "C" u8 lbl_80472214[];
extern "C" u8 lbl_80472228[];
extern "C" u8 lbl_8047223C[];
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
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_804E11C8[4];
extern void *lbl_804E11D8[10];
extern void *lbl_804E1210[4];
extern void *lbl_804E1220[10];
void *lbl_804E11C8[4] = {
    (void *)&lbl_80472118, (void *)&lbl_80472128, (void *)&lbl_8047213C, (void *)0x0,
};
void *lbl_804E11D8[10] = {
    (void *)&lbl_80472150, (void *)&lbl_80472168, (void *)&lbl_8047217C, (void *)&lbl_80472194,
    (void *)&lbl_804721A8, (void *)&lbl_804721BC, (void *)&lbl_804721D4, (void *)&lbl_804721E8,
    (void *)&lbl_804721FC, (void *)0x0,
};
void *lbl_804E1200[4] = {
    (void *)&lbl_80472214, (void *)&lbl_804E11C8, (void *)&lbl_804E11D8, (void *)0x30009,
};
void *lbl_804E1210[4] = {
    (void *)&lbl_80472228, (void *)&lbl_80472128, (void *)&lbl_8047213C, (void *)0x0,
};
void *lbl_804E1220[10] = {
    (void *)&lbl_80472150, (void *)&lbl_80472168, (void *)&lbl_8047217C, (void *)&lbl_80472194,
    (void *)&lbl_804721A8, (void *)&lbl_804721BC, (void *)&lbl_804721D4, (void *)&lbl_804721E8,
    (void *)&lbl_804721FC, (void *)0x0,
};
void *lbl_804E1248[4] = {
    (void *)&lbl_8047223C, (void *)&lbl_804E1210, (void *)&lbl_804E1220, (void *)0x30009,
};
void *lbl_804E1258[36] = {
    (void *)0x20000, (void *)0x4, (void *)0x3f333333, (void *)0x0,
    (void *)0x10001, (void *)0x3, (void *)0x3f333333, (void *)0x1,
    (void *)0x20000, (void *)0x2, (void *)0x3f19999a, (void *)0x4,
    (void *)0x20007, (void *)0x1, (void *)0x3f19999a, (void *)0x4,
    (void *)0x20000, (void *)0x0, (void *)0x3f000000, (void *)0x8,
    (void *)0x20007, (void *)0x0, (void *)0x3f000000, (void *)0x8,
    (void *)0x20007, (void *)0x3, (void *)0x3f333333, (void *)0x1,
    (void *)0x10007, (void *)0x3, (void *)0x3f333333, (void *)0x1,
    (void *)0x20000, (void *)0x3, (void *)0x3f333333, (void *)0x1,
};
void *lbl_804E12E8[7] = {
    (void *)0x43160000, (void *)0x3eed097b, (void *)0x300, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_804E1304[22] = {
    (void *)0x0, (void *)0x41700000, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x0, (void *)0x8001, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41700000, (void *)0x0, (void *)0x41400000, (void *)0x0,
    (void *)0x0, (void *)0xa000002, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_804E135C[83] = {
    (void *)0x0, (void *)0x0, (void *)&deleting_dtor__15TObjEneMe1GiGueFPvs, (void *)&update_movement__15TObjEneMe1GiGueFPv,
    (void *)&TObjEneMe1GiGue__sub_802CD058, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&get_target_range__15TObjEneMe1GiGueFPv, (void *)&TObjEneMe1GiGue__sub_802CAAF0,
    (void *)&calc_attack_range__15TObjEneMe1GiGueFPv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEnemyCustom__sub_800C7DF4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&check_and_trigger__15TObjEneMe1GiGueFi, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_80016C54, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&TObjPlayer__sub_80015884, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjEneMe1GiGue__sub_802CDAB4, (void *)&TObjEneMe1GiGue__sub_802CDABC,
    (void *)&TObjEneMe1GiGue__sub_802CDAB8, (void *)&TObjEneMe1GiGue__sub_802CDAC0, (void *)&TObjEneMe1GiGue__sub_802CCE9C, (void *)&TObjEneMe1GiGue__sub_802CCE50,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80,
};

void TObjEneMe1GiGue__sub_802CD054(void) {  }

void TObjEneMe1GiGue__sub_802CD2EC(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        TObjEneMe1GiGue__sub_802CCF2C((void *) arg0);
        return;
      case 1:
        TObjEneMe1GiGue__sub_802CCBAC((void *) arg0);
        return;
      case 2:
        TObjEneMe1GiGue__sub_802CDAE8();
        return;
      case 3:
        update_state_machine__15TObjEnemyCustomFPv((void *) arg0);
        return;
      case 4:
        TObjEneMe1GiGue__sub_802CBA98((void *) arg0);
        return;
      case 5:
        TObjEneMe1GiGue__sub_802CB9E4(arg0);
        return;
      case 9:
        TObjEneMe1GiGue__sub_802CC614((void *) arg0);
        return;
      case 10:
        TObjEneMe1GiGue__sub_802CC900((void *) arg0);
        return;
      case 11:
        TObjEneMe1GiGue__sub_802CC45C((void *) arg0);
        return;
      case 12:
        action__15TObjEneMe1GiGueFPv((void *) arg0);
        return;
      case 13:
        TObjEneMe1GiGue__sub_802CBCC0((void *) arg0);
        return;
      case 7:
        init__15TObjEneMe1GiGueFPv((void *) arg0);
        return;
      case 14:
        TObjEneMe1GiGue__sub_802CB378((void *) arg0);
        break;
    }
  }
}

void update_movement__15TObjEneMe1GiGueFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneMe1GiGue__sub_802CAF24((void *) (arg0));
        ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CD054)((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2A8) = find_active_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x338)));
    TObjPlayer__sub_800C6A18((void *) (arg0));
    TObjEneMe1GiGue__sub_802CB6D4((void *) (arg0));
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CD2EC)((void *) (arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CD2EC)((void *) (arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CD2EC)((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (TObjEneMe1GiGue__data_805DE6A4 + M2C_FIELD(arg0, f32 *, 0x3EC)));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (lbl_805DE6B8 + M2C_FIELD(arg0, f32 *, 0x3EC));
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        submit_cursor_candidate((void *) (arg0), (int) (-1));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3F4);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = (s32) (temp_r3 - 1);
    }
    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) & 0xFFFFFFF9);
    if (M2C_FIELD(arg0, f32 *, 0x3EC) > TObjEneMe1GiGue__data_805DE6A8) {
        temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 4);
    } else {
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 2);
    }
    update_obstruction_fade((void *) (arg0 + 0x418));
    if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x44)) > lbl_805DE6BC) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
}

void * create__15TObjEneMe1GiGueFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x458);
    if (o2 != NULL) {
        o2 = TObjEneMe1GiGue__ct(o2, o, arg0);
    }
    return o2;
}

void delete_barrier__15TObjEneMe1GiGueFv(void) {
    TObjEneMe1GiGueBarrier__sub_80325CC0();
    TObjEneMe1GiGue__sub_802CE4E8();
    if (TObjEneMe1GiGue__data_805D683C != NULL) {
        if (TObjEneMe1GiGue__data_805D683C != NULL) {
            ((VObj_802CD5C0_802CD390*)TObjEneMe1GiGue__data_805D683C)->m0(1);
        }
        TObjEneMe1GiGue__data_805D683C = NULL;
    }
    if (TObjEneMe1GiGue__data_805D6838 != 0U) {
        TLobby__sub_8001FE7C(TObjEneMe1GiGue__data_805D6838, 1);
        TObjEneMe1GiGue__data_805D6838 = 0U;
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline f32 getf_802CD62C(Sub_802CD62C *q) { return q->f; }
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
void TObjEneMe1GiGue__sub_802CD62C(void) {
    s32 o;
    Sub_802CD62C *q;

    if (is_split_screen() != 0) {
        o = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
        if (o != 0) {
            o = (s32)load_resource_from_descriptor((void *)o, 1, lbl_804E1248, 0, 0, 0);
        }
        TObjEneMe1GiGue__data_805D6838 = o;
    } else {
        o = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
        if (o != 0) {
            o = (s32)load_resource_from_descriptor((void *)o, 1, lbl_804E1200, 0, 0, 0);
        }
        TObjEneMe1GiGue__data_805D6838 = o;
    }
    lbl_805D6828 = register_boss__6TLobbyFPv(0x1A);
    lbl_805D682C = dispatch_shared_handler_b__6TLobbyFPv(0x1A);
    lbl_805D6830 = register_object__6TLobbyFPv(0x1A);
    TObjEneMe1GiGue__data_805D6834 = dispatch_shared_handler_a__6TLobbyFPv(0x1A);
    o = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x10);
    if (o != 0) {
        o = TBreakUpMdl__sub_8009705C(o, ((Obj_802CD62C *)TObjEneMe1GiGue__data_805D6838)->mdl->a);
    }
    TObjEneMe1GiGue__data_805D683C = (void *)o;
    TObjEneMe1GiGue__sub_802CE4EC();
    init_global__22TObjEneMe1GiGueBarrierFv();
    q = (Sub_802CD62C *)lbl_804E1304;
    {
    Spawn_802CD62C sp = lbl_80472264;
    sp.w[0] = ((Obj_802CD62C *)TObjEneMe1GiGue__data_805D6838)->v430;
    spawn_npc_enemy__6TLobbyFsiiiff(0x41, ((Obj_802CD62C *)TObjEneMe1GiGue__data_805D6838)->mdl->a,
        ((Obj_802CD62C *)TObjEneMe1GiGue__data_805D6838)->mdl->b, &sp,
        getf_802CD62C(q), TObjEneMe1GiGue__data_805DE6A4);
    }
}
extern int fold_flush_0;
#pragma pop

}
