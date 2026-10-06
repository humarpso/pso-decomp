#include <dolphin/mtx.h>
#include <stddef.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_802CAAF0 { s32 x; s32 y; };
struct S_802CAAF0 {
    u8 pad0[0x2FC];
    u8 f2FC[0x8C];
    u32 f388;
};
struct Obj_802CD058;

struct Gi_802CB170;
struct O_802CAC04;
struct Obj_802CB8F0;
struct Obj_802CBCC0;
struct Obj_802CCBAC;
struct Obj_802CD058;
struct S_802CB10C;
struct Tgt_802CB170;
struct Vec_802CAD98;
struct Vec_802CB8F0;

struct IV3_802CB824 { s32 x, y, z; };

extern "C" {
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TObjEneMe1GiGue__sub_802CB5A0(void *obj, s32 id);
void * __nw__7TObjectFUl(int);
void TObjPlayer__sub_802CDEB4(void *, void *, u16, void *, s32, s32, u16);
void TObjEneMe1GiGue__sub_802CB824(void *obj, s32 arg1);
}

extern "C" {
f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 TObjEneMe1GiGue__sub_802CAAF0(S_802CAAF0 *arg0, s32 arg1, V_802CAAF0 arg2, s32 arg3);
f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
u8 TObjEneMe1GiGueBarrier__sub_802CAC04(O_802CAC04 *self);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p);
int get_barrier_count__15TObjEneMe1GiGueFv(void);
s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1);
void TObjEneMe1GiGue__sub_802CACD8(u8 *arg0);
s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
void TObjEneMe1GiGue__sub_802CAD98(u8 *arg0, Vec_802CAD98 *arg1);
void TObjEneMe1GiGue__sub_802CAF24(s32 arg0);
void update_direction__15TObjEneMe1GiGueFPv(void *arg0);
void TObjEneMe1GiGue__sub_802CB03C(u8 *arg0);
s32 TObjEneMe1GiGue__sub_802CB10C(S_802CB10C *arg0);
void TObjEneMe1GiGue__sub_802CB170(Gi_802CB170 *self, Tgt_802CB170 *t);
void init__15TObjEneMe1GiGueFPv(u8 *arg0);
void TObjEneMe1GiGue__sub_802CB378(u8 *arg0);
void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1);
void init_move__15TObjEneMe1GiGueFPv(u8 *arg0);
void TObjEneMe1GiGue__sub_802CB6D4(u8 *arg0);
void TObjEneMe1GiGue__sub_802CB8F0(Obj_802CB8F0 *o, Vec_802CB8F0 *c, f32 r);
void TObjEneMe1GiGue__sub_802CB9E4(u8 *arg0);
void TObjEneMe1GiGue__sub_802CBA98(u8 *arg0);
void TObjEneMe1GiGue__sub_802CBCC0(Obj_802CBCC0 *o);
void action__15TObjEneMe1GiGueFPv(void *arg0);
void TObjEneMe1GiGue__sub_802CC45C(u8 *arg0);
void TObjEneMe1GiGue__sub_802CC614(u8 *arg0);
void TObjEneMe1GiGue__sub_802CC900(u8 *arg0);
void TObjEneMe1GiGue__sub_802CCBAC(Obj_802CCBAC *o);
void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0);
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0);
void TObjEneMe1GiGue__sub_802CCF2C(u8 *arg0);
void TObjEneMe1GiGue__sub_802CD054(void);
void TObjEneMe1GiGue__sub_802CD058(Obj_802CD058 *self);
void TObjEneMe1GiGue__sub_802CD2EC(u8 *arg0);
void update_movement__15TObjEneMe1GiGueFPv(u8 *arg0);
void * create__15TObjEneMe1GiGueFPv(void *arg0);
void delete_barrier__15TObjEneMe1GiGueFv(void);
void TObjEneMe1GiGue__sub_802CD62C(void);
}

extern "C" {
f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0);
s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0);
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0);
void update_movement__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 TObjEneMe1GiGue__sub_802CAAF0(S_802CAAF0 *arg0, s32 arg1, V_802CAAF0 arg2, s32 arg3);
void TObjEneMe1GiGue__sub_802CD058(Obj_802CD058 *self);
void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *, s16);

struct Base_802CD5C0_802CD390 { char pad[0xC]; };

struct VObj_802CD5C0_802CD390 : Base_802CD5C0_802CD390 {
    virtual void m0(int);
};

struct Mdl_802CD62C { u8 pad[8]; s32 a; s32 b; };

struct Obj_802CD62C { u8 pad[0x42C]; Mdl_802CD62C *mdl; s32 v430; };

struct Spawn_802CD62C { s32 w[4]; };

struct Sub_802CD62C { u8 pad[0xC]; f32 f; };

extern "C" {
void TBoss3Volopt__sub_800C762C();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjEneMe1GiGue__sub_802CDAB4();
}
extern "C" {
void TObjEneMe1GiGue__sub_802CDAB8();
}
extern "C" {
void TObjEneMe1GiGue__sub_802CDABC();
}
extern "C" {
void TObjEneMe1GiGue__sub_802CDAC0();
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
void TObjPlayer__sub_800111D8();
}
extern "C" {
void TObjPlayer__sub_80014830();
}
extern "C" {
void TObjPlayer__sub_80014838();
}
extern "C" {
void TObjPlayer__sub_80015884();
}
extern "C" {
void TObjPlayer__sub_80016C54();
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
void apply_confusion_status__10TObjPlayerFv();
}
extern "C" {
void apply_defense_stat_status__10TObjPlayerFv();
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
void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *, s16);
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
extern u8 lbl_80472118[];
}
extern "C" {
extern u8 lbl_80472128[];
}
extern "C" {
extern u8 lbl_8047213C[];
}
extern "C" {
extern u8 lbl_80472150[];
}
extern "C" {
extern u8 lbl_80472168[];
}
extern "C" {
extern u8 lbl_8047217C[];
}
extern "C" {
extern u8 lbl_80472194[];
}
extern "C" {
extern u8 lbl_804721A8[];
}
extern "C" {
extern u8 lbl_804721BC[];
}
extern "C" {
extern u8 lbl_804721D4[];
}
extern "C" {
extern u8 lbl_804721E8[];
}
extern "C" {
extern u8 lbl_804721FC[];
}
extern "C" {
extern u8 lbl_80472214[];
}
extern "C" {
extern u8 lbl_80472228[];
}
extern "C" {
extern u8 lbl_8047223C[];
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

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 receive_direct_attack__10TObjPlayerFv(void *, s32, V_802CAAF0, s32, s32, s32);
M2C_UNK show_miss_popup(void *, void *);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);
f32 TObjEneMe1GiGue__sub_802CAAF0(S_802CAAF0 *arg0, s32 arg1, V_802CAAF0 arg2, s32 arg3);
}

extern "C" {

f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 receive_weapon_special_attack__10TObjPlayerFv();
f32 receive_physical_attack__10TObjPlayerFv();
M2C_UNK show_miss_popup(void *, void *);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);

f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0) {
    f32 var_f31;

    var_f31 = 0.0f;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) {
        show_miss_popup(arg0, arg0 + 0x2FC);
        set_state__15TObjEneMe1GiGueFPvi(arg0, 0xA);
    } else {
        var_f31 = receive_weapon_special_attack__10TObjPlayerFv();
    }
    return var_f31;
}

f32 TObjEneMe1GiGue__sub_802CAAF0(S_802CAAF0 *arg0, s32 arg1, V_802CAAF0 arg2, s32 arg3) {
    f32 r = 0.0f;
    if (arg0->f388 & 0x80000) {
        show_miss_popup(arg0, arg0->f2FC);
        set_state__15TObjEneMe1GiGueFPvi((void *)(arg0), (M2C_UNK)(10));
    } else {
        r = receive_direct_attack__10TObjPlayerFv(arg0, arg1, arg2, arg3, -1, -1);
    }
    return r;
}

f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0) {
    f32 var_f31;

    var_f31 = 0.0f;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) {
        show_miss_popup(arg0, arg0 + 0x2FC);
        set_state__15TObjEneMe1GiGueFPvi(arg0, 0xA);
    } else {
        var_f31 = receive_physical_attack__10TObjPlayerFv();
    }
    return var_f31;
}

}

#include "types.h"

struct O_802CAC04 { u8 pad[0x326]; s16 v; };

extern "C" {
u8 TObjEneMe1GiGueBarrier__sub_802CAC04(O_802CAC04 *self);
}

extern "C" {

void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p);
#define TObjEneMe1GiGue__sub_802CB03C ((int (*)(void*))TObjEneMe1GiGue__sub_802CB03C)

void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p) { *(u32*)((char*)p + 0x388) &= 0xfff7ffff; }
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p) { *(u32*)((char*)p + 0x388) |= 0x80000; }

u8 TObjEneMe1GiGueBarrier__sub_802CAC04(O_802CAC04 *self) {
    s32 r = 0;
    s16 v = self->v;
    if (v == 9) goto yes;
    if (v == 10) goto yes;
    if (v == 11) goto yes;
    if (v == 4) goto yes;
    if (v != 5) goto done;
yes:
    r = 1;
done:
    return r;
}

s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x44c); }
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x60); }
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p) { TObjEneMe1GiGue__sub_802CB03C(p); return (char*)p + 0x3b4; }

}

#undef TObjEneMe1GiGue__sub_802CB03C

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_fe09eb { char pad[0x18]; };

struct VObj_18_fe09eb : VBase_18_fe09eb {
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
    virtual M2C_UNK m63(M2C_UNK, void *);
};

struct RecoveredGlobal_802CB03C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

typedef struct S_802CB10C { u8 pad0[0x3C0]; s32 f3C0; } S_802CB10C;

struct RecoveredGlobal_802CB03C_lbl_8058D490;
struct Vec_802CAD98 { f32 x, y, z; };

struct Vec_802CB170
{
  f32 x;
  f32 y;
  f32 z;
};

struct Tgt_802CB170
{
  u8 pad[0x30];
  u32 flags;
  u8 pad34[4];
  Vec_802CB170 pos;
};

struct Gi_802CB170
{
  u8 pad[0x38];
  Vec_802CB170 pos;
  u8 pad44[0x60 - 0x44];
  s32 angle;
  u8 pad64[0x3C0 - 0x64];
  s32 count;
  s16 list[12];
  u8 pad3dc[0x434 - 0x3DC];
  s32 fov;
  f32 range;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK project_actor_to_ground(void *, void *, M2C_UNK);
void TObjEneMe1GiGue__sub_802CACD8(u8 *arg0);
s32 TObjEneMe1GiGue__sub_802CDAC4(M2C_UNK, s32);
f32 TObjEneMe1GiGue__sub_802CDAD8(M2C_UNK, s32);
extern f32 lbl_805D6840;
extern f32 lbl_805D6844;
extern f32 lbl_805D6848;
extern f32 lbl_805D684C;
extern s32 lbl_805D6850;
extern s32 lbl_805D6854;
void TObjEneMe1GiGue__sub_802CAF24(s32 arg0);
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 push_matrix_from(u32);
s32 pop_matrix(void);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern RecoveredGlobal_802CB03C_lbl_8058D490 lbl_8058D490;
void TObjEneMe1GiGue__sub_802CB03C(u8 *arg0);
s32 get_player_data__10TObjPlayerFi(int);
extern s32 lbl_805D586C;
s32 TObjEneMe1GiGue__sub_802CB10C(S_802CB10C *arg0);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u8 *csnVector(void *, void *, s32);
f32 TObjPlayer__sub_8013153C(void *, s32);
void vec3_add_to(void *, void *);
void matrix_mult_vec(int, Vec_802CAD98 *, void *);
M2C_UNK rotate_matrix_y(int, int);
s32 push_matrix_from(u32);
s32 pop_matrix(void);
extern Vec_802CAD98 lbl_80472280;
extern Vec_802CAD98 lbl_8047228C;
extern const f64 TObjEneMe1GiGue__data_80472298;
extern RecoveredGlobal_802CB03C_lbl_8058D490 lbl_8058D490;
void TObjEneMe1GiGue__sub_802CAD98(u8 *arg0, Vec_802CAD98 *arg1);
s16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
void subtract_vector(Vec_802CB170 *, Vec_802CB170 *);
extern const f64 TObjEneMe1GiGue__data_80472298;
void TObjEneMe1GiGue__sub_802CB170(Gi_802CB170 *self, Tgt_802CB170 *t);
}

extern "C" {

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1);
int get_barrier_count__15TObjEneMe1GiGueFv(void);
void update_direction__15TObjEneMe1GiGueFPv(void *arg0);
s32 update_action_hold_status__10TObjPlayerFv();
s32 *csnVectorUnder(s32, s32, M2C_UNK, s32);
s32 get_field_0c__10TObjPlayerFPv(s32);
f32 get_pos_x__10TObjPlayerFPv(s32);

    extern u32 TObjEneMe1GiGue__data_805D6838;
int get_barrier_count__15TObjEneMe1GiGueFv(void) {  return TObjEneMe1GiGue__data_805D6838; }

s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = csnVectorUnder(arg1, arg0 + 0x120, 5, arg0);
    if (temp_r3 == NULL) {
        return 0;
    }
    return (u32)__cntlzw(*temp_r3 & 4) >> 5;
}

#pragma push
#pragma fp_contract on
void TObjEneMe1GiGue__sub_802CACD8(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (temp_r4 & 0x40000) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFBFFFF);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        project_actor_to_ground(arg0, arg0 + 0x38, 0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
    }
}
#pragma pop

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0) {
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        TObjEneMe1GiGue__sub_802CACD8((u8 *)(arg0));
        return 1;
    }
    return 0;
}

#pragma push
#pragma opt_common_subs off
void TObjEneMe1GiGue__sub_802CAD98(u8 *arg0, Vec_802CAD98 *arg1) {
    f32 best;
    s32 ang;
    s32 bestAng;
    s32 i;
    u8 *hit;
    f32 d;
    ang = (s32) (TObjEneMe1GiGue__data_80472298 * get_ad_end_text_start__10TObjPlayerFv(arg1->x, arg1->z));
    best = 0.0f;
    bestAng = ang;
    push_matrix_from((u32) &lbl_8058D490);
    Vec_802CAD98 v = lbl_80472280;
    rotate_matrix_y(0, ang);
    for (i = 0; i < 3; i++) {
        matrix_mult_vec(0, &v, arg0 + 0x390);
        vec3_add_to(arg0 + 0x390, arg0 + 0x2FC);
        hit = csnVector(arg0 + 0x2FC, arg0 + 0x390, -1);
        if (hit == NULL) {
            pop_matrix();
            return;
        }
        d = TObjPlayer__sub_8013153C(arg0 + 0x38, M2C_FIELD(hit, s32 *, 4)) - 20.0f;
        if (best < d) {
            best = d;
            bestAng = ang;
        }
        rotate_matrix_y(0, 0x5555);
        ang += 0x5555;
    }
    pop_matrix();
    push_matrix_from((u32) &lbl_8058D490);
    Vec_802CAD98 w = lbl_8047228C;
    w.x = best;
    rotate_matrix_y(0, bestAng);
    matrix_mult_vec(0, &w, arg0 + 0x390);
    vec3_add_to(arg0 + 0x390, arg0 + 0x2FC);
    pop_matrix();
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneMe1GiGue__sub_802CAF24(s32 arg0) {
    lbl_805D6840 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 1);
    lbl_805D6844 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 2);
    lbl_805D6848 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 3);
    lbl_805D684C = TObjEneMe1GiGue__sub_802CDAD8(arg0, 4);
    lbl_805D6850 = TObjEneMe1GiGue__sub_802CDAC4(arg0, 0);
    lbl_805D6854 = TObjEneMe1GiGue__sub_802CDAC4(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x44C) = (s32) (30.0f * (f32) TObjEneMe1GiGue__sub_802CDAC4(arg0, 3));
    M2C_FIELD(arg0, s32 *, 0x450) = TObjEneMe1GiGue__sub_802CDAC4(arg0, 4);
}
#pragma pop

void update_direction__15TObjEneMe1GiGueFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x438) = get_pos_x__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
    M2C_FIELD(arg0, s32 *, 0x434) = get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
}
typedef char RecoveredGlobal_802CB03C_lbl_8058D490_size[sizeof(RecoveredGlobal_802CB03C_lbl_8058D490) == 0x30 ? 1 : -1];
void TObjEneMe1GiGue__sub_802CB03C(u8 *arg0) {
    push_matrix_from((u32) &lbl_8058D490.value);
    translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x3EC) + (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E8))), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_global_flag__10TObjPlayerFv();
    render_anim_model__10TObjPlayerFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xC0));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    ((VObj_18_fe09eb *)(arg0))->m63(0, (u8 *)(arg0) + 0x3B4);
    ((VObj_18_fe09eb *)(arg0))->m63(0x2A, (u8 *)(arg0) + 0x39C);
    ((VObj_18_fe09eb *)(arg0))->m63(0x16, (u8 *)(arg0) + 0x3A8);
}
s32 TObjEneMe1GiGue__sub_802CB10C(S_802CB10C *arg0) {
    s32 i;
    arg0->f3C0 = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        s32 t = get_player_data__10TObjPlayerFi(i);
        TObjEneMe1GiGue__sub_802CB170((Gi_802CB170 *)(arg0), (Tgt_802CB170 *)(t));
    }
    return arg0->f3C0;
}
typedef struct Gi_802CB170 Gi_802CB170;
typedef struct Tgt_802CB170 Tgt_802CB170;
typedef struct Vec_802CB170 Vec_802CB170;
void TObjEneMe1GiGue__sub_802CB170(Gi_802CB170 *self, Tgt_802CB170 *t) {
  int new_var;
  if ((((self->count < 12) && (t != 0)) && (((void *) t) != ((void *) self))) && (!(t->flags & 0x06000800)))
  {
    Vec_802CB170 v = t->pos;
    subtract_vector(&v, &self->pos);
    if (!(((v.x * v.x) + (v.z * v.z)) > (self->range * self->range)))
    {
      new_var = (-((s32) (((const f64 *)&TObjEneMe1GiGue__data_80472298)[0] * get_ad_end_text_start__10TObjPlayerFv(v.z, v.x)))) + 0x4000;
      if (angle_difference_abs(new_var, self->angle) <= (self->fov / 2))
      {
        self->list[self->count++] = obj_getField1c(t);
      }
    }
  }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct { f32 x, y, z; } Vec_802CB378;
extern "C" {
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK calc_velocity_toward_destination(void *, void *, void *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, s32, s32))update_if_active__15TObjEneMe1GiGueFPv)
M2C_UNK TBoss3VoloptMonitor__sub_8004292C(void *);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(void *, void *, s32, s32);
#define check_vector_bit__15TObjEneMe1GiGueFii ((s32 (*)(void *, void *))check_vector_bit__15TObjEneMe1GiGueFii)
void TObjEneMe1GiGue__sub_802CB378(u8 *arg0);
}

extern "C" {

void init__15TObjEneMe1GiGueFPv(u8 *arg0);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TBoss3Volopt__sub_800D8E80(void *, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(void *, void *, s32, s32);

}

struct Base410 { char pad[0x14]; };
struct VObj410 : Base410 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual s32 m5(); virtual void m6();
};

extern "C" {

void init__15TObjEneMe1GiGueFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8E80(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3FC);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (((VObj410 *)(arg0 + 0x3FC))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0((void *)(arg0), (s32)(0x3A345)), arg0 + 0x38, 0, 0);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        return;
    }
}
void TObjEneMe1GiGue__sub_802CB378(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;
    u8 *temp_r3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x390), (void *) (arg0 + 0x50));
        ((void (*)(void *, Vec_802CB378, Vec_802CB378, f32))calc_velocity_toward_destination)(arg0, M2C_FIELD(arg0, Vec_802CB378 *, 0x38), M2C_FIELD(arg0, Vec_802CB378 *, 0x390), M2C_FIELD(arg0, f32 *, 0x3E4));
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        TBoss3VoloptMonitor__sub_8004292C((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) M2C_FIELD(arg0, f32 *, 0x43C);
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback((void *) (arg0));
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
        M2C_FIELD(arg0, f32 *, 0x3EC) += (-2.3f);
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x3EC);
        if (temp_f3 <= 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x3EC) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
            M2C_FIELD(arg0, f32 *, 0x30C) = 0.0f;
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) != 8) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0((void *)(arg0), (s32)(0x3A345)), arg0 + 0x38, 0, 0);
            }
        } else if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 7) {
            if (temp_f3 <= (2.3f * (40.0f + (1.0f / M2C_FIELD(arg0, f32 *, 0xCC))))) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 8;
            }
        } else {
            temp_r0_2 = (s32) M2C_FIELD(arg0, f32 *, 0xC0);
            if (((temp_r0_2 == 0x14) || (temp_r0_2 == 0x28)) && (check_vector_bit__15TObjEneMe1GiGueFii((void *) (arg0), (void *) (arg0 + 0x38)) != 0)) {
                spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
            }
        }
        play_persistent_sound(TObjEneMe1GiGue__sub_802CB5A0((void *)(arg0), (s32)(0x3A819)), arg0, arg0 + 0x38, 0, 0);
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        break;
    case -1:
        ((void (*)(void *, s32))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 1);
        break;
    }
    apply_actor_gravity((void *) (arg0), (int) (0), (f32) (0.0f));
}

}

#undef update_if_active__15TObjEneMe1GiGueFPv
#undef check_vector_bit__15TObjEneMe1GiGueFii

#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>

struct Vec_802CB8F0 { f32 x, y, z; };

struct Sub_802CB8F0 { u8 pad0[8]; s32 f8; };

struct Obj_802CB8F0 {
    u8 pad0[0x38];
    Vec_802CB8F0 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x29C - 0x64];
    Vec_802CB8F0 v29C;
    u8 pad2A8[0x350 - 0x2A8];
    Sub_802CB8F0 *f350;
    u8 pad354[0x390 - 0x354];
    Vec_802CB8F0 v390;
    u8 pad39C[0x3E4 - 0x39C];
    f32 f3E4;
};

struct VBase_802CB6D4 { char pad[0x18]; };

struct VObj_802CB6D4 : VBase_802CB6D4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual s32 m17(s32);
};

struct Obj_802CB8F0;
struct Vec_802CB8F0;

struct Vec_802CBA98 { f32 x, y, z; };

typedef s32 M2C_UNK;
struct Vec_802CCBAC { f32 x, y, z; };

struct Sub_802CCBAC { f32 f0; u8 pad4[4]; s32 f8; };

struct Tgt_802CCBAC { u8 pad0[0x38]; Vec_802CCBAC pos; u8 pad44[0x2FC - 0x44]; Vec_802CCBAC v2FC; };

struct Obj_802CCBAC {
    u8 pad0[0x30]; u32 f30; u8 pad34[4]; Vec_802CCBAC pos; u8 pad44[0x60 - 0x44];
    s32 f60; u8 pad64[0xB8 - 0x64]; s16 fB8; u8 padBA[0x29C - 0xBA];
    Vec_802CCBAC v29C; Tgt_802CCBAC *f2A8; u8 pad2AC[0x350 - 0x2AC];
    Sub_802CCBAC *f350; u8 pad354[0x37C - 0x354]; s32 f37C; u8 pad380[8]; u32 f388;
    u8 pad38C[0x3DC - 0x38C]; s32 f3DC; f32 f3E0; f32 f3E4; u8 pad3E8[0x3F8 - 0x3E8];
    s32 f3F8; u8 pad3FC[0x434 - 0x3FC]; s32 f434; f32 f438; u8 pad43C[0x448 - 0x43C]; s32 f448;
};

extern "C" {
void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 spawn_particle_effect(void *, int);
s32 create_breakup_mdl__12TBoss3VoloptFiiiii(int, int, int, void *, int);
s32 refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
#define play_sound_effect ((s32 (*)(void *, void *, int, int))play_sound_effect)
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)
extern void *TObjEneMe1GiGue__data_805D683C;
void TObjEneMe1GiGue__sub_802CB9E4(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 move_with_wall_slide(void *);
s32 enemy_set_heading_velocity(void *, f32, s32);
s32 enemy_turn_toward_dest(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 xz_distance_squared(void *, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void TObjEneMe1GiGue__sub_802CB8F0(Obj_802CB8F0 *o, Vec_802CB8F0 *c, f32 r);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 find_nearest_visible_player(void *, int, f32);
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
void init_move__15TObjEneMe1GiGueFPv(u8 *arg0);
void TObjEneMe1GiGue__sub_802CB6D4(u8 *arg0);
#define apply_actor_gravity ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)
#define TBoss3VoloptMonitor__sub_8004292C ((M2C_UNK (*)())TBoss3VoloptMonitor__sub_8004292C)
s32 spawn_particle_effect(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK create__9TTecJelinFiiii(void *, void *, void *, s32);
M2C_UNK create_instance__9TTecZaruaFiiii(void *, void *, void *, s32);
#define TObjEneMe1GiGue__sub_802CB03C ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB03C)
#define TObjEneMe1GiGue__sub_802CB10C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB10C)
#define TObjEneMe1GiGue__sub_802CDAC4 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CDAC4)
void TObjEneMe1GiGue__sub_802CC45C(u8 *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
void TObjEneMe1GiGue__sub_802CB8F0(Obj_802CB8F0 *o, Vec_802CB8F0 *c, f32 r);
void TObjEneMe1GiGue__sub_802CCF2C(u8 *arg0);
s32 move_with_wall_slide(void *);
s32 check_path_obstructed(void *, Vec_802CBA98 *);
s32 spawn_particle_effect(void *, int);
f32 xz_distance_squared(void *, void *);
M2C_UNK advance_animation_playback(void *);
s32 find_entity_by_id(u16);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
void TObjEneMe1GiGue__sub_802CBA98(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 move_with_wall_slide(void *);
s32 enemy_set_heading_velocity(void *, f32, s32);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK enemy_wander_home(void *, s32, f32, f32, f32);
#define subtract_vector ((void (*)(void *, void *))subtract_vector)
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 TObjEneMe1GiGue__data_80472298;
void TObjEneMe1GiGue__sub_802CCBAC(Obj_802CCBAC *o);
}

extern "C" {

void action__15TObjEneMe1GiGueFPv(void *arg0);
void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1);
void init_move__15TObjEneMe1GiGueFPv(u8 *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC4(void *, void *);
M2C_UNK enemy_wander_home(void *, s32, f32, f32, f32);
M2C_UNK refresh_collision_body_centers(void *);
u32 get_player_by_client_id(M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

#undef TObjEneMe1GiGue__sub_802CB5A0
s32 TObjEneMe1GiGue__sub_802CB5A0(void *obj, s32 id) {
    s32 st = get_global_state__14TOKeyMachine01Fv();
    if (id == 0x3A344) return st == 0x23 ? 0x40039E14 : id;
    if (id == 0x3A345) return st == 0x23 ? 0x40039415 : id;
    return ((s32 (*)(void *, s32))copy_target_state__14TObjEnePanarmsFPvPv)(obj, id);
}
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)

void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1) {
    if ((arg1 == get_player_by_client_id(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F4) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0x1E;
        set_shake_preset__11TCameraCtrlFi(1);
    }
}

void init_move__15TObjEneMe1GiGueFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
    update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0xE));
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
    refresh_collision_body_centers(arg0);
}

#pragma fp_contract on

void TObjEneMe1GiGue__sub_802CB6D4(u8 *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x326)) {
    case 0:
        if (((VObj_802CB6D4 *) arg0)->m17(0x1E) != 0) {
            if (find_nearest_visible_player(arg0, 0, *M2C_FIELD(arg0, f32 **, 0x350)) != 0xFFFF) {
                find_target_in_range__10TObjPlayerFPvf(arg0, *M2C_FIELD(arg0, f32 **, 0x350));
                if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
                    init_move__15TObjEneMe1GiGueFPv(arg0);
                } else {
                    update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
                }
            }
        }
        break;
    case 1:
        if (find_nearest_visible_player(arg0, 0, 50.0f) != 0xFFFF) {
            if (calc_boss4_scale__10TObjPlayerFi(arg0) <= M2C_FIELD(arg0, f32 *, 0x444)) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xD);
                M2C_FIELD(arg0, s32 *, 0x378) = 1;
            }
        } else if (find_nearest_visible_player(arg0, 0, 50.0f + *M2C_FIELD(arg0, f32 **, 0x350)) == 0xFFFF) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
        break;
    case 13:
        break;
    }
}

#define arg0 ((u8 *)arg0_)
void TObjEneMe1GiGue__sub_802CB824(void *arg0_, s32 arg1) {
    void *p;
    u8 *slot = arg0 + arg1 * 2;
    if (((void *(*)(u16))find_entity_by_id)(*(u16 *)(slot + 0x3C4)) != 0) {
        IV3_802CB824 v;
        v.x = 0;
        v.y = *(s32 *)(arg0 + 0x60) + ((arg1 & 1) ? -0x2000 : 0x2000);
        v.z = 0;
        p = __nw__7TObjectFUl((int)(0x10C));
        if (p != 0) {
            f32 lim = TObjEneMe1GiGue__sub_802CDAD8((M2C_UNK)((s32)arg0), (s32)(5));
            TObjPlayer__sub_802CDEB4(p, arg0 + 0x3A8, *(u16 *)(slot + 0x3C4), &v, arg1 * 3,
                                     calc_boss4_scale__10TObjPlayerFi((void *)(arg0)) <= lim, *(u16 *)(arg0 + 0x1C));
        }
    }
}
#undef arg0

void TObjEneMe1GiGue__sub_802CB8F0(Obj_802CB8F0 *o, Vec_802CB8F0 *c, f32 r) {
    if (xz_distance_squared(&o->pos, &o->v390) < 400.0f) {
        s32 k = (s32)(182.04445f * (360.0f * calc_boss4_scale__10TObjPlayerFi(o)));
        f32 d = 0.4f * (r * (1.0f + calc_boss4_scale__10TObjPlayerFi(o)));
        o->v390.x = d * cos_table_lookup(k) + c->x;
        o->v390.z = d * sin_table_lookup(k) + c->z;
    }
    VecCopy__FP3VecPC3Vec(&o->v29C, &o->v390);
    enemy_turn_toward_dest(o, o->f350->f8);
    enemy_set_heading_velocity(o, o->f3E4, o->f60);
    move_with_wall_slide(o);
}

void TObjEneMe1GiGue__sub_802CB9E4(u8 *arg0) {
    Vec position;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    position.y += 40.0f + M2C_FIELD(arg0, f32 *, 0x3EC);
    create_breakup_mdl__12TBoss3VoloptFiiiii((int) (TObjEneMe1GiGue__data_805D683C), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (&position.x), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    refresh_lobby_state__10TObjPlayerFPv((void *) (arg0));
    send_entity_set_flags__6TLobbyFPv((void *) (arg0));
    spawn_particle_effect((void *) (&position.x), (int) (0x205));
    spawn_particle_effect((void *) (&position.x), (int) (0x206));
    play_sound_effect((void *) (TObjEneMe1GiGue__sub_802CB5A0((void *)((void *) (arg0)), (s32)((int) (0x3AF1C)))), (void *) (&position.x), (int) (0), (int) (0));
    queue_destruction__7TObjectFv((void *) (arg0));
}

void TObjEneMe1GiGue__sub_802CBA98(u8 *arg0) {
    f32 sp10;
    s32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_r5;
    s16 temp_r4;
    s16 var_r3;
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r30;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        var_r3 = 4;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            var_r3 = 5;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = var_r3;
        spawn_particle_effect(arg0 + 0x2FC, 0xF2);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            Vec_802CBA98 v = M2C_FIELD(arg0, Vec_802CBA98 *, 0x2FC);
            v.x += M2C_FIELD(arg0, f32 *, 0x308);
            v.z += M2C_FIELD(arg0, f32 *, 0x310);
            if (check_path_obstructed(arg0, &v) == 0) {
                move_with_wall_slide(arg0);
            } else {
                M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = 0.0f;
            }
            M2C_FIELD(arg0, f32 *, 0x308) *= 0.5f;
            M2C_FIELD(arg0, f32 *, 0x310) *= 0.5f;
        }
        apply_actor_gravity(arg0, 0, 0.0f);
        update_collisions__10TObjPlayerFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case -1:
        var_r30 = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x378) = 1;
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x33E);
        if (((s32) (temp_r4 - M2C_FIELD(arg0, s16 *, 0x32C)) > (s32) (temp_r4 / 4)) && !(M2C_FIELD(arg0, s32 *, 0x30) & 2)) {
            temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x2D4));
            if (temp_r3 != 0) {
                var_r30 = 1;
                if ((M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) && (xz_distance_squared(arg0 + 0x38, (u8 *)temp_r3 + 0x38) > 400.0f)) {
                    var_r30 = 0;
                }
            }
        }
        if (var_r30 == 1) {
            M2C_FIELD(arg0, u16 *, 0x338) = (u16) M2C_FIELD(arg0, u16 *, 0x2D4);
            M2C_FIELD(arg0, s32 *, 0x374) = 9;
        } else if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0xD));
            M2C_FIELD(arg0, s32 *, 0x378) = (s32) M2C_FIELD(arg0, s32 *, 0x380);
        } else {
            update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0));
        }
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        break;
    }
}

}
#undef play_sound_effect
#undef TObjEneMe1GiGue__sub_802CB5A0
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef apply_actor_gravity
#undef TBoss3VoloptMonitor__sub_8004292C
#undef TObjEneMe1GiGue__sub_802CB03C
#undef TObjEneMe1GiGue__sub_802CB10C
#undef TObjEneMe1GiGue__sub_802CDAC4
#undef subtract_vector
#include "types.h"
typedef s32 M2C_UNK;

struct Vec_802CBCC0 { f32 x, y, z; };
struct Sub_802CBCC0 { f32 f0; u8 pad4[4]; s32 f8; };
struct A4_802CBCC0 { u8 pad0[0x44]; u32 f44; };

struct Obj_802CBCC0 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[4];
    Vec_802CBCC0 pos;
    Vec_802CBCC0 prev;
    Vec_802CBCC0 v50;
    u8 pad5C[0xA4 - 0x5C];
    A4_802CBCC0 *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0xCC - 0xC4];
    f32 fCC;
    u8 padD0[0x2A8 - 0xD0];
    u8 *f2A8;
    u8 pad2AC[0x308 - 0x2AC];
    Vec_802CBCC0 v308;
    u8 pad314[0x350 - 0x314];
    Sub_802CBCC0 *f350;
    u8 pad354[0x374 - 0x354];
    s32 f374;
    u8 pad378[4];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
    u8 pad38C[4];
    Vec_802CBCC0 dest;
    u8 pad39C[0x3E4 - 0x39C];
    f32 f3E4;
    u8 pad3E8[4];
    f32 f3EC;
    u8 pad3F0[0x3F8 - 0x3F0];
    s32 f3F8;
    u8 pad3FC[0x440 - 0x3FC];
    f32 f440;
    u8 pad444[0x454 - 0x444];
    s32 f454;
};

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi(void *);
#define apply_actor_gravity ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)
M2C_UNK enemy_wander_home(void *, s32, f32, f32, f32);
#define calc_velocity_toward_destination ((M2C_UNK (*)(void *, f32, Vec_802CBCC0, Vec_802CBCC0))calc_velocity_toward_destination)
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, s32, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)
#define TBoss3VoloptMonitor__sub_8004292C ((M2C_UNK (*)())TBoss3VoloptMonitor__sub_8004292C)
#define csnVector ((u32 (*)(void *, void *, s32))csnVector)
s32 spawn_particle_effect(void *, int);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
s32 TObjPlayer__sub_800DC478(void *, int, f32);
f32 xz_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK project_actor_to_ground(void *, void *, M2C_UNK);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
#define play_sound_effect ((s32 (*)(void *, void *, int, int))play_sound_effect)
#define check_vector_bit__15TObjEneMe1GiGueFii ((s32 (*)(void *, void *))check_vector_bit__15TObjEneMe1GiGueFii)
#define TObjEneMe1GiGue__sub_802CAD98 ((M2C_UNK (*)(void *, void *))TObjEneMe1GiGue__sub_802CAD98)
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)
f32 TObjEneMe1GiGue__sub_802CDAD8(M2C_UNK, s32);
void vec3_add_to(void *, void *);
#define subtract_vector ((void (*)(void *, void *))subtract_vector)

void TObjEneMe1GiGue__sub_802CBCC0(Obj_802CBCC0 *o) {
    switch (o->state) {
    case 0:
        o->f30 |= 0x800000;
        o->f30 &= ~0x1000000;
        o->fB8 = o->state = 1;
        o->f3EC = 0.0f;
        o->f454 = 0x3C;
        ((M2C_UNK (*)(void *))TBoss3VoloptMonitor__sub_8004292C)(o);
        break;
    case 1:
        o->f30 &= ~0x1000000;
        enemy_wander_home(o, o->f350->f8, o->f3E4, 100.0f, 50.0f);
        advance_animation_playback(o);
        apply_actor_gravity(o, 0, 0.0f);
        o->f454--;
        if (o->f454 <= 0) {
            o->state = 2;
            play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0((void *)(o), (s32)(0x3A818)), &o->pos, 0, 0);
            o->f30 |= 0x1000000;
            o->f30 &= ~0x800000;
            ((M2C_UNK (*)(void *, Sub_802CBCC0 *, f32))find_target_in_range__10TObjPlayerFPvf)(o, o->f350, o->f350->f0);
            if (o->f2A8 != NULL) {
                Vec_802CBCC0 d;
                VecCopy__FP3VecPC3Vec(&d, &o->pos);
                subtract_vector(&d, o->f2A8 + 0x38);
                TObjEneMe1GiGue__sub_802CAD98(o, &d);
                calc_velocity_toward_destination(o, o->f3E4, o->pos, o->dest);
            } else {
                VecCopy__FP3VecPC3Vec(&o->dest, &o->v50);
                calc_velocity_toward_destination(o, o->f3E4, o->pos, o->dest);
            }
        }
        check_object_collisions__10TObjPlayerFPv(o);
        check_enemy_body_collisions(o);
        update_enemy_collision_flags__10TObjPlayerFPv(o);
        break;
    case 2: {
        s32 ok;
        o->f30 &= ~0x800000;
        advance_animation_playback(o);
        calc_velocity_toward_destination(o, TObjEneMe1GiGue__sub_802CDAD8((M2C_UNK)o, 0), o->pos, o->dest);
        ok = 1;
        if (o->fB8 == 6 && o->fC0 < 22.0f) {
            ok = 0;
        }
        if (ok) {
            o->f3EC += 2.2f;
        }
        update_collisions__10TObjPlayerFPv(o);
        if (TObjPlayer__sub_800DC478(o, 1, 22.0f) != 0 && check_vector_bit__15TObjEneMe1GiGueFii(o, &o->pos) != 0) {
            spawn_particle_effect(&o->pos, 0xF0);
        }
        if (o->f3EC >= 50.0f) {
            o->state = 3;
        }
        play_persistent_sound(TObjEneMe1GiGue__sub_802CB5A0((void *)(o), (s32)(0x3A819)), o, &o->pos, 0, 0);
        break;
    }
    case 3:
        advance_animation_playback(o);
        calc_velocity_toward_destination(o, TObjEneMe1GiGue__sub_802CDAD8((M2C_UNK)o, 0), o->pos, o->dest);
        o->v308.y = 0.0f;
        VecCopy__FP3VecPC3Vec(&o->prev, &o->pos);
        vec3_add_to(&o->pos, &o->v308);
        if (csnVector(&o->prev, &o->pos, 0x88E0) != 0) {
            VecCopy__FP3VecPC3Vec(&o->pos, &o->prev);
            o->state = 4;
            o->v308.x = o->v308.z = 0.0f;
        } else {
            if (xz_distance_squared(&o->pos, &o->dest) <= (10.0f + o->f3E4) * (10.0f + o->f3E4)) {
                o->state = 4;
                o->v308.x = o->v308.z = 0.0f;
            }
        }
        if (objInBand__FP7GameObjf(o, 10.0f) != 0 && check_vector_bit__15TObjEneMe1GiGueFii(o, &o->pos) != 0) {
            spawn_particle_effect(&o->pos, 0xF0);
        }
        refresh_collision_body_centers(o);
        if (o->f3EC > 15.0f) {
            update_angle__10TObjPlayerFPviPv(o, o->f350->f8 * 2, &o->v308);
        }
        play_persistent_sound(TObjEneMe1GiGue__sub_802CB5A0((void *)(o), (s32)(0x3A819)), o, &o->pos, 0, 0);
        project_actor_to_ground(o, &o->pos, 0);
        break;
    case 4:
        o->f30 &= ~0x800000;
        o->fA4->f44 |= 1;
        advance_animation_playback(o);
        o->f3EC += (-2.3f);
        if (o->f3EC <= 0.0f) {
            o->f3EC = 0.0f;
            o->f30 |= 0x800000;
            o->f30 &= ~0x1000000;
            o->v308.y = 0.0f;
            if (o->fB8 != 8) {
                if (!(o->f388 & 0x80000) && calc_boss4_scale__10TObjPlayerFi(o) <= o->f440) {
                    update_if_active__15TObjEneMe1GiGueFPv(o, 0xC);
                } else {
                    update_if_active__15TObjEneMe1GiGueFPv(o, 0);
                }
            }
        } else if (o->fB8 == 7) {
            if (o->f3EC <= 2.3f * (40.0f + 1.0f / o->fCC)) {
                o->fB8 = 8;
            }
        } else {
            s32 t = (s32)o->fC0;
            if ((t == 0x14 || t == 0x28) && check_vector_bit__15TObjEneMe1GiGueFii(o, &o->pos) != 0) {
                spawn_particle_effect(&o->pos, 0xF0);
            }
        }
        play_persistent_sound(TObjEneMe1GiGue__sub_802CB5A0((void *)(o), (s32)(0x3A819)), o, &o->pos, 0, 0);
        check_object_collisions__10TObjPlayerFPv(o);
        check_enemy_body_collisions(o);
        update_enemy_collision_flags__10TObjPlayerFPv(o);
        apply_actor_gravity(o, 0, 0.0f);
        break;
    case -1:
        if (o->f374 != 4 && o->f374 != 5) {
            o->f3EC = 0.0f;
        }
        o->fA4->f44 &= ~1;
        o->f388 &= ~0x40000;
        o->f3F8 = 0;
        break;
    }
}

}

#undef calc_velocity_toward_destination
#undef csnVector
#undef TObjEneMe1GiGue__sub_802CAD98
#undef apply_actor_gravity
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef TBoss3VoloptMonitor__sub_8004292C
#undef play_sound_effect
#undef check_vector_bit__15TObjEneMe1GiGueFii
#undef TObjEneMe1GiGue__sub_802CB5A0
#undef subtract_vector
#define play_sound_effect ((s32 (*)(void *, void *, int, int))play_sound_effect)
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)
#define apply_actor_gravity ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)
#define TBoss3VoloptMonitor__sub_8004292C ((M2C_UNK (*)())TBoss3VoloptMonitor__sub_8004292C)
#define TObjEneMe1GiGue__sub_802CB03C ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB03C)
#define TObjEneMe1GiGue__sub_802CB10C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB10C)
#define TObjEneMe1GiGue__sub_802CDAC4 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CDAC4)
#define subtract_vector ((void (*)(void *, void *))subtract_vector)
extern "C" {
void action__15TObjEneMe1GiGueFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        TObjEneMe1GiGueBarrier__sub_80325CC4(arg0, arg0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x2D;
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, 0.0f);
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case 2:
        enemy_wander_home(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8), M2C_FIELD(arg0, f32 *, 0x3E4), 100.0f, 100.0f);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, 0.0f);
        update_collisions__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0));
        }
    case -1:
        return;
    }
}

void TObjEneMe1GiGue__sub_802CC45C(u8 *arg0) {
    s32 r;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        r = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            r = TObjEneMe1GiGue__sub_802CB10C(arg0);
        }
        if (r > 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        } else if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xD);
        } else {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x388) &= ~0x40000;
        break;
    case 1:
    case 2:
    case 3:
        switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
        case 1:
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= 5.0f) {
                TObjEneMe1GiGue__sub_802CB03C(arg0);
                spawn_particle_effect(arg0 + 0x3A8, 0x204);
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
            break;
        case 2:
            play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0((void *)(arg0), (s32)(0x3A344)), arg0 + 0x38, 0, 0);
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= 10.0f) {
                TObjEneMe1GiGue__sub_802CB03C(arg0);
                M2C_FIELD(arg0, s32 *, 0x37C) = 3;
                create_instance__9TTecZaruaFiiii(arg0, arg0 + 0x2FC, arg0 + 0x2FC, TObjEneMe1GiGue__sub_802CDAC4(arg0, 2));
                create__9TTecJelinFiiii(arg0, arg0 + 0x2FC, arg0 + 0x2FC, TObjEneMe1GiGue__sub_802CDAC4(arg0, 2));
            }
            break;
    }
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, 0.0f);
        update_collisions__10TObjPlayerFPv(arg0);
        if (M2C_FIELD(arg0, s16 *, 0xB8) != 3) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xD);
        }
        break;
    }
}

}
#undef play_sound_effect
#undef TObjEneMe1GiGue__sub_802CB5A0
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef apply_actor_gravity
#undef TBoss3VoloptMonitor__sub_8004292C
#undef TObjEneMe1GiGue__sub_802CB03C
#undef TObjEneMe1GiGue__sub_802CB10C
#undef TObjEneMe1GiGue__sub_802CDAC4
#undef subtract_vector
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi(void *);
#define apply_actor_gravity ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)
M2C_UNK enemy_wander_home(void *, s32, f32, f32, f32);
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)
#define TBoss3VoloptMonitor__sub_8004292C ((M2C_UNK (*)())TBoss3VoloptMonitor__sub_8004292C)
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
#define play_persistent_sound ((M2C_UNK (*)(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK))play_persistent_sound)
#define TObjEneMe1GiGue__sub_802CB03C ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB03C)
#define TObjEneMe1GiGue__sub_802CB10C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB10C)
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)

void TObjEneMe1GiGue__sub_802CC614(u8 *arg0) {
    s32 n;
    s32 r;

    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        r = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000)) {
            r = TObjEneMe1GiGue__sub_802CB10C(arg0);
        }
        if (r > 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
            M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x450);
            if (M2C_FIELD(arg0, s32 *, 0x384) <= 0x14) {
                M2C_FIELD(arg0, s32 *, 0x384) = 0x14;
            }
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        } else if (M2C_FIELD(arg0, s32 *, 0x30) & 0x01000000) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xD);
        } else if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) && calc_boss4_scale__10TObjPlayerFi(arg0) <= M2C_FIELD(arg0, f32 *, 0x440)) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
        } else {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x388) &= ~0x40000;
        break;
    case 1:
    case 2:
    case 3:
        switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
        case 1:
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= 5.0f) {
                TObjEneMe1GiGue__sub_802CB03C(arg0);
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
            break;
        case 2:
            play_persistent_sound(TObjEneMe1GiGue__sub_802CB5A0((void *)(arg0), (s32)(0x3A820)), arg0, arg0 + 0x38, 0, 0);
            if (M2C_FIELD(arg0, f32 *, 0xC0) >= 10.0f) {
                TObjEneMe1GiGue__sub_802CB03C(arg0);
                n = M2C_FIELD(arg0, s32 *, 0x3C0);
                TObjEneMe1GiGue__sub_802CB824((void *)(arg0), (s32)((s32)((f32)n * calc_boss4_scale__10TObjPlayerFi(arg0)) % n));
                M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            }
            break;
        }
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, 0.0f);
        update_collisions__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384)--;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x448)++;
            if (M2C_FIELD(arg0, s32 *, 0x448) >= 3) {
                M2C_FIELD(arg0, s32 *, 0x384) = 0x2D;
                M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                M2C_FIELD(arg0, s32 *, 0x37C) = 4;
            } else {
                M2C_FIELD(arg0, s32 *, 0x37C) = 0;
                M2C_FIELD(arg0, f32 *, 0xC0) = 0.0f;
            }
        }
        break;
    case 4:
        enemy_wander_home(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), M2C_FIELD(arg0, f32 *, 0x3E4), 100.0f, 100.0f);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, 0.0f);
        update_collisions__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384)--;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) && calc_boss4_scale__10TObjPlayerFi(arg0) <= M2C_FIELD(arg0, f32 *, 0x440)) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
            }
        }
        break;
    }
}

}

#undef play_persistent_sound
#undef TObjEneMe1GiGue__sub_802CB03C
#undef TObjEneMe1GiGue__sub_802CB10C
#undef apply_actor_gravity
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef TBoss3VoloptMonitor__sub_8004292C
#undef TObjEneMe1GiGue__sub_802CB5A0
#define play_sound_effect ((s32 (*)(void *, void *, int, int))play_sound_effect)
#undef play_sound_effect
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)
#undef TObjEneMe1GiGue__sub_802CB5A0
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)
#undef update_if_active__15TObjEneMe1GiGueFPv
#define apply_actor_gravity ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)
#undef apply_actor_gravity
#define TBoss3VoloptMonitor__sub_8004292C ((M2C_UNK (*)())TBoss3VoloptMonitor__sub_8004292C)
#undef TBoss3VoloptMonitor__sub_8004292C
#define TObjEneMe1GiGue__sub_802CB03C ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB03C)
#undef TObjEneMe1GiGue__sub_802CB03C
#define TObjEneMe1GiGue__sub_802CB10C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB10C)
#undef TObjEneMe1GiGue__sub_802CB10C
#define TObjEneMe1GiGue__sub_802CDAC4 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CDAC4)
#undef TObjEneMe1GiGue__sub_802CDAC4
#define subtract_vector ((void (*)(void *, void *))subtract_vector)
#undef subtract_vector
#include "types.h"
typedef s32 M2C_UNK;

struct Vec_802CC900 { f32 x, y, z; };

struct Obj_802CC900 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x38 - 0x34];
    Vec_802CC900 pos;
    u8 pad44[0xB8 - 0x44];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x29C - 0xC4];
    Vec_802CC900 v29C;
    u8 *f2A8;
    u8 pad2AC[0x378 - 0x2AC];
    s32 f378;
    s32 state;
    u8 pad380[0x384 - 0x380];
    s32 f384;
    u32 f388;
    u8 pad38C[0x39C - 0x38C];
    u8 f39C[0x440 - 0x39C];
    f32 f440;
    u8 pad444[0x450 - 0x444];
    s32 f450;
};

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi(void *);
#define apply_actor_gravity ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)
M2C_UNK enemy_turn_half_toward_dest(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)
#define TBoss3VoloptMonitor__sub_8004292C ((M2C_UNK (*)())TBoss3VoloptMonitor__sub_8004292C)
s32 spawn_particle_effect(void *, int);
M2C_UNK copy_vec3__11TBoss4Type2FPvPv(u32, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
#define play_persistent_sound ((M2C_UNK (*)(s32, void *, void *, int, int))play_persistent_sound)
#define play_sound_effect ((s32 (*)(void *, void *, int, int))play_sound_effect)
#define TObjEneMe1GiGue__sub_802CB03C ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB03C)
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)
M2C_UNK create__22TObjEneMe1GiGueMissileFiiiff(void *, void *, void *, f32, f32);
extern Vec_802CC900 lbl_80472274[];
extern s32 lbl_805D6850;

void TObjEneMe1GiGue__sub_802CC900(u8 *arg0) {
    Obj_802CC900 *o = (Obj_802CC900 *)arg0;
    u32 r;

    switch (o->state) {
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        o->f384 = o->f450;
        if (o->f384 <= 0x28) {
            o->f384 = 0x28;
        }
        if (!(o->f30 & 0x01000000)) {
            o->fB8 = 2;
            goto set1;
        }
        update_if_active__15TObjEneMe1GiGueFPv(o, 0xD);
        o->f388 &= ~0x40000;
        break;
    set1:
        o->state = 1;
        advance_animation_playback(o);
        o->f388 &= ~0x40000;
        break;
    case 1:
    case 2:
    case 3:
        if (o->f2A8 == NULL) {
            o->state = 4;
            break;
        }
        switch (o->state) {
        case 1:
            if (o->fC0 >= 5.0f) {
                TObjEneMe1GiGue__sub_802CB03C(o);
                o->state = 2;
            }
            break;
        case 2:
            play_persistent_sound(TObjEneMe1GiGue__sub_802CB5A0((void *)(o), (s32)(0x3A81D)), o, &o->pos, 0, 0);
            if (o->fC0 >= 20.0f) {
                TObjEneMe1GiGue__sub_802CB03C(o);
                if ((r = (u32)spawn_particle_effect(o->f39C, 0x203)) != 0) {
                    Vec_802CC900 v = lbl_80472274[0];
                    copy_vec3__11TBoss4Type2FPvPv(r, &v);
                }
                create__22TObjEneMe1GiGueMissileFiiiff(o, o->f39C, o->f2A8 + 0x2FC, lbl_805D6840, lbl_805D6850);
                play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0((void *)(o), (s32)(0x3A31E)), &o->pos, 0, 0);
                o->state = 3;
            }
            break;
        }
        VecCopy__FP3VecPC3Vec(&o->v29C, o->f2A8 + 0x2FC);
        enemy_turn_half_toward_dest(o);
        advance_animation_playback(o);
        if (!(o->f30 & 0x01000000)) {
            apply_actor_gravity(o, 0, 0.0f);
        }
        update_collisions__10TObjPlayerFPv(o);
        if (--o->f384 <= 0) {
            o->state = 4;
        }
        break;
    case 4:
        if (o->f30 & 0x01000000) {
            o->f378 = 0;
            update_if_active__15TObjEneMe1GiGueFPv(o, 0xD);
        } else if (!(o->f388 & 0x80000) && calc_boss4_scale__10TObjPlayerFi(o) <= o->f440) {
            update_if_active__15TObjEneMe1GiGueFPv(o, 0xC);
        } else {
            update_if_active__15TObjEneMe1GiGueFPv(o, 0);
        }
        break;
    case -1:
        break;
    }
}

}

#undef play_persistent_sound
#undef TObjEneMe1GiGue__sub_802CB03C
#undef play_sound_effect
#undef apply_actor_gravity
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef TBoss3VoloptMonitor__sub_8004292C
#undef TObjEneMe1GiGue__sub_802CB5A0
#define play_sound_effect ((s32 (*)(void *, void *, int, int))play_sound_effect)
#define TObjEneMe1GiGue__sub_802CB5A0 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CB5A0)
#define update_if_active__15TObjEneMe1GiGueFPv ((M2C_UNK (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)
#define apply_actor_gravity ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)
#define TBoss3VoloptMonitor__sub_8004292C ((M2C_UNK (*)())TBoss3VoloptMonitor__sub_8004292C)
#define TObjEneMe1GiGue__sub_802CB03C ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB03C)
#define TObjEneMe1GiGue__sub_802CB10C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB10C)
#define TObjEneMe1GiGue__sub_802CDAC4 ((s32 (*)(void *, int))TObjEneMe1GiGue__sub_802CDAC4)
#define subtract_vector ((void (*)(void *, void *))subtract_vector)
extern "C" {
void TObjEneMe1GiGue__sub_802CCBAC(Obj_802CCBAC *o) {
    o->f30 &= ~0x01000000;
    switch (o->f37C) {
    case 0:
        o->f388 &= ~0x00040000;
        TBoss3VoloptMonitor__sub_8004292C();
        o->fB8 = 1;
        o->f3DC = 0;
        if (o->f2A8 != NULL) {
            VecCopy__FP3VecPC3Vec(&o->v29C, &o->f2A8->v2FC);
        }
        o->f37C = 1;
    case 1:
        advance_animation_playback(o);
        apply_actor_gravity(o, 0, 0.0f);
        if (o->f2A8 != NULL) {
            Vec_802CCBAC d = o->f2A8->pos;
            subtract_vector(&d, &o->pos);
            if (d.x * d.x + d.z * d.z <= o->f438 * o->f438 &&
                angle_difference_abs(-(s32)(TObjEneMe1GiGue__data_80472298 * get_ad_end_text_start__10TObjPlayerFv(d.z, d.x)) + 0x4000, o->f60) < o->f434 / 2) {
                s32 st;
                o->f3F8++;
                if (o->f3F8 > 2) {
                    o->f3F8 = 0;
                    st = 0xD;
                } else {
                    o->f448 = 0;
                    st = 9;
                }
                update_if_active__15TObjEneMe1GiGueFPv(o, st);
                break;
            }
        }
        o->f60 += o->f350->f8 / 2;
        enemy_set_heading_velocity(o, o->f3E4, o->f60);
        move_with_wall_slide(o);
        o->f3DC += o->f350->f8 / 2;
        if (o->f3DC > 0x10000) {
            o->f3E0 = 0.0f;
            o->f37C = 2;
        }
        break;
    case -1:
        break;
    case 2:
        ((M2C_UNK (*)(f32, f32, f32, void *, s32))enemy_wander_home)(o->f3E4, 100.0f, 50.0f, o, o->f350->f8);
        advance_animation_playback(o);
        apply_actor_gravity(o, 0, 0.0f);
        o->f3E0 += o->f3E4;
        if (o->f3E0 > 100.0f) {
            if (find_target_in_range__10TObjPlayerFPvf(o, o->f350->f0) != 0) {
                o->f3DC = 0;
                o->f37C = 1;
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(o, 0);
            }
        }
        check_object_collisions__10TObjPlayerFPv(o);
        check_enemy_body_collisions(o);
        update_enemy_collision_flags__10TObjPlayerFPv(o);
        break;
    }
}

void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 5;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  if (temp_r0 != 0xC)
  {
    if (temp_r0 < 0xC)
    {
      if (temp_r0 < 0xA)
      {
        arg0++;
        arg0--;
        goto block_6;
      }
      goto block_5;
    }
    if (temp_r0 < 0xE)
    {
      block_5:
      *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFFDFF);
      return;
    }
    goto block_6;
  }
  block_6:
  set_state__15TObjEneMe1GiGueFPvi((void *)((void *) arg0), (s32)((int) 4));
  *((s32 *) (((s8 *) arg0) + 0x380)) = (s32) (*((s32 *) (((s8 *) arg0) + 0x378)));
  *((s32 *) (((s8 *) arg0) + 0x378)) = 4;
  *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x388))) | 0x10000) | 1);
}
void TObjEneMe1GiGue__sub_802CCF2C(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
        return;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x96;
        ((void (*)(u8 *)) TBoss3VoloptMonitor__sub_8004292C)(arg0);
    case 1:
        advance_animation_playback(arg0);
        TObjEneMe1GiGue__sub_802CB8F0((Obj_802CB8F0 *) arg0, (Vec_802CB8F0 *) (arg0 + 0x50), M2C_FIELD(arg0, f32 *, 0x358));
        M2C_FIELD(arg0, s32 *, 0x384) -= 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            M2C_FIELD(arg0, s32 *, 0x384) = 0x5A;
        }
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        apply_actor_gravity(arg0, 0, 0.0f);
        break;
    case 2:
        advance_animation_playback(arg0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) -= 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        break;
    }
}

}

#undef play_sound_effect
#undef TObjEneMe1GiGue__sub_802CB5A0
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef apply_actor_gravity
#undef TBoss3VoloptMonitor__sub_8004292C
#undef TObjEneMe1GiGue__sub_802CB03C
#undef TObjEneMe1GiGue__sub_802CB10C
#undef TObjEneMe1GiGue__sub_802CDAC4
#undef subtract_vector
extern "C" {
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
#define TObjEneMe1GiGue__sub_802CAF24 ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CAF24)
#define init__15TObjEneMe1GiGueFPv ((s32 (*)(void *))init__15TObjEneMe1GiGueFPv)
#define TObjEneMe1GiGue__sub_802CB378 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB378)
#define TObjEneMe1GiGue__sub_802CB6D4 ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB6D4)
#define TObjEneMe1GiGue__sub_802CB9E4 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB9E4)
#define TObjEneMe1GiGue__sub_802CBA98 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CBA98)
#define TObjEneMe1GiGue__sub_802CBCC0 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CBCC0)
#define action__15TObjEneMe1GiGueFPv ((s32 (*)(void *))action__15TObjEneMe1GiGueFPv)
#define TObjEneMe1GiGue__sub_802CC45C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CC45C)
#define TObjEneMe1GiGue__sub_802CC614 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CC614)
#define TObjEneMe1GiGue__sub_802CC900 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CC900)
#define TObjEneMe1GiGue__sub_802CCBAC ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CCBAC)
#define TObjEneMe1GiGue__sub_802CCF2C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CCF2C)
void TObjEneMe1GiGue__sub_802CD054(void);
void TObjEneMe1GiGue__sub_802CD2EC(u8 *arg0);
void update_movement__15TObjEneMe1GiGueFPv(u8 *arg0);
void * create__15TObjEneMe1GiGueFPv(void *arg0);
void delete_barrier__15TObjEneMe1GiGueFv(void);
u8 *TObjEneMe1GiGue__ct(u8 *, M2C_UNK, u8 *);
void TObjEneMe1GiGue__sub_802CDAE8();
M2C_UNK TObjEneMe1GiGue__sub_802CE4E8();
void TObjEneMe1GiGue__sub_802CE4EC();
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC0();
void init_global__22TObjEneMe1GiGueBarrierFv();

extern s32 TObjEneMe1GiGue__data_805D6834;
extern Spawn_802CD62C lbl_80472264;
extern s32 lbl_805D6828;
extern s32 lbl_805D682C;
extern s32 lbl_805D6830;
extern void *tl_04;

void TObjEneMe1GiGue__sub_802CD054(void) {  }
}
#undef TObjEneMe1GiGue__sub_802CAF24
#undef init__15TObjEneMe1GiGueFPv
#undef TObjEneMe1GiGue__sub_802CB378
#undef TObjEneMe1GiGue__sub_802CB6D4
#undef TObjEneMe1GiGue__sub_802CB9E4
#undef TObjEneMe1GiGue__sub_802CBA98
#undef TObjEneMe1GiGue__sub_802CBCC0
#undef action__15TObjEneMe1GiGueFPv
#undef TObjEneMe1GiGue__sub_802CC45C
#undef TObjEneMe1GiGue__sub_802CC614
#undef TObjEneMe1GiGue__sub_802CC900
#undef TObjEneMe1GiGue__sub_802CCBAC
#undef TObjEneMe1GiGue__sub_802CCF2C
#include "types.h"
typedef s32 M2C_UNK;

struct Vec_802CD058 { f32 x, y, z; };

struct SubBase_802CD058 { u8 pad[0x14]; };
struct Sub_802CD058 : SubBase_802CD058 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
    u8 pad18[4];
};

struct ObjBase_802CD058 { u8 pad[0x18]; };
struct Obj_802CD058 : ObjBase_802CD058 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
    u8 pad1c[0x24 - 0x1c];
    s32 f24;
    u8 pad28[0x30 - 0x28];
    u32 f30;
    s32 f34;
    Vec_802CD058 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x68 - 0x64];
    f32 f68;
    u8 pad6c[0x2fc - 0x6c];
    u8 f2fc[0x388 - 0x2fc];
    u32 f388;
    u8 pad38c[0x3e8 - 0x38c];
    f32 f3e8;
    f32 f3ec;
    u8 pad3f0[0x3fc - 0x3f0];
    Sub_802CD058 s3fc;
    Sub_802CD058 s418;
};

extern "C" {

void render_with_position_override__10TObjPlayerFPvPvi(void *, Vec_802CD058 *, s32);
s32 check_demo_mode__10TObjPlayerFv(void);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
void toggle_particle_effect__10TObjPlayerFv(void);
void restore_scene_lighting(void);
void select_actor_lighting(void *);
void render_world_model__10TObjPlayerFPv(void *);
void draw__16TObjEneRe7BeruraFPv(void *);
void end_effect_render__13TParticleCtrlFv(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
#define rotate_matrix_y ((void (*)(s32, s32))rotate_matrix_y)
#define translate_matrix ((void (*)(s32, f32, f32, f32))translate_matrix)
void push_matrix(void);
#define pop_matrix ((void (*)(void))pop_matrix)
void set_global_param__8TObjFishFi(s32);
void draw_chunk_object(s32);
#define set_global_flag__10TObjPlayerFv ((void (*)(void))set_global_flag__10TObjPlayerFv)
#define clear_global_state__10TObjPlayerFv ((void (*)(void))clear_global_state__10TObjPlayerFv)
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

#pragma fp_contract on
void TObjEneMe1GiGue__sub_802CD058(Obj_802CD058 *self) {
    s32 vis;
    s32 ok;

    if (self->f30 & 0x2000000) {
        return;
    }
    if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
        vis = self->m9(600.0f, 600.0f, 20.0f);
    } else {
        vis = self->m9(150.0f, 400.0f, 20.0f);
    }
    if (vis == 0) {
        return;
    }
    if (check_demo_mode__10TObjPlayerFv() != 1 && (self->f388 & 0x40000)) {
        return;
    }
    lbl_805D5660 = some_id_805c6f74;
    if (updateFromCamera__15RenderFadeStateFPCf(&self->s418, self->f2fc) != 0) {
        self->s418.m6();
        if (toggle_flag_9__10TObjPlayerFPv(self) != 0) {
            some_id_805c6f74 = lbl_805D5660;
            return;
        }
    }
    set_global_param__8TObjFishFi(self->f24);
    select_actor_lighting(self);
    toggle_particle_effect__10TObjPlayerFv();
    ok = 1;
    push_matrix();
    translate_matrix(0, self->pos.x, self->f3ec + (self->pos.y + self->f3e8), self->pos.z);
    rotate_matrix_y(0, self->f60);
    some_id_805c6f74 &= ~0x400;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        draw_chunk_object(self->f34);
    } else if (self->f388 & 4) {
        if (self->s3fc.m8() != 0) {
            self->s3fc.m6();
            if (vis == 1) {
                set_global_flag__10TObjPlayerFv();
                draw__16TObjEneRe7BeruraFPv(self);
                clear_global_state__10TObjPlayerFv();
            } else {
                set_global_flag__10TObjPlayerFv();
                render_world_model__10TObjPlayerFPv(self);
                clear_global_state__10TObjPlayerFv();
            }
            self->s3fc.m7();
        } else {
            ok = 0;
        }
    } else {
        if (vis == 1) {
            set_global_flag__10TObjPlayerFv();
            draw__16TObjEneRe7BeruraFPv(self);
            clear_global_state__10TObjPlayerFv();
        } else {
            set_global_flag__10TObjPlayerFv();
            render_world_model__10TObjPlayerFPv(self);
            clear_global_state__10TObjPlayerFv();
        }
    }
    pop_matrix();
    restore_scene_lighting();
    end_effect_render__13TParticleCtrlFv();
    if (!(self->f30 & 0x800) && ok != 0) {
        Vec_802CD058 v;
        v.x = v.y = v.z = (1.0f - 0.01f * self->f3ec) * (5.0f * self->f68);
        render_with_position_override__10TObjPlayerFPvPvi(self, &v, 0);
    }
    self->s418.m7();
    some_id_805c6f74 = lbl_805D5660;
}

}

#undef rotate_matrix_y
#undef translate_matrix
#undef pop_matrix
#undef set_global_flag__10TObjPlayerFv
#undef clear_global_state__10TObjPlayerFv
#define TObjEneMe1GiGue__sub_802CAF24 ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CAF24)
#define init__15TObjEneMe1GiGueFPv ((s32 (*)(void *))init__15TObjEneMe1GiGueFPv)
#define TObjEneMe1GiGue__sub_802CB378 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB378)
#define TObjEneMe1GiGue__sub_802CB6D4 ((M2C_UNK (*)(void *))TObjEneMe1GiGue__sub_802CB6D4)
#define TObjEneMe1GiGue__sub_802CB9E4 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CB9E4)
#define TObjEneMe1GiGue__sub_802CBA98 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CBA98)
#define TObjEneMe1GiGue__sub_802CBCC0 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CBCC0)
#define action__15TObjEneMe1GiGueFPv ((s32 (*)(void *))action__15TObjEneMe1GiGueFPv)
#define TObjEneMe1GiGue__sub_802CC45C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CC45C)
#define TObjEneMe1GiGue__sub_802CC614 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CC614)
#define TObjEneMe1GiGue__sub_802CC900 ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CC900)
#define TObjEneMe1GiGue__sub_802CCBAC ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CCBAC)
#define TObjEneMe1GiGue__sub_802CCF2C ((s32 (*)(void *))TObjEneMe1GiGue__sub_802CCF2C)
extern "C" {

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
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (15.0f + M2C_FIELD(arg0, f32 *, 0x3EC)));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (25.0f + M2C_FIELD(arg0, f32 *, 0x3EC));
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
    if (M2C_FIELD(arg0, f32 *, 0x3EC) > 5.0f) {
        temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 4);
    } else {
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 2);
    }
    update_obstruction_fade((void *) (arg0 + 0x418));
    if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x44)) > 2500.0f) {
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
        o2 = ((void *(*)(void *, void *, void *))TObjEneMe1GiGue__ct)(o2, o, arg0);
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
        getf_802CD62C(q), 15.0f);
    }
}
extern int fold_flush_0;
#pragma pop

}

#undef TObjEneMe1GiGue__sub_802CAF24
#undef init__15TObjEneMe1GiGueFPv
#undef TObjEneMe1GiGue__sub_802CB378
#undef TObjEneMe1GiGue__sub_802CB6D4
#undef TObjEneMe1GiGue__sub_802CB9E4
#undef TObjEneMe1GiGue__sub_802CBA98
#undef TObjEneMe1GiGue__sub_802CBCC0
#undef action__15TObjEneMe1GiGueFPv
#undef TObjEneMe1GiGue__sub_802CC45C
#undef TObjEneMe1GiGue__sub_802CC614
#undef TObjEneMe1GiGue__sub_802CC900
#undef TObjEneMe1GiGue__sub_802CCBAC
#undef TObjEneMe1GiGue__sub_802CCF2C

struct E_802CDAEC { s32 a; s32 b; s32 c; s32 d; };
struct G_802CDAEC { u8 pad[0x42c]; E_802CDAEC *e; };
struct O_802CDAEC { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };
struct G_802CDAC4 { u8 pad[0x18]; s32 v[1]; };

struct VBase_18_fe72f9 { char pad[0x18]; };
struct VObj_18_fe72f9 : VBase_18_fe72f9 {
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
    virtual M2C_UNK m79(void *);
    virtual M2C_UNK m80();
};

extern "C" {
void free_collision_body_parts(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
M2C_UNK obj_setFlags30(void *, int);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK set_flags_30__19TBoss3VoloptMonitorFPv(void *);
M2C_UNK TObjEnemyCustom__sub_800C7860(void *);
M2C_UNK TObjEnemyCustom__ct(void *, M2C_UNK);
M2C_UNK init_common__18TObjEneMe3SinowZoaFPv(void *);
M2C_UNK activate_and_dispatch__10TObjPlayerFPv(void *);
M2C_UNK init_and_activate__10TObjPlayerFPv(void *);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK initialize_enemy_photon_effect(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK bind_enemy_combat_stats(void *, s32, s32, s32);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
M2C_UNK init_collision_body_parts(void *, void *, int);
extern s32 lbl_805D3F18;
extern s32 lbl_805D6828;
extern s32 lbl_805D682C;
extern s32 lbl_805D6830;
extern s32 TObjEneMe1GiGue__data_805D6834;
void TObjEneMe1GiGue__sub_802CDAEC(O_802CDAEC *self, s32 i);

#define GIGUE_DATA_6838 ((G_802CDAEC *)TObjEneMe1GiGue__data_805D6838)

void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = lbl_804E135C;
        free_collision_body_parts(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x418, -1);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3FC, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneMe1GiGue__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    TObjEnemyCustom__ct(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804E135C;
    init_common__18TObjEneMe3SinowZoaFPv(arg0 + 0x3FC);
    init_and_activate__10TObjPlayerFPv(arg0 + 0x418);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3F18;
    ((VObj_18_fe72f9 *) arg0)->m79(arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x290, (void *) VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x38));
    M2C_FIELD(arg0, s32 *, 0xDC) = M2C_FIELD(GIGUE_DATA_6838, s32 *, 0x430);
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 0x11);
    M2C_FIELD(arg0, s32 *, 0x36C) = M2C_FIELD(arg2, s16 *, 0x3E);
    TObjEneMe1GiGue__sub_802CDAEC((O_802CDAEC *) arg0, M2C_FIELD(arg0, s32 *, 0x368));
    M2C_FIELD(arg0, void **, 0xD8) = lbl_804E1258;
    set_field_d8__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, void **, 0xD8));
    init_collision_body_parts(arg0, lbl_804E1304, 2);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), u32 *, 0x44) &= ~1;
    M2C_FIELD(arg0, void **, 0x350) = lbl_804E12E8;
    bind_enemy_combat_stats(arg0, lbl_805D6828, lbl_805D682C, lbl_805D6830);
    update_direction__15TObjEneMe1GiGueFPv(arg0);
    ((void (*)(void *))TObjEneMe1GiGue__sub_802CAF24)(arg0);
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x32E) = M2C_FIELD(arg0, s16 *, 0x2BA);
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    update_prev_position__10TObjPlayerFPv(arg0);
    initialize_enemy_photon_effect(arg0);
    M2C_FIELD(arg0, s16 *, 0x38C) = 0;
    M2C_FIELD(arg0, f32 *, 0x68) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x3E4) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x68);
    VecCopy__FP3VecPC3Vec(arg0 + 0x50, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x390, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x440) = 0.5f + M2C_FIELD(arg0, f32 *, 0x360);
    M2C_FIELD(arg0, f32 *, 0x444) = 0.5f + M2C_FIELD(arg0, f32 *, 0x364);
    M2C_FIELD(arg0, f32 *, 0x43C) = 150.0f + M2C_FIELD(arg0, f32 *, 0x35C);
    if (M2C_FIELD(arg0, f32 *, 0x43C) < 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x43C) = 0.0f;
    }
    if ((s32) M2C_FIELD(arg0, f32 *, 0x354) >= 1) {
        M2C_FIELD(arg0, s32 *, 0x388) |= 0x40000;
        if (M2C_FIELD(arg0, f32 *, 0x358) < 1.0f) {
            M2C_FIELD(arg0, f32 *, 0x358) = 50.0f;
        }
        set_flags_30__19TBoss3VoloptMonitorFPv(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
    set_param__12TObjEneLappyFPvi(arg0, 0x37);
    M2C_FIELD(arg0, f32 *, 0x3E8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x448) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
        init_move__15TObjEneMe1GiGueFPv(arg0);
    } else {
        TObjEnemyCustom__sub_800C7860(arg0);
    }
    project_actor_to_ground(arg0, arg0 + 0x38, 0);
    M2C_FIELD(arg0, f32 *, 0x3EC) = 0.0f;
    activate_and_dispatch__10TObjPlayerFPv(arg0 + 0x418);
    obj_setFlags30(arg0, 0x01000000);
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    ((VObj_18_fe72f9 *) arg0)->m80();
    return arg0;
}

void TObjEneMe1GiGue__sub_802CDAB4(void) {  }
void TObjEneMe1GiGue__sub_802CDAB8(void) {  }
void TObjEneMe1GiGue__sub_802CDABC(void) {  }
void TObjEneMe1GiGue__sub_802CDAC0(void) {  }

s32 TObjEneMe1GiGue__sub_802CDAC4(M2C_UNK self, s32 i) {
    return (*(G_802CDAC4 * *)&TObjEneMe1GiGue__data_805D6834)->v[i];
}

f32 TObjEneMe1GiGue__sub_802CDAD8(M2C_UNK arg0, s32 arg1) {
    return M2C_FIELD((TObjEneMe1GiGue__data_805D6834 + (arg1 * 4)), f32 *, 0);
}

void TObjEneMe1GiGue__sub_802CDAE8(void) {  }

void TObjEneMe1GiGue__sub_802CDAEC(O_802CDAEC *self, s32 i) {
    self->f34 = GIGUE_DATA_6838->e[i].c;
    self->f24 = GIGUE_DATA_6838->e[i].d;
}
#undef GIGUE_DATA_6838

}
