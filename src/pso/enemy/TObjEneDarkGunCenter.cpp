#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK;
struct VBase_800A0B20 { u8 pad[0x18]; };

struct Gun_800A0B20 : VBase_800A0B20 {
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
    virtual s32 m17(s32);
    u8 pad1c[0x38 - 0x1c];
    f32 f38;
    u8 pad3c[0x40 - 0x3c];
    f32 f40;
    u8 pad44[0x2a8 - 0x44];
    u8 *target;
    u8 pad2ac[0x374 - 0x2ac];
    s32 state;
    s32 timer;
    s32 count;
    u8 pad380[0x384 - 0x380];
    u16 ids[16];
    s32 f3a4;
};

extern "C" {
u16 find_nearest_visible_player(void *, s32, f32);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv(void);
void TObjPlayer__sub_800A0654(void *);
s32 TObjPlayer__sub_800A06B4(void *);
void fn_800A0798(void *);
void hide_linked_enemies__20TObjEneDarkGunCenterFPv(void *);
void fn_800A0884(void *);
void TObjEneDarkGunner__ct(void *);
void TObjEneDarkGunCenter__sub_800A0B18(void);
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(s32);
void send_entity_set_flags__6TLobbyFPv(void *);
extern const f64 lbl_8043A488[];
extern const f32 lbl_805D9970;
extern const f32 lbl_805D9974;
void run_task__20TObjEneDarkGunCenterFv(Gun_800A0B20 *self);
}

extern "C" {

void TObjEneDarkGunCenter__sub_800A0B18(void);
void TObjEneDarkGunCenter__sub_800A0E7C(void);
void TObjEneDarkGunCenter__sub_800A0E80(void);
void *__dt__20TObjEneDarkGunCenterFv(void *arg0, s16 arg1);
void * create__20TObjEneDarkGunCenterFPv(void *arg0);
void render__20TObjEneDarkGunCenterFv(void);
void *TObjControl__ct(void *, void *);
void *TObjEneDarkGunCenter__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);

void TObjEneDarkGunCenter__sub_800A0B18(void) {  }
void render__20TObjEneDarkGunCenterFv(void) {  }

extern void *tl_04;

void TLobby__sub_801A1FD8();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80011010();
void consume_timer_field__10TObjPlayerFPvi();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014884();
void TObjPlayer__sub_80014888();
void TObjPlayer__sub_8001488C();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void apply_slow_status__10TObjPlayerFPv();
void update_shock_clock__10TObjPlayerFPv();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void TObjPlayer__sub_80019568();
void TObjPlayer__sub_800F65D0();
void apply_hit_message_flags__10TObjPlayerFPvPv();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFv();
void apply_knockback_from_attacker();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_set_data__9TObjEnemyFPvPv();
void apply_shock_status__10TObjPlayerFv();
void apply_switch_attack__10TObjPlayerFi();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void call_vt78__10TObjPlayerFPv();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void fn_800F5D80();
void get_actor_body_center();
void get_actor_level_index();
void get_enemy_name__14TObjEnePanarmsFPv();
void get_pos__10TObjPlayerFii();
void has_flag_0x800__10TObjPlayerFPv();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void receive_direct_attack__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void render_actor_shadows_default();
void reset_actor_action_state();
void reset_pose__10TObjPlayerFPv();
void roll_physical_accuracy__10TObjPlayerFv();
void select_melee_contact_body__10TObjPlayerFv();
void test_flag30_512__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void test_flag_256__10TObjPlayerFPv();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__10TObjPlayerFPvii();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility();
void update_poison_status__10TObjPlayerFv();

void *__vt__20TObjEneDarkGunCenter[83] = {
    0,
    0,
    (void *)__dt__20TObjEneDarkGunCenterFv,
    (void *)run_task__20TObjEneDarkGunCenterFv,
    (void *)render__20TObjEneDarkGunCenterFv,
    (void *)render_actor_shadows_default,
    (void *)TLobby__sub_801A1FD8,
    (void *)apply_object_set_data,
    (void *)reset_actor_action_state,
    (void *)get_actor_body_center,
    (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail,
    (void *)get_enemy_name__14TObjEnePanarmsFPv,
    (void *)TObjPlayer__sub_80019568,
    (void *)add_actor_exp,
    (void *)consume_timer_field__10TObjPlayerFPvi,
    (void *)get_actor_level_index,
    (void *)update_actor_ground_y,
    (void *)TObjPlayer__sub_80018E6C,
    (void *)is_actor_cadence_frame,
    (void *)select_melee_contact_body__10TObjPlayerFv,
    (void *)calc_distance_accuracy_penalty__10TObjPlayerFv,
    (void *)receive_physical_attack__10TObjPlayerFv,
    (void *)receive_direct_attack__10TObjPlayerFv,
    (void *)receive_weapon_special_attack__10TObjPlayerFv,
    (void *)apply_knockback_from_attacker,
    (void *)try_start_action__10TObjPlayerFPvii,
    (void *)roll_physical_accuracy__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80011010,
    (void *)TObjPlayer__sub_8000FF3C,
    (void *)is_target_in_attack_range__10TObjPlayerFv,
    (void *)test_flag_256__10TObjPlayerFPv,
    (void *)test_flag30_512__10TObjPlayerFPv,
    (void *)has_flag_0x800__10TObjPlayerFPv,
    (void *)test_flag_1000__10TObjPlayerFPv,
    (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv,
    (void *)update_action_timer__10TObjPlayerFPv,
    (void *)update_flag30_timer__10TObjPlayerFPv,
    (void *)update_movement_status__10TObjPlayerFv,
    (void *)update_shock_clock__10TObjPlayerFPv,
    (void *)update_attack_stat_status,
    (void *)update_defense_stat_status,
    (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv,
    (void *)apply_paralysis__10TObjPlayerFv,
    (void *)apply_slow_status__10TObjPlayerFPv,
    (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv,
    (void *)apply_shock_status__10TObjPlayerFv,
    (void *)clear_harmful_statuses__10TObjPlayerFv,
    (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)apply_defense_stat_status__10TObjPlayerFv,
    (void *)cure_poison_ailment,
    (void *)cure_paralysis__10TObjPlayerFv,
    (void *)clear_all_status_effects,
    (void *)apply_action_hold_status,
    (void *)apply_anti_technique__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80014898,
    (void *)TObjPlayer__sub_80014894,
    (void *)TObjPlayer__sub_80014890,
    (void *)TObjPlayer__sub_8001488C,
    (void *)TObjPlayer__sub_80014888,
    (void *)TObjPlayer__sub_80014884,
    (void *)reset_pose__10TObjPlayerFPv,
    (void *)TObjPlayer__sub_80014840,
    (void *)TObjPlayer__sub_80014838,
    (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)TObjPlayer__sub_80010A80,
    (void *)TObjPlayer__sub_800F65D0,
    (void *)fn_80010EC8,
    (void *)fn_80010EC4,
    (void *)fn_80010EC0,
    (void *)fn_80010EBC,
    (void *)call_vt78__10TObjPlayerFPv,
    (void *)apply_hit_message_flags__10TObjPlayerFPvPv,
    (void *)apply_set_data__9TObjEnemyFPvPv,
    (void *)fn_800F5D80,
};

void run_task__20TObjEneDarkGunCenterFv(Gun_800A0B20 *self) {
    s32 ang;
    s32 i;
    s32 off;
    s32 t;
    s32 id;
    u8 *e;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((void (*)(void *))TObjEneDarkGunCenter__sub_800A0B18)(self);
        return;
    }
    TObjEneDarkGunner__ct(self);
    switch (self->state) {
    case 0:
        if (self->m17(0x1e) != 0) {
            id = find_nearest_visible_player(self, 0, lbl_805D9970);
            if (id != 0xFFFF) {
                self->target = get_player_by_client_id(id);
                ang = (s32)(lbl_8043A488[0] * get_ad_end_text_start__10TObjPlayerFv(*(f32 *)(self->target + 0x40) - self->f40, *(f32 *)(self->target + 0x38) - self->f38)) + 0x4000;
                for (i = 0; i < self->count; i++) {
                    e = get_enemy_entity(self->ids[i]);
                    if (e != NULL) {
                        *(s32 *)(e + 0x60) = ang;
                    }
                    ang += 0x1555;
                }
                self->timer = 0x5a;
                self->state = 1;
            } else {
                TObjPlayer__sub_800A0654(self);
            }
        }
        break;
    case 1:
        self->timer--;
        if (self->timer <= 0) {
            hide_linked_enemies__20TObjEneDarkGunCenterFPv(self);
            self->timer = 0xd2;
            self->state = 2;
        }
        break;
    case 2:
        self->timer--;
        if (TObjPlayer__sub_800A06B4(self) != 0 || self->timer <= 0) {
            self->state = 3;
        }
        break;
    case 3:
        if (find_nearest_visible_player(self, 0, lbl_805D9970) != 0xFFFF) {
            hide_linked_enemies__20TObjEneDarkGunCenterFPv(self);
            fn_800A0884(self);
        } else {
            self->state = 0;
        }
        break;
    case 4:
        self->timer--;
        if (self->timer <= 0) {
            fn_800A0798(self);
        }
        break;
    case 5:
        self->timer--;
        if (self->timer <= 0) {
            self->state = 3;
        }
        break;
    case 6:
        self->timer--;
        if (self->timer <= 0) {
            self->state = 3;
        }
        break;
    }
    t = self->f3a4;
    if (t < 0) {
        if (self->count > 0) {
            self->f3a4 = 0x5a;
        } else {
            self->f3a4 = t - 1;
            if ((f32)(t - 1) <= lbl_805D9974) {
                self->f3a4 = 0x5a;
            }
        }
    } else {
        if (self->count > 0) {
            self->f3a4 = 0x5a;
        } else if ((self->f3a4 = t - 1) <= 0) {
            send_entity_set_flags__6TLobbyFPv(self);
            queue_destruction__7TObjectFv(self);
        }
    }
}

void * create__20TObjEneDarkGunCenterFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3A8);
    if (o2 != NULL) {
        o2 = TObjEneDarkGunCenter__ct(o2, o, arg0);
    }
    return o2;
}

void TObjEneDarkGunCenter__sub_800A0E7C(void) {  }
void TObjEneDarkGunCenter__sub_800A0E80(void) {  }

extern void *__vt__20TObjEneDarkGunCenter[];

void *__dt__20TObjEneDarkGunCenterFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__20TObjEneDarkGunCenter;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
