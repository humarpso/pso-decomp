#include "types.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/boss/TBoss3VoloptMonitor.h"
extern "C" void has_flag_0x800__13TUnk_804806E8Fv();
extern "C" void test_flag30_512__13TUnk_804806E8Fv();
extern "C" void test_flag_1000__13TUnk_804806E8Fv();
extern "C" void test_flag_256__13TUnk_804806E8Fv();
#include "pso/render/depth_buffer.h"
#include "pso/system/vector.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80042888_lbl_80483DD4 {
    s32 value;
    u8 remaining[0xDC];
};

struct RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor {
    s32 value;
    u8 remaining[0x14C];
};

struct E_80042944 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct G_80042944 { u8 pad[0x42c]; E_80042944 *entries; };

struct O_80042944 { u8 pad[0x34]; s32 f34; };

struct Fish_80042408 { s32 f0, f4; };

struct VBase_80041F6C { char pad[0x18]; };

struct VObj_80041F6C : VBase_80041F6C {
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

extern "C" {
u8 *TObjEnemyCustom__ct(u8 *arg0);
s32 init_collision_body_parts(void *, void *, int);
extern s32 lbl_805D2740;
u8 *TBoss3VoloptMonitor__ct(u8 *arg0, s32 arg1, s32 arg2);
extern G_80042944 *volopt_monitor_resource_ptr;
s32 dispatch_shared_handler_a__6TLobbyFl(s32);
s32 register_object__6TLobbyFl(s32);
s32 dispatch_shared_handler_b__6TLobbyFl(s32);
s32 register_boss__6TLobbyFl(s32);
Fish_80042408 *get_bml_model(s32, s32);
void TObjGyaranzoMissile__sub_80131488(void *);
extern u8 lbl_80436608[];
extern s32 volopt_monitor_model_indices[];
extern s32 lbl_804FEEC0[];
extern s32 boss3_volopt_resources;
extern s32 volopt_monitor_boss_stats_ptr_a;
extern s32 volopt_monitor_boss_stats_ptr_b;
extern s32 volopt_monitor_object_handle;
extern s32 volopt_monitor_node_array_handle;
extern u32 volopt_monitor_texture_list;
s32 obj_setFlags30(void *, s32);
s16 fn_80042960(bool);
s32 rand();
extern u8 TBoss3VoloptMonitor__init_param_block[];
extern s8 volopt_target_slot_used[];
extern const f32 lbl_805D8740;
extern const f32 lbl_805D8748;
extern const f32 lbl_805D874C;
extern const f32 lbl_805D8750;
void func_80141618__Fv(void);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void draw_ginja_object(void *child);
extern s32 volopt_monitor_texture_param[];
extern s32 vol_opt_active_hit_zone;
extern s32 model_render_flags;
extern const f32 lbl_805D8738;
extern const f32 lbl_805D873C;
void render__19TBoss3VoloptMonitorFv(TBoss3VoloptMonitor *arg0);
s32 obj_testFlags30__13TUnk_804AF8A0FUl(void *, int);
void TBoss3VoloptMonitor__sub_800420D8(void);
s32 submit_cursor_candidate(void *, int);
s32 minimap_render_dot(void *, int, int, int);
s32 scroll_ginja_mesh_uvs(int, int, int, int, int);
s32 PPCSync();
extern s32 boss3_volopt_monitor_last_tick;
extern s32 actor_frame_tick;
extern const f32 lbl_805D8744;
void run_task__19TBoss3VoloptMonitorFv(TBoss3VoloptMonitor *arg0);
extern void *__vt__19TBoss3VoloptMonitor[];
extern void *volopt_monitor_texture_list_desc[];
void *__dt__19TBoss3VoloptMonitorFv(void *arg0, s16 arg1);
s32 TBoss3VoloptHiraisin__sub_80041D0C();
s32 TBoss3VoloptHiraisin__sub_80041D3C();
void TLobby__sub_803DA16C(void*);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);
s32 fn_80041E88();
s32 update_state__20TBoss3VoloptHiraisinFv();

extern "C" void vfunc_65__15TObjEnemyCustomFll();
extern "C" void vfunc_6__13TUnk_804B9870FPsl();
extern "C" void vfunc_63__15TObjEnemyCustomFv();
extern "C" void vfunc_62__15TObjEnemyCustomFv();
extern "C" void vfunc_61__15TObjEnemyCustomFv();
extern "C" void vfunc_58__15TObjEnemyCustomFv();
extern "C" void vfunc_28__15TObjEnemyCustomFv();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__13TUnk_804806E8Fl();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void apply_slow_status__13TUnk_804806E8Fv();
extern "C" void update_shock_clock__13TUnk_804806E8Fv();
extern "C" void vfunc_43__13TUnk_804806E8Fv();
extern "C" void vfunc_18__13TUnk_804806E8FPUc();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_74__9TObjEnemyFl();
extern "C" void apply_hit_message_flags__9TObjEnemyFPv();
extern "C" void add_actor_exp__13TUnk_804806E8Fl();
extern "C" void apply_action_hold_status__13TUnk_804806E8Ff();
extern "C" void apply_anti_technique__13TUnk_804806E8Fl();
extern "C" void apply_attack_stat_status__13TUnk_804806E8FPv();
extern "C" void apply_confusion_status__13TUnk_804806E8Fv();
extern "C" void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
extern "C" void apply_movement_ailment__13TUnk_804806E8Fl();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void apply_paralysis__13TUnk_804806E8Fv();
extern "C" void apply_poison_status__13TUnk_804806E8Fv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_shock_status__13TUnk_804806E8Fv();
extern "C" void apply_switch_attack__13TUnk_804806E8Fv();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__15TObjEnemyCustomFv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void clear_all_status_effects__13TUnk_804806E8Fv();
extern "C" void clear_harmful_statuses__13TUnk_804806E8Fv();
extern "C" void cure_paralysis__13TUnk_804806E8Fv();
extern "C" void cure_poison_ailment__13TUnk_804806E8Fv();
extern "C" void enemy_spawn_jellen_effect__13TUnk_804806E8Fv();
extern "C" void enemy_spawn_zalure_effect__13TUnk_804806E8Fv();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index__13TUnk_804806E8Fv();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__13TUnk_804806E8Fl();
extern "C" void is_actor_cadence_frame__13TUnk_804806E8Fl();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_shadows__9TObjEnemyFv(u8 *arg0);
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__13TUnk_804806E8Fv();
extern "C" void roll_physical_accuracy__13TUnk_804806E8FPvlf();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi(s32 arg0);
extern "C" void try_start_action__13TUnk_804806E8Fll();
extern "C" void update_action_hold_status__13TUnk_804806E8Fv();
extern "C" s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
extern "C" void update_actor_ground_y__13TUnk_804806E8Fv();
extern "C" s32 update_attack_stat_status(u8 *arg0);
extern "C" s32 update_defense_stat_status(u8 *arg0);
extern "C" void update_flag30_timer__13TUnk_804806E8Fv();
extern "C" void vfunc_60__15TObjEnemyCustomFv();
extern "C" void vfunc_59__15TObjEnemyCustomFv();
extern "C" void update_movement_status__13TUnk_804806E8Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__13TUnk_804806E8Fv();
extern "C" u8 lbl_804363AC[];
extern "C" u8 lbl_804363C4[];
extern "C" u8 lbl_804363DC[];
extern "C" u8 lbl_804363F4[];
extern "C" u8 lbl_8043640C[];
extern "C" u8 lbl_80436424[];
extern "C" u8 lbl_8043643C[];
extern "C" u8 lbl_80436454[];
extern "C" u8 lbl_8043646C[];
extern "C" u8 lbl_80436484[];
extern "C" u8 lbl_8043649C[];
extern "C" u8 lbl_804364B4[];
extern "C" u8 lbl_804364CC[];
extern "C" u8 lbl_804364E4[];
extern "C" u8 lbl_804364FC[];
extern "C" u8 lbl_80436514[];
extern "C" u8 lbl_8043652C[];
extern "C" u8 lbl_80436544[];
extern "C" u8 lbl_8043655C[];
extern "C" u8 lbl_80436574[];
extern "C" u8 lbl_8043658C[];
extern "C" u8 lbl_804365A4[];
extern "C" u8 lbl_804365BC[];
extern "C" u8 lbl_804365D4[];
extern "C" u8 lbl_804365EC[];
s32 matrix_mult_vec(int, void *, void *);
void set_matrix_identity(u8 *arg0);
struct G44_800426EC { u8 pad[0x2C]; };
struct V12_800426EC { f32 x, y, z; };
struct Mon_800426EC;
extern V12_800426EC volopt_slot_positions[];
extern const f32 lbl_805D8754;
extern const f32 lbl_805D8758;
extern const f32 lbl_805D875C;
u8 TBoss3VoloptMonitor__init_param_block[0x1C] = {
    0x43, 0x16, 0x00, 0x00, 0x3f, 0x0e, 0x38, 0xe3, 0x00, 0x00, 0x04, 0x00, 0x00, 0x1e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
};
void *TBoss3VoloptMonitor__collision_body_part_table[44] = {
    (void *)0x0, (void *)0x422c0000, (void *)0x0, (void *)0x41a00000,
    (void *)0x0, (void *)0x0, (void *)0x8005, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41700000, (void *)0x0, (void *)0x41200000, (void *)0x0,
    (void *)0x0, (void *)0x8003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41700000,
    (void *)0x0, (void *)0x41700000, (void *)0x0, (void *)0x0,
    (void *)0x8003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41700000, (void *)0x0,
    (void *)0x41200000, (void *)0x0, (void *)0x0, (void *)0x8003,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
#define TBoss3VoloptMonitor__collision_body_part_table (*(RecoveredGlobal_80042888_lbl_80483DD4 *)TBoss3VoloptMonitor__collision_body_part_table)
void *lbl_80483E84[12] = {
    (void *)0x0, (void *)0x0, (void *)0xc2dc0000, (void *)0xc1d00000,
    (void *)0x0, (void *)0xc2dc0000, (void *)0x0, (void *)0x0,
    (void *)0xc2e60000, (void *)0x41d00000, (void *)0x0, (void *)0xc2dc0000,
};

void render__19TBoss3VoloptMonitorFv(TBoss3VoloptMonitor *arg0) {
    s32 v;
    s32 hit;
    if (!(arg0->actorFlags & 0x02000000) && ((VObj_80041F6C *)arg0)->m8(lbl_805D8738, lbl_805D873C) != 0) {
        if (arg0->actorFlags & 0x800) {
            arg0->sub_80042944((&volopt_monitor_model_indices[arg0->variant])[8]);
            v = 0x18;
        } else {
            hit = 0;
            if (vol_opt_active_hit_zone >= 0 && vol_opt_active_hit_zone / 4 == arg0->m_38c / 4) {
                hit = 1;
            }
            if (hit != 0) {
                arg0->sub_80042944((&volopt_monitor_model_indices[arg0->variant])[4]);
                v = arg0->m_38e + 0x10;
            } else {
                arg0->sub_80042944(((s32 (*)[4])volopt_monitor_model_indices)[0][arg0->variant]);
                v = arg0->m_38e;
                if (arg0->m_388 & 0x10000) {
                    v += 8;
                }
            }
        }
        volopt_monitor_texture_param[0] = *(s32 *)volopt_monitor_texture_list + v * 0xC;
        TObjFish::set_global_param((s32)volopt_monitor_texture_param);
        set_depth_buffer_settings_id(3);
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        rotate_matrix_y(0, arg0->rotation_y);
        draw_ginja_object((void *)(*(s32 *)((s8 *)arg0 + 0x34)));
        pop_matrix();
        func_80141618__Fv();
    }
}

void TBoss3VoloptMonitor__sub_800420D8(void) {  }
void TBoss3VoloptMonitor::update_state() {

    switch (this->mode) {
    case 0:
        update_state__20TBoss3VoloptHiraisinFv();
        return;
    case 1:
        TBoss3VoloptHiraisin__sub_80041D0C();
        return;
    case 4:
        fn_80041E88();
        return;
    case 5:
        TBoss3VoloptHiraisin__sub_80041D3C();
        return;
    }
}

void run_task__19TBoss3VoloptMonitorFv(TBoss3VoloptMonitor *arg0) {
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r3_4;
    s32 temp_r3_3;
    s32 i;
    s32 var_r30;
    s32 var_r4;
    s32 temp_r5;
    if (TObjPlayer::check_demo_mode() == 1) {
        ((void (*)(void *))TBoss3VoloptMonitor__sub_800420D8)(arg0);
        return;
    }
    if (((TBoss3VoloptMonitor *)(arg0))->has_flag_0x800() != 0) {
        ((TBoss3VoloptMonitor *)(arg0))->vfunc_63();
    } else if (((TBoss3VoloptMonitor *)(arg0))->test_flag30_512() != 0) {
        ((TBoss3VoloptMonitor *)(arg0))->vfunc_62();
    }
    if ((s16) arg0->mode != (s32) arg0->next_action) {
        if ((s32) arg0->state != -1) {
            arg0->state = -1;
            arg0->update_state();
        }
        arg0->mode = (s16) arg0->next_action;
        arg0->state = 0;
    }
    arg0->update_state();
    ((TObjEnemy *)arg0)->update_prev_position();
    if (obj_testFlags30__13TUnk_804AF8A0FUl(arg0, 0x800) == 0) {
        ((TBoss3VoloptHiraisin *)arg0)->copy_position();
        submit_cursor_candidate(arg0, -1);
        minimap_render_dot((u8 *)arg0 + 0x38, -0x5DB4, 1, 0);
    }
    if (!(arg0->actorFlags & 0x800)) {
        if ((arg0->m_390 -= 1) <= 0) {
            arg0->m_390 = 3;
            if ((arg0->m_38e += 1) >= 8) {
                arg0->m_38e = 0;
                temp_r3_3 = arg0->m_388;
                if (temp_r3_3 & 0x10000) {
                    arg0->m_388 = (s32) (temp_r3_3 & 0xFFFEFFFF);
                } else if ((lbl_805D8740 * (f32) rand()) <= lbl_805D8744) {
                    arg0->m_388 = (s32) (arg0->m_388 | 0x10000);
                }
            }
        }
    }
    if ((s32) boss3_volopt_monitor_last_tick != (s32) actor_frame_tick) {
        boss3_volopt_monitor_last_tick = actor_frame_tick;
        for (i = 0; i < 4; i++) {
            scroll_ginja_mesh_uvs(lbl_804FEEC0[i], 0, 0x20, 0, 1);
            PPCSync();
        }
    }
    var_r4 = 0;
    if ((s32) vol_opt_active_hit_zone >= 0) {
        temp_r3_4 = arg0->m_38c;
        temp_r5 = ((s32) vol_opt_active_hit_zone / 4) * 4;
        if ((temp_r3_4 >= temp_r5) && (temp_r3_4 < (temp_r5 + 4))) {
            var_r4 = 1;
        }
    }
    if (var_r4 != 0) {
        ((TObjEnemyCustom *)arg0)->sub_8004292C();
    } else {
        ((TObjEnemyCustom *)arg0)->set_flags_30();
    }
    ((TBoss3VoloptMonitor *)(arg0))->clear_all_status_effects();
}

void TBoss3VoloptMonitor::release() {
    if ((u32) volopt_monitor_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)volopt_monitor_texture_list);
        volopt_monitor_texture_list = 0U;
    }
}

extern void *tl_04;

void TBoss3VoloptMonitor::load_resources() {
    s32 i;
    (*(u8 * *)&volopt_monitor_texture_list) = (u8 *)volopt_monitor_texture_list_desc;
    (*(s32 *)&volopt_monitor_resource_ptr) = boss3_volopt_resources;
    TObjGyaranzoMissile__sub_80131488(volopt_monitor_texture_list_desc);
    TLobby::load_texture_pvm_file((const char *)lbl_80436608, (s32)((*(u8 * *)&volopt_monitor_texture_list)));
    for (i = 0; i < 4; i++) {
        lbl_804FEEC0[i] = get_bml_model((*(s32 *)&volopt_monitor_resource_ptr), volopt_monitor_model_indices[8 + i])->f4;
    }
    volopt_monitor_boss_stats_ptr_a = register_boss__6TLobbyFl(0x23);
    volopt_monitor_boss_stats_ptr_b = dispatch_shared_handler_b__6TLobbyFl(0x23);
    volopt_monitor_object_handle = register_object__6TLobbyFl(0x23);
    volopt_monitor_node_array_handle = dispatch_shared_handler_a__6TLobbyFl(0x23);
}

void *TBoss3VoloptMonitor::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x394);
    if (o != NULL) {
        o = TBoss3VoloptMonitor__ct((u8 *)o, (s32)tl_04, (s32)arg0);
    }
    return o;
}

void TBoss3VoloptMonitor::sub_80042510() {
    u8 *arg0 = (u8 *)this;
    this->movementParameters = TBoss3VoloptMonitor__init_param_block;
    *(s16 *)((s8 *)volopt_monitor_boss_stats_ptr_a + 6) = fn_80042960(this->m_38c % 4 != 0);
    ((TUnk_804806E8 *)arg0)->recalc_combat_stats((void *)volopt_monitor_boss_stats_ptr_a, (void *)volopt_monitor_boss_stats_ptr_b, (void *)volopt_monitor_object_handle, (f32)lbl_805D8748, (f32)lbl_805D8748);
    this->hp = this->hpmax;
    this->m_32e = this->m_2ba;
    this->referenceHp = this->hp;
    ((TObjEnemy *)arg0)->set_param(0x2E);
    ((TObjEnemy *)arg0)->update_prev_position();
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    this->m_38e = lbl_805D874C * (lbl_805D8740 * (f32)rand());
    this->m_390 = lbl_805D8750 * (lbl_805D8740 * (f32)rand());
    ((TUnk_804806E8 *)arg0)->add_flags_2e4(4);
    volopt_target_slot_used[this->m_38c] = 0;
    obj_setFlags30(arg0, 0x8000);
    this->clear_lobby_object_state();
}

void *__dt__19TBoss3VoloptMonitorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__19TBoss3VoloptMonitor;
        free_collision_body_parts(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 volopt_monitor_model_indices[12] = {
    0x2, 0x5, 0x8, 0xb,
    0x1, 0x4, 0x7, 0xa,
    0x3, 0x6, 0x9, 0xc,
};
s32 volopt_monitor_texture_param[2] = { 0x0, 0x2 };
void *lbl_80483EEC[75] = {
    (void *)&lbl_804363AC, (void *)0x0, (void *)0x0, (void *)&lbl_804363C4,
    (void *)0x0, (void *)0x0, (void *)&lbl_804363DC, (void *)0x0,
    (void *)0x0, (void *)&lbl_804363F4, (void *)0x0, (void *)0x0,
    (void *)&lbl_8043640C, (void *)0x0, (void *)0x0, (void *)&lbl_80436424,
    (void *)0x0, (void *)0x0, (void *)&lbl_8043643C, (void *)0x0,
    (void *)0x0, (void *)&lbl_80436454, (void *)0x0, (void *)0x0,
    (void *)&lbl_8043646C, (void *)0x0, (void *)0x0, (void *)&lbl_80436484,
    (void *)0x0, (void *)0x0, (void *)&lbl_8043649C, (void *)0x0,
    (void *)0x0, (void *)&lbl_804364B4, (void *)0x0, (void *)0x0,
    (void *)&lbl_804364CC, (void *)0x0, (void *)0x0, (void *)&lbl_804364E4,
    (void *)0x0, (void *)0x0, (void *)&lbl_804364FC, (void *)0x0,
    (void *)0x0, (void *)&lbl_80436514, (void *)0x0, (void *)0x0,
    (void *)&lbl_8043652C, (void *)0x0, (void *)0x0, (void *)&lbl_80436544,
    (void *)0x0, (void *)0x0, (void *)&lbl_8043655C, (void *)0x0,
    (void *)0x0, (void *)&lbl_80436574, (void *)0x0, (void *)0x0,
    (void *)&lbl_8043658C, (void *)0x0, (void *)0x0, (void *)&lbl_804365A4,
    (void *)0x0, (void *)0x0, (void *)&lbl_804365BC, (void *)0x0,
    (void *)0x0, (void *)&lbl_804365D4, (void *)0x0, (void *)0x0,
    (void *)&lbl_804365EC, (void *)0x0, (void *)0x0,

};
void *volopt_monitor_texture_list_desc[2] = { (void *)&lbl_80483EEC, (void *)0x19 };
void *__vt__19TBoss3VoloptMonitor[84] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__19TBoss3VoloptMonitorFv, (void *)&run_task__19TBoss3VoloptMonitorFv,
    (void *)&render__19TBoss3VoloptMonitorFv, (void *)&render_shadows__9TObjEnemyFv, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp__13TUnk_804806E8Fl, (void *)&consume_timer_field__13TUnk_804806E8Fl,
    (void *)&get_actor_level_index__13TUnk_804806E8Fv, (void *)&update_actor_ground_y__13TUnk_804806E8Fv, (void *)&vfunc_18__13TUnk_804806E8FPUc, (void *)&is_actor_cadence_frame__13TUnk_804806E8Fl,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker__13TUnk_804806E8FPUc, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__15TObjEnemyCustomFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__13TUnk_804806E8Fv,
    (void *)&test_flag30_512__13TUnk_804806E8Fv, (void *)&has_flag_0x800__13TUnk_804806E8Fv, (void *)&test_flag_1000__13TUnk_804806E8Fv, (void *)&update_poison_status__13TUnk_804806E8Fv,
    (void *)&update_action_hold_status__13TUnk_804806E8Fv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__13TUnk_804806E8Fv, (void *)&update_movement_status__13TUnk_804806E8Fv,
    (void *)&update_shock_clock__13TUnk_804806E8Fv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment__13TUnk_804806E8Fv, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)&apply_action_hold_status__13TUnk_804806E8Ff, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__15TObjEnemyCustomFv, (void *)&vfunc_59__15TObjEnemyCustomFv,
    (void *)&vfunc_60__15TObjEnemyCustomFv, (void *)&vfunc_61__15TObjEnemyCustomFv, (void *)&vfunc_62__15TObjEnemyCustomFv, (void *)&vfunc_63__15TObjEnemyCustomFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__15TObjEnemyCustomFll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__13TUnk_804806E8Fv, (void *)&enemy_spawn_jellen_effect__13TUnk_804806E8Fv, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect__13TUnk_804806E8Fv, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__15TObjEnemyCustomFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)0x0,
};
u8 *init_with_slot__19TBoss3VoloptMonitorFPvPviiii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 t;
    Mon_800426EC *m;

    TObjEnemyCustom__ct(arg0);
    *(void **)((s8 *)arg0 + 0x18) = (void *)__vt__19TBoss3VoloptMonitor;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D2740;
    ((TBoss3VoloptMonitor *)arg0)->m_1c = arg2;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg3;
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    *(s16 *)((s8 *)arg0 + 0x28) = *(s16 *)((s8 *)arg1 + 0x28);
    *(s16 *)((s8 *)arg0 + 0x2A) = *(s16 *)((s8 *)arg1 + 0x2A);
    ((TBoss3VoloptMonitor *)arg0)->m_38c = arg4;
    ((TBoss3VoloptMonitor *)arg0)->variant = arg4 & 3;
    ((TBoss3VoloptMonitor *)arg0)->timer = arg5;
    ((TBoss3VoloptMonitor *)arg0)->sub_80042510();
    t = (arg4 / 4) * 0x3C;
    ((TBoss3VoloptMonitor *)arg0)->rotation_y = (s32)(lbl_805D8754 * (f32)t);
    ((TBoss3VoloptMonitor *)arg0)->sub_80042944(volopt_monitor_model_indices[((TBoss3VoloptMonitor *)arg0)->variant]);
    push_matrix();
    set_matrix_identity(0);
    rotate_matrix_y(0, ((TBoss3VoloptMonitor *)arg0)->rotation_y);
    matrix_mult_vec(0, (u8 *)lbl_80483E84 + ((TBoss3VoloptMonitor *)arg0)->variant * 0xC, arg0 + 0x38);
    pop_matrix();
    VecCopy((Vec *)&volopt_slot_positions[((TBoss3VoloptMonitor *)arg0)->m_38c], (const Vec *)(arg0 + 0x38));
    {
        s16 k = ((TBoss3VoloptMonitor *)arg0)->m_38c;
        m = (Mon_800426EC *) arg0;
        volopt_slot_positions[k].y = (k & 3) == 0 ? lbl_805D8758 : lbl_805D875C;
        init_collision_body_parts(m, (G44_800426EC *) &TBoss3VoloptMonitor__collision_body_part_table + *(s32 *)((s8 *)m + 0x368), 1);
    }
    *(s32 *)((s8 *)(((TBoss3VoloptMonitor *)arg0)->m_a4) + 0x18) |= 0x500;
    return arg0;
}

typedef char RecoveredGlobal_80042888_lbl_80483DD4_size[sizeof(RecoveredGlobal_80042888_lbl_80483DD4) == 0xE0 ? 1 : -1];
typedef char RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor_size[sizeof(RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor) == 0x150 ? 1 : -1];
u8 *TBoss3VoloptMonitor__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TObjEnemyCustom__ct((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor *)&__vt__19TBoss3VoloptMonitor).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2740;
    ((TBoss3VoloptMonitor *)(arg0))->apply_set_data((void *)arg2);
    ((TBoss3VoloptMonitor *)arg0)->variant = 0;
    ((TBoss3VoloptMonitor *)arg0)->timer = 0;
    ((TBoss3VoloptMonitor *)arg0)->sub_80042510();
    init_collision_body_parts(arg0, &TBoss3VoloptMonitor__collision_body_part_table.value, 1);
    ((TBoss3VoloptMonitor *)arg0)->sub_80042944(1);
    return arg0;
}

void TObjEnemyCustom::set_flags_30() { this->actorFlags |= 0x4040000; }

void TObjEnemyCustom::sub_8004292C() {
    this->actorFlags = (s32) (this->actorFlags & 0xFBFBFFFF);
}
void TBoss3VoloptMonitor::sub_80042944(s32 i) {
    O_80042944 *self = (O_80042944 *)this;
    self->f34 = volopt_monitor_resource_ptr->entries[i].f8;
}

}
