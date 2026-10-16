#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/boss/TBoss3VoloptMonitor.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual s32 m79(s32);
};

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

struct VBase_80042510 { char pad[0x18]; };

struct VObj_80042510 : VBase_80042510 {
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
    virtual void m80();
};

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
s32 TObjEnemyCustom__ct(void *);
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
extern G_80042944 *volopt_monitor_resource_ptr;
extern u32 volopt_monitor_texture_list;
s32 obj_setFlags30(void *, s32);
s16 fn_80042960(bool);
s32 rand();
extern u8 TBoss3VoloptMonitor__init_param_block[];
extern s8 volopt_target_slot_used[];
extern s32 volopt_monitor_boss_stats_ptr_a;
extern s32 volopt_monitor_boss_stats_ptr_b;
extern s32 volopt_monitor_object_handle;
extern const f32 lbl_805D8740;
extern const f32 lbl_805D8748;
extern const f32 lbl_805D874C;
extern const f32 lbl_805D8750;
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 draw_ginja_object(s32);
extern s32 volopt_monitor_model_indices[];
extern s32 volopt_monitor_texture_param[];
extern s32 vol_opt_active_hit_zone;
extern u32 volopt_monitor_texture_list;
extern s32 model_render_flags;
extern const f32 lbl_805D8738;
extern const f32 lbl_805D873C;
void render__19TBoss3VoloptMonitorFv(void *arg0);
s32 obj_testFlags30(void *, int);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
void TBoss3VoloptMonitor__sub_800420D8(void);
s32 submit_cursor_candidate(void *, int);
s32 minimap_render_dot(void *, int, int, int);
s32 scroll_ginja_mesh_uvs(int, int, int, int, int);
s32 PPCSync();
s32 rand();
extern s32 lbl_804FEEC0[];
extern s32 vol_opt_active_hit_zone;
extern s32 lbl_805D4CA8;
extern s32 actor_frame_tick;
extern const f32 lbl_805D8740;
extern const f32 lbl_805D8744;
void run_task__19TBoss3VoloptMonitorFv(u8 *arg0);
}

extern "C" {

extern void *__vt__19TBoss3VoloptMonitor[];
extern void *volopt_monitor_texture_list_desc[];
void TBoss3VoloptMonitor__sub_800420D8(void);
void *__dt__19TBoss3VoloptMonitorFv(void *arg0, s16 arg1);
s32 TBoss3VoloptHiraisin__sub_80041D0C();
s32 TBoss3VoloptHiraisin__sub_80041D3C();
void TLobby__sub_803DA16C(void*);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 fn_80041E88();
s32 update_state__20TBoss3VoloptHiraisinFv();

extern "C" void vfunc_65__15TObjEnemyCustomFll();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void vfunc_63__15TObjEnemyCustomFv();
extern "C" void vfunc_62__15TObjEnemyCustomFv();
extern "C" void vfunc_61__15TObjEnemyCustomFv();
extern "C" void vfunc_58__15TObjEnemyCustomFv();
extern "C" void vfunc_28__15TObjEnemyCustomFv();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void apply_slow_status__13TUnk_804806E8Fv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void vfunc_43__13TUnk_804806E8Fv();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_74__9TObjEnemyFl();
extern "C" void apply_hit_message_flags__9TObjEnemyFPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__13TUnk_804806E8Fl();
extern "C" void apply_attack_stat_status__13TUnk_804806E8FPv();
extern "C" void apply_confusion_status__13TUnk_804806E8Fv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__13TUnk_804806E8Fl();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__13TUnk_804806E8Fv();
extern "C" void apply_poison_status__13TUnk_804806E8Fv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_shock_status__13TUnk_804806E8Fv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__15TObjEnemyCustomFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__13TUnk_804806E8Fv();
extern "C" void cure_paralysis__13TUnk_804806E8Fv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__13TUnk_804806E8Fl();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__13TUnk_804806E8Fv();
extern "C" void roll_physical_accuracy__13TUnk_804806E8FPvlf();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__13TUnk_804806E8Fll();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void vfunc_60__15TObjEnemyCustomFv();
extern "C" void vfunc_59__15TObjEnemyCustomFv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__10TObjPlayerFv();
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
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 set_matrix_identity(int);
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

void render__19TBoss3VoloptMonitorFv(void *arg0) {
    s32 v;
    s32 hit;
    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x02000000) && ((VObj_80041F6C *)arg0)->m8(lbl_805D8738, lbl_805D873C) != 0) {
        if (*(s32 *)((s8 *)arg0 + 0x30) & 0x800) {
            ((TBoss3VoloptMonitor *)arg0)->sub_80042944((&volopt_monitor_model_indices[*(s32 *)((s8 *)arg0 + 0x368)])[8]);
            v = 0x18;
        } else {
            hit = 0;
            if (vol_opt_active_hit_zone >= 0 && vol_opt_active_hit_zone / 4 == *(s16 *)((s8 *)arg0 + 0x38C) / 4) {
                hit = 1;
            }
            if (hit != 0) {
                ((TBoss3VoloptMonitor *)arg0)->sub_80042944((&volopt_monitor_model_indices[*(s32 *)((s8 *)arg0 + 0x368)])[4]);
                v = *(s16 *)((s8 *)arg0 + 0x38E) + 0x10;
            } else {
                ((TBoss3VoloptMonitor *)arg0)->sub_80042944(((s32 (*)[4])volopt_monitor_model_indices)[0][*(s32 *)((s8 *)arg0 + 0x368)]);
                v = *(s16 *)((s8 *)arg0 + 0x38E);
                if (*(s32 *)((s8 *)arg0 + 0x388) & 0x10000) {
                    v += 8;
                }
            }
        }
        volopt_monitor_texture_param[0] = *(s32 *)volopt_monitor_texture_list + v * 0xC;
        TObjFish::set_global_param((s32)volopt_monitor_texture_param);
        set_depth_buffer_settings_id__FUl(3);
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_object(*(s32 *)((s8 *)arg0 + 0x34));
        pop_matrix();
        func_80141618__Fv();
    }
}

void TBoss3VoloptMonitor__sub_800420D8(void) {  }
void TBoss3VoloptMonitor::update_state() {
    s16 temp_r0;

    temp_r0 = this->mode;
    switch (temp_r0) {
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

extern u32 volopt_monitor_texture_list;

void run_task__19TBoss3VoloptMonitorFv(u8 *arg0) {
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
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != (s32) *(s32 *)((s8 *)arg0 + 0x374)) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x37C) != -1) {
            *(s32 *)((s8 *)arg0 + 0x37C) = -1;
            ((TBoss3VoloptMonitor *)arg0)->update_state();
        }
        *(s16 *)((s8 *)arg0 + 0x326) = (s16) *(s32 *)((s8 *)arg0 + 0x374);
        *(s32 *)((s8 *)arg0 + 0x37C) = 0;
    }
    ((TBoss3VoloptMonitor *)arg0)->update_state();
    ((TObjEnemy *)arg0)->update_prev_position();
    if (obj_testFlags30((void *) (arg0), (int) (0x800)) == 0) {
        copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
        submit_cursor_candidate((void *) (arg0), (int) (-1));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x800)) {
        if ((*(s16 *)((s8 *)arg0 + 0x390) -= 1) <= 0) {
            *(s16 *)((s8 *)arg0 + 0x390) = 3;
            if ((*(s16 *)((s8 *)arg0 + 0x38E) += 1) >= 8) {
                *(s16 *)((s8 *)arg0 + 0x38E) = 0;
                temp_r3_3 = *(s32 *)((s8 *)arg0 + 0x388);
                if (temp_r3_3 & 0x10000) {
                    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (temp_r3_3 & 0xFFFEFFFF);
                } else if ((lbl_805D8740 * (f32) rand()) <= lbl_805D8744) {
                    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x10000);
                }
            }
        }
    }
    if ((s32) lbl_805D4CA8 != (s32) actor_frame_tick) {
        lbl_805D4CA8 = actor_frame_tick;
        for (i = 0; i < 4; i++) {
            scroll_ginja_mesh_uvs(lbl_804FEEC0[i], 0, 0x20, 0, 1);
            PPCSync();
        }
    }
    var_r4 = 0;
    if ((s32) vol_opt_active_hit_zone >= 0) {
        temp_r3_4 = *(s16 *)((s8 *)arg0 + 0x38C);
        temp_r5 = ((s32) vol_opt_active_hit_zone / 4) * 4;
        if ((temp_r3_4 >= temp_r5) && (temp_r3_4 < (s32) (temp_r5 + 4))) {
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
        o = TBoss3VoloptMonitor__ct((u8 *)(o), (s32)(tl_04), (s32)(arg0));
    }
    return o;
}

void TBoss3VoloptMonitor::sub_80042510() {
    u8 *arg0 = (u8 *)this;
    *(u8 * *)&this->movementParameters = TBoss3VoloptMonitor__init_param_block;
    *(s16 *)((s8 *)volopt_monitor_boss_stats_ptr_a + 6) = fn_80042960(this->m_38c % 4 != 0);
    ((TUnk_804806E8 *)arg0)->recalc_combat_stats((void *)volopt_monitor_boss_stats_ptr_a, (void *)volopt_monitor_boss_stats_ptr_b, (void *)volopt_monitor_object_handle, (f32)lbl_805D8748, (f32)lbl_805D8748);
    this->hp = this->hpmax;
    *(s16 *)&this->m_32e = this->m_2ba;
    this->referenceHp = this->hp;
    ((TObjEneLappy *)arg0)->set_param(0x2E);
    ((TObjEnemy *)arg0)->update_prev_position();
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    this->m_38e = lbl_805D874C * (lbl_805D8740 * (f32)rand());
    this->m_390 = lbl_805D8750 * (lbl_805D8740 * (f32)rand());
    ((TUnk_804806E8 *)arg0)->add_flags_2e4(4);
    volopt_target_slot_used[this->m_38c] = 0;
    obj_setFlags30(arg0, 0x8000);
    ((VObj_80042510 *)arg0)->m80();
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
    (void *)&render__19TBoss3VoloptMonitorFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__15TObjEnemyCustomFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__15TObjEnemyCustomFv, (void *)&vfunc_59__15TObjEnemyCustomFv,
    (void *)&vfunc_60__15TObjEnemyCustomFv, (void *)&vfunc_61__15TObjEnemyCustomFv, (void *)&vfunc_62__15TObjEnemyCustomFv, (void *)&vfunc_63__15TObjEnemyCustomFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__15TObjEnemyCustomFll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__15TObjEnemyCustomFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)0x0,
};
u8 *init_with_slot__19TBoss3VoloptMonitorFPvPviiii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 t;
    Mon_800426EC *m;

    TObjEnemyCustom__ct(arg0);
    *(void **)((s8 *)arg0 + 0x18) = (void *)__vt__19TBoss3VoloptMonitor;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D2740;
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg3;
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    *(s16 *)((s8 *)arg0 + 0x28) = *(s16 *)((s8 *)arg1 + 0x28);
    *(s16 *)((s8 *)arg0 + 0x2A) = *(s16 *)((s8 *)arg1 + 0x2A);
    *(s16 *)((s8 *)arg0 + 0x38C) = arg4;
    *(s32 *)((s8 *)arg0 + 0x368) = arg4 & 3;
    *(s16 *)((s8 *)arg0 + 0x33C) = arg5;
    ((TBoss3VoloptMonitor *)arg0)->sub_80042510();
    t = (arg4 / 4) * 0x3C;
    *(s32 *)((s8 *)arg0 + 0x60) = (s32)(lbl_805D8754 * (f32)t);
    ((TBoss3VoloptMonitor *)arg0)->sub_80042944(volopt_monitor_model_indices[*(s32 *)((s8 *)arg0 + 0x368)]);
    push_matrix();
    set_matrix_identity(0);
    rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
    matrix_mult_vec(0, (u8 *)lbl_80483E84 + *(s32 *)((s8 *)arg0 + 0x368) * 0xC, arg0 + 0x38);
    pop_matrix();
    VecCopy__FP3VecPC3Vec(&volopt_slot_positions[*(s16 *)((s8 *)arg0 + 0x38C)], arg0 + 0x38);
    {
        s16 k = *(s16 *)((s8 *)arg0 + 0x38C);
        m = (Mon_800426EC *) arg0;
        volopt_slot_positions[k].y = (k & 3) == 0 ? lbl_805D8758 : lbl_805D875C;
        init_collision_body_parts(m, (G44_800426EC *) &TBoss3VoloptMonitor__collision_body_part_table + *(s32 *)((s8 *)m + 0x368), 1);
    }
    *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0x18) |= 0x500;
    return arg0;
}

typedef char RecoveredGlobal_80042888_lbl_80483DD4_size[sizeof(RecoveredGlobal_80042888_lbl_80483DD4) == 0xE0 ? 1 : -1];
typedef char RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor_size[sizeof(RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor) == 0x150 ? 1 : -1];
u8 *TBoss3VoloptMonitor__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TObjEnemyCustom__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor *)&__vt__19TBoss3VoloptMonitor).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2740;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    *(s32 *)((s8 *)arg0 + 0x368) = 0;
    *(s16 *)((s8 *)arg0 + 0x33C) = 0;
    ((TBoss3VoloptMonitor *)arg0)->sub_80042510();
    init_collision_body_parts((void *) (arg0), (void *) (&TBoss3VoloptMonitor__collision_body_part_table.value), (int) (1));
    ((TBoss3VoloptMonitor *)arg0)->sub_80042944((s32)((int) (1)));
    return arg0;
}

void TObjEnemyCustom::set_flags_30() { this->actorFlags |= 0x4040000; }

void TObjEnemyCustom::sub_8004292C() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFBFBFFFF);
}
void TBoss3VoloptMonitor::sub_80042944(s32 i) {
    O_80042944 *self = (O_80042944 *)this;
    self->f34 = volopt_monitor_resource_ptr->entries[i].f8;
}

}
